using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public enum PurchaseState
{
    ForSale, //hasn't been bought
    Purchased, //bought, but not placed in agency
    Placed
}

public class AgencyManager : LevelManager, IDataPersistence
{

    public GameObject agencyParent; // where the gamemanager checks for workstations to build playlist
    public GameObject shopUI; // shown and hidden when shop is opened and closed
    public GameObject profileUI; //shown and hidden when profile is opened and closed
    public GameObject workstationShopCardPrefab; // prefab for what a shop card looks like
    public Behaviour[] disableWhileInShop; // components that will be disabled when the shop is opened
    public Builder builder; // Handles placing shop items after being bought
    public AgencyTutorial tutorial;

    public int currency;
    public TMP_Text currencyText;

    public GameObject workstationPrefab;
    public WorkstationData[] workstations;

    //private PurchaseState[] purchaseStates; // purchase state for each shop item
    private GameObject[] workstationCards; // shop ui element for each shop item

    protected override void Start()
    {
        base.Start();

        //purchaseStates = new PurchaseState[workstations.Length];


        InitShop();

        profileUI.SetActive(false); //hide the shop until it is shown

        tutorial.ShowTip("OpenStore");
    }

    /// <summary>
    /// called by the play game button in the agency. 
    /// calls the gameManager to start a game. 
    /// </summary>
    public void PlayGame()
    {
        /*TileBase[] baseTiles = furnitureMap.GetTilesBlock(new BoundsInt(0, 0, 0, 6, 10, 0));
        List<FurnitureTile> furnitureList = new List<FurnitureTile>();

        foreach(TileBase tile in baseTiles) 
        {
            if(tile is FurnitureTile)
            {
                furnitureList.Add((FurnitureTile)tile);
            }
        }*/

        DataPersistenceManager.instance.SaveGame();

        PlacedWorkstation[] placed = agencyParent.GetComponentsInChildren<PlacedWorkstation>();
        WorkstationData[] workstations = new WorkstationData[placed.Length];

        for(int i = 0; i < placed.Length; i++)
        {
            workstations[i] = placed[i].minigameData;
        }

        
        int playlistLength = gameManager.BuildPlaylist(workstations);

        if(playlistLength == 0)
        {
            tutorial.RefreshTip("NeedAgentToPlay");
            tutorial.ShowTip("NeedAgentToPlay");
        }
            
    }



    /// <summary>
    /// open the shop UI
    /// </summary>
    public void OpenProfile()
    {
        builder.CancelPlace();
        tutorial.HideTip("OpenStore");
        tutorial.HideTip("NeedAgentToPlay");

        profileUI.SetActive(true); //set profile visibility and interactability

        UpdateProfileInformation();
        //disable everything that should be disabled
        foreach (Behaviour comp in disableWhileInShop)
        {
            if (comp is Selectable) //ui elements that have interactable
            {
                ((Selectable)comp).interactable = false;
            }
            else
            {
                comp.enabled = false;
            }
        }
    }
    /// <summary>
    /// Updates the profile information based on the player's current information
    /// </summary>
    public void UpdateProfileInformation()
    {
        GameObject.Find("CurrencyTxtProfile").GetComponent<TextMeshProUGUI>().text = currency.ToString();
        GameObject.Find("LevelProfile").GetComponent<TextMeshProUGUI>().text = "Level " + gameManager.playerLevel.ToString();
        
        // Add update to google profile (username, image) information here if not populated

    }

    public void CloseProfile()
    {
        profileUI.SetActive(false);

        foreach (Behaviour comp in disableWhileInShop)
        {
            if (comp is Selectable)
            {
                ((Selectable)comp).interactable = true;
            }
            else
            {
                comp.enabled = true;
            }
        }
    }

    /// <summary>
    /// open the shop UI
    /// </summary>
    public void OpenShop()
    {
        builder.CancelPlace();
        tutorial.HideTip("OpenStore");
        tutorial.HideTip("NeedAgentToPlay");
        tutorial.ShowTip("HireAgent");

        shopUI.SetActive(true); //set shop visibility and interactability

        //disable everything that should be disabled
        foreach(Behaviour comp in disableWhileInShop)
        {
            if(comp is Selectable) //ui elements that have interactable
            {
                ((Selectable)comp).interactable = false;
            }
            else
            {
                comp.enabled = false;
            }
        }
    }

