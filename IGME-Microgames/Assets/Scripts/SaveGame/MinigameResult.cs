using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MinigameResult 
{
    // shop index this minigame
    public int workstationIndex;
    public int score;
    public GameMode gamemode;

    public MinigameResult(int workstationIndex, int score, GameMode gamemode)
    {
        this.workstationIndex = workstationIndex;
        this.score = score;
        this.gamemode = gamemode;
    }
}
