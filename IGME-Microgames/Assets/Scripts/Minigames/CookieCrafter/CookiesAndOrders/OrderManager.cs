using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.UI;

public class OrderManager : MonoBehaviour
{
    // Creating the variables that will be used in this script
    #region Variables

    private List<string> possibleDoughTypes;
    private List<string> possibleToppingTypes;

    [SerializeField]
    public List<Order> newOrders = new List<Order>(); // Orders the customers will request
    [SerializeField]
    public List<Order> activeOrders = new List<Order>(); // Orders the player can actively create
    [SerializeField]
    public List<Order> completedOrders = new List<Order>(); // Orders the player has completed


    private List<Order> activeCreations = new List<Order>(); // Active creations by the player
    private List<Order> completedCreations = new List<Order>(); // Completed creations by the player

    private int difficulty; // Will determine how many orders there are and the likelihood they are bad
    private int orderCount; // The number of orders the player will receive
    private int badCount; // The number that will determine whether an order is good or bad
    private int lastCustomerInt; // Int to make sure the same customer doesn't order twice in a row

    // Icons that will be used to display orders
    public GameObject chocolateIcon;
    public GameObject redVelvetIcon;
    public GameObject sugarIcon;
    public GameObject heatIcon;
    public GameObject chocolateChipsIcon;
    public GameObject sprinklesIcon;
    public GameObject nutsIcon;

    // Customer images
    public GameObject GoodCustomer1;
    public GameObject GoodCustomer2;
    public GameObject GoodCustomer3;
    public GameObject GoodCustomer4;
    public GameObject GoodCustomer5;
    public GameObject GoodCustomer6;
    public GameObject GoodCustomer7;
    public GameObject GoodCustomer8;
    public GameObject GoodCustomer9;
    public GameObject BadCustomer1;
    public GameObject BadCustomer2;
    public GameObject BadCustomer3;

    private int evilOrderCount;
    private int completedOrderCount;

    public GameObject bottomButtonOrderScreen;
    public GameObject bottomButtonDoughScreen;
    public GameObject bottomButtonOvenScreen;
    public GameObject bottomButtonToppingScreen;

    // Manages background changes when different screen buttons are pressed
    public BackgroundManager backgroundManager;
    // Manages cookie drawings
    public CookieManager cookieManager;
    // Image stretcher, boool for if oven bar should be stretched
    public ImageStretcher imageStretcher;
    private bool stretchOvenBar;
    private float stretchAmount;
    private double currentHeatLevel;

    // An anchor for the customers to draw on to
    public GameObject CustomerAnchor;
    // A list of images for good / bad customers
    private List<GameObject> goodCustomers;
    private List<GameObject> badCustomers;

    // Anchoring objects for the order card on the order screen
    public GameObject orderCardFire1;
    public GameObject orderCardDough1;
    public GameObject orderCardToppings1;

    // Anchoring objects for the order card on the dough, heat / oven, and topping screens
    public GameObject orderCardFire2;
    public GameObject orderCardDough2;
    public GameObject orderCardToppings2;

    // List of images for order icons
    private List<GameObject> doughIcons;
    private List<GameObject> toppingsIcons;

    // Currently drawn order images
    [SerializeField]
    public List<GameObject> currentlyDrawn = new List<GameObject>();
    #endregion

    // Initializing variables, setting the number of orders (based off of difficulty),
    // creating random orders, drawing the first order
    #region Start

    // Start is called before the first frame update
    void Start()
    {
        // Populating the lists of possible doughs and toppings
        List<string> possibleDoughTypes = new List<string>();
        List<string> possibleToppingTypes = new List<string>();
        possibleDoughTypes = PopulatePossibleTypes(possibleDoughTypes, 1);
        possibleToppingTypes = PopulatePossibleTypes(possibleToppingTypes, 2);

        // Create and populate the list of good customer images
        List<GameObject> goodCustomers = new List<GameObject>();
        goodCustomers.Add(GoodCustomer1);
        goodCustomers.Add(GoodCustomer2);
        goodCustomers.Add(GoodCustomer3);
        goodCustomers.Add(GoodCustomer4);
        goodCustomers.Add(GoodCustomer5);
        goodCustomers.Add(GoodCustomer6);
        goodCustomers.Add(GoodCustomer7);
        goodCustomers.Add(GoodCustomer8);
        goodCustomers.Add(GoodCustomer9);
        // Create and populate the list of bad customer images
        List<GameObject> badCustomers = new List<GameObject>();
        badCustomers.Add(BadCustomer1);
        badCustomers.Add(BadCustomer2);
        badCustomers.Add(BadCustomer3);

        // Create and populate the possible dough icons
        List<GameObject> doughIcons = new List<GameObject>();
        doughIcons.Add(chocolateIcon);
        doughIcons.Add(redVelvetIcon);
        doughIcons.Add(sugarIcon);
        // Create and populate the possible topping icons
        List<GameObject> toppingsIcons = new List<GameObject>();
        toppingsIcons.Add(chocolateChipsIcon);
        toppingsIcons.Add(sprinklesIcon);
        toppingsIcons.Add(nutsIcon);

        // By default, the oven bar should not stretch
        stretchOvenBar = false;
        stretchAmount = 0;
        currentHeatLevel = 0;

        // Default value for previous customer
        lastCustomerInt = 100;

        // Creating lists for new, active, and completed orders
        newOrders = new List<Order>();

        difficulty = 2; // The difficulty is temporarily hardcoded to 2

        switch (difficulty) // Change the number of orders based on difficulty
        {
            case 2:
                orderCount = 10;
                break;
            case 3:
                orderCount = 15;
                break;
            default: // Default is difficulty of 1
                orderCount = 6;
                break;
        }

        evilOrderCount = 0;
        completedOrderCount = 0;

        // Create orders according the the orderCount determined above (6, 10, or 15)
        for (int i = 0; i < orderCount; i++)
        {
            newOrders.Add(CreateOrder(difficulty, possibleDoughTypes, possibleToppingTypes, doughIcons, 
                toppingsIcons, heatIcon, goodCustomers, badCustomers));
            /*
            if (newOrders[i].IsBad)
            {
                UnityEngine.Debug.Log("ORDER NUMBER " + (i + 1) + " IS BAD. ==== It has " + newOrders[i].Cookie.DoughList.Count + " doughs and " + newOrders[i].Cookie.ToppingsList.Count + " toppings. The heat is " + newOrders[i].Cookie.Heat.Level);
            }
            else
            {
                UnityEngine.Debug.Log("ORDER NUMBER " + (i + 1) + " IS GOOD. ==== It has " + newOrders[i].Cookie.DoughList.Count + " doughs and " + newOrders[i].Cookie.ToppingsList.Count + " toppings. The heat is " + newOrders[i].Cookie.Heat.Level);
            }
            */ // Debug statement to print order details
        }
        
        // Draw the first order and populate the currentlyDrawn list with what was drawn
        currentlyDrawn = DrawOrderWithCustomer(newOrders[0], currentlyDrawn);
    }
    #endregion

