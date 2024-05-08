using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;

public class Cookie : MonoBehaviour
{
    // Assume Dough, Heat, and Toppings classes are already defined as described earlier
    private List<Dough> dough;
    private Heat heat;
    private List<Toppings> toppings;


    // Constructor to initialize a new Cookie with default values
    public Cookie(List<Dough> dough, Heat heat, List<Toppings> toppings)
    {
        this.dough = dough; // Assign the passed parameter to the field
        this.heat = heat; // Assign the passed parameter to the field
        this.toppings = toppings; // Assign the passed parameter to the field
    }

    // Constructor to initialize a new Cookie with default values
    public Cookie()
    {
        dough = new List<Dough>(); // Instantiate a blank list of doughs
        heat = new Heat((double)0); // Set the heat to 0 to start
        toppings = new List<Toppings>(); // Instantiate a blank list of toppings
    }

    // Property for Dough
    public List<Dough> DoughList
    {
        get => dough;
        set => dough = value;
    }

    // Property for Heat
    public Heat Heat
    {
        get => heat;
        set => heat = value;
    }

    // Property for Toppings
    public List<Toppings> ToppingsList
    {
        get => toppings;
        set => toppings = value;
    }


    
}