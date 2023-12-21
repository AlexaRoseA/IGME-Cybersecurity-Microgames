using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class WorkstationSaveData
{
    public int challengeCooldown;
    public int highscore;
    public int agentLevel;
    public bool fresh;
    public int timesPlayed;
    public bool inPlaylist;

    public WorkstationSaveData()
    {
        challengeCooldown = 2;
        highscore = 0;
        agentLevel = 0;
        fresh = true;
        timesPlayed = 0;
        inPlaylist = true;
    }
}