    // All button functions. Split into 3 sub regions.
    #region Buttons

    // Button functions for accepting / denying orders
    #region AcceptDenyOrderButtons

    // Button function to accept an order if it is good and send it to the Dough screen
    // Has an edge case end game condition
    public void AcceptOrderButtonClick()
    {
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Accept Order Click =-=-=-=-=-=-=-=-=");
        
        // Destroy the current order drawing
        foreach (GameObject drawing in currentlyDrawn)
        {
            Destroy(drawing, 0f);
        }
        
        
        if (newOrders.Count > 0) // If there are new orders when the button is clicked...
        {
            if (newOrders[0].IsBad == false) // If the order was good, add it to the active orders
            {
                activeOrders.Add(newOrders[0]);
                // Create a blank order with default / 0 values and add it to the users' active creations
                Cookie cookieToAdd = new Cookie();
                Order orderToAdd = new Order(cookieToAdd);
                activeCreations.Add(orderToAdd);
            }
            else if (newOrders.Count == 1 && activeOrders.Count == completedOrders.Count)
            {
                newOrders.RemoveAt(0);
                StartEndScreen(); // End condition: go to end screen
                return;
            }
            newOrders.RemoveAt(0); // Remove the order once it has been added / determined to be bad

            if (newOrders.Count > 0) // If there are more new orders, display the next one
            {
                DrawOrderWithCustomer(newOrders[0], currentlyDrawn);
            }
            else // Otherwise all orders have been processed. Tell the user that.
            {
                UnityEngine.Debug.Log("=-=-=-=-= TODO: Print \"All Orders Received\" =-=-=-=-=");
                backgroundManager.OrderBackground.OrdersTakenText.SetActive(true);
            }
        }

    }

    // Button function to deny an order. Can be an end game condition.
    public void DenyOrderButtonClick()
    {
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Deny Order Click =-=-=-=-=-=-=-=-=");

        // Destroy the current order drawing
        foreach (GameObject drawing in currentlyDrawn)
        {
            Destroy(drawing, 0f);
        }

        if (newOrders.Count > 0) // If there was an order when the button was clicked, remove it
        {
            if (newOrders[0].IsBad) // If the order is evil, increment the evil customers denied
            {
                evilOrderCount += 1;
            }
            newOrders.RemoveAt(0);
            if (newOrders.Count > 0) // If there is a new order after the removed one, display it
            {
                DrawOrderWithCustomer(newOrders[0], currentlyDrawn);
            }
            else // If there are 0 new orders, tell the user
            {
                UnityEngine.Debug.Log("=-=-=-=-= TODO: Print \"All Orders Received\" =-=-=-=-=");
                backgroundManager.OrderBackground.OrdersTakenText.SetActive(true);
            }
        }

        // If there are no new orders and all active orders have been completed, end the game
        if(newOrders.Count == 0 && activeOrders.Count == completedOrders.Count)
        {
            StartEndScreen(); // End condition: go to end screen
        }
    }
    #endregion

    // Button functions for switching between screens (order, dough, oven / heat, toppings)
    #region SwitchScreenButtons

    // Button function to move the player to the order screen and prints the first new order to the player
    public void OrderScreenButton()
    {
        cookieManager.DestroyCookie();
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Order Screen Click =-=-=-=-=-=-=-=-=");
        // Run through the proper button function in BackgroundManager
        backgroundManager.OrderScreenButton();
        // Destroy the current order drawing
        foreach (GameObject drawing in currentlyDrawn)
        {
            Destroy(drawing, 0f);
        }
        // Draw in the customer w/ their order if there is a new order
        if (newOrders.Count > 0)
        {
            DrawOrderWithCustomer(newOrders[0], currentlyDrawn);
        }
        else // If there is no new order, tell the player
        {
            backgroundManager.OrderBackground.OrdersTakenText.SetActive(true);
        }
    }

    // Button function to move the player to the Dough screen.
    // Draws everything on the screen including all applicable orders.
    public void DoughScreenButton()
    {
        cookieManager.DestroyCookie();
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Dough Screen Click =-=-=-=-=-=-=-=-=");
        // Run through the proper button function in BackgroundManager
        backgroundManager.DoughScreenButton();
        // Destroy the current order drawing
        foreach (GameObject drawing in currentlyDrawn)
        {
            Destroy(drawing, 0f);
        }
        if (activeOrders.Count > 0) // Draw in the order if applicable (if it's the first one that needs dough)
        {
            for (int i = 0; i < activeOrders.Count; i++)
            {
                if (activeOrders[i].Completeness == 0) // Draw the first order in the active orders that needs dough
                {
                    DrawOrderCommon(activeOrders[i], currentlyDrawn);
                    // If the order already has a dough, enable the MoveToOvenButton
                    if (activeCreations[i].Cookie.DoughList.Count > 0)
                    {
                        backgroundManager.DoughBackground.MoveToOvenButton.SetActive(true);
                    }
                    return;
                }
            }
            // Otherwise, if there are no applicable orders, tell the user
            backgroundManager.DoughBackground.OrdersTakenText.SetActive(true);
        }
        else // If there are no active orders, none could need dough. Tell the user.
        {
            backgroundManager.DoughBackground.OrdersTakenText.SetActive(true);
        }
    }

