using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
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

    protected void OnDisable()
    {
        touchPressAction.performed -= TouchPressed;
        touchPressAction.canceled -= TouchCancelled;
    }

    /// <summary>
    /// Does nothing. override this. 
    /// </summary>
    /// <param name="context"></param>
    protected virtual void TouchPressed(InputAction.CallbackContext context)
    {
    }

    /// <summary>
    /// Does nothing. override this. 
    /// </summary>
    /// <param name="context"></param>
    protected virtual void TouchCancelled(InputAction.CallbackContext context)
    {
    }

    /// <summary>
    /// gets the player's touch input, and converts it to world space. 
    /// </summary>
    /// <returns></returns>
    protected Vector3 TouchScreenToWorld()
    {
        Vector3 screenPos = touchMovementAction.ReadValue<Vector2>();
        Vector3 worldpos = Camera.main.ScreenToWorldPoint(screenPos);
        return worldpos;
    }
    /// <summary>
    /// determines whether or not the player is touching a UI element.
    /// </summary>
    /// <returns>returns true if the player is touching a UI element.</returns>
    protected bool isTouchingUI()
    {
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current) { position = touchMovementAction.ReadValue<Vector2>() };
        List<RaycastResult> raycastResults = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerEventData, raycastResults);

        if (raycastResults.Count > 0)
        {
            return true;
        }
        return false;
    }
}
