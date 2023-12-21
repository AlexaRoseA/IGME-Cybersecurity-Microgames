using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "Workstation", menuName = "ScriptableObjects/MinigameWorkstation", order = 1)]
public class WorkstationData : ScriptableObject
{
    public string minigameScene;
    public string jobTitle;
    public string minigameName;
    public RuntimeAnimatorController workstationIdle;
    public Sprite shopSprite;
    public int price = 2000;
    public bool isOutline = true;
    public int[] starThresholds = { int.MinValue, 1000, 3000, 6000, 10000 };
    public string tutorialScene;

    public WorkstationSaveData saveData;

    public void FinishMinigame(int score, GameMode gameMode)
    {
        saveData.timesPlayed++;
        saveData.fresh = false;
        if (saveData.highscore < score)
        {
            saveData.highscore = score;
        }

        if(gameMode == GameMode.challenge)
        {
            if(score > starThresholds[saveData.agentLevel])
            {
                //challenge beaten
                saveData.agentLevel++;
            }
            saveData.challengeCooldown = 0;
            return;
        }
        saveData.challengeCooldown++;
    }

    /// <summary>
    /// returns the job title with the correct title determined by the agent level.
    /// </summary>
    /// <returns></returns>
    public string BuildJobTitle()
    {
        string title = "";
        
        switch(saveData.agentLevel)
        {
            case 0:
                title = "Rookie ";
                break;
            case 1:
                title = "Junior ";
                break;
            case 2:
                title = "Intermediate ";
                break;
            case 3:
                title = "Senior ";
                break;
        }
        title += jobTitle;

        return title;

    }
}
