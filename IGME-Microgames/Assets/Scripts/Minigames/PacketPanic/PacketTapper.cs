using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.InputSystem;

public class PacketTapper : InputHandler
{

    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        Collider2D[] touchedColliders = Physics2D.OverlapPointAll(TouchScreenToWorld());

        foreach(Collider2D collider in touchedColliders)
        {
            if(collider.gameObject.GetComponentInParent<PacketMovement>() != null)
            {
                //destroy the Packet
                Destroy(collider.gameObject.transform.parent.gameObject);
            }
        }
    }

    protected override void TouchCancelled(InputAction.CallbackContext context)
    {

    }
}
