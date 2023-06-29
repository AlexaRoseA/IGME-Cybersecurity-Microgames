using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PacketMovement : LineRendererMovement
{
    protected override void EndLine()
    {
        PanicManager panicManager = GameObject.Find("MinigameManager").GetComponent<PanicManager>();
        if (panicManager == null)
        {
            Debug.LogWarning("panic manager is null. is there a panic manager script attached to the minigamemanager game object?");
        }
        else
        {
            //panic manager handles score, and deleting the packet.
            panicManager.DestroyPacket(gameObject, false);
        }

        return;
    }
}
