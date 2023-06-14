using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.InputSystem;

public class PacketTapper : InputHandler
{

    public PanicManager panicManager;

    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        Collider2D[] touchedColliders = Physics2D.OverlapPointAll(TouchScreenToWorld());

        foreach(Collider2D collider in touchedColliders)
        {
            if(collider.gameObject.GetComponentInParent<PacketMovement>() != null)
            {
                //destroy the Packet
                panicManager.DestroyPacket(collider.gameObject.transform.parent.gameObject, true);
            }
        }
    }

    protected override void TouchCancelled(InputAction.CallbackContext context)
    {

    }
}
