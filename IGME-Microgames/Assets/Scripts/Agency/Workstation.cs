using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Workstation : MonoBehaviour
{
    [SerializeField] private string minigameScene;
    [SerializeField] private string jobTitle = "Cybersecurity";
    [SerializeField] private Sprite workstationSprite;
    [SerializeField] private int price = 2000;

    //how many times does the minigame have to be played before the player can challenge?
    private int challengeCooldown = 3;

    private int highscore = 0;
    private int agentLevel = 0;

    

    //if the workstation is new and unplayed, it will be first in the playlist. 
    [System.NonSerialized] public bool fresh = true;
    [System.NonSerialized] public bool isOutline = true;
    [System.NonSerialized] public bool inPlaylist = false;

    public string MinigameScene { get { return minigameScene; } }

    public string JobTitle { get { return jobTitle; } }

    public Sprite WorkstationSprite { get { return workstationSprite; } }

    public int Price { get { return price; } }




    public void Challenge()
    {

    }
}
