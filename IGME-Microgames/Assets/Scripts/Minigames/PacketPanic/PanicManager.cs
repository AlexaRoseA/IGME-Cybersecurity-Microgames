using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PanicManager : MonoBehaviour
{
    public int coreHealth = 10;

    public MinigameManager helper;

    public TMP_Text coreHealthText;

    public void DestroyPacket(GameObject packet, bool tapped)
    {
        if(packet.GetComponent<PacketMaliciousness>().malicious)
        {
            if(tapped)
            {
                //tapped malicious
                //helper.UpdateScore(100);
            }
            else
            {
                //malicious reached core
                AddCoreHealth(-1);
                helper.UpdateScore(-200);
            }
        }
        else
        {
            
            if (tapped)
            {
                //tapped innocent
            }
            else
            {
                //innocent reached core
                helper.UpdateScore(50);
            }
        }

        Destroy(packet);
    }

    void Start()
    {
        
        helper = FindObjectOfType<MinigameManager>();

        //link UI
        helper.UpdateTimerText();
        helper.UpdateScoreText();
        AddCoreHealth(0);
    }

    /// <summary>
    /// adds to the core health, and updates the UI. pass a negative value to subtract. 
    /// </summary>
    /// <param name="amount">amount to be added</param>
    void AddCoreHealth(int amount)
    {
        coreHealth += amount;
        coreHealthText.text = coreHealth.ToString();

        if(coreHealth <= 0)
        {
            helper.StopTimer();
            helper.dialogueRunner.StartDialogue("GameOver");
        }
    }
}
