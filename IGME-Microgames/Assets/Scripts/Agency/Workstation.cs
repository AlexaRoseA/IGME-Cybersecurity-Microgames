using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Workstation : MonoBehaviour
{
    public string minigameScene;
    public int highscore = 0;
    public int agentLevel = 0;

    public int challengeCooldown = 3;

    //public string MinigameScene { get { return minigameScene; } }
    public bool enabled = true;
    public bool fresh = true;

    public void Challenge()
    {

    }
}
