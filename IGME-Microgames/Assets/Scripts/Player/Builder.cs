using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using UnityEngine.Tilemaps;
using UnityEngine.EventSystems;



public delegate void FinishPlacementDelegate(int index);

public enum InteractionMode
{
    Move, //the players input will move them around the agency.
    Floor, //the player is placing floor tiles.
    Wall, //the player is placing wall tiles.
    Furniture //the player is placing/moving furniture. 
}

public class Builder : InputHandler
{
    // gameobject that workstations should be children of in order to be added to the playlist
    public GameObject agencyParent;

    
    public GameObject player;


    private InteractionMode interactionMode;
    public TMP_Text interactionModeButtonText; //text that will be updated when the interaction mode is switched

    public Tilemap floor;
    public Tilemap wall;
    public Tilemap furniture;

    public TileBase floorTemplate;
    public TileBase wallTemplate;
    public TileBase furnitureTemplate;
    public GameObject furniturePrefab;

    private GameObject placingWorkstation;
    private bool fingerDragging = false;
    private bool moving = false;
    private int placingShopIndex;
    private FinishPlacementDelegate finalize;

    private PlacedWorkstation openTapUI;


    void Update()
    {
        if (placingWorkstation != null && fingerDragging && interactionMode == InteractionMode.Furniture)
        {
            //converting to cell and back to snap to grid

            Vector3Int currentCellPos = floor.WorldToCell(placingWorkstation.transform.position);
            Vector3Int newCellPos = floor.WorldToCell(TouchScreenToWorld());
            if(currentCellPos != newCellPos)
            {
                moving = true;

                placingWorkstation.transform.position = floor.GetCellCenterWorld(newCellPos);

                UpdateWorkstationColor(newCellPos);
            }
        }
    }

