using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
public enum GameMode
{
    practice,
    challenge,
    shuffle
}


public class GameManager : MonoBehaviour
{
    public int earnedCurrency;
    public List<MinigameResult> minigameResults;

    public int playerLevel;
    public GameMode currentGameMode;
    private Queue<WorkstationData> playlist;
    public bool tutorialsEnabled = true;

    private int lastScore;
    private WorkstationData lastMinigame;

    //how many times will each minigame show up in the queue?
    public int minigameDuplicates = 2;

    void Start()
    {
        minigameResults = new List<MinigameResult>();
        if(SceneManager.sceneCount < 2)
        {
            SceneManager.LoadScene("Agency", LoadSceneMode.Additive);
            //SceneManager.SetActiveScene(SceneManager.GetSceneByName("Agency"));
        }
        else
        {
        }
    }


    /// <summary>
    /// Plays the next minigame in the queue.
    /// </summary>
    public void PlayNext()
    {
        if(playlist.Count == 0)
        {
            Debug.LogWarning("Tried to play next minigame, but there are no minigames in the queue");
            return;
        }
        /*foreach (string minigame in playlist)
        {
            Debug.Log(minigame);
        }*/

        //dequeue is called at the end of the minigame
        WorkstationData next = playlist.Peek();
        string nextSceneName = next.minigameScene;

        if (next.saveData.fresh && tutorialsEnabled)
        {
            if (next.tutorialScene != "")
            {
                nextSceneName = next.tutorialScene;
            }
            else
            {
                Debug.Log("no tutorial found");
            }
        }
        
        ClearScenes();
        SceneManager.sceneLoaded += NewMinigameLoaded;
        SceneManager.LoadSceneAsync(nextSceneName, LoadSceneMode.Additive);
    }

    private void NewMinigameLoaded(Scene scene, LoadSceneMode mode)
    {
        SceneManager.SetActiveScene(scene);
        SceneManager.sceneLoaded -= NewMinigameLoaded;
    }

    public int BuildPlaylist(WorkstationData[] workstations)
    {
        return BuildPlaylist(workstations, minigameDuplicates, true, GameMode.shuffle);
    }


    /// <summary>
    /// Compiles the available minigames into a shuffled queue.
    /// </summary>
    /// <param name="rooms">room objects that the player has in their agency.</param>
    public int BuildPlaylist(WorkstationData[] workstations, int duplicates, bool useFreshness, GameMode gameMode)
    {
        currentGameMode = gameMode;
        List<WorkstationData> activeMinigames = new List<WorkstationData>();
        playlist = new Queue<WorkstationData>();

        foreach(WorkstationData tile in workstations)
        {
            if((tile.saveData.inPlaylist || gameMode != GameMode.shuffle) && !tile.isOutline)
            {
                if(tile.saveData.fresh && useFreshness)
                {
                    //if its fresh, its first in the playlist and will show up later. 
                    playlist.Enqueue(tile);
                    //tile.fresh = false;
                }

                for(int i = 0; i < duplicates; i++)
                {
                    activeMinigames.Add(tile);
                }
            }
        }

        ShuffleList(activeMinigames);

        foreach(WorkstationData minigame in activeMinigames)
        {
            playlist.Enqueue(minigame);
        }

        PlayNext();
        return playlist.Count;
    }

    /// <summary>
    /// clears scenes then loads score scene
    /// TODO: Updates account progression
    /// </summary>
    /// <param name="score"></param>
    public void EndMinigame(int score)
    {
        WorkstationData finishedGame = playlist.Dequeue();
        finishedGame.FinishMinigame(score, currentGameMode);
        earnedCurrency += ScoreToStars(score, finishedGame) * 100;

        minigameResults.Add(new MinigameResult(finishedGame.saveData.shopIndex, score));
        lastScore = score;
        lastMinigame = finishedGame;

        ClearScenes();
        SceneManager.LoadSceneAsync("MinigameScore", LoadSceneMode.Additive);
        SceneManager.sceneLoaded += PopulateScoreScreen;
    }

    public void EndTutorial(int score)
    {

        lastScore = score;
        lastMinigame = playlist.Peek();
        lastMinigame.saveData.fresh = false;

        ClearScenes();
        SceneManager.LoadSceneAsync("MinigameScore", LoadSceneMode.Additive);
        SceneManager.sceneLoaded += PopulateTutorialScoreScreen;
    }

    /// <summary>
    /// shuffles the provided list.
    /// https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
    /// </summary>
    /// <param name="list"></param>
    private void ShuffleList<T>(List<T> list)
    {
        int n = list.Count;
        while (n > 1)
        {
            n--;
            int k = Random.Range(0, n + 1);
            T value = list[k];
            list[k] = list[n];
            list[n] = value;
        }

    }

    /// <summary>
    /// returns to the agency.
    /// </summary>
    public void EndStreak()
    {
        ClearScenes();
        SceneManager.LoadSceneAsync("Agency", LoadSceneMode.Additive);
        
    }

    /// <summary>
    /// unloads all scenes except the gameManagerScene. 
    /// </summary>
    private void ClearScenes()
    {
        for (int i = 0; i < SceneManager.sceneCount; i++)
        {
            if(SceneManager.GetSceneAt(i).name != "GameManagerScene")
            {
                SceneManager.UnloadSceneAsync(SceneManager.GetSceneAt(i).name);
            }
        }
    }

    private void PopulateScoreScreen(Scene scene, LoadSceneMode mode)
    {
        FindObjectOfType<ScoreScreenManager>().InitScoreScreen(lastScore, ScoreToStars(lastScore, lastMinigame), lastMinigame);
        SceneManager.sceneLoaded -= PopulateScoreScreen;
    }

    private void PopulateTutorialScoreScreen(Scene scene, LoadSceneMode mode)
    {
        FindObjectOfType<ScoreScreenManager>().InitScoreScreen(0, 5, lastMinigame);
        SceneManager.sceneLoaded -= PopulateTutorialScoreScreen;
    }

    private int ScoreToStars(int score, WorkstationData game)
    {
        int starCount = -1;
        for (int i = game.starThresholds.Length - 1; i >= 0; i--)
        {
            if (score >= game.starThresholds[i])
            {
                starCount = i + 1;
                break;
            }
        }
        return starCount;
    }
}
