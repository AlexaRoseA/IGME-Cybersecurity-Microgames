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

    public GameObject[] workstationPrefabs;
    private PurchaseState[] purchaseStates;

    public GameObject workstationShopCardPrefab;

    private GameObject[] workstationCards;


    protected override void Start()
    {
        base.Start();

        purchaseStates = new PurchaseState[workstationPrefabs.Length];

        purchaseStates[0] = PurchaseState.ForSale;
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

    }

    public void CloseShop()
    {

    }

    private void InitShop()
    {
        workstationCards = new GameObject[workstationPrefabs.Length];
        for (int i = 0; i < workstationPrefabs.Length; i++)
        {
            workstationCards[i] = Instantiate(workstationShopCardPrefab, Vector3.zero, Quaternion.identity);
            Workstation workstation = workstationPrefabs[i].GetComponent<Workstation>();

            Transform cardBG = workstationCards[i].transform.Find("Canvas").Find("CardBG");

            int x = i % 3 * 302 + 92;
            int y = 1346 - (i / 3 * 402);

            cardBG.position = new Vector3(x, y, 0f);

            TMP_Text jobTitle = cardBG.Find("WorkstationName").gameObject.GetComponent<TMP_Text>();
            Button purchaseButton = cardBG.Find("PurchaseButton").gameObject.GetComponent<Button>();
            TMP_Text purchaseText = cardBG.Find("PurchaseButton").Find("Text (TMP)").gameObject.GetComponent<TMP_Text>();
            Image img = cardBG.Find("WorkstationImg").gameObject.GetComponent<Image>();

            jobTitle.text = workstation.jobTitle;



            switch (purchaseStates[i])
            {
                case PurchaseState.ForSale:
                    purchaseText.text = "$" + workstation.price;
                    purchaseButton.onClick.AddListener(() => Purchase(workstation));
                    break;

                case PurchaseState.Purchased:
                    purchaseText.text = "Place";
                    purchaseButton.onClick.AddListener(() => Place(workstation));
                    break;

                case PurchaseState.Placed:
                    purchaseText.text = "Placed";
                    purchaseButton.interactable = false;
                    break;
            }
            workstationCards[i].SetActive(false);
        }
    }

    public void Purchase(Workstation workstation)
    {
        Debug.Log("Purchasing " + workstation.jobTitle);
    }

    public void Place(Workstation workstation)
    {
        Debug.Log("Placing " + workstation.jobTitle);
    }
}
