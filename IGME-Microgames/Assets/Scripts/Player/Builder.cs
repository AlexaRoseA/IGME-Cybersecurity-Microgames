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

public class Builder : MonoBehaviour
{
    // gameobject that workstations should be children of in order to be added to the playlist
    public GameObject agencyParent;

    private InteractionMode interactionMode;
    public TMP_Text interactionModeButtonText; //text that will be updated when the interaction mode is switched

    private PlayerInput playerInput;
    private InputAction touchMovementAction;
    private InputAction touchPressAction;

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

    private void Awake()
    {
        playerInput = GetComponent<PlayerInput>();
        touchPressAction = playerInput.actions.FindAction("TouchPress");
        touchMovementAction = playerInput.actions.FindAction("TouchMovement");
    }

    private void OnEnable()
    {
        touchPressAction.performed += TouchPressed;
        touchPressAction.canceled += TouchCancelled;
    }

    private void OnDisable()
    {
        touchPressAction.performed -= TouchPressed;
        touchPressAction.canceled -= TouchCancelled;
    }

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

                placingWorkstation.transform.position = floor.CellToWorld(newCellPos);
            }
        }
    }

    /// <summary>
    /// start of press
    /// </summary>
    /// <param name="context"></param>
    private void TouchPressed(InputAction.CallbackContext context)
    {
        OverlappingWorkstation();
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
    private void TouchCancelled(InputAction.CallbackContext context)
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

    private Vector3 TouchScreenToWorld()
    {
        Vector3 screenPos = touchMovementAction.ReadValue<Vector2>();
        Vector3 worldpos = Camera.main.ScreenToWorldPoint(screenPos);
        return worldpos;
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
                if (floorTile == null)
                { //replace wall with floor
                    wall.SetTile(tilePos, null);
                    floor.SetTile(tilePos, Instantiate(floorTemplate));
                    return true;
                }
                return false;
            case InteractionMode.Wall:
                if (wallTile == null && furnitureTile == null)
                { //replace floor with wall
                    wall.SetTile(tilePos, Instantiate(wallTemplate));
                    floor.SetTile(tilePos, null);
                    return true;
                }
                return false;
            case InteractionMode.Furniture:
                if(furnitureTile == null && wallTile == null)
                { //only works if theres a floor tile and no furniture
                    furniture.SetTile(tilePos, Instantiate(furnitureTemplate));
                    return true;
                }
                return false;
        }
        return false;
    }

    /// <summary>
    /// switches to the next interaction mode, updating the button text and enabling/disabling movement. 
    /// </summary>
    public void SwitchInteractionMode()
    {
        if(interactionMode == InteractionMode.Furniture)
        {
            CancelPlace();
            return; //cancel place switches the mode manually
        }
        SwitchInteractionMode((InteractionMode)((((int)interactionMode) + 1) % 3));
    }

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

    public void FinalizePlace()
    {
        //try to set the tile, if it fails do nothing
        if(!SetTileAtWorldPos(placingWorkstation.gameObject.transform.position))
        {
            return;
        }

        //shop card-> placed
        finalize(placingShopIndex);

        placingWorkstation.GetComponent<Workstation>().isOutline = false;
        placingWorkstation.GetComponent<Workstation>().inPlaylist = true;

        
        //TODO: update sprite, no longer outline

        SwitchInteractionMode(InteractionMode.Move);
        placingWorkstation = null;
    }

    public void StartPlacing(GameObject workstation, FinishPlacementDelegate finalize, int index)
    {
        placingWorkstation = workstation;
        SwitchInteractionMode(InteractionMode.Furniture);
        this.finalize = finalize;
        placingShopIndex = index;
    }

    public GameObject OverlappingWorkstation()
    {
        Collider2D[] overlappingColliders = Physics2D.OverlapPointAll(TouchScreenToWorld());

        foreach(Collider2D collider in overlappingColliders)
        {
            Debug.Log(collider);
        }
        //overlappoint on each

        return null;
    }
}
