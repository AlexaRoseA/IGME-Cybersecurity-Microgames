using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PanicManager : MonoBehaviour
{
    public int coreHealth = 10;

    public MinigameManager helper;
    public GameObject deadPacket;
    public TMP_Text coreHealthText;

    public void DestroyPacket(GameObject packet, bool tapped)
    {
        if(packet.GetComponent<PacketMaliciousness>().malicious)
        {
            if(tapped)
            {
                //tapped malicious
                Instantiate(deadPacket).transform.position = packet.transform.position;
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
                helper.UpdateScore(-100);
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
        //coreHealthText.gameObject.transform.parent.gameObject.SetActive(true);

        //link UI
        helper.UpdateTimerText();
        helper.UpdateScoreText();
        AddCoreHealth(0);
    }

    /// <summary>
    /// adds to the core health, and updates the UI. pass a negative value to subtract. 
    /// </summary>
    /// <param name="amount">amount to be added</param>
    public void AddCoreHealth(int amount)
    {
        coreHealth += amount;
        if (coreHealth <= 0)
        {
            helper.StopTimer();
            helper.dialogueRunner.StartDialogue("GameOver");
        }

        if (coreHealthText == null)
        {
            return;
        }

        coreHealthText.text = coreHealth.ToString();
        coreHealthText.gameObject.GetComponent<Animator>().SetTrigger("LoseHealth");

    }
}
