using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{

    private Queue<string> playlist;
    public int minigameDuplicates = 2;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void PlayNext()
    {
        /*foreach(string minigame in playlist)
        {
            Debug.Log(minigame);
        }*/
        string nextSceneName = playlist.Dequeue();
        string thisSceneName = SceneManager.GetActiveScene().name;

        SceneManager.UnloadSceneAsync(thisSceneName);
        SceneManager.LoadSceneAsync(nextSceneName, LoadSceneMode.Additive);

        SceneManager.sceneLoaded += NextSceneLoaded;
    }

    private void NextSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        SceneManager.SetActiveScene(scene);

        Debug.Log(SceneManager.sceneCount);
        Debug.Log(SceneManager.GetActiveScene().name);
    }

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

    public void EndMinigame(int score)
    {
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
}
