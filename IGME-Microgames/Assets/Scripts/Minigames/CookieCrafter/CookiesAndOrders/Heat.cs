using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heat : MonoBehaviour
{
    private double level = 1.0;
    private GameObject icon;

    // Constructor with a parameter.
    public Heat(double level, GameObject icon)
    {
        // Call the Level property's setter.
        this.Level = level;
        this.Icon = icon;
    }

    // Property for 'level' with custom logic in the setter.
    public double Level
    {
        get { return level; }
        set
        {
            // Validate the input and assign the value to 'level'.
            if (value == 1.0 || value == 2.0 || value == 3.0 || value == 4.0 || value == 5.0)
            {
                level = value;
            }
            else
            {
                level = 1.0;
            }
        }
    }

    public GameObject Icon // The icon on the order card
    {
        get => icon;
        set => icon = value;
    }

}
