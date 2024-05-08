using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heat : MonoBehaviour
{
    private double level = 1.0;
    private GameObject icon;

    // Constructor with two parameters
    public Heat(double level, GameObject icon)
    {
        // Call the Level property's setter.
        this.Level = level;
        this.Icon = icon;
    }

    // Constructor with a parameter
    public Heat(double level)
    {
        // Call the Level property's setter.
        this.Level = level;
    }

    // Property for 'level' with custom logic in the setter.
    public double Level
    {
        get { return level; }
        set
        {
            level = value;
        }
    }

    public GameObject Icon // The icon on the order card
    {
        get => icon;
        set => icon = value;
    }

}
