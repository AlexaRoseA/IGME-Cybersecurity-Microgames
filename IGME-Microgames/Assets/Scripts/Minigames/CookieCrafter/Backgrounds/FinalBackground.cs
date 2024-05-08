using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;
using UnityEngine.UI;
using TMPro;
using System;

public class FinalBackground : MonoBehaviour
{
    // Images used in the background
    public GameObject background;
    public GameObject leftOrderButton;
    public GameObject rightOrderButton;
    public TextMeshProUGUI attackersPreventedText;
    public TextMeshProUGUI orderDescriptionText;
    public GameObject orderCardText;
    public GameObject endGameButton;
    public OrderManager orderManager;
    public CookieManager cookieManager;

    // Variables that will be used at the end of the same
    private List<Order> completedOrders;
    private List<Order> completedCreations;
    private int evilOrders;
    private int completedOrderCount;

    // The current order / creation to be displayed
    private int currentOrder;

    private List<GameObject> currentlyDrawn;


    public FinalBackground()
    {
    }

    public List<GameObject> CurrentlyDrawn
    {
        get => currentlyDrawn;
        set => currentlyDrawn = value;
    }

    // Grabbing the completed orders / creations for the game
    public void PopulateEndGameInput(List<Order> completedOrdersInput, List<Order> completedCreationsInput, int evilOrdersInput, int completedOrderCountInput)
    {
        completedOrders = completedOrdersInput;
        completedCreations = completedCreationsInput;
        evilOrders = evilOrdersInput;
        completedOrderCount = completedOrderCountInput;
    }

    void Start()
    {
        // Should not be telling the user that there are no applicable orders by default
        DisableFinalBackground();
        background.SetActive(false);
        leftOrderButton.SetActive(false);
        rightOrderButton.SetActive(false);
        //attackersPreventedText.SetActive(false);
        //orderDescriptionText.SetActive(false);
        endGameButton.SetActive(false);
        orderCardText.SetActive(false);
        currentlyDrawn = new List<GameObject>();

        currentOrder = 0;
    }

    // Enable all objects in the background (for when this background is selected)
    public void EnableFinalBackground()
    {
        background.SetActive(true);
        endGameButton.SetActive(true);
        rightOrderButton.SetActive(true);
        orderCardText.SetActive(true);
        //attackersPreventedText.SetActive(true);
        //orderDescriptionText.SetActive(true);
    }

    // Disables all objects for this background so they are not visible
    public void DisableFinalBackground()
    {
        background.SetActive(false);
        endGameButton.SetActive(false);
        rightOrderButton.SetActive(false);
        orderCardText.SetActive(false);
        //attackersPreventedText.SetActive(false);
        //orderDescriptionText.SetActive(false);
    }

    public void DrawOrderAndCookie()
    {
        attackersPreventedText.text = "You denied " + evilOrders.ToString() + " orders from evil customers.";
        if (completedOrders.Count <= 2)
        {
            rightOrderButton.SetActive(false);
            if (completedOrders.Count == 0)
            {
                orderDescriptionText.text = "No customer orders were completed";
                return;
            }
            // TODO: Enable only 1 order text
        }

        // Destroy the currently drawn order
        if (CurrentlyDrawn.Count > 0)
        {
            foreach (GameObject drawing in CurrentlyDrawn)
            {
                Destroy(drawing, 0f);
            }
        }

        // Writing which doughs were added
        string textToAdd = "";
        if (completedCreations[currentOrder].Cookie.DoughList.Count == 3)
        {
            textToAdd = "The cookie you created has chocolate, red velvet, and sugar dough flavors ";
        }
        else if (completedCreations[currentOrder].Cookie.DoughList.Count == 2)
        {
            textToAdd = "The cookie you created has " + completedCreations[currentOrder].Cookie.DoughList[0].Type.ToLower() + " and " + completedCreations[currentOrder].Cookie.DoughList[1].Type.ToLower() + " dough flavors ";
        }
        else
        {
            textToAdd = "The cookie you created has a " + completedCreations[currentOrder].Cookie.DoughList[0].Type.ToLower() + " dough flavor ";
        }

        // Round down the heat and add it to the string to be printed
        double m = Math.Round(completedCreations[currentOrder].Cookie.Heat.Level, 2);
        textToAdd += "and has a heat level of " + m.ToString("0.00") + ".";

        if (completedCreations[currentOrder].Cookie.ToppingsList.Count == 3)
        {
            textToAdd += "The toppings on the cookie are chocolate chips, sprinkles, and nuts.";
        }
        else if (completedCreations[currentOrder].Cookie.ToppingsList.Count == 2)
        {
            textToAdd += "The toppings on the cookie are " + completedCreations[currentOrder].Cookie.ToppingsList[0].Type.ToLower() + " and " + completedCreations[currentOrder].Cookie.DoughList[1].Type.ToLower() + ".";
        }
        else if (completedCreations[currentOrder].Cookie.ToppingsList.Count == 1)
        {
            textToAdd += "The topping on the cookie is " + completedCreations[currentOrder].Cookie.ToppingsList[0].Type.ToLower() + ".";
        }
        else
        {
            textToAdd += "The cookie has no toppings.";
        }


        orderDescriptionText.text = textToAdd;

        // Drawing in the cookie the player created
        cookieManager.DrawCookie(completedCreations[currentOrder].Cookie);

        // Draw in the intended order
        CurrentlyDrawn = orderManager.DrawOrderFireFirst(completedOrders[currentOrder], CurrentlyDrawn);
        CurrentlyDrawn = orderManager.DrawOrderListFirst(completedOrders[currentOrder], 1, CurrentlyDrawn);
        CurrentlyDrawn = orderManager.DrawOrderListFirst(completedOrders[currentOrder], 2, CurrentlyDrawn);
    }

    // A function for the left button on the final order screen
    public void LeftButton()
    {
        // Decrement the current order / creation and draw it
        currentOrder -= 1;
        DrawOrderAndCookie();
        // If there are no more orders to the left, hide the button
        if (currentOrder == 0)
        {
            leftOrderButton.SetActive(false);
        }
        // If the left button was clicked, there is a right order
        rightOrderButton.SetActive(true);
    }

    // A function for the right button on the final order screen
    public void RightButton()
    {
        // Increment the current order / creation and draw it
        currentOrder += 1;
        DrawOrderAndCookie();
        // If there are no more orders to the right, hide the button
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= " + completedCreations.Count + " =-=-=-=-=-=-=-=-=");
        if (completedOrderCount == currentOrder + 1)
        {
            rightOrderButton.SetActive(false);
        }
        // If the right button was clicked, there is a left order
        leftOrderButton.SetActive(true);
    }

    public void EndGame()
    {
        // END GAME HERE
    }

}