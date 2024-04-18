using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrderCookieManager : MonoBehaviour
{
    /*
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
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
    */
}