    // Button function to move the player to the Oven screen.
    // Draws everything on the screen including all applicable orders.
    public void OvenScreenButton()
    {
        cookieManager.DestroyCookie();
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Oven Screen Click =-=-=-=-=-=-=-=-=");
        // Run through the proper button function in BackgroundManager
        backgroundManager.OvenScreenButton();
        backgroundManager.HeatBackground.DestroyOvenBar();
        // Destroy the current order drawing
        foreach (GameObject drawing in currentlyDrawn)
        {
            Destroy(drawing, 0f);
        }
        if (activeOrders.Count > 0) // Draw in the order if applicable (if it's the first one that needs heat)
        {
            foreach (Order order in activeOrders)
            {
                if (order.Completeness == 2) // Draw the first order in the active orders that needs heat to end
                {
                    DrawOrderCommon(order, currentlyDrawn);
                    // Draw in the order bar with the correct indicator
                    backgroundManager.HeatBackground.DrawOvenBar(backgroundManager.HeatBackground.FindCurrentOvenBar(order.Cookie.Heat));
                    backgroundManager.HeatBackground.StopOvenButton.SetActive(true);
                    return;
                }
                else if (order.Completeness == 1) // If there are no orders that need heat to end, print the first that needs heat to start
                {
                    DrawOrderCommon(order, currentlyDrawn);
                    // Draw in the order bar with the correct indicator
                    backgroundManager.HeatBackground.DrawOvenBar(backgroundManager.HeatBackground.FindCurrentOvenBar(order.Cookie.Heat));
                    backgroundManager.HeatBackground.StartOvenButton.SetActive(true);
                    return;
                }
            }
            // If no active orders need heat, tell the user
            backgroundManager.HeatBackground.OrdersTakenText.SetActive(true);
        }
        else // If there are no active orders, none could need heat. Tell the user.
        {
            backgroundManager.HeatBackground.OrdersTakenText.SetActive(true);
        }
    }

    // Button function to move the player to the Topping screen.
    // Draws everything on the screen including all applicable orders.
    public void ToppingScreenButton()
    {
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Topping Screen Click =-=-=-=-=-=-=-=-=");
        // Run through the proper button function in BackgroundManager
        backgroundManager.ToppingScreenButton();
        // Destroy the current order drawing
        foreach (GameObject drawing in currentlyDrawn)
        {
            Destroy(drawing, 0f);
        }
        if (activeOrders.Count > 0) // Draw in the order if applicable (if it's the first that needs toppings)
        {

            foreach (Order order in activeOrders)
            {
                if (order.Completeness == 3) // Draw the first order in the active orders that needs toppings
                {
                    DrawOrderCommon(order, currentlyDrawn);
                    backgroundManager.ToppingBackground.CompleteOrderButton.SetActive(true);
                    // Go to the active creation that's applicable and draw it
                    for (int i = 0; i < activeOrders.Count; i++)
                    {
                        if (activeOrders[i].Completeness == 3)
                        {
                            cookieManager.DrawCookie(activeCreations[i].Cookie);
                            return;
                        }
                    }
                }
            }
            // Otherwise, if there are no applicable orders, tell the user
            backgroundManager.ToppingBackground.OrdersTakenText.SetActive(true);
        }
        else // If there are no active orders, none could need toppings. Tell the user.
        {
            backgroundManager.ToppingBackground.OrdersTakenText.SetActive(true);
        }
    }

    #endregion

    // Buttons that move orders to different phases of completeness (NeedsDough, NeedsHeat, NeedsStopHeat, NeedsToppings, Done)
    #region MoveOrderButtons

    // Button function to move the current order to the oven screen for heating
    // TODO: Button will only appear once the user has added at least 1 dough
    public void MoveToOvenButton()
    {
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Move to Oven Button Click =-=-=-=-=-=-=-=-=");
        // Remove the button prompting the user to move the order to oven
        backgroundManager.DoughBackground.MoveToOvenButton.SetActive(false);
        foreach (GameObject drawing in currentlyDrawn) // Destroy the currently drawn order
        {
            Destroy(drawing, 0f);
        }
        foreach (Order order in activeOrders)
        {
            // Find the first order that needs dough and increase it's completeness to needing heat to start
            if (order.Completeness == 0)
            {
                order.Completeness = 1;
                break;
            }
        }
        if (activeOrders.Count > 0) // Draw in the order if applicable
        {
            foreach (Order order in activeOrders)
            {
                if (order.Completeness == 0) // Draw the first order in the active orders that needs dough
                {
                    DrawOrderCommon(order, currentlyDrawn);
                    backgroundManager.DoughBackground.MoveToOvenButton.SetActive(true);
                    return;
                }
            }
            // If there is no active order that needs dough, tell the user
            backgroundManager.DoughBackground.MoveToOvenButton.SetActive(false);
            backgroundManager.DoughBackground.OrdersTakenText.SetActive(true);
        }
    }

    // Button function to start heating in the oven
    public void StartOvenButton()
    {
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Start Oven Click =-=-=-=-=-=-=-=-=");
        // Switch the button from one that starts the oven to one that stops the oven
        backgroundManager.HeatBackground.StartOvenButton.SetActive(false);
        backgroundManager.HeatBackground.StopOvenButton.SetActive(true);
        foreach (Order order in activeOrders)
        {
            if (order.Completeness == 1) // Increase the completness of the order that has started heating
            {
                stretchOvenBar = true;
                order.Completeness = 2;
                break;
            }
        }
    }

