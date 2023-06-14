using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanicManager : MinigameManager
{
    public int coreHealth = 20;

    public void DestroyPacket(GameObject packet, bool tapped)
    {
        if(packet.GetComponent<PacketMaliciousness>().malicious)
        {
            if(tapped)
            {
                //score++
            }
            else
            {
                coreHealth--;
            }
        }
        else
        {
            if (tapped)
            {
                //score--
            }
        }

        Destroy(packet);
    }
}
