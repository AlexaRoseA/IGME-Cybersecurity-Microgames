using System;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;

public class SaveGameManager : MonoBehaviour
{
    PlayGamesClientConfiguration clientConfig;
    bool useGPGS;
    bool isSaving;

    void Start()
    {
        useGPGS = PlayGamesPlatform.Instance.IsAuthenticated();
        Debug.Log("Save Game instance: " + useGPGS);
        if (useGPGS) InitGPGS();
    }

    void InitGPGS()
    {
        Debug.Log("Init GPGS Saving");
        clientConfig = new PlayGamesClientConfiguration.Builder().EnableSavedGames().Build();
        OpenSave(true);
    }

    public void OpenSave(bool saving)
    {
        //Debug.Log("Searching for save..." + Social.localUser.authenticated);
        if (useGPGS)
        {
            Debug.Log("Searching for save...");
            isSaving = saving;
            ((PlayGamesPlatform)Social.Active).SavedGame.
                OpenWithAutomaticConflictResolution("MyFileName", DataSource.ReadCacheOrNetwork, ConflictResolutionStrategy.UseLongestPlaytime, SaveOpened);
        }
    }

    void SaveOpened(SavedGameRequestStatus reqStatus, ISavedGameMetadata meta)
    {
        if (reqStatus == SavedGameRequestStatus.Success)
        {
            if (isSaving)
            {
                Debug.Log("Attempting save...");
                byte[] myData = new byte[0];
                SavedGameMetadataUpdate updatedMeta = new SavedGameMetadataUpdate.Builder().WithUpdatedDescription("Updated at: " + DateTime.Now.ToString()).Build();
                ((PlayGamesPlatform)Social.Active).SavedGame.CommitUpdate(meta, updatedMeta, myData, SaveCallback);
            }
            else
            {
                Debug.Log("Attempting Load... ");
            }
        }
        else
        {
            Debug.Log("Failed to find Save");

        }
    }

    private void SaveCallback(SavedGameRequestStatus status, ISavedGameMetadata meta)
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
}
