using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class DataPersistenceManager : MonoBehaviour
{
    public static DataPersistenceManager instance { get; private set; }

    private GameData gameData;

    private List<IDataPersistence> dataPersistenceObjects;

    GooglePlaySaveHandler googlePlayHandler;

    /// <summary>
    /// singleton
    /// </summary>
    private void Awake()
    {
        if(instance != null) Debug.LogError("Found multiple data persistence managers");
        instance = this;
    }


    private void Start()
    {
        dataPersistenceObjects = FindAllDataPersistenceObjects();
        googlePlayHandler = new GooglePlaySaveHandler();

        LoadGame();
    }

    public void NewGame()
    {
        gameData = new GameData();
    }

    public void SaveGame()
    {
        foreach (IDataPersistence obj in dataPersistenceObjects)
        {
            obj.SaveData(ref gameData);
        }
        googlePlayHandler.Save(gameData);
        
    }

    public void LoadGame()
    {
        googlePlayHandler.Load(GameLoaded);
    }

    private void GameLoaded(GameData data)
    {
        gameData = data;
        if (gameData == null)
        {
            Debug.Log("tried to load, but no game data found. making a new save");
            NewGame();
        }

        foreach (IDataPersistence obj in dataPersistenceObjects)
        {
            obj.LoadData(gameData);
        }
        Debug.Log("loaded " + gameData.currency);
    }

    private void OnApplicationQuit()
    {
        SaveGame();
    }

    private void OnApplicationPause()
    {
        SaveGame();
    }

    private List<IDataPersistence> FindAllDataPersistenceObjects()
    {
        return new List<IDataPersistence>(FindObjectsOfType<MonoBehaviour>().OfType<IDataPersistence>());
    }
}
