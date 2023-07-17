using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InfiltrationManager : MonoBehaviour
{
    public MinigameManager minigameManager;
    public GameObject phishingLetter;
    public Button sendButton;

    private bool startedGame = false;
    // Start is called before the first frame update
    void Start()
    {

        //if (player == null) player = GameObject.Find("Spear");
        if (minigameManager == null) minigameManager = FindObjectOfType<MinigameManager>();
        if (phishingLetter == null) phishingLetter = GameObject.Find("PhishingLetter");

        sendButton.interactable = false;

        phishingLetter.transform.parent.gameObject.SetActive(false);
        minigameManager.UpdateTimerText();
        minigameManager.UpdateScoreText();


    }

    // Update is called once per frame
    void Update()
    {
        if (minigameManager.GetTimer() && !startedGame)
        {
            startedGame = true;
            phishingLetter.transform.parent.gameObject.SetActive(true);
        }
    }

    /// <summary>
    /// 
    /// </summary>
    public void NextPII()
    {
        
        //match <color="red">< followed by any number of characters until the next < character. 
        Regex regex = new Regex(@"<color=""red""><[^<]*");

        TMP_Text phishingTextComp = phishingLetter.GetComponent<TMP_Text>();

        string match = regex.Match(phishingTextComp.text).Value;
        if (match.Length == 0)
        {
            minigameManager.UpdateScore(800);
            return;
        }

            string updated = match.Replace("red", "green");
        updated = updated.Replace("<Name>", "Herbert Hacker");
        updated = updated.Replace("<Banking Institution>", "Shady Bank");
        updated = updated.Replace("<Account Number>", "********7634");
        phishingTextComp.text = phishingTextComp.text.Replace(match, updated);

        minigameManager.UpdateScore(1600);

        //check if there's another PII to fill
        match = regex.Match(phishingTextComp.text).Value;

        //if not, enabled the send button
        if(match.Length == 0)
        {
            sendButton.interactable = true;
        }
    }

    public void SendPhishing()
    {

        minigameManager.UpdateScore(1000 + ((int)minigameManager.GetTimeRemaining() * 200));
        minigameManager.SetPhase();
    }
}
