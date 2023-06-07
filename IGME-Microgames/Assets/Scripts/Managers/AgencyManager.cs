using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.Tilemaps;

public enum InteractionMode
{
    Move,
    Floor,
    Wall,
    Furniture
}

public class AgencyManager : LevelManager
{
    public Tilemap furnitureMap;
    public InteractionMode interactionMode;
    public TMP_Text interactionModeButtonText;
    public Movement playerMovement;

    void Start()
    {
        base.Start();

        //load agency from GameManager


    }


    /// <summary>
    /// called by the play game button in the agency. 
    /// calls the gameManager to start a game. 
    /// </summary>
    public void PlayGame()
    {
        TileBase[] baseTiles = furnitureMap.GetTilesBlock(new BoundsInt(0, 0, 0, 6, 10, 0));
        List<FurnitureTile> furnitureList = new List<FurnitureTile>();

        foreach(TileBase tile in baseTiles) 
        {
            if(tile is FurnitureTile)
            {
                furnitureList.Add((FurnitureTile)tile);
            }
        }
        
        gameManager.BuildPlaylist(furnitureList);
    }

    public void SwitchInteractionMode()
    {
        interactionMode++;
        if((int)interactionMode == 4)
        {
            interactionMode = InteractionMode.Move;
            playerMovement.enabled = true;
        }
        else
        {
            playerMovement.enabled = false;
        }
        interactionModeButtonText.text = interactionMode.ToString();
    }
}
