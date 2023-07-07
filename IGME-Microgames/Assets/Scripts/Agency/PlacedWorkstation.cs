using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlacedWorkstation : MonoBehaviour
{
    public GameObject tapUICanvas;
    private AgencyManager agencyManager;
    public WorkstationData minigameData;
    public int shopIndex;

    // Start is called before the first frame update
    void Start()
    {
        agencyManager = gameObject.transform.parent.gameObject.GetComponent<AgencyManager>();
        tapUICanvas.GetComponent<Canvas>().worldCamera = Camera.main;
        tapUICanvas.GetComponent<Canvas>().sortingLayerName = "UIUX";

        tapUICanvas.SetActive(false);
    }

    /// <summary>
    /// turns the workstation options UI on or off
    /// </summary>
    /// <returns>whether the tapUI is now active</returns>
    public bool ToggleTapUI()
    {
        SetTapUI(!tapUICanvas.activeSelf);
        return gameObject.activeSelf;
    }

    /// <summary>
    /// enables or disables the workstation options UI
    /// </summary>
    /// <param name="active"></param>
    public void SetTapUI(bool active)
    {

        if (!active)
        {
            tapUICanvas.SetActive(false);
            return;
        }
        tapUICanvas.SetActive(true);
        GameObject tapui = tapUICanvas.transform.Find("Buttons").gameObject;

        tapui.transform.position = gameObject.transform.position;
        return;
    }

    /// <summary>
    /// starts and builds a playlist with just this minigame
    /// </summary>
    public void Practice()
    {
        agencyManager.gameManager.BuildPlaylist(new WorkstationData[] { minigameData }, 5, true, GameMode.practice);
    }

    /// <summary>
    /// starts a playlist with just this minigame, once
    /// </summary>
    public void Challenge()
    {
        if(minigameData.challengeCooldown <= 0)
        {
            agencyManager.gameManager.BuildPlaylist(new WorkstationData[] { minigameData }, 1, false, GameMode.challenge);
        }
    }

    /// <summary>
    /// removes or adds this minigame to the shuffle playlist
    /// </summary>
    public void ToggleActive()
    {
        minigameData.inPlaylist = !minigameData.inPlaylist;

        tapUICanvas.transform.Find("Buttons").Find("TapUIBG").Find("DeactivateButton").Find("Text (TMP)").
            gameObject.GetComponent<TMP_Text>().text = minigameData.inPlaylist ? "Deactivate" : "Activate";
    }

    /// <summary>
    /// returns this workstation to the shop. 
    /// </summary>
    public void Collapse()
    {
        agencyManager.builder.DestroyFurnitureTile(transform.position);
        minigameData.isOutline = true;
        agencyManager.ReturnToShop(this);
    }
}
