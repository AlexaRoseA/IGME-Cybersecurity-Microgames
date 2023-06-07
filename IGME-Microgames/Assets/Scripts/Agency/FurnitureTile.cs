using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class FurnitureTile : BaseTile
{
    public string minigameScene;
    public int highscore;
    public int agentLevel;
    public int challengeCooldown;
    
    public string MinigameScene { get { return minigameScene; } }
    public RoomState roomState;
}
