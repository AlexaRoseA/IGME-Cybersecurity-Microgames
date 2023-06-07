using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Tilemaps;

public class Builder : MonoBehaviour
{
    public GameObject player;
    public AgencyManager agencyManager;

    private PlayerInput playerInput;
    private InputAction touchMovementAction;
    private InputAction touchPressAction;

    public Tilemap floor;
    public Tilemap wall;
    public Tilemap furniture;

    public TileBase floorTemplate;
    public TileBase wallTemplate;
    public TileBase furnitureTemplate;

    private void Awake()
    {
        playerInput = GetComponent<PlayerInput>();
        touchPressAction = playerInput.actions.FindAction("TouchPress");
        touchMovementAction = playerInput.actions.FindAction("TouchMovement");
    }
    // Start is called before the first frame update
    void Start()
    {
    }

    private void TouchPressed(InputAction.CallbackContext context)
    {
        SetTileAtWorldPos(TouchScreenToWorld());
    }

    private void TouchCancelled(InputAction.CallbackContext context)
    {
    }

    private void OnEnable()
    {
        touchPressAction.performed += TouchPressed;
        touchPressAction.canceled += TouchCancelled;
    }

    /// <summary>
    /// Unsubscribe after press
    /// </summary>

    private void OnDisable()
    {
        touchPressAction.performed -= TouchPressed;
        touchPressAction.canceled -= TouchCancelled;
    }

    private Vector3 TouchScreenToWorld()
    {
        Vector3 screenPos = touchMovementAction.ReadValue<Vector2>();
        Vector3 worldpos = Camera.main.ScreenToWorldPoint(screenPos);
        worldpos.z = player.transform.position.z;
        return worldpos;
    }

    private void SetTileAtWorldPos(Vector3 worldPos)
    {
        Vector3Int tilePos = floor.WorldToCell(worldPos);
        TileBase floorTile = floor.GetTile(tilePos);
        TileBase wallTile = wall.GetTile(tilePos);
        TileBase furnitureTile = furniture.GetTile(tilePos);

        switch (agencyManager.interactionMode)
        {
            case InteractionMode.Move:
                break;
            case InteractionMode.Place:
                if (floorTile == null)
                {
                    wall.SetTile(tilePos, null);
                    floor.SetTile(tilePos, Instantiate(floorTemplate));
                }
                break;
            case InteractionMode.Destroy:
                if (wallTile == null)
                {
                    wall.SetTile(tilePos, Instantiate(wallTemplate));
                    floor.SetTile(tilePos, null);
                }
                break;
        }
    }
}
