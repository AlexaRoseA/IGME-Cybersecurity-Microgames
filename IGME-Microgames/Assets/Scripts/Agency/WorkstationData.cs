using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "Workstation", menuName = "ScriptableObjects/MinigameWorkstation", order = 1)]
public class WorkstationData : ScriptableObject
{
    public string minigameScene;
    public string jobTitle;
    public string minigameName;
    public Sprite workstationSprite;
    public Sprite shopSprite;
    public int price = 2000;
    public bool isOutline = true;
    public int[] starThresholds = { int.MinValue, 1000, 3000, 6000, 10000 };
    //how many times does the minigame have to be played before the player can challenge?
    public int challengeCooldown = 3;

    public int highscore = 0;
    public int agentLevel = 0;

    

    //if the workstation is new and unplayed, it will be first in the playlist. 
    public bool fresh = true;
    public bool inPlaylist = false;

    public int Highscore { get { return highscore; } }




    public void FinishMinigame(int score, GameMode gameMode)
    {

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
            challengeCooldown = 2 + agentLevel;
            return;
        }
        challengeCooldown--;
    }
}
