using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;
using UnityEngine.Tilemaps;

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

    /// <summary>
    /// start of press
    /// </summary>
    /// <param name="context"></param>
    private void TouchPressed(InputAction.CallbackContext context)
    {
        SetTileAtWorldPos(TouchScreenToWorld());
    }

    /// <summary>
    /// end of press
    /// </summary>
    /// <param name="context"></param>
    private void TouchCancelled(InputAction.CallbackContext context)
    {

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
    private void SetTileAtWorldPos(Vector3 worldPos)
    {
        //get the tile at the location in each tilemap
        Vector3Int tilePos = floor.WorldToCell(worldPos);
        TileBase floorTile = floor.GetTile(tilePos);
        TileBase wallTile = wall.GetTile(tilePos);
        TileBase furnitureTile = furniture.GetTile(tilePos);

        switch (interactionMode)
        {
            case InteractionMode.Move:
                break;
            case InteractionMode.Floor:
                if (floorTile == null)
                { //replace wall with floor
                    wall.SetTile(tilePos, null);
                    floor.SetTile(tilePos, Instantiate(floorTemplate));
                }
                break;
            case InteractionMode.Wall:
                if (wallTile == null)
                { //replace floor with wall
                    wall.SetTile(tilePos, Instantiate(wallTemplate));
                    floor.SetTile(tilePos, null);
                }
                break;
            case InteractionMode.Furniture:
                if(furnitureTile == null && wallTile == null)
                { //only works if theres a floor tile and no furniture
                    furniture.SetTile(tilePos, Instantiate(furnitureTemplate));
                    InitFurniture(furniture.CellToWorld(tilePos));
                }
                break;
        }
    }

    /// <summary>
    /// spawns a workstation gameobject 
    /// </summary>
    /// <param name="worldPos"></param>
    private void InitFurniture(Vector3 worldPos)
    {
        GameObject newFurniture = Instantiate(furniturePrefab, worldPos, Quaternion.identity);
        newFurniture.GetComponent<Workstation>().minigameScene = "MG_Test";

        newFurniture.transform.parent = agencyParent.transform;
    }

    /// <summary>
    /// switches to the next interaction mode, updating the button text and enabling/disabling movement. 
    /// </summary>
    public void SwitchInteractionMode()
    {
        interactionMode++;
        if ((int)interactionMode == 4)
        {//loop back to 0, and since 0 is move reenable movement. 
            interactionMode = InteractionMode.Move;

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
}
