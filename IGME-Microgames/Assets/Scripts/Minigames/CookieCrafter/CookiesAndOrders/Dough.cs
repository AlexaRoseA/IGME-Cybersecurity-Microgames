using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dough : MonoBehaviour
{
    // Backing field for the Type property
    private string type = "Chocolate";
    private GameObject icon;

    // Constructor with a 2 parameters
    public Dough(string type, GameObject icon)
    {
        // Call the Type property's setter
        this.Type = type;
        this.Icon = icon;
    }

    // Constructor with a parameter
    public Dough(string type)
    {
        // Call the Type property's setter
        this.Type = type;
    }

    // Property for 'type' with custom logic in the setter
    public string Type
    {
        get { return type; }
        set
        {
            // Validate the input and assign the value to 'type'
            if (value == "Chocolate" || value == "Red Velvet" || value == "Sugar")
            {
                type = value;
            }
            else
            {
                type = "Chocolate";
            }
        }
    }

    public GameObject Icon // The icon on the order card
    {
        get => icon;
        set => icon = value;
    }

}