using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class Dough
{
    private string type;
    //public Texture2D texture;

    public Dough(string doughType)
    {
        if (doughType == "Chocolate" || doughType == "Red Velvet" || doughType == "Sugar")
        {
            type = doughType;
        }
        else
        {
            type = "Chocolate";
        }
    }
}


public class Heat
{
    private double level;

    public Heat(double levelHeat)
    {
        if (levelHeat == 1.0 || levelHeat == 2.0 || levelHeat == 3.0 || levelHeat == 4.0 || levelHeat == 5.0)
        {
            level = levelHeat;
        }
        else
        {
            level = 1.0;
        }
    }
}


public class Toppings
{
    private string type;
    //public Texture2D texture;

    public Toppings(string toppingType)
    {
        if (toppingType == "Chocolate Chips" || toppingType == "Sprinkles" || toppingType == "Nuts")
        {
            type = toppingType;
        }
        else
        {
            type = "Chocolate Chips";
        }
    }
}


public class Cookie
{
    private List<Dough> doughs;
    private double heat;
    private List<Toppings> toppings;

    public Cookie(List<Dough> doughAdd, double heatAdd, List<Toppings> toppingAdd, int state) // state 1: future, state2: current, state3: past
    {
        doughs = doughAdd;
        heat = heatAdd;
        toppings = toppingAdd;
    }
}


public class CookieProperties : MonoBehaviour
{

    public List<string> possibleDoughTypes;
    public List<string> possibleToppingTypes;
    public List<Cookie> orders; // The orders customers request
    public List<Cookie> cookies; // The cookies the player makes

    // Start is called before the first frame update
    void Start()
    {
        // Populating the lists of possible doughs and toppings
        List<string> possibleDoughTypes = new List<string>();
        List<string> possibleToppingTypes = new List<string>();
        possibleDoughTypes = PopulatePossibleTypes(possibleDoughTypes, 1);
        possibleToppingTypes = PopulatePossibleTypes(possibleToppingTypes, 2);
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
    public Cookie CreateOrder(int difficulty, List<string> possibleDoughTypes, List<string> possibleToppingTypes)
    {
        int numberDoughs = 0;
        int numberToppings = 0;
        int int1 = 0;
        int int2 = 0;
        // Default difficulty is 1
        switch(difficulty)
        {
            case 2: // Difficulty 2
                numberDoughs = UnityEngine.Random.Range(1,2);
                numberToppings = UnityEngine.Random.Range(1,2);
                break;
            case 3: // Difficulty 3
                numberDoughs = UnityEngine.Random.Range(2,3);
                numberToppings = UnityEngine.Random.Range(2,3);
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
                int1 = UnityEngine.Random.Range(0,2);
                int2 = UnityEngine.Random.Range(0,2);
                while(int1 == int2)
                {
                    int2 = UnityEngine.Random.Range(0,2);
                }
                dough1 = new Dough(possibleDoughTypes[int1]);
                dough2 = new Dough(possibleDoughTypes[int2]);
                doughs.Add(dough1);
                doughs.Add(dough2);
                break;
            case 3: // 3 Doughs
                dough1 = new Dough(possibleDoughTypes[0]);
                dough2 = new Dough(possibleDoughTypes[1]);
                dough3 = new Dough(possibleDoughTypes[2]);
                doughs.Add(dough1);
                doughs.Add(dough2);
                doughs.Add(dough3);
                break;
            default: // 1 Dough
                dough1 = new Dough(possibleDoughTypes[UnityEngine.Random.Range(0,2)]);
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
                int1 = UnityEngine.Random.Range(0,2);
                int2 = UnityEngine.Random.Range(0,2);
                while(int1 == int2)
                {
                    int2 = UnityEngine.Random.Range(0,2);
                }
                topping1 = new Toppings(possibleToppingTypes[int1]);
                topping2 = new Toppings(possibleToppingTypes[int2]);
                toppings.Add(topping1);
                toppings.Add(topping2);
                break;
            case 3: // 3 Toppings
                topping1 = new Toppings(possibleToppingTypes[0]);
                topping2 = new Toppings(possibleToppingTypes[1]);
                topping3 = new Toppings(possibleToppingTypes[2]);
                toppings.Add(topping1);
                toppings.Add(topping2);
                toppings.Add(topping3);
                break;
            default: // 1 Toppings
                topping1 = new Toppings(possibleToppingTypes[UnityEngine.Random.Range(0,2)]);
                toppings.Add(topping1);
                break;
        }

        // =============================== GETTING THE RANDOM FIRE LEVEL ===============================
        int fireLevel = UnityEngine.Random.Range(1,5);

        // Creating the cookie
        Cookie cookie = new Cookie(doughs, (double)fireLevel, toppings, 1);
        return cookie;

    }
}
