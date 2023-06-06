using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AgencyManager : LevelManager
{
    public GameObject agencyRoot;


    /// <summary>
    /// called by the play game button in the agency. 
    /// calls the gameManager to start a game. 
    /// </summary>
    public void PlayGame()
    {
        gameManager.BuildPlaylist(gameObject.GetComponentsInChildren<Room>());
    }
}
