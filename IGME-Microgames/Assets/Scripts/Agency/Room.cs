using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum RoomState
{
    off,
    on,
    fresh
}

public class Room : MonoBehaviour
{
    public string minigameScene;
    public int highscore;
    public int agentLevel;

    public int challengeCooldown;

    public string MinigameScene { get { return minigameScene; } }
    public RoomState roomState;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Challenge()
    {

    }
}