    // Button function to stop heating and move the current order to the topping screen for toppings
    // TODO: Button will only appear once the user has added at least 1 heat
    public void StopOvenButton()
    {
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Stop Oven Click =-=-=-=-=-=-=-=-=");
        // Remove the button prompting the user to stop the oven
        backgroundManager.HeatBackground.StopOvenButton.SetActive(false);
        backgroundManager.HeatBackground.DestroyOvenBar();
        // Reset oven bar variables
        stretchOvenBar = false;
        imageStretcher.ResetStretch();
        foreach (GameObject drawing in currentlyDrawn) // Destroy the currently drawn order
        {
            Destroy(drawing, 0f);
        }
        for (int i = 0; i < activeOrders.Count; i++)
        {
            // Find the order that needed the heat to stop and increase it to needing toppings
            if (activeOrders[i].Completeness == 2)
            {
                // Updating the heat level
                if (currentHeatLevel < 3.1)
                {
                    currentHeatLevel += 0.05;
                }
                // Update the heat to be what the player got
                activeCreations[i].Cookie.Heat.Level = currentHeatLevel;
                activeOrders[i].Completeness = 3;
            }
        }
        if (activeOrders.Count > 0) // Draw in the order if applicable
        {
            foreach (Order order in activeOrders)
            {
                if (order.Completeness == 1) // Draw the first order in the active orders that needs heat
                {
                    backgroundManager.HeatBackground.DrawOvenBar(backgroundManager.HeatBackground.FindCurrentOvenBar(order.Cookie.Heat));
                    DrawOrderCommon(order, currentlyDrawn);
                    backgroundManager.HeatBackground.StartOvenButton.SetActive(true);
                    return;
                }
            }
            // If there is no active order that needs heat, tell the user
            backgroundManager.HeatBackground.StartOvenButton.SetActive(false);
            backgroundManager.HeatBackground.OrdersTakenText.SetActive(true);
        }
    }

    // Button function to complete an order once toppings are added. Can be an end game condition.
    public void CompleteOrderButton()
    {
        UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= Complete Order Click =-=-=-=-=-=-=-=-=");
        // Remove the button prompting the user to complete the order
        backgroundManager.ToppingBackground.CompleteOrderButton.SetActive(false);
        cookieManager.DestroyCookie();
        foreach (GameObject drawing in currentlyDrawn) // Destroy the currently drawn order
        {
            Destroy(drawing, 0f);
        }
        foreach (Order order in activeOrders)
        {
            // Find the order that needed the toppings and increase it to being done
            if (order.Completeness == 3)
            {
                // Add the order to the list of completed orders
                completedOrders.Add(order);
                // Add the correct active creation to the completed creations
                for (int i = 0; i < activeOrders.Count; i++)
                {
                    if (activeOrders[i].Completeness == 3)
                    {
                        completedCreations.Add(activeCreations[i]);
                        completedOrderCount += 1;
                        break;
                    }
                }
                order.Completeness = 4;
                break;
            }
        }
        if (activeOrders.Count > 0) // Draw in the next order if applicable
        {
            foreach (Order order in activeOrders)
            {
                if (order.Completeness == 3) // Draw the first order in the active orders that needs toppings
                {
                    DrawOrderCommon(order, currentlyDrawn);
                    for (int i = 0; i < activeOrders.Count; i++)
                    {
                        if (activeOrders[i].Completeness == 3)
                        {
                            cookieManager.DrawCookie(activeCreations[i].Cookie);
                            break;
                        }
                    }
                    backgroundManager.ToppingBackground.CompleteOrderButton.SetActive(true);
                    return;
                }
            }
            foreach (Order order in activeOrders)
            {
                if (order.Completeness != 4) // If there is an order that is not completed, continue
                {
                    backgroundManager.ToppingBackground.CompleteOrderButton.SetActive(false);
                    backgroundManager.ToppingBackground.OrdersTakenText.SetActive(true);
                    return;
                }
            }
            // If there were no orders that are incomplete (previous statement), and there are no new orders, end the game
            if (newOrders.Count == 0)
            {
                StartEndScreen(); // End condition: go to end screen
            }
        }
        if (activeOrders.Count == completedOrders.Count)
        {
            backgroundManager.ToppingBackground.OrdersTakenText.SetActive(true);
        }
    }

    #endregion

    // "Buttons" (jars) that add to dough and topping values
    #region AddToCreationsButtons

    #region AddDoughToCreationsButtons

    // A button function that adds chocolate dough to a user creation
    public void AddChocolateDoughButton()
    {
        backgroundManager.DoughBackground.MoveToOvenButton.SetActive(true);
        // If there are any active orders to need chocolate dough, continue
        if (activeOrders.Count > 0)
        {
            // Loop through the active orders and find the first one that needs dough
            for (int i = 0; i < activeOrders.Count; i++)
            {
                // If there is an order that needs dough, look into it
                if (activeOrders[i].Completeness == 0)
                {
                    // If there is already a dough in the associated creation that has chocolate,
                    // do not add it again and exit the function
                    foreach (Dough loopDough in activeCreations[i].Cookie.DoughList)
                    {
                        if (loopDough.Type == "Chocolate")
                        {
                            print("Chocolate already added...");
                            return;
                        }
                    }
                    // If no chocolate doughs were found in this creation, add one and exit the function
                    Dough doughToAdd = new Dough("Chocolate");
                    activeCreations[i].Cookie.DoughList.Add(doughToAdd);
                    print("Added: Chocolate Dough");
                    return;
                }
            }
        }
    }

