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

public class Builder : InputHandler, IDataPersistence
{
    // gameobject that workstations should be children of in order to be added to the playlist
    public GameObject agencyParent;
    
    //player, used for original position of workstation outlines
    public GameObject player;

    private InteractionMode interactionMode;
    public TMP_Text interactionModeButtonText; //text that will be updated when the interaction mode is switched

    //Tilemap stuff
    public Tilemap floor;
    public Tilemap wall;
    public Tilemap furniture;
    public Tilemap ceiling;

    public TileBase floorTemplate;
    public TileBase wallTemplate;
    public TileBase furnitureTemplate;
    public TileBase ceilingTemplate;
    public GameObject furniturePrefab;

    //workstation placement stuff
    public GameObject placingWorkstation; //workstation that is currently being placed
    private bool fingerDragging = false; //is the finger down?
    private bool moving = false; //has the workstation been moved in this instance of the finger being down?
    private int placingShopIndex;
    private FinishPlacementDelegate finalize; //called when placement is finalized

    private PlacedWorkstation openTapUI;


    void Update()
    {
        //moving workstation
        if (placingWorkstation != null && fingerDragging && interactionMode == InteractionMode.Furniture)
        {
            //converting to cell and back to snap to grid
            Vector3Int currentCellPos = floor.WorldToCell(placingWorkstation.transform.position);
            Vector3Int newCellPos = floor.WorldToCell(TouchScreenToWorld());

            if(currentCellPos != newCellPos) //moved to a different cell
            {
                moving = true;

                placingWorkstation.transform.position = floor.GetCellCenterWorld(newCellPos);

                //change the color of the outline (green if its a valid position, red if not)
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
            //tapped on a non-outline workstation- open its tap UI
            if(tappedWorkstation.ToggleTapUI())
            {
                if(openTapUI != null && openTapUI != tappedWorkstation)
                { //if theres abother tap UI open, close it
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

        //if the outline hasn't been moved this press, finalize it
        if(!moving && interactionMode == InteractionMode.Furniture)
        {
            FinalizePlace();
        }
    }

    /// <summary>
    /// Updates the tile at a specific world position. 
    /// </summary>
    /// <param name="worldPos">world position of the tile to be updated</param>
    private bool SetTileAtWorldPos(Vector3 worldPos)
    {
        //get the tile at the location in each tilemap
        Vector3Int tilePos = floor.WorldToCell(worldPos);
        //Debug.Log(tilePos);
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
                    ceiling.SetTile(tilePos, null);
                    floor.SetTile(tilePos, Instantiate(floorTemplate));
                    return true;
                }
                return false;
            case InteractionMode.Wall:
                if (floorTile != null && furnitureTile == null)
                { //replace floor with wall
                    wall.SetTile(tilePos, Instantiate(wallTemplate));
                    ceiling.SetTile(tilePos, Instantiate(ceilingTemplate));
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

        //Save placement
        Debug.Log("setting save position to: " + floor.WorldToCell(placingWorkstation.transform.position));
        placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.saveData.x = floor.WorldToCell(placingWorkstation.transform.position).x;
        placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.saveData.y = floor.WorldToCell(placingWorkstation.transform.position).y;
        Debug.Log("workstation X: " + placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.saveData.x);
        Debug.Log("workstation Y: " + placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.saveData.y);

        placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.isOutline = false;
        placingWorkstation.GetComponent<PlacedWorkstation>().minigameData.saveData.inPlaylist = true;

        UpdateWorkstationColor(floor.WorldToCell(placingWorkstation.gameObject.transform.position));

        placingWorkstation.transform.Find("Sprite").GetComponent<Collider2D>().enabled = true;
        placingWorkstation.transform.Find("Sprite").GetComponent<SpriteRenderer>().sortingLayerName = "NPC";

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
        workstation.transform.Find("Sprite").GetComponent<SpriteRenderer>().sortingLayerName = "Foreground";
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

    void IDataPersistence.LoadData(GameData data)
    {
        Debug.Log("Loading Tilemap...");
        Debug.Log("Tile Count: " + data.isFloor.Length);

        bool[,] newArray = Make2DArray<bool>(data.isFloor, 18, 14);

        for (int x = -9; x < 9; x++)
        {
            for (int y = -8; y < 6; y++)
            {
                bool thisTile = newArray[x + 9, y + 8];
                

                //Debug.Log("Tile At: " + x + ", " + y + " : " + thisTile);
                interactionMode = thisTile ? InteractionMode.Floor : InteractionMode.Wall;

                //Debug.Log("Tile At: " + x + ", " + y + " Type: " + interactionMode);
                SetTileAtWorldPos(floor.CellToWorld(new Vector3Int(x, y)));
            }
        }
        interactionMode = InteractionMode.Move;
    }

    void IDataPersistence.SaveData(ref GameData data)
    {
        Debug.Log("Saving Tilemap...");
        bool[,] arr = new bool[18, 14];
        for (int x = -9; x < 9; x++)
        {
            for(int y = -8; y < 6; y++)
            {
                arr[x + 9, y + 8] = floor.GetTile(new Vector3Int(x, y)) != null;
            }
        }
        data.isFloor = Make1DArray<bool>(arr);
    }

    private T[,] Make2DArray<T>(T[] input, int width, int height)
    {
        T[,] output = new T[width, height];
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                output[i, j] = input[i * height + j];
            }
        }
        return output;
    }

    private T[] Make1DArray<T>(T[,] input)
    {
        int width = input.GetLength(0);
        int height = input.GetLength(1);

        T[] output = new T[input.Length];
        int newIndex = 0;
        for(int i = 0; i < width; i++)
        {
            for(int j = 0; j < height; j++)
            {
                output[newIndex] = input[i, j];
                newIndex++;
            }
        }
        return output;
    }
}
