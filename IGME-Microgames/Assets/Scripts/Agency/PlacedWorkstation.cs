using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacedWorkstation : MonoBehaviour
{
    public GameObject tapUICanvas;
    private AgencyManager agencyManager;
    public WorkstationData minigameData;

    // Start is called before the first frame update
    void Start()
    {
        tapUICanvas.SetActive(false);
        agencyManager = gameObject.transform.parent.gameObject.GetComponent<AgencyManager>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    /// <summary>
    /// 
    /// </summary>
    /// <returns>whether the tapUI is now active</returns>
    public bool ToggleTapUI()
    {
        SetTapUI(!tapUICanvas.activeSelf);
        return gameObject.activeSelf;
    }

    public void SetTapUI(bool active)
    {
        if (!active)
        {
            tapUICanvas.SetActive(false);
            return;
        }
        GameObject radialButtons = tapUICanvas.transform.Find("RadialButtons").gameObject;

        radialButtons.transform.position = Camera.main.WorldToScreenPoint(gameObject.transform.position);
        tapUICanvas.SetActive(true);
        return;
    }

    public void Practice()
    {
        agencyManager.gameManager.BuildPlaylist(new WorkstationData[] { minigameData }, 5, true);
    }

    public void Challenge()
    {
        agencyManager.gameManager.BuildPlaylist(new WorkstationData[] { minigameData }, 1, false);
    }

    public void ToggleActive()
    {

    }

    public void Collapse()
    {

    }
}