    // A button function that adds red velvet dough to a user creation
    public void AddRedVelvetDoughButton()
    {
        backgroundManager.DoughBackground.MoveToOvenButton.SetActive(true);
        // If there are any active orders to need red velvet dough, continue
        if (activeOrders.Count > 0)
        {
            // Loop through the active orders and find the first one that needs dough
            for (int i = 0; i < activeOrders.Count; i++)
            {
                // If there is an order that needs dough, look into it
                if (activeOrders[i].Completeness == 0)
                {
                    // If there is already a dough in the associated creation that has red velvet,
                    // do not add it again and exit the function
                    foreach (Dough loopDough in activeCreations[i].Cookie.DoughList)
                    {
                        if (loopDough.Type == "Red Velvet")
                        {
                            print("Red Velvet already added...");
                            return;
                        }
                    }
                    // If no red velvet doughs were found in this creation, add one and exit the function
                    Dough doughToAdd = new Dough("Red Velvet");
                    activeCreations[i].Cookie.DoughList.Add(doughToAdd);
                    print("Added: Red Velvet Dough");
                    return;
                }
            }
        }
    }

    // A button function that adds sugar dough to a user creation
    public void AddSugarDoughButton()
    {
        backgroundManager.DoughBackground.MoveToOvenButton.SetActive(true);
        // If there are any active orders to need sugar dough, continue
        if (activeOrders.Count > 0)
        {
            // Loop through the active orders and find the first one that needs dough
            for (int i = 0; i < activeOrders.Count; i++)
            {
                // If there is an order that needs dough, look into it
                if (activeOrders[i].Completeness == 0)
                {
                    // If there is already a dough in the associated creation that has sugar,
                    // do not add it again and exit the function
                    foreach (Dough loopDough in activeCreations[i].Cookie.DoughList)
                    {
                        if (loopDough.Type == "Sugar")
                        {
                            print("Sugar already added...");
                            return;
                        }
                    }
                    // If no sugar doughs were found in this creation, add one and exit the function
                    Dough doughToAdd = new Dough("Sugar");
                    activeCreations[i].Cookie.DoughList.Add(doughToAdd);
                    print("Added: Sugar Dough");
                    return;
                }
            }
        }
    }

    #endregion

    #region AddToppingsToCreationsButtons

    // A button function that adds chocolate chips topping to a user creation
    public void AddChocolateChipToppingButton()
    {
        // If there are any active orders to need chocolate chip topping, continue
        if (activeOrders.Count > 0)
        {
            // Loop through the active orders and find the first one that needs toppings
            for (int i = 0; i < activeOrders.Count; i++)
            {
                // If there is an order that needs topping, look into it
                if (activeOrders[i].Completeness == 3)
                {
                    // If there is already a topping in the associated creation that has chocolate chips,
                    // do not add it again and exit the function
                    foreach (Toppings loopTopping in activeCreations[i].Cookie.ToppingsList)
                    {
                        if (loopTopping.Type == "Chocolate Chips")
                        {
                            print("Chocolate Chips already added...");
                            return;
                        }
                    }
                    // If no chocolate chip toppings were found in this creation, add one and exit the function
                    Toppings toppingToAdd = new Toppings("Chocolate Chips");
                    activeCreations[i].Cookie.ToppingsList.Add(toppingToAdd);
                    cookieManager.DrawCookie(activeCreations[i].Cookie);
                    print("Added: Chocolate Chips Topping");
                    return;
                }
            }
        }
    }

    // A button function that adds sprinkles topping to a user creation
    public void AddSprinklesToppingButton()
    {
        // If there are any active orders to need sprinkles topping, continue
        if (activeOrders.Count > 0)
        {
            // Loop through the active orders and find the first one that needs toppings
            for (int i = 0; i < activeOrders.Count; i++)
            {
                // If there is an order that needs topping, look into it
                if (activeOrders[i].Completeness == 3)
                {
                    // If there is already a topping in the associated creation that has sprinkles,
                    // do not add it again and exit the function
                    foreach (Toppings loopTopping in activeCreations[i].Cookie.ToppingsList)
                    {
                        if (loopTopping.Type == "Sprinkles")
                        {
                            print("Sprinkles already added...");
                            return;
                        }
                    }
                    // If no sprinkles toppings were found in this creation, add one and exit the function
                    Toppings toppingToAdd = new Toppings("Sprinkles");
                    activeCreations[i].Cookie.ToppingsList.Add(toppingToAdd);
                    cookieManager.DrawCookie(activeCreations[i].Cookie);
                    print("Added: Sprinkles Topping");
                    return;
                }
            }
        }
    }

    // A button function that adds nuts topping to a user creation
    public void AddNutsToppingButton()
    {
        // If there are any active orders to need nuts topping, continue
        if (activeOrders.Count > 0)
        {
            // Loop through the active orders and find the first one that needs toppings
            for (int i = 0; i < activeOrders.Count; i++)
            {
                // If there is an order that needs topping, look into it
                if (activeOrders[i].Completeness == 3)
                {
                    // If there is already a topping in the associated creation that has nuts,
                    // do not add it again and exit the function
                    foreach (Toppings loopTopping in activeCreations[i].Cookie.ToppingsList)
                    {
                        if (loopTopping.Type == "Nuts")
                        {
                            print("Nuts already added...");
                            return;
                        }
                    }
                    // If no nuts toppings were found in this creation, add one and exit the function
                    Toppings toppingToAdd = new Toppings("Nuts");
                    activeCreations[i].Cookie.ToppingsList.Add(toppingToAdd);
                    cookieManager.DrawCookie(activeCreations[i].Cookie);
                    print("Added: Nuts Topping");
                    return;
                }
            }
        }
    }

    #endregion

    #endregion

    #endregion

