using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlacedWorkstation : MonoBehaviour
{
    public GameObject tapUICanvas;
    private AgencyManager agencyManager;
    public WorkstationData minigameData;

    GameObject tapui;
    public int shopIndex;

    // Start is called before the first frame update
    void Start()
    {
        agencyManager = transform.parent.gameObject.GetComponent<AgencyManager>();
        tapUICanvas.GetComponent<Canvas>().worldCamera = Camera.main;
        tapUICanvas.GetComponent<Canvas>().sortingLayerName = "UIUX";


        transform.Find("Sprite").gameObject.GetComponent<Animator>().runtimeAnimatorController = Instantiate(minigameData.workstationIdle);

        //for some reason setting the size wasn't working with the animation. Now, the size property is keyframed instead. 
        //transform.Find("Sprite").gameObject.GetComponent<SpriteRenderer>().size = Vector2.one;

        tapui = tapUICanvas.transform.Find("Buttons").gameObject;


        tapUICanvas.SetActive(false);
    }

    private void Update()
    {
        //move the UI to stay on the workstation
        tapui.transform.position = gameObject.transform.position;
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

        if (!active) //close
        {
            tapUICanvas.SetActive(false);
            return;
        }

        //make ui visible
        tapUICanvas.SetActive(true);

        GameObject tapuiBG = tapui.transform.Find("TapUIBG").gameObject;

        //set job title
        tapuiBG.transform.Find("JobTitle").GetComponent<TMP_Text>().text = minigameData.BuildJobTitle();

        //workstation is max level
        if (minigameData.agentLevel >= 3)
        {
            tapuiBG.transform.Find("ChallengeProgressText").GetComponent<TMP_Text>().text = "Max Level";
            tapuiBG.transform.Find("ChallengeProgress").GetComponent<Slider>().value = 1f;

            tapuiBG.transform.Find("ChallengeButton").GetComponent<Button>().interactable = false;
            return;
        }
        //workstation isn't max level
        tapuiBG.transform.Find("ChallengeProgressText").GetComponent<TMP_Text>().text = minigameData.challengeCooldown + "/" + Mathf.Pow(2, minigameData.agentLevel + 1);
        tapuiBG.transform.Find("ChallengeProgress").GetComponent<Slider>().value = minigameData.challengeCooldown / Mathf.Pow(2f, minigameData.agentLevel + 1f);

        if(minigameData.challengeCooldown / Mathf.Pow(2f, minigameData.agentLevel + 1f) < 1f)
        {
            //challenge bar isnt full
            tapuiBG.transform.Find("ChallengeButton").GetComponent<Button>().interactable = false;
        }
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
        if(minigameData.challengeCooldown >= Mathf.Pow(2, minigameData.agentLevel))
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
