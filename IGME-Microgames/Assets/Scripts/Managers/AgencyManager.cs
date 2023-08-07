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

public class AgencyManager : LevelManager
{

    public GameObject agencyParent; // where the gamemanager checks for workstations to build playlist
    public GameObject shopUI; // shown and hidden when shop is opened and closed
    public GameObject workstationShopCardPrefab; // prefab for what a shop card looks like
    public Behaviour[] disableWhileInShop; // components that will be disabled when the shop is opened
    public Builder builder; // Handles placing shop items after being bought
    public AgencyTutorial tutorial;


    public GameObject workstationPrefab;
    public WorkstationData[] workstations;

    private PurchaseState[] purchaseStates; // purchase state for each shop item
    private GameObject[] workstationCards; // shop ui element for each shop item

    protected override void Start()
    {
        base.Start();

        purchaseStates = new PurchaseState[workstations.Length];


        InitShop();

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
    }

    /// <summary>
    /// attempt to purchase a workstation.
    /// </summary>
    /// <param name="prefabIndex">index of the workstation to buy</param>
    public void Purchase(int prefabIndex)
    {
        if (workstations[prefabIndex].price > gameManager.currency) return;

        gameManager.currency -= workstations[prefabIndex].price;
        purchaseStates[prefabIndex] = PurchaseState.Purchased;

        gameManager.UpdateCurrency();

        for(int i = 0; i < workstations.Length; i++)
            UpdatePurchaseStateDisplay(i);

        Place(prefabIndex);
    }

    public void Place(int prefabIndex)
    {

        CloseShop();
        tutorial.ShowTip("PlaceAgent");

        //passes the method to be called when placement is finalized- this won't get called if the placement is cancelled. 
        FinishPlacementDelegate finalize = FinalizePlacement;
        
        GameObject newWorkstation = Instantiate(workstationPrefab);
        newWorkstation.GetComponent<PlacedWorkstation>().minigameData = Instantiate(workstations[prefabIndex]);

        newWorkstation.GetComponent<PlacedWorkstation>().shopIndex = prefabIndex;

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
        Button purchaseButton = cardBG.Find("PurchaseButton").gameObject.GetComponent<Button>();
        TMP_Text purchaseText = cardBG.Find("PurchaseButton").Find("Text (TMP)").gameObject.GetComponent<TMP_Text>();
        
        purchaseButton.onClick.RemoveAllListeners();

        switch (purchaseStates[i])
        {
            case PurchaseState.ForSale:
                purchaseText.text = "$" + workstations[i].price;
                purchaseButton.onClick.AddListener(() => Purchase(i));
                purchaseButton.interactable = gameManager.currency >= workstations[i].price;
                break;

            case PurchaseState.Purchased:
                purchaseText.text = "Place";
                purchaseButton.onClick.AddListener(() => Place(i));
                purchaseButton.interactable = true;
                break;

            case PurchaseState.Placed:
                purchaseText.text = "Placed";
                purchaseButton.interactable = false;
                break;
        }
    }

    private void FinalizePlacement(int shopIndex)
    {
        tutorial.ShowTip("PlayGame");
        purchaseStates[shopIndex] = PurchaseState.Placed;
        UpdatePurchaseStateDisplay(shopIndex);

    }

    public void ReturnToShop(PlacedWorkstation workstation)
    {
        int shopIndex = workstation.shopIndex;
        workstations[shopIndex] = workstation.minigameData;
        Destroy(workstation.gameObject);
        purchaseStates[shopIndex] = PurchaseState.Purchased;
        UpdatePurchaseStateDisplay(shopIndex);
    }

    public void SetTutorials(Toggle toggle)
    {
        gameManager.tutorialsEnabled = toggle.isOn;
    }
}