    // Update function, minimal use. Mainly for testing.
    #region Update
    // Update is called once per frame
    void Update()
    {
        if (stretchOvenBar)
        {
            // Getting the rect transform for the current image
            float xLength = backgroundManager.HeatBackground.OvenBar0.GetComponent<Image>().rectTransform.sizeDelta.x;
            currentHeatLevel += .002;
            // Stretching the image accordingly
            imageStretcher.StretchImageToRight((float)(((xLength - ((.74 / 10) * xLength)) / 6) / 500));
            UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= CURRENT HEAT LEVEL: " + currentHeatLevel + "=-=-=-=-=-=-=-=-=");
        }
        else
        {
            currentHeatLevel = 0;
        }
    }
    #endregion

    // Function to populate variables on script startup
    #region PopulateStartup
    public List<string> PopulatePossibleTypes(List<string> list, int type)
    {
        switch(type)
        {
            case 1:
                list.Add("Chocolate");
                list.Add("Red Velvet");
                list.Add("Sugar");
                break;
            case 2:
                list.Add("Chocolate Chips");
                list.Add("Sprinkles");
                list.Add("Nuts");
                break;
            default:
                break;
        }
        return list;
    }
    #endregion

    // Creates a random order based off of the current difficulty
    #region CreateOrder

    // A function to create a new cookie randomized order, based on currently set difficulty.
    public Order CreateOrder(int difficulty, List<string> possibleDoughTypes, List<string> possibleToppingTypes, List<GameObject> doughIcons, 
        List<GameObject> toppingsIcons, GameObject heatIcon, List<GameObject> customersGood, List<GameObject> customersBad)
    {
        int numberDoughs = 0; // The starting number of doughs (will be increased)
        int numberToppings = 0; // The starting number of toppings (will be increased)
        int int1 = 0; // A tmp int used to hold random values
        int int2 = 0; // A tmp int used to hold random values

        // Randomly determine the number of doughs and toppings based off of the current difficulty
        switch (difficulty)
        {
            case 2: // Difficulty 2
                numberDoughs = UnityEngine.Random.Range(1,3);
                numberToppings = UnityEngine.Random.Range(1,3);
                break;
            case 3: // Difficulty 3
                numberDoughs = UnityEngine.Random.Range(2,4);
                numberToppings = UnityEngine.Random.Range(2,4);
                break;
            default: // Difficulty 1 (default)
                numberDoughs = 1;
                numberToppings = 1;
                break;
        }

        // =============================== GETTING THE RANDOM DOUGH(S) ===============================

        // A list to hold the created doughs
        List<Dough> doughs = new List<Dough>();
        Dough dough1; // Variable to hold the first dough
        Dough dough2; // Variable to hold the second dough
        Dough dough3; // Variable to hold the third dough

        switch (numberDoughs)
        {
            case 2: // 2 Doughs
                // Get two random ints, make sure they are different
                int1 = UnityEngine.Random.Range(0,3);
                int2 = UnityEngine.Random.Range(0,3);
                while (int1 == int2)
                {
                    int2 = UnityEngine.Random.Range(0,3);
                }
                // Create two doughs according to the values of the random ints
                dough1 = new Dough(possibleDoughTypes[int1], doughIcons[int1]);
                dough2 = new Dough(possibleDoughTypes[int2], doughIcons[int2]);
                doughs.Add(dough1);
                doughs.Add(dough2);
                break;
            case 3: // 3 Doughs
                // Add each possible dough
                dough1 = new Dough(possibleDoughTypes[0], doughIcons[0]);
                dough2 = new Dough(possibleDoughTypes[1], doughIcons[1]);
                dough3 = new Dough(possibleDoughTypes[2], doughIcons[2]);
                doughs.Add(dough1);
                doughs.Add(dough2);
                doughs.Add(dough3);
                break;
            default: // 1 Dough
                // Add 1 random possible dough
                int choose = UnityEngine.Random.Range(0, 3);
                dough1 = new Dough(possibleDoughTypes[choose], doughIcons[choose]);
                doughs.Add(dough1);
                break;
        }

        // =============================== GETTING THE RANDOM TOPPING(S) ===============================

        // A list to hold the created toppings
        List<Toppings> toppings = new List<Toppings>();
        Toppings topping1; // Variable to hold the first topping
        Toppings topping2; // Variable to hold the second topping
        Toppings topping3; // Variable to hold the third topping

        switch (numberToppings)
        {
            case 2: // 2 Toppings
                // Get two random ints, make sure they are different
                int1 = UnityEngine.Random.Range(0,3);
                int2 = UnityEngine.Random.Range(0,3);
                while(int1 == int2)
                {
                    int2 = UnityEngine.Random.Range(0,3);
                }
                // Create two toppings according to the values of the random ints
                topping1 = new Toppings(possibleToppingTypes[int1], toppingsIcons[int1]);
                topping2 = new Toppings(possibleToppingTypes[int2], toppingsIcons[int2]);
                toppings.Add(topping1);
                toppings.Add(topping2);
                break;
            case 3: // 3 Toppings
                // Add each possible topping
                topping1 = new Toppings(possibleToppingTypes[0], toppingsIcons[0]);
                topping2 = new Toppings(possibleToppingTypes[1], toppingsIcons[1]);
                topping3 = new Toppings(possibleToppingTypes[2], toppingsIcons[2]);
                toppings.Add(topping1);
                toppings.Add(topping2);
                toppings.Add(topping3);
                break;
            default: // 1 Toppings
                // Add 1 random possible toppings
                int choose = UnityEngine.Random.Range(0, 3);
                topping1 = new Toppings(possibleToppingTypes[choose], toppingsIcons[choose]);
                toppings.Add(topping1);
                break;
        }

        // =============================== GETTING THE RANDOM FIRE LEVEL ===============================
        int fireLevel = 0;
        if (difficulty == 1) // Difficulty of 1 will have a lower heat level cap
        {
            fireLevel = UnityEngine.Random.Range(1, 4);
        }
        else // Fire level is random between 1 and 5
        {
            fireLevel = UnityEngine.Random.Range(1, 6);
        }
        Heat heat = new Heat(fireLevel, heatIcon); // Create a Heat object according to the number assigned above

        // =============================== SETTING CUSTOMER GOOD OR BAD STATE ===============================
        bool isBad;
        int isBadInt;
        GameObject customerTexture;
        switch (difficulty)
        {
            case 2: // A difficulty of 2 has a 1/6 chance of being bad
                isBadInt = UnityEngine.Random.Range(1, 7);
                break;
            case 3: // A difficulty of 3 has a 1/9 chance of being bad
                isBadInt = UnityEngine.Random.Range(1, 10);
                break;
            default: // A difficulty of 1 has a 1/4 chance of being bad
                isBadInt = UnityEngine.Random.Range(1, 5);
                break;
        }
        //isBadInt= 3; // If you comment this out all customers will be bad
        //if (isBadInt == 3) // If the random number was 3, make the customer / order bad
        //{
        //    isBad = true;
        //    customerTexture = customersBad[UnityEngine.Random.Range(0, 3)];
        //}
        //else // Otherwise, make the customer / order good
        //{
        //    isBad = false;
        //    customerTexture = customersGood[UnityEngine.Random.Range(0, 9)];
        //}

        int randTmp = 0;
        //isBadInt= 3; // If you comment this out all customers will be bad
        if (isBadInt == 3) // If the random number was 3, make the customer / order bad
        {
            isBad = true;
            // Make sure the customer texture isn't the same as the last one
            randTmp = UnityEngine.Random.Range(0, 3);
            while (randTmp == lastCustomerInt)
            {
                randTmp = UnityEngine.Random.Range(0, 3);
            }
            lastCustomerInt = randTmp;
            // Once you have a new texture, create a bad customer with it
            customerTexture = customersBad[randTmp];
        }
        else // Otherwise, make the customer / order good
        {
            isBad = false;
            // Make sure the customer texture isn't the same as the last one
            randTmp = UnityEngine.Random.Range(0, 9);
            while (randTmp == lastCustomerInt)
            {
                randTmp = UnityEngine.Random.Range(0, 9);
            }
            // Once you have a new texture, create a good customer with it
            lastCustomerInt = randTmp;
            customerTexture = customersGood[randTmp];
        }

        // Creating the cookie and order
        Cookie cookie = new Cookie(doughs, heat, toppings);
        Order order = new Order(cookie, 1, isBad, customerTexture);
        // Returning the randomly created order
        return order;

    }

