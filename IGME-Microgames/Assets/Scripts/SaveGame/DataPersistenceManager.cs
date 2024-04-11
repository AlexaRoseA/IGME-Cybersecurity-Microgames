using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEditor;

public class DataPersistenceManager : LevelManager
{
    public static DataPersistenceManager instance { get; private set; }

    public GameObject loadingScreen;

    private GameData gameData;

    private List<IDataPersistence> dataPersistenceObjects;

    private bool hasLoaded = false;
    //prioritize google play handler, but if it fails or isn't available use local
    GooglePlaySaveHandler googlePlayHandler;
    LocalSaveHandler localSaveHandler;

    /// <summary>
    /// singleton
    /// </summary>
    private void Awake()
    {
        if(instance != null) Debug.LogError("Found multiple data persistence managers");
        instance = this;
    }


    protected override void Start()
    {
        base.Start();
        dataPersistenceObjects = FindAllDataPersistenceObjects();
        googlePlayHandler = new GooglePlaySaveHandler();
        localSaveHandler = new LocalSaveHandler();

        LoadGame();
    }

    public void NewGame()
    {
        gameData = new GameData();
    }

    public void SaveGame()
    {
        //update the gameData object
        foreach (IDataPersistence obj in dataPersistenceObjects)
        {
            obj.SaveData(ref gameData);
        }

        //playtime
        System.TimeSpan timeSinceLastSave = System.DateTime.Now.Subtract(gameManager.timeOfLastSave);
        //Debug.Log("Time since last save: " + timeSinceLastSave);
        gameManager.timeOfLastSave = System.DateTime.Now;
        gameData.playTime += timeSinceLastSave.TotalMinutes;
        //Debug.Log("Playtime: " + gameData.playTime);

        //Save to local and GPGS
        googlePlayHandler.Save(gameData);
        localSaveHandler.Save(gameData);
    }

    public void LoadGame()
    {
        //first try to load from GPGS
        googlePlayHandler.Load(GameLoaded);
    }

    private void GameLoaded(GameData gpgs)
    {
        GameData local = localSaveHandler.Load();
        //gameData = gpgs;
        
        if (gpgs == null && local == null)
        {
            //couldn't find any saves
            Debug.Log("No game data found. making a new game.");
            NewGame();
        }
        else if (gpgs == null)
        {
            //found only local save
            gameData = local;
        }
        else if (local == null)
        {
            //found only GPGS save
            gameData = gpgs;
        }
        else
        {
            //found both-- take longer playtime
            gameData = gpgs.playTime > local.playTime ? gpgs : local;
        }

        foreach (IDataPersistence obj in dataPersistenceObjects)
        {
            obj.LoadData(gameData);
        }
        hasLoaded = true;
        loadingScreen.SetActive(false);
    }

    private void OnApplicationQuit()
    {
        SaveGame();
    }

    private void OnApplicationPause()
    {
        //Often on android, OnApplicationQuit will never be called, only OnApplicationPause.
        //However, in the editor this will lead to an error because it starts the game paused, and tries to save before the save objects are initialized.
        if(hasLoaded) SaveGame();
    }

    private List<IDataPersistence> FindAllDataPersistenceObjects()
    {
        return new List<IDataPersistence>(FindObjectsOfType<MonoBehaviour>().OfType<IDataPersistence>());
    }
}
