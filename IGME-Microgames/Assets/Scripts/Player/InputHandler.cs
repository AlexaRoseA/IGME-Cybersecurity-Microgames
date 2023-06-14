using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.InputSystem;
public class InputHandler : MonoBehaviour
{

    private PlayerInput playerInput;
    private InputAction touchMovementAction;
    private InputAction touchPressAction;

    protected void Awake()
    {
        playerInput = GetComponent<PlayerInput>();
        touchPressAction = playerInput.actions.FindAction("TouchPress");
        touchMovementAction = playerInput.actions.FindAction("TouchMovement");
    }

    protected void OnEnable()
    {
        touchPressAction.performed += TouchPressed;
        touchPressAction.canceled += TouchCancelled;
    }

    /// <summary>
    /// Unsubscribe after press
    /// </summary>

    protected void OnDisable()
    {
        touchPressAction.performed -= TouchPressed;
        touchPressAction.canceled -= TouchCancelled;
    }

    /// <summary>
    /// On Press, find the press position and convert it to the world position for player movement.
    /// </summary>
    /// <param name="context"></param>
    protected virtual void TouchPressed(InputAction.CallbackContext context)
    {
    }

    /// <summary>
    /// On Press, find the press position and convert it to the world position for player movement.
    /// </summary>
    /// <param name="context"></param>
    protected virtual void TouchCancelled(InputAction.CallbackContext context)
    {
    }

    protected Vector3 TouchScreenToWorld()
    {
        Vector3 screenPos = touchMovementAction.ReadValue<Vector2>();
        Vector3 worldpos = Camera.main.ScreenToWorldPoint(screenPos);
        return worldpos;
    }
}
