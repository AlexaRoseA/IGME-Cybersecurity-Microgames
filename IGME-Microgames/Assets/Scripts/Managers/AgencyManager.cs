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

    public GameObject[] workstationPrefabs; // shop items

    private PurchaseState[] purchaseStates; // purchase state for each shop item
    private GameObject[] workstationCards; // shop ui element for each shop item

    protected override void Start()
    {
        base.Start();

        purchaseStates = new PurchaseState[workstationPrefabs.Length];


        InitShop();
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

        Workstation[] workstations = agencyParent.GetComponentsInChildren<Workstation>();
        gameManager.BuildPlaylist(workstations);
    }


    public void OpenShop()
    {
        builder.CancelPlace();

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
        workstationCards = new GameObject[workstationPrefabs.Length];
        for (int i = 0; i < workstationPrefabs.Length; i++)
        {
            workstationCards[i] = Instantiate(workstationShopCardPrefab, Vector3.zero, Quaternion.identity);
            workstationCards[i].transform.SetParent(shopUI.transform);

            Workstation workstation = workstationPrefabs[i].GetComponent<Workstation>();
            
            Transform cardBG = workstationCards[i].transform.Find("Canvas").Find("CardBG");

            //TODO: make this responsive
            //this will line up cards in rows of 3
            int x = i % 3 * 302 + 92;
            int y = 1296 - (i / 3 * 402);

            cardBG.position = new Vector3(x, y, 0f);

            TMP_Text jobTitle = cardBG.Find("WorkstationName").gameObject.GetComponent<TMP_Text>();
            Image img = cardBG.Find("WorkstationImg").gameObject.GetComponent<Image>();

            jobTitle.text = workstation.JobTitle;
            UpdatePurchaseStateDisplay(i);
        }
        shopUI.SetActive(false); //hide the shop until it is shown
    }

    public void Purchase(int prefabIndex)
    {
        //TODO: check and reduce money
        purchaseStates[prefabIndex] = PurchaseState.Purchased;
        UpdatePurchaseStateDisplay(prefabIndex);
    }

    public void Place(int prefabIndex)
    {

        CloseShop();

        //passes the method to be called when placement is finalized- this won't get called if the placement is cancelled. 
        FinishPlacementDelegate finalize = this.FinalizePlacement;
        
        GameObject newWorkstation = Instantiate(workstationPrefabs[prefabIndex]);
        //attach the new workstation to the agency so that it is added to the playlist
        newWorkstation.transform.parent = agencyParent.transform;
        builder.StartPlacing(newWorkstation, finalize, prefabIndex);
    }

    /// <summary>
    /// updates the button of the given shop card, based on the card's state. this will also rebind the correct listener. 
    /// </summary>
    /// <param name="i">index in the shop array of the card to be updated</param>
    private void UpdatePurchaseStateDisplay(int i)
    {
        Transform cardBG = workstationCards[i].transform.Find("Canvas").Find("CardBG");
        Button purchaseButton = cardBG.Find("PurchaseButton").gameObject.GetComponent<Button>();
        TMP_Text purchaseText = cardBG.Find("PurchaseButton").Find("Text (TMP)").gameObject.GetComponent<TMP_Text>();

        purchaseButton.onClick.RemoveAllListeners();

        switch (purchaseStates[i])
        {
            case PurchaseState.ForSale:
                purchaseText.text = "$" + workstationPrefabs[i].GetComponent<Workstation>().Price;
                purchaseButton.onClick.AddListener(() => Purchase(i));
                break;

            case PurchaseState.Purchased:
                purchaseText.text = "Place";
                purchaseButton.onClick.AddListener(() => Place(i));
                break;

            case PurchaseState.Placed:
                purchaseText.text = "Placed";
                purchaseButton.interactable = false;
                break;
        }
    }

    private void FinalizePlacement(int shopIndex)
    {
        purchaseStates[shopIndex] = PurchaseState.Placed;
        UpdatePurchaseStateDisplay(shopIndex);
    }
}
