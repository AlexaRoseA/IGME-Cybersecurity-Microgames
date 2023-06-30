using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum Tile
{
    floor,
    wall,
    minigame
}


public class GameManager : MonoBehaviour
{
    public int currency;
    public int playerLevel;

    private Queue<Workstation> playlist;

    //how many times will each minigame show up in the queue?
    public int minigameDuplicates = 2;

    //TODO: load data
    void Start()
    {
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
        string nextSceneName = playlist.Peek().MinigameScene;

        ClearScenes();
        SceneManager.sceneLoaded += NewMinigameLoaded;
        SceneManager.LoadSceneAsync(nextSceneName, LoadSceneMode.Additive);
    }

    private void NewMinigameLoaded(Scene scene, LoadSceneMode mode)
    {
        SceneManager.SetActiveScene(scene);
    }

    public void BuildPlaylist(Workstation[] workstations)
    {
        BuildPlaylist(workstations, minigameDuplicates, true);
    }


    /// <summary>
    /// Compiles the available minigames into a shuffled queue.
    /// </summary>
    /// <param name="rooms">room objects that the player has in their agency.</param>
    public void BuildPlaylist(Workstation[] workstations, int duplicates, bool useFreshness)
    {
        List<Workstation> activeMinigames = new List<Workstation>();
        playlist = new Queue<Workstation>();

        foreach(Workstation tile in workstations)
        {
            if(tile.inPlaylist && !tile.isOutline)
            {
                if(tile.fresh && useFreshness)
                {
                    //if its fresh, its first in the playlist and will show up later. 
                    playlist.Enqueue(tile);
                    tile.fresh = false;
                }

                for(int i = 0; i < duplicates; i++)
                {
                    activeMinigames.Add(tile);
                }
            }
        }

        ShuffleList(activeMinigames);

        foreach(Workstation minigame in activeMinigames)
        {
            playlist.Enqueue(minigame);
        }

        PlayNext();
    }

    /// <summary>
    /// clears scenes then loads score scene
    /// TODO: Updates account progression
    /// </summary>
    /// <param name="score"></param>
    public void EndMinigame(int score)
    {

        playlist.Dequeue().FinishMinigame(score);


        currency += score * score * 100;
        ClearScenes();
        SceneManager.LoadSceneAsync("MinigameScore", LoadSceneMode.Additive);
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
}
