using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

public class ExfiltrigueTutorialManager : MonoBehaviour
{

    bool initialized = false;
    public DialogueRunner dialogueRunner;
    bool keyFound = false;

    private List<GameObject> scoreAndTimer;
    // Start is called before the first frame update
    void Start()
    {
        if (dialogueRunner == null) dialogueRunner = FindObjectOfType<DialogueRunner>();
    }

    // Update is called once per frame
    void Update()
    {
        if(!initialized)
        {
            if(GameObject.Find("Exfiltrigue_Phase1_Infiltrate(Clone)") != null)
            {
                InitializePhase1();
                initialized = true;
            }
            else if(GameObject.Find("Exfiltrigue_Phase2_Exfiltrate(Clone)") != null)
            {
                InitializePhase2();
                initialized = true;
            }
        }
    }

    void InitializePhase1()
    {

        //phase1 start- fix the fish, fix the timer
        Debug.Log("tut start");
        scoreAndTimer = new List<GameObject>();
        scoreAndTimer.Add(GameObject.Find("Timer"));
        scoreAndTimer.Add(GameObject.Find("TimeWords"));
        scoreAndTimer.Add(GameObject.Find("Score"));
        scoreAndTimer.Add(GameObject.Find("ScoreWords"));

        foreach(GameObject obj in scoreAndTimer)
        {
            obj.SetActive(false);
        }

        FishMovement[] fish = FindObjectsOfType<FishMovement>();

        //first fish becomes tutorial fish, destroy the rest
        fish[0].tutorial = true;
        fish[0].transform.position = new Vector3(0f, 3f);

        for(int i = 1; i < fish.Length; i++)
        {
            Destroy(fish[i].gameObject);
        }
    }
    private void InitializePhase2()
    {
        //disable after phase 2 is initalized
        foreach (GameObject obj in scoreAndTimer)
        {
            obj.SetActive(false);
        }
    }

    public void CaughtFish()
    {
        GameObject.Find("PhishingLetterBG").SetActive(false);
        dialogueRunner.StartDialogue("FishCaptured");
    }

    [YarnCommand("NextPhase")]
    public void NextPhase()
    {
        //reenable score and timer so that the phase2 manager can find them
        foreach (GameObject obj in scoreAndTimer)
        {
            obj.SetActive(true);
        }

        FindObjectOfType<MinigameManager>().SetPhase();
        initialized = false;
    }

    public void Decrypted()
    {
        if (keyFound) return;
        dialogueRunner.StartDialogue("KeyFound");
        keyFound = true;
    }

    public void Exfiltrate(float importance, bool trashed)
    {
        switch (importance)
        {
            case < .5f:
                dialogueRunner.StartDialogue(trashed ? "TrashedTrash" : "ExfilTrash");
                break;

            default:
                dialogueRunner.StartDialogue(trashed ? "TrashedGood" : "ExfilGood");
                break;
        }
    }

    public void GotCaught()
    {
        dialogueRunner.StartDialogue("GotCaught");
    }
}
