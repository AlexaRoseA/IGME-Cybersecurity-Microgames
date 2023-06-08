using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Workstation : MonoBehaviour
{
    public string minigameScene;
    public int highscore = 0;
    public int agentLevel = 0;

    //how many times does the minigame have to be played before the player can challenge?
    public int challengeCooldown = 3;

    //public string MinigameScene { get { return minigameScene; } }
    public bool enabled = true;

    //if the workstation is new and unplayed, it will be first in the playlist. 
    public bool fresh = true;

    public void Challenge()
    {

    }
}
