using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreScreenManager : LevelManager
{
    public TMP_Text minigameName;
    public TMP_Text highscore;
    public TMP_Text scoreText;
    public TMP_Text starThreshold;
    public Image[] stars;

    private int[] starThresholds = { int.MinValue, 1000, 3000, 6000, 10000 };

    public void EndStreak()
    {
        gameManager.EndStreak();
    }

    public void NextGame()
    {
        gameManager.PlayNext();
    }

    public void InitScoreScreen(int score, WorkstationData minigame)
    {
        //currently star thresholds (score -> star conversion) is hardcoded.
        //In the future it may be necessary to have the thresholds be part of the workstation class, so different minigames can have different star thresholds.
        int starCount = -1;
        for(int i = starThresholds.Length - 1; i >= 0; i--)
        {
            if(score > starThresholds[i])
            {
                starCount = i + 1;
                starThreshold.text = "Next Star: " + starThresholds[i + 1];
                break;
            }
        }

        for(int i = 0; i < starCount; i++)
        {
            stars[i].color = new Color(0.9f, 0.85f, 0);
        }

        minigameName.text = minigame.minigameName;
        highscore.text = "Highscore: " + score;
        scoreText.text = score.ToString();
        
    }
}
