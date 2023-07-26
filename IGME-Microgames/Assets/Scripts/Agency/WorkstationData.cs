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
    //how many times does the minigame have to be played before the player can challenge?
    public int challengeCooldown = 3;

    public int highscore = 0;
    public int agentLevel = 0;

    public string tutorialScene;

    //if the workstation is new and unplayed, it will be first in the playlist. 
    public bool fresh = true;
    public int timesPlayed = 0;
    public bool inPlaylist = false;

    public int Highscore { get { return highscore; } }




    public void FinishMinigame(int score, GameMode gameMode)
    {
        timesPlayed++;
        if (highscore < score)
        {
            highscore = score;
        }

        if(gameMode == GameMode.challenge)
        {
            if(score > starThresholds[agentLevel])
            {
                //challenge beaten
                agentLevel++;
            }
            challengeCooldown = 0;
            return;
        }
        challengeCooldown++;
    }

    /// <summary>
    /// returns the job title with the correct title determined by the agent level.
    /// </summary>
    /// <returns></returns>
    public string BuildJobTitle()
    {
        string title = "";
        
        switch(agentLevel)
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
