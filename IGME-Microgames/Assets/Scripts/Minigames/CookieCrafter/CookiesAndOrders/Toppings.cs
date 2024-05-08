using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Toppings : MonoBehaviour
{
    // Backing field for the Type property.
    private string type = "Chocolate Chips";
    private GameObject icon;

    // Constructor with two parameters
    public Toppings(string type, GameObject icon)
    {
        // Call the Type property's setter.
        this.Type = type;
        this.Icon = icon;
    }

    // Constructor with one parameter
    public Toppings(string type)
    {
        // Call the Type property's setter.
        this.Type = type;
    }

    // Property for 'type' with custom logic in the setter.
    public string Type
    {
        get { return type; }
        set
        {
            // Validate the input and assign the value to 'type'.
            if (value == "Chocolate Chips" || value == "Sprinkles" || value == "Nuts")
            {
                type = value;
            }
            else
            {
                type = "Chocolate Chips";
            }
        }
    }

    public GameObject Icon // The icon on the order card
    {
        get => icon;
        set => icon = value;
    }

}

