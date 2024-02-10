using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class WorkstationSaveData
{
    public int shopIndex;

    //stats
    public int challengeCooldown;
    public int highscore;
    public int agentLevel;
    public bool fresh;
    public int timesPlayed;
    public bool inPlaylist;

    //grid position
    public int x;
    public int y;

    public int purchaseState;

    public WorkstationSaveData()
    {
        challengeCooldown = 2;
        highscore = 0;
        agentLevel = 0;
        fresh = true;
        timesPlayed = 0;
        inPlaylist = true;
        purchaseState = 0;
        x = 0;
        y = 0;
    }
}
