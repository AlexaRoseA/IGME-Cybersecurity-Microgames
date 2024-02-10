using System;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;

public class GooglePlaySaveHandler
{
    PlayGamesClientConfiguration clientConfig;
    bool useGPGS;
    bool isSaving;

    GameData data;
    Action<GameData> loadCallback;

    public GooglePlaySaveHandler()
    {
        //if google play has authenticated, initalize google play games services Saves
        useGPGS = PlayGamesPlatform.Instance.IsAuthenticated();
        if (useGPGS) InitGPGS();
    }

    void InitGPGS()
    {
        Debug.Log("Initializing GPGS Saving");
        clientConfig = new PlayGamesClientConfiguration.Builder().EnableSavedGames().Build();

    }

    /// <summary>
    /// opens the longest playtime save game in GPGS, and overwrites the data with the passed data.
    /// </summary>
    /// <param name="data"></param>
    public void Save(GameData data)
    {
        if(useGPGS)
        {
            this.data = data;
            PlayGamesPlatform.Instance.SavedGame.
                OpenWithAutomaticConflictResolution("agency", DataSource.ReadCacheOrNetwork, ConflictResolutionStrategy.UseLongestPlaytime, SaveOpened);
        }
    }

    /// <summary>
    /// serialize gameData and commit to GPGS
    /// </summary>
    /// <param name="reqStatus"></param>
    /// <param name="meta"></param>
    private void SaveOpened(SavedGameRequestStatus reqStatus, ISavedGameMetadata meta)
    {
        //Debug.Log(reqStatus);
        //Debug.Log(meta);
        if (reqStatus == SavedGameRequestStatus.Success)
        {
            Debug.Log("Attempting save...");
            //serialize
            byte[] serializedData = Encoding.ASCII.GetBytes(JsonUtility.ToJson(data, true));

            //pass to GPGS
            SavedGameMetadataUpdate updatedMeta = new SavedGameMetadataUpdate.Builder().WithUpdatedDescription("Updated at: " + DateTime.Now.ToString()).Build();
            PlayGamesPlatform.Instance.SavedGame.CommitUpdate(meta, updatedMeta, serializedData, SaveCompleted);
        }
        else
        {
            Debug.LogError("Failed to find Save");
        }
    }

    /// <summary>
    /// called when a save is pushed. logs success or failure.
    /// </summary>
    /// <param name="status"></param>
    /// <param name="meta"></param>
    private void SaveCompleted(SavedGameRequestStatus status, ISavedGameMetadata meta)
    {
        if(status == SavedGameRequestStatus.Success)
        {
            Debug.Log("Successfully saved!");
        }
        else
        {
            Debug.Log("Failed save");
        }
    }

    /// <summary>
    ///
    /// </summary>
    /// <param name="callback">called when the save is loaded. passes the deserialized gameData object from GPGS.</param>
    public void Load(Action<GameData> callback)
    {
        if (useGPGS)
        {
            PlayGamesPlatform.Instance.RequestPermission("https://www.googleapis.com/auth/drive.appdata", permissionResult => {
                //Debug.Log(permissionResult);
                loadCallback = callback;
                PlayGamesPlatform.Instance.SavedGame.
                    OpenWithAutomaticConflictResolution("agency", DataSource.ReadCacheOrNetwork, ConflictResolutionStrategy.UseLongestPlaytime, LoadOpened);
            });
        }
    }

    /// <summary>
    /// Reads the loaded save data. 
    /// </summary>
    /// <param name="reqStatus"></param>
    /// <param name="meta"></param>
    private void LoadOpened(SavedGameRequestStatus reqStatus, ISavedGameMetadata meta)
    {
        //Debug.Log(reqStatus);
        //Debug.Log(meta);
        if (reqStatus == SavedGameRequestStatus.Success)
        {
            Debug.Log("Attempting load...");

            SavedGameMetadataUpdate updatedMeta = new SavedGameMetadataUpdate.Builder().WithUpdatedDescription("Updated at: " + DateTime.Now.ToString()).Build();
            PlayGamesPlatform.Instance.SavedGame.ReadBinaryData(meta, LoadCompleted);
        }
        else
        {
            Debug.LogError("Failed to find Save");
        }
    }

    /// <summary>
    /// calls the callback, passing the deserialized gameData from GPGS.
    /// </summary>
    /// <param name="reqStatus"></param>
    /// <param name="data"></param>
    private void LoadCompleted(SavedGameRequestStatus reqStatus, byte[] data)
    {
        if (reqStatus == SavedGameRequestStatus.Success)
        {
            Debug.Log("Successfully loaded!");

            //Deserialize
            GameData loadedData = JsonUtility.FromJson<GameData>(Encoding.ASCII.GetString(data));

            //callback
            loadCallback(loadedData);
        }
        else
        {
            Debug.Log("Failed load");
        }
    }
}