    #endregion

    // Draws orders for the order screen
    #region DrawOrderScreenOrder

    // Function to draw in the order on the order screen
    public List<GameObject> DrawOrderWithCustomer(Order order, List<GameObject> currentlyDrawn)
    {
        currentlyDrawn = DrawOrderFireFirst(order, currentlyDrawn);    // Fire
        currentlyDrawn = DrawOrderListFirst(order, 1, currentlyDrawn);   // Doughs
        currentlyDrawn = DrawOrderListFirst(order, 2, currentlyDrawn);   // Toppings
        currentlyDrawn = DrawCustomer(order, currentlyDrawn);    // Customer
        return currentlyDrawn;
    }

    // Function to draw in the fire icons on the order screen
    public List<GameObject> DrawOrderFireFirst(Order order, List<GameObject> currentlyDrawn)
    {
        // Calculate the total length that the fires will occupy
        float totalLength = orderCardFire1.transform.localScale.x * 40 * ((int)order.Cookie.Heat.Level - 1);
        // Calculate the starting X position so that the objects are centered around the orderCardFire X position
        float startX = orderCardFire1.transform.position.x - totalLength;

        for (var i = 0; i < (int)order.Cookie.Heat.Level; i++)
        {
            // Calculate the X position of each fire image
            float posX = startX + orderCardFire1.transform.localScale.x * 80 * i;

            // Instantiate the fire image at the calculated position
            GameObject fireImage = Instantiate(
                order.Cookie.Heat.Icon,
                new Vector3(posX, orderCardFire1.transform.position.y, 0),
                Quaternion.identity,
                transform.parent.gameObject.transform);
            currentlyDrawn.Add(fireImage);
        }
        return currentlyDrawn;
    }

    // Function to draw in the dough / toppings icons on the order screen
    public List<GameObject> DrawOrderListFirst(Order order, int option, List<GameObject> currentlyDrawn)
    {

        if (option == 1) // DOUGHS
        {
            // Calculate the total length that the icons will occupy
            float totalLength = orderCardDough1.transform.localScale.x * 50 * (order.Cookie.DoughList.Count - 1);
            // Calculate the starting X position so that the objects are centered around the orderCard X position
            float startX = orderCardDough1.transform.position.x - totalLength;

            float posY = orderCardDough1.transform.position.y;

            for (var i = 0; i < order.Cookie.DoughList.Count; i++)
            {
                // Calculate the X position of each icon image
                float posX = startX + orderCardDough1.transform.localScale.x * 100 * i;

                // Instantiate the icon image at the calculated position
                GameObject doughImage = Instantiate(
                    order.Cookie.DoughList[i].Icon,
                    new Vector3(posX, posY, 0),
                    Quaternion.identity,
                    transform.parent.gameObject.transform);
                currentlyDrawn.Add(doughImage);
            }
        }
        else // TOPPINGS
        {
            // Calculate the total length that the icons will occupy
            float totalLength = orderCardToppings1.transform.localScale.x * 50 * (order.Cookie.ToppingsList.Count - 1);
            // Calculate the starting X position so that the objects are centered around the orderCard X position
            float startX = orderCardToppings1.transform.position.x - totalLength;

            float posY = orderCardToppings1.transform.position.y;

            for (var i = 0; i < order.Cookie.ToppingsList.Count; i++)
            {
                // Calculate the X position of each icon image
                float posX = startX + orderCardToppings1.transform.localScale.x * 100 * i;

                // Instantiate the icon image at the calculated position
                GameObject toppingsImage = Instantiate(
                    order.Cookie.ToppingsList[i].Icon,
                    new Vector3(posX, posY, 0),
                    Quaternion.identity,
                    transform.parent.gameObject.transform);
                currentlyDrawn.Add(toppingsImage);
            }
        }
        return currentlyDrawn;
    }

