using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum RoomState
{
    off,
    on,
    fresh //When a room is first bought, it will be fresh- it will be first in the playlist next time. 
}

public class Room : MonoBehaviour
{
    //For now, minigameScene is instance editable- when rooms are set up this will be private
    public string minigameScene;
    public int highscore;
    public int agentLevel;

    public int challengeCooldown;

    public string MinigameScene { get { return minigameScene; } }
    public RoomState roomState;

    public void Challenge()
    {

    }
}
