using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Movement : MonoBehaviour
{
    // Player object
    public GameObject player;
    private Rigidbody2D rb;

    // Player input system 
    private PlayerInput playerInput;
    private InputAction touchMovementAction;
    private InputAction touchPressAction;

    [SerializeField] string moveType;

    // World position of the mouse press
    //private Vector3 worldpos;

    // Dragging
    CircleCollider2D moveCircle;
    private float moveSpeed;
    [SerializeField] public float maxSpeed;

    /// <summary>
    /// Awake function that pulls the default player movement
    /// </summary>
    private void Awake()
    {
        playerInput = GetComponent<PlayerInput>();
        touchPressAction = playerInput.actions.FindAction("TouchPress");
        touchMovementAction = playerInput.actions.FindAction("TouchMovement");
    }

    /// <summary>
    /// Start method
    /// </summary>
    void Start()
    {
        if (player != null)
        {
            rb = player.GetComponent<Rigidbody2D>();
            moveCircle = player.GetComponent<CircleCollider2D>();
            moveSpeed = 0f;
        }
    }

    public void UpdatePlayer(GameObject obj)
    {
        player = obj;
        moveCircle = player.GetComponent<CircleCollider2D>();
    }

    /// <summary>
    /// Fixed Update needed for rigidbody movement
    /// </summary>
    void FixedUpdate()
    {
        if (checkIfWithinDragCircle() && moveType == "Player")
        {
            rb.MovePosition(Vector3.Lerp(player.transform.position, TouchScreenToWorld(), moveSpeed * Time.deltaTime));
        }
    }

    /// <summary>
    /// Subscribe after press
    /// </summary>
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

    /// <summary>
    /// On Press, find the press position and convert it to the world position for player movement.
    /// </summary>
    /// <param name="context"></param>
    private void TouchPressed(InputAction.CallbackContext context)
    {
        if (moveType == "Player")
        {
            moveSpeed = maxSpeed;
        }

        TouchScreenToWorld();
    }

    /// <summary>
    /// On Press, find the press position and convert it to the world position for player movement.
    /// </summary>
    /// <param name="context"></param>
    private void TouchCancelled(InputAction.CallbackContext context)
    {
        if (moveType == "Player")
        {
            moveSpeed = 0f;
        }
    }

    /// <summary>
    /// Returns a boolean if the touch position is within the move circle
    /// </summary>
    /// <returns></returns>
    public bool checkIfWithinDragCircle()
    {
        if (player != null)
        {
            return moveCircle.OverlapPoint(TouchScreenToWorld());
        }
        return false;
    }

    public Vector3 TouchScreenToWorld()
    {
        if (player != null)
        {
            Vector3 screenPos = touchMovementAction.ReadValue<Vector2>();
            Vector3 worldpos = Camera.main.ScreenToWorldPoint(screenPos);
            //worldpos.z = player.transform.position.z;
            return worldpos;
        }
        return Vector3.zero;
    }
}
