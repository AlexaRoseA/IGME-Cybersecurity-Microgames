using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Diagnostics;

public class OrderManager : MonoBehaviour
{
    
    private List<string> possibleDoughTypes;
    private List<string> possibleToppingTypes;

    private List<Order> newOrders; // Orders the customers will request
    private List<Order> activeOrders; // Orders the player can actively create
    private List<Order> completedOrders; // Orders the player has completed

    private List<Order> activeCreations; // Active creations by the player
    private List<Order> completedCreations; // Completed creations by the player

    private int difficulty;
    private int orderCount;

    public GameObject chocolateIcon;
    public GameObject redVelvetIcon;
    public GameObject sugarIcon;
    public GameObject heatIcon;
    public GameObject chocolateChipsIcon;
    public GameObject sprinklesIcon;
    public GameObject nutsIcon;
    private List<GameObject> doughIcons;
    private List<GameObject> toppingsIcons;

    // Start is called before the first frame update
    void Start()
    {
        // Populating the lists of possible doughs and toppings
        List<string> possibleDoughTypes = new List<string>();
        List<string> possibleToppingTypes = new List<string>();
        possibleDoughTypes = PopulatePossibleTypes(possibleDoughTypes, 1);
        possibleToppingTypes = PopulatePossibleTypes(possibleToppingTypes, 2);

        List<GameObject> doughIcons = new List<GameObject>();
        doughIcons.Add(chocolateIcon);
        doughIcons.Add(redVelvetIcon);
        doughIcons.Add(sugarIcon);
        List<GameObject> toppingsIcons = new List<GameObject>();
        toppingsIcons.Add(chocolateChipsIcon);
        toppingsIcons.Add(sprinklesIcon);
        toppingsIcons.Add(nutsIcon);

        // Creating lists for new, active, and completed orders
        newOrders = new List<Order>();

        difficulty = 1;

        switch (difficulty)
        {
            case 2:
                orderCount = 4;
                break;
            case 3:
                orderCount = 6;
                break;
            default: // Default is 1
                orderCount = 2;
                break;
        }

        for (int i = 0; i < orderCount; i++)
        {
            newOrders.Add(CreateOrder(difficulty, possibleDoughTypes, possibleToppingTypes, doughIcons, toppingsIcons, heatIcon));
            if (newOrders[i].IsBad)
            {
                UnityEngine.Debug.Log("ORDER NUMBER " + (i + 1) + " IS BAD. ==== It has " + newOrders[i].Cookie.DoughList.Count + " doughs and " + newOrders[i].Cookie.ToppingsList.Count + " toppings. The heat is " + newOrders[i].Cookie.Heat.Level);
            }
            else
            {
                UnityEngine.Debug.Log("ORDER NUMBER " + (i + 1) + " IS GOOD. ==== It has " + newOrders[i].Cookie.DoughList.Count + " doughs and " + newOrders[i].Cookie.ToppingsList.Count + " toppings. The heat is " + newOrders[i].Cookie.Heat.Level);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // Script to populate variables on script startup
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

    // A function to create a new cookie order, based on currently set difficulty.
    public Order CreateOrder(int difficulty, List<string> possibleDoughTypes, List<string> possibleToppingTypes, List<GameObject> doughIcons, List<GameObject> toppingsIcons, GameObject heatIcon)
    {
        int numberDoughs = 0;
        int numberToppings = 0;
        int int1 = 0;
        int int2 = 0;
        // Default difficulty is 1
        switch(difficulty)
        {
            case 2: // Difficulty 2
                numberDoughs = UnityEngine.Random.Range(1,3);
                numberToppings = UnityEngine.Random.Range(1,3);
                break;
            case 3: // Difficulty 3
                numberDoughs = UnityEngine.Random.Range(2,4);
                numberToppings = UnityEngine.Random.Range(2,4);
                break;
            default: // Difficulty 1
                numberDoughs = 1;
                numberToppings = 1;
                break;
        }

        // =============================== GETTING THE RANDOM DOUGH(S) ===============================

        List<Dough> doughs = new List<Dough>();
        Dough dough1;
        Dough dough2;
        Dough dough3;

        switch(numberDoughs)
        {
            case 2: // 2 Doughs
                int1 = UnityEngine.Random.Range(0,3);
                int2 = UnityEngine.Random.Range(0,3);
                while (int1 == int2)
                {
                    int2 = UnityEngine.Random.Range(0,3);
                }
                dough1 = new Dough(possibleDoughTypes[int1], doughIcons[int1]);
                dough2 = new Dough(possibleDoughTypes[int2], doughIcons[int2]);
                doughs.Add(dough1);
                doughs.Add(dough2);
                break;
            case 3: // 3 Doughs
                dough1 = new Dough(possibleDoughTypes[0], doughIcons[0]);
                dough2 = new Dough(possibleDoughTypes[1], doughIcons[1]);
                dough3 = new Dough(possibleDoughTypes[2], doughIcons[2]);
                doughs.Add(dough1);
                doughs.Add(dough2);
                doughs.Add(dough3);
                break;
            default: // 1 Dough
                int choose = UnityEngine.Random.Range(0, 3);
                dough1 = new Dough(possibleDoughTypes[choose], doughIcons[choose]);
                doughs.Add(dough1);
                break;
        }

        // =============================== GETTING THE RANDOM TOPPING(S) ===============================

        List<Toppings> toppings = new List<Toppings>();
        Toppings topping1;
        Toppings topping2;
        Toppings topping3;

        switch(numberToppings)
        {
            case 2: // 2 Toppings
                int1 = UnityEngine.Random.Range(0,3);
                int2 = UnityEngine.Random.Range(0,3);
                while(int1 == int2)
                {
                    int2 = UnityEngine.Random.Range(0,3);
                }
                topping1 = new Toppings(possibleToppingTypes[int1], toppingsIcons[int1]);
                topping2 = new Toppings(possibleToppingTypes[int2], toppingsIcons[int2]);
                toppings.Add(topping1);
                toppings.Add(topping2);
                break;
            case 3: // 3 Toppings
                topping1 = new Toppings(possibleToppingTypes[0], toppingsIcons[0]);
                topping2 = new Toppings(possibleToppingTypes[1], toppingsIcons[1]);
                topping3 = new Toppings(possibleToppingTypes[2], toppingsIcons[2]);
                toppings.Add(topping1);
                toppings.Add(topping2);
                toppings.Add(topping3);
                break;
            default: // 1 Toppings
                int choose = UnityEngine.Random.Range(0, 3);
                topping1 = new Toppings(possibleToppingTypes[choose], toppingsIcons[choose]);
                toppings.Add(topping1);
                break;
        }

        // =============================== GETTING THE RANDOM FIRE LEVEL ===============================
        int fireLevel = UnityEngine.Random.Range(1,6);
        Heat heat = new Heat(fireLevel, heatIcon);

        // =============================== SETTING CUSTOMER GOOD OR BAD STATE ===============================
        bool isBad;
        int isBadInt;
        switch (difficulty)
        {
            case 2:
                isBadInt = UnityEngine.Random.Range(1, 7);
                break;
            case 3:
                isBadInt = UnityEngine.Random.Range(1, 10);
                break;
            default: // Difficulty 1
                isBadInt = UnityEngine.Random.Range(1, 5);
                break;
        }
        if (isBadInt == 3)
        {
            isBad = true;
        }
        else
        {
            isBad = false;
        }

        // Creating the cookie
        Cookie cookie = new Cookie(doughs, heat, toppings);
        Order order = new Order(cookie, 1, isBad);
        return order;

    }
    
}
