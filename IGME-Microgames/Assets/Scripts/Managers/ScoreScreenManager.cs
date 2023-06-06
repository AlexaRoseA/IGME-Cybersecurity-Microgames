using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreScreenManager : LevelManager
{
    public void EndStreak()
    {
        gameManager.EndStreak();
    }

    public void NextGame()
    {
        gameManager.PlayNext();
    }
}
