using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public enum InteractionMode
{
    Move,
    Place,
    Destroy
}

public class AgencyManager : LevelManager
{
    public GameObject agencyRoot;
    public InteractionMode interactionMode;
    public TMP_Text interactionModeButtonText;

    void Start()
    {
        base.Start();

        //load agency from GameManager


    }


    /// <summary>
    /// called by the play game button in the agency. 
    /// calls the gameManager to start a game. 
    /// </summary>
    public void PlayGame()
    {
        gameManager.BuildPlaylist(gameObject.GetComponentsInChildren<Room>());
    }

    public void SwitchInteractionMode()
    {
        interactionMode++;
        if((int)interactionMode == 3)
        {
            interactionMode = InteractionMode.Move;
        }
        interactionModeButtonText.text = interactionMode.ToString();
    }
}
