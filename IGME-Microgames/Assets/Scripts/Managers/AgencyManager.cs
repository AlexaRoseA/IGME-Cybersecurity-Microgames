using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.Tilemaps;
using UnityEngine.UI;

public enum PurchaseState
{
    ForSale,
    Purchased,
    Placed
}

public class AgencyManager : LevelManager
{

    public GameObject agencyParent;

    public GameObject shopUI;

    public GameObject[] workstationPrefabs;
    private PurchaseState[] purchaseStates;

    public GameObject workstationShopCardPrefab;

    private GameObject[] workstationCards;

    public Behaviour[] disableWhileInShop;


    protected override void Start()
    {
        base.Start();

        purchaseStates = new PurchaseState[workstationPrefabs.Length];

        purchaseStates[0] = PurchaseState.Placed;
        purchaseStates[1] = PurchaseState.Purchased;

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
        shopUI.SetActive(true);

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
        workstationCards = new GameObject[workstationPrefabs.Length];
        for (int i = 0; i < workstationPrefabs.Length; i++)
        {
            workstationCards[i] = Instantiate(workstationShopCardPrefab, Vector3.zero, Quaternion.identity);
            workstationCards[i].transform.SetParent(shopUI.transform);

            Workstation workstation = workstationPrefabs[i].GetComponent<Workstation>();
            
            Transform cardBG = workstationCards[i].transform.Find("Canvas").Find("CardBG");

            //TODO: make this responsive
            int x = i % 3 * 302 + 92;
            int y = 1296 - (i / 3 * 402);

            cardBG.position = new Vector3(x, y, 0f);

            TMP_Text jobTitle = cardBG.Find("WorkstationName").gameObject.GetComponent<TMP_Text>();
            Image img = cardBG.Find("WorkstationImg").gameObject.GetComponent<Image>();

            jobTitle.text = workstation.jobTitle;
            UpdatePurchaseStateDisplay(i);
        }
        shopUI.SetActive(false);
    }

    public void Purchase(int prefabIndex)
    {
        Debug.Log("Purchasing " + prefabIndex);
        purchaseStates[prefabIndex] = PurchaseState.Purchased;
        UpdatePurchaseStateDisplay(prefabIndex);
    }

    public void Place(int prefabIndex)
    {
        Debug.Log("Placing " + prefabIndex);
        purchaseStates[prefabIndex] = PurchaseState.Placed;
        UpdatePurchaseStateDisplay(prefabIndex);

        CloseShop();
    }

    private void UpdatePurchaseStateDisplay(int i)
    {
        Transform cardBG = workstationCards[i].transform.Find("Canvas").Find("CardBG");
        Button purchaseButton = cardBG.Find("PurchaseButton").gameObject.GetComponent<Button>();
        TMP_Text purchaseText = cardBG.Find("PurchaseButton").Find("Text (TMP)").gameObject.GetComponent<TMP_Text>();

        switch (purchaseStates[i])
        {
            case PurchaseState.ForSale:
                purchaseText.text = "$" + workstationPrefabs[i].GetComponent<Workstation>().price;
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
}
