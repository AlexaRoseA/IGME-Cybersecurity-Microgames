using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu(fileName = "Workstation", menuName = "ScriptableObjects/MinigameWorkstation", order = 1)]
///ScriptableObject that contains the information necessary to run a minigame. 
public class WorkstationData : ScriptableObject
{
    public string minigameScene;
    public string jobTitle;
    public string minigameName;
    public RuntimeAnimatorController workstationIdle;
    public Sprite shopSprite;
    public int price = 2000;
    public bool isOutline = true;
    public int[] starThresholds = { int.MinValue, 1000, 3000, 6000, 10000 };
    public string tutorialScene;

    public WorkstationSaveData saveData;

    /// <summary>
    /// updates the minigame stats after completing. 
    /// </summary>
    /// <param name="score"></param>
    /// <param name="gameMode"></param>
    /// <returns>currency earned from this minigame</returns>
    public int ScoreMinigame(MinigameResult result)
    {
        if(result.workstationIndex != saveData.shopIndex)
        {
            Debug.LogError("Attempted to score minigame #" + result.workstationIndex + " as minigame #" + saveData.shopIndex);
            return 0;
        }
        Debug.Log("Scoring minigame #" + result.workstationIndex + "... ");
        saveData.timesPlayed++;

        saveData.fresh = false;
        if (saveData.highscore < result.score)
        {
            saveData.highscore = result.score;
        }

        if(result.gamemode == GameMode.challenge)
        {
            if(result.score > starThresholds[saveData.agentLevel])
            {
                //challenge beaten
                saveData.agentLevel++;
                saveData.challengeCooldown = 0;
                return ScoreToStars(result.score) * 200;
            }
            saveData.challengeCooldown--;
            return 0;
        }
        saveData.challengeCooldown++;
        return ScoreToStars(result.score) * 100;
    }

    /// <summary>
    /// returns the job title with the correct title determined by the agent level.
    /// </summary>
    /// <returns></returns>
    public string BuildJobTitle()
    {
        string title = "";
        
        switch(saveData.agentLevel)
        {
            case 0:
                title = "Rookie ";
                break;
            case 1:
                title = "Junior ";
                break;
            case 2:
                title = "Intermediate ";
                break;
            case 3:
                title = "Senior ";
                break;
        }
        title += jobTitle;

        return title;

    }

    ///converts a score value to the number of stars earned with that score in this minigame.
    public int ScoreToStars(int score)
    {
        int starCount = -1;
        for (int i = starThresholds.Length - 1; i >= 0; i--)
        {
            if (score >= starThresholds[i])
            {
                starCount = i + 1;
                break;
            }
        }
        return starCount;
    }
}
