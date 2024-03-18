using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PacketMaliciousness : MonoBehaviour
{

    public bool malicious = false;
    public bool hider = false;

    private bool hidden = false;

    private float rehideTime = 0f;

    // Start is called before the first frame update
    void Start()
    {
        hidden = hider;
        if (malicious && !hider)
        {
            //start as malicious if not a hider
            
            ProceduralSpriteFlip flipper = gameObject.GetComponentInChildren<ProceduralSpriteFlip>();

            flipper.Flip(false);
        }

    }
    
    // Update is called once per frame
    void Update()
    {
        if(hider && !hidden)
        {
            //malicious packets that hide but are currently revealed, update countdown to hiding again 
            rehideTime -= Time.deltaTime;

            if(rehideTime < 0f)
            {
                gameObject.GetComponentInChildren<ProceduralSpriteFlip>().Flip(true);
                hidden = true;
            }
            
        }
    }
    
    /// <summary>
    /// Reveals the packet, if it is a hiding malicious packet. 
    /// </summary>
    public void Reveal()
    {
        
        if(hider)
        {
            rehideTime = 1f;
            if (hidden)
            {
                gameObject.GetComponentInChildren<ProceduralSpriteFlip>().Flip(false);
            }
            hidden = false;
        }
    }
}
