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
        int starCount = -1;
        for(int i = minigame.starThresholds.Length - 1; i >= 0; i--)
        {
            if(score > minigame.starThresholds[i])
            {
                starCount = i + 1;
                if(starCount < minigame.starThresholds.Length)
                {

                    starThreshold.text = "Next Star: " + minigame.starThresholds[i + 1];
                }
                break;
            }
        }

        for(int i = 0; i < starCount; i++)
        {
            stars[i].color = new Color(0.9f, 0.85f, 0);
        }

        minigameName.text = minigame.minigameName;
        highscore.text = "Highscore: " + minigame.highscore;
        scoreText.text = score.ToString();
        
    }
}