    /// <summary>
    /// close the shop UI
    /// </summary>
    public void CloseShop()
    {
        shopUI.SetActive(false);

        foreach (Behaviour comp in disableWhileInShop)
        {
            if (comp is Selectable)
            {
                ((Selectable)comp).interactable = true;
            }
            else
            {
                comp.enabled = true;
            }
        }
        UpdatePlayButton();
    }

    /// <summary>
    /// initalizes the shop, creating shop cards for each workstation prefab. 
    /// </summary>
    private void InitShop()
    {
        //each workstation card is a shop item
        workstationCards = new GameObject[9];
        for (int i = 0; i < workstationCards.Length; i++)
        {

            workstationCards[i] = GameObject.Find("CardBG (" + i + ")");

            //if there isn't a prefab for this card, disable the card
            if (i >= workstations.Length)
            {
                workstationCards[i].SetActive(false);
                continue;
            }
            Transform cardBG = workstationCards[i].transform;

            TMP_Text jobTitle = cardBG.Find("WorkstationName").gameObject.GetComponent<TMP_Text>();
            Image img = cardBG.Find("WorkstationImg").gameObject.GetComponent<Image>();

            img.sprite = workstations[i].shopSprite;
            jobTitle.text = workstations[i].jobTitle;
            UpdatePurchaseStateDisplay(i);
        }
        shopUI.SetActive(false); //hide the shop until it is shown
        UpdatePlayButton();
    }

    /// <summary>
    /// attempt to purchase a workstation.
    /// </summary>
    /// <param name="prefabIndex">index of the workstation to buy</param>
    public void Purchase(int prefabIndex)
    {
        if (workstations[prefabIndex].price > currency) return;

        currency -= workstations[prefabIndex].price;
        workstations[prefabIndex].saveData.purchaseState = (int)PurchaseState.Purchased;

        UpdateCurrency();

        for(int i = 0; i < workstations.Length; i++)
            UpdatePurchaseStateDisplay(i);

        Place(prefabIndex);
    }

    void UpdateCurrency()
    {
        currencyText.text = currency.ToString();
    }




    public void Place(int prefabIndex)
    {

        CloseShop();
        tutorial.ShowTip("PlaceAgent");

        //passes the method to be called when placement is finalized- this won't get called if the placement is cancelled. 
        FinishPlacementDelegate finalize = FinalizePlacement;
        
        GameObject newWorkstation = Instantiate(workstationPrefab);
        newWorkstation.GetComponent<PlacedWorkstation>().minigameData = workstations[prefabIndex];

        newWorkstation.GetComponent<PlacedWorkstation>().minigameData.saveData.shopIndex = prefabIndex;

        //attach the new workstation to the agency so that it is added to the playlist
        newWorkstation.transform.parent = agencyParent.transform;

        newWorkstation.transform.Find("Sprite").GetComponent<Collider2D>().enabled = false;
        builder.StartPlacing(newWorkstation, finalize, prefabIndex);
    }

    /// <summary>
    /// updates the button of the given shop card, based on the card's state. this will also rebind the correct listener. 
    /// </summary>
    /// <param name="i">index in the shop array of the card to be updated</param>
    private void UpdatePurchaseStateDisplay(int i)
    {
        Transform cardBG = workstationCards[i].transform;
        Button purchaseButton = cardBG.gameObject.GetComponent<Button>();
        Image purchaseButtonDisplay = cardBG.Find("PurchaseButton").GetComponent<Image>();
        TMP_Text purchaseText = cardBG.Find("PurchaseButton").Find("GridGroup").Find("Text (TMP)").gameObject.GetComponent<TMP_Text>();
        
        purchaseButton.onClick.RemoveAllListeners();

        switch (workstations[i].saveData.purchaseState)
        {
            case (int)PurchaseState.ForSale:
                purchaseText.text = "$" + workstations[i].price;
                purchaseButton.onClick.AddListener(() => Purchase(i));
                purchaseButton.interactable = currency >= workstations[i].price;
                break;

            case (int)PurchaseState.Purchased:
                purchaseText.text = "Place";
                purchaseButton.onClick.AddListener(() => Place(i));
                purchaseButton.interactable = true;
                break;

            case (int)PurchaseState.Placed:
                purchaseText.text = "Placed";
                purchaseButton.interactable = false;
                break;
        }
        purchaseButtonDisplay.color = purchaseButton.interactable ? new Color(0f, 1f, 0f) : new Color(0f, .5f, 0f);
    }

