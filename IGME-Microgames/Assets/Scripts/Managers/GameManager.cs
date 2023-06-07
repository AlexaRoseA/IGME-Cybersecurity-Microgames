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
    public Tile[,] tiles; 

    private Queue<string> playlist;
    public int minigameDuplicates = 2;

    //TODO: load data
    void Start()
    {
        tiles = new Tile[6, 10];
        tiles[0, 0] = Tile.wall;

        Debug.Log(tiles[0, 0]);
        Debug.Log(tiles[1, 0]);
        Debug.Log(tiles[0, 1]);
    }


    /// <summary>
    /// Plays the next minigame in the queue.
    /// </summary>
    public void PlayNext()
    {
        /*foreach (string minigame in playlist)
        {
            Debug.Log(minigame);
        }*/
        string nextSceneName = playlist.Dequeue();

        ClearScenes();
        SceneManager.LoadSceneAsync(nextSceneName, LoadSceneMode.Additive);
    }


    /// <summary>
    /// Compiles the available minigames into a shuffled queue.
    /// </summary>
    /// <param name="rooms">room objects that the player has in their agency.</param>
    public void BuildPlaylist(Room[] rooms)
    {
        List<string> activeMinigames = new List<string>();
        playlist = new Queue<string>();

        foreach(Room room in rooms)
        {
            switch(room.roomState)
            {
                    //if its fresh, its first in the playlist and will show up later. 
                case RoomState.fresh:
                    playlist.Enqueue(room.MinigameScene);
                    room.roomState = RoomState.on;
                    goto case RoomState.on;

                case RoomState.on:
                    for(int i = 0; i < minigameDuplicates; i++)
                    {
                        activeMinigames.Add(room.MinigameScene);
                    }
                    break;
            }
        }

        ShuffleList(activeMinigames);

        foreach(string minigame in activeMinigames)
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
