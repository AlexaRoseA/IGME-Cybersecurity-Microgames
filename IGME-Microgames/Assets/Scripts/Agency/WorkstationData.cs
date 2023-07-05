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
    public int price = 2000;
    public bool isOutline = true;
    //how many times does the minigame have to be played before the player can challenge?
    private int challengeCooldown = 3;

    private int highscore = 0;
    //private int agentLevel = 0;

    

    //if the workstation is new and unplayed, it will be first in the playlist. 
    public bool fresh = true;
    public bool inPlaylist = false;

    public int Highscore { get { return highscore; } }




    public void FinishMinigame(int score)
    {

        if (highscore < score)
        {
            highscore = score;
        }
        challengeCooldown--;
    }
}