    private void UpdatePlayButton()
    {
        bool canPlay = false;
        for (int i = 0; i < workstations.Length; i++)
        {
            if (workstations[i].saveData.purchaseState == (int)PurchaseState.Placed) canPlay = true;
        }
        GameObject.Find("PlayGameButton").GetComponent<Button>().interactable = canPlay;
    }


    private void FinalizePlacement(int shopIndex)
    {
        tutorial.ShowTip("PlayGame");
        workstations[shopIndex].saveData.purchaseState = (int)PurchaseState.Placed;
        UpdatePurchaseStateDisplay(shopIndex);
        UpdatePlayButton();
    }

    public void ReturnToShop(PlacedWorkstation workstation)
    {
        int shopIndex = workstation.minigameData.saveData.shopIndex;
        workstations[shopIndex] = workstation.minigameData;
        Destroy(workstation.gameObject);
        workstations[shopIndex].saveData.purchaseState = (int)PurchaseState.Purchased;
        UpdatePurchaseStateDisplay(shopIndex);
        UpdatePlayButton();
    }

    public void SetTutorials(Toggle toggle)
    {
        gameManager.tutorialsEnabled = toggle.isOn;
    }



    void IDataPersistence.LoadData(GameData data)
    {
        currency = data.currency;

        //earned currency is what the player has earned since the load
        /*
        currency += gameManager.earnedCurrency;
        gameManager.earnedCurrency = 0;
        UpdateCurrency();*/

        Debug.Log("Loading " + data.workstationSaveDatas.Length + " Workstations");
        for(int i = 0; i < data.workstationSaveDatas.Length; i++)
        {
            if (data.workstationSaveDatas[i] != null)
            {
                workstations[i].saveData = data.workstationSaveDatas[i];
                if(workstations[i].saveData.purchaseState == (int)PurchaseState.Placed)
                {
                    Place(i);
                    //Debug.Log("Loading placed workstation #" + i + " at: x: " + workstations[i].saveData.x + " y: " + workstations[i].saveData.y);
                    builder.placingWorkstation.transform.position = builder.floor.GetCellCenterWorld(new Vector3Int(workstations[i].saveData.x, workstations[i].saveData.y));
                    builder.FinalizePlace();
                }
            }
            else
                workstations[i].saveData = new WorkstationSaveData();
        }
        currency += gameManager.ScoreMinigames(this);
        UpdateCurrency();
    }

    void IDataPersistence.SaveData(ref GameData data)
    {
        data.currency = currency;

        //data.purchaseStates = new int[purchaseStates.Length];
        //for(int i = 0; i < purchaseStates.Length; i++)
        //{
        //    data.purchaseStates[i] = (int)purchaseStates[i];
        //    UpdatePurchaseStateDisplay(i);
        //}


        PlacedWorkstation[] placed = FindObjectsByType<PlacedWorkstation>(FindObjectsSortMode.InstanceID);
        Debug.Log("Saving " + placed.Length + " placed workstations");
        data.workstationSaveDatas = new WorkstationSaveData[workstations.Length];
        for(int i = 0; i < workstations.Length; i++)
        {
            data.workstationSaveDatas[i] = workstations[i].saveData;

            foreach(PlacedWorkstation placedWorkstation in placed)
            {
                //iterate through placed workstations, if the placed workstation is this workstation, save its position
                if(placedWorkstation.minigameData == workstations[i])
                {
                    //set position (x&y) of saveData
                    
                    data.workstationSaveDatas[i].x = builder.floor.WorldToCell(placedWorkstation.transform.position).x;
                    data.workstationSaveDatas[i].y = builder.floor.WorldToCell(placedWorkstation.transform.position).y;

                    //Debug.Log("Workstation " + i + " is placed at: " + data.workstationSaveDatas[i].x + ", " + data.workstationSaveDatas[i].y);
                }
            }
        }
        
    }
}
