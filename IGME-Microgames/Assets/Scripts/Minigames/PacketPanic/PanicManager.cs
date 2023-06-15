using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanicManager : MonoBehaviour
{
    public int coreHealth = 20;

    public MinigameManager helper;

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

    void Start()
    {
        
        helper = GameObject.FindObjectOfType<MinigameManager>();

        helper.UpdateTimerText();
        //helper.UpdateScoreText();
    }

    void Update()
    {
    }
}
