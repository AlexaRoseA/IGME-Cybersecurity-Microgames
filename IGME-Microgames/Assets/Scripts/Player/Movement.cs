using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Movement : MonoBehaviour
{
    // Player object
    public GameObject player;

    // Player input system 
    private PlayerInput playerInput;
    private InputAction touchMovementAction;
    private InputAction touchPressAction;

    // World position of the mouse press
    private Vector3 worldpos;

    private bool dragging = false;

    /// <summary>
    /// Awake function that pulls the default player movement
    /// </summary>
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

    // Update is called once per frame
    void Update()
    {
        player.transform.position = Vector3.Lerp(player.transform.position, worldpos, 2 * Time.deltaTime);


    }
    /// <summary>
    /// Subscribe after press
    /// </summary>
    private void OnEnable()
    {
        touchPressAction.performed += TouchPressed;
    }

    /// <summary>
    /// Unsubscribe after press
    /// </summary>

    private void OnDisable()
    {
        touchPressAction.performed -= TouchPressed;
    }

    /// <summary>
    /// On Press, find the press position and convert it to the world position for player movement.
    /// </summary>
    /// <param name="context"></param>
    private void TouchPressed(InputAction.CallbackContext context)
    {
        Vector2 screenPos = touchMovementAction.ReadValue<Vector2>();
        worldpos = Camera.main.ScreenToWorldPoint(screenPos);
        worldpos.z = player.transform.position.z;

    }

}