    // Function to draw the ordering customer
    public List<GameObject> DrawCustomer(Order order, List<GameObject> currentlyDrawn)
    {
        // Calculate the customer X position
        float posX = CustomerAnchor.transform.position.x + CustomerAnchor.transform.localScale.x;

        // Calculate the customer Y position
        float posY = CustomerAnchor.transform.position.y;

        // Instantiate the customer image at the calculated position
        GameObject customerImage = Instantiate(
            order.Customer,
            new Vector3(posX, posY, 0),
            Quaternion.identity,
            transform.parent.gameObject.transform);
        currentlyDrawn.Add(customerImage);
        return currentlyDrawn;
    }

    #endregion

    // A function that disables all screens and buttons except for the end screen
    public void StartEndScreen()
    {
        // Disable the bottom screen buttons
        bottomButtonOrderScreen.SetActive(false);
        bottomButtonDoughScreen.SetActive(false);
        bottomButtonOvenScreen.SetActive(false);
        bottomButtonToppingScreen.SetActive(false);

        // Disable all normal backgrounds
        backgroundManager.OrderBackground.DisableOrderBackground();
        backgroundManager.DoughBackground.DisableDoughBackground();
        backgroundManager.HeatBackground.DisableHeatBackground();
        backgroundManager.ToppingBackground.DisableToppingBackground();

        backgroundManager.FinalBackground.EnableFinalBackground();
        backgroundManager.FinalBackground.PopulateEndGameInput(completedOrders, completedCreations, evilOrderCount, completedOrderCount);
        backgroundManager.FinalBackground.DrawOrderAndCookie();
    }

    // Draws orders for all screens except the order screen, since the order card is in a different location
    #region DrawCommonOrder

    // Function to draw orders on the dough, heat, and topping screens
    public List<GameObject> DrawOrderCommon(Order order, List<GameObject> currentlyDrawn)
    {
        currentlyDrawn = DrawOrderFireSecond(order, currentlyDrawn);    // Fire
        currentlyDrawn = DrawOrderListSecond(order, 1, currentlyDrawn);   // Doughs
        currentlyDrawn = DrawOrderListSecond(order, 2, currentlyDrawn);   // Toppings
        return currentlyDrawn;
    }

    // IMPORTANT NOTE: To make the fires print closer together, reduce the number in the total length assignment,
    // and reduce the number in the first line of the for loop by double that
    
    // Function that draws in the fire icons for the order cards on the dough, heat, and topping screens
    public List<GameObject> DrawOrderFireSecond(Order order, List<GameObject> currentlyDrawn)
    {
        // Calculate the total length that the fires will occupy
        float totalLength = orderCardFire2.transform.localScale.x * 30 * ((int)order.Cookie.Heat.Level - 1);
        // Calculate the starting X position so that the objects are centered around the orderCardFire X position
        float startX = orderCardFire2.transform.position.x - totalLength;

        for (var i = 0; i < (int)order.Cookie.Heat.Level; i++)
        {
            // Calculate the X position of each fire image
            float posX = startX + orderCardFire2.transform.localScale.x * 60 * i;

            // Instantiate the fire image at the calculated position
            GameObject fireImage = Instantiate(
                order.Cookie.Heat.Icon,
                new Vector3(posX, orderCardFire2.transform.position.y, 0),
                Quaternion.identity,
                transform.parent.gameObject.transform);
            currentlyDrawn.Add(fireImage);
        }
        return currentlyDrawn;
    }

    // Function that draws in the dough / topping icons for the order cards on the dough, heat, and topping screens
    public List<GameObject> DrawOrderListSecond(Order order, int option, List<GameObject> currentlyDrawn)
    {

        if (option == 1) // DOUGHS
        {
            // Calculate the total length that the icons will occupy
            float totalLength = orderCardDough2.transform.localScale.x * 40 * (order.Cookie.DoughList.Count - 1);
            // Calculate the starting X position so that the objects are centered around the orderCard X position
            float startX = orderCardDough2.transform.position.x - totalLength;

            float posY = orderCardDough2.transform.position.y;

            for (var i = 0; i < order.Cookie.DoughList.Count; i++)
            {
                // Calculate the X position of each icon image
                float posX = startX + orderCardDough2.transform.localScale.x * 80 * i;

                // Instantiate the icon image at the calculated position
                GameObject doughImage = Instantiate(
                    order.Cookie.DoughList[i].Icon,
                    new Vector3(posX, posY, 0),
                    Quaternion.identity,
                    transform.parent.gameObject.transform);
                currentlyDrawn.Add(doughImage);
            }
        }
        else // TOPPINGS
        {
            // Calculate the total length that the icons will occupy
            float totalLength = orderCardToppings2.transform.localScale.x * 40 * (order.Cookie.ToppingsList.Count - 1);
            // Calculate the starting X position so that the objects are centered around the orderCard X position
            float startX = orderCardToppings2.transform.position.x - totalLength;

            float posY = orderCardToppings2.transform.position.y;

            for (var i = 0; i < order.Cookie.ToppingsList.Count; i++)
            {
                // Calculate the X position of each icon image
                float posX = startX + orderCardToppings2.transform.localScale.x * 80 * i;

                // Instantiate the icon image at the calculated position
                GameObject toppingsImage = Instantiate(
                    order.Cookie.ToppingsList[i].Icon,
                    new Vector3(posX, posY, 0),
                    Quaternion.identity,
                    transform.parent.gameObject.transform);
                currentlyDrawn.Add(toppingsImage);
            }
        }
        return currentlyDrawn;
    }
    
    #endregion

}
