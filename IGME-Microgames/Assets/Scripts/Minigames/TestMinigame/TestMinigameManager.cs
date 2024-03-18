using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TestMinigameManager : LevelManager
{


    public void EndMinigameButton()
    {
        gameManager.EndMinigame(3); 
    }
}