    /// <summary>
    /// start of press
    /// </summary>
    /// <param name="context"></param>
    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        if (isTouchingUI()) return;
        PlacedWorkstation tappedWorkstation = OverlappingTapUI();
        if(tappedWorkstation != null && !tappedWorkstation.minigameData.isOutline)
        {
            if(tappedWorkstation.ToggleTapUI())
            {
                if(openTapUI != null && openTapUI != tappedWorkstation)
                {
                    openTapUI.SetTapUI(false);
                }
                openTapUI = tappedWorkstation;
            }
            return;
        }
        moving = false;
        fingerDragging = true;
        if(interactionMode != InteractionMode.Furniture)
        {
            SetTileAtWorldPos(TouchScreenToWorld());
        }
    }

    /// <summary>
    /// end of press
    /// </summary>
    /// <param name="context"></param>
    protected override void TouchCancelled(InputAction.CallbackContext context)
    {
        fingerDragging = false;
        if(!moving && interactionMode == InteractionMode.Furniture)
        {
            FinalizePlace();
        }
        //if furniture
        //stop update follow
        //if followduration is low && position is same tile
        //finalizeplacement
        //set mode to move
    }

    /// <summary>
    /// Updates the tile at a specific world position. 
    /// </summary>
    /// <param name="worldPos">world position of the tile to be updated</param>
    private bool SetTileAtWorldPos(Vector3 worldPos)
    {
        //get the tile at the location in each tilemap
        Vector3Int tilePos = floor.WorldToCell(worldPos);
        TileBase floorTile = floor.GetTile(tilePos);
        TileBase wallTile = wall.GetTile(tilePos);
        TileBase furnitureTile = furniture.GetTile(tilePos);

        switch (interactionMode)
        {
            case InteractionMode.Move:

                return false;
            case InteractionMode.Floor:
                if (wallTile != null && furnitureTile == null)
                { //replace wall with floor
                    wall.SetTile(tilePos, null);
                    floor.SetTile(tilePos, Instantiate(floorTemplate));
                    return true;
                }
                return false;
            case InteractionMode.Wall:
                if (floorTile != null && furnitureTile == null)
                { //replace floor with wall
                    wall.SetTile(tilePos, Instantiate(wallTemplate));
                    floor.SetTile(tilePos, null);
                    return true;
                }
                return false;
            case InteractionMode.Furniture:
                if(furnitureTile == null && floorTile != null)
                { //only works if theres a floor tile and no furniture
                    furniture.SetTile(tilePos, Instantiate(furnitureTemplate));
                    return true;
                }
                return false;
        }
        return false;
    }

    /// <summary>
    /// switches to the next interaction mode. 
    /// </summary>
    public void SwitchInteractionMode()
    {
        if(interactionMode == InteractionMode.Furniture)
        {
            CancelPlace();
            return; //cancel place switches the mode
        }
        SwitchInteractionMode((InteractionMode)((((int)interactionMode) + 1) % 3));
    }

    /// <summary>
    /// Switches the interaction mode, and updates the movement component and button text. 
    /// </summary>
    /// <param name="newInteractionMode">Interaction mode to switch to</param>
    public void SwitchInteractionMode(InteractionMode newInteractionMode)
    {

        interactionMode = newInteractionMode;
        if (interactionMode == InteractionMode.Move)
        {
            Movement move = gameObject.GetComponent<Movement>();

            if (move != null)
            {
                move.enabled = true;
            }
        }
        else
        {
            //the player shouldn't be able to move while editing their agency (controls overlap)
            Movement move = gameObject.GetComponent<Movement>();

            if (move != null)
            {
                move.enabled = false;
            }
        }
        interactionModeButtonText.text = interactionMode.ToString();
    }


    public void CancelPlace()
    {
        
        if(interactionMode == InteractionMode.Furniture && placingWorkstation != null)
        {
            //destroy outline
            Destroy(placingWorkstation);

            SwitchInteractionMode(InteractionMode.Move);
        }
    }

    /// <summary>
    /// Tries to place the workstation where the outline is. 
    /// </summary>
    public void FinalizePlace()
    {
        //try to set the tile, if it fails do nothing
        if(!SetTileAtWorldPos(placingWorkstation.gameObject.transform.position))
        {
            return;
        }


        //shop card-> placed
        finalize(placingShopIndex);

        placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.isOutline = false;
        placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.inPlaylist = true;


        UpdateWorkstationColor(floor.WorldToCell(placingWorkstation.gameObject.transform.position));

        placingWorkstation.transform.Find("Sprite").GetComponent<Collider2D>().enabled = true;
        SwitchInteractionMode(InteractionMode.Move);
        placingWorkstation = null;
    }

    /// <summary>
    /// Changes the interaction mode to be placing a workstation.
    /// </summary>
    /// <param name="workstation">Workstation to be placed</param>
    /// <param name="finalize">Method to be called when the workstation is finalized</param>
    /// <param name="index">Index of this workstation in the shop</param>
    public void StartPlacing(GameObject workstation, FinishPlacementDelegate finalize, int index)
    {
        //move the workstation to the cell one to the right of the player
        workstation.transform.position = floor.GetCellCenterWorld(floor.WorldToCell(player.transform.position + Vector3.right));

        placingWorkstation = workstation;
        SwitchInteractionMode(InteractionMode.Furniture);
        this.finalize = finalize;
        placingShopIndex = index;

        UpdateWorkstationColor(floor.WorldToCell(workstation.transform.position));
    }

    /// <summary>
    /// Returns a workstation that is under the user's touch. 
    /// </summary>
    /// <returns>A workstation the user is touching</returns>
    public PlacedWorkstation OverlappingTapUI()
    {
        Collider2D[] overlappingColliders = Physics2D.OverlapPointAll(TouchScreenToWorld());

        foreach(Collider2D collider in overlappingColliders)
        {
            PlacedWorkstation workstation = collider.gameObject.GetComponentInParent<PlacedWorkstation>();
            if (workstation != null)
            {
                return workstation;
            }
        }
        return null;
    }

    public void DestroyFurnitureTile(Vector3 worldPos)
    {
        furniture.SetTile(furniture.WorldToCell(worldPos), null);
    }

    public void UpdateWorkstationColor(Vector3Int location)
    {
        Color newColor = Color.red;
        if (!placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.isOutline)
            newColor = Color.white;
        else if (furniture.GetTile(location) == null && floor.GetTile(location))
            newColor = Color.green;

        placingWorkstation.transform.Find("Sprite").GetComponent<SpriteRenderer>().color = newColor;
    }
}
