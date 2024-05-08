using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;

// Enum for the 4 different backgrounds
public enum CurrentBackground
{
    OrderScreen = 0,
    DoughScreen = 1,
    HeatScreen = 2,
    ToppingScreen = 3,
    FinalScreen = 4
}

public class BackgroundManager : MonoBehaviour
{
    // Objects for the different backgrounds
    public OrderBackground orderBackground;
    public DoughBackground doughBackground;
    public HeatBackground ovenBackground;
    public ToppingBackground toppingBackground;
    public FinalBackground finalBackground;
    // Int to keep track of the current background
    public int currentBackground;

    // Start is called before the first frame update
    void Start()
    {
        // The starting background will always be the order screen
        currentBackground = (int)CurrentBackground.OrderScreen;
    }

    // Update is called once per frame. Not used
    void Update()
    {
        
    }

    // Order background get / set
    public OrderBackground OrderBackground
    {
        get => orderBackground;
        set => orderBackground = value;
    }

    // Dough background get / set
    public DoughBackground DoughBackground
    {
        get => doughBackground;
        set => doughBackground = value;
    }

    // Heat background get / set
    public HeatBackground HeatBackground
    {
        get => ovenBackground;
        set => ovenBackground = value;
    }

    // Topping background get / set
    public ToppingBackground ToppingBackground
    {
        get => toppingBackground;
        set => toppingBackground = value;
    }

    // Final background get / set
    public FinalBackground FinalBackground
    {
        get => finalBackground;
        set => finalBackground = value;
    }


    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-= BUTTONS =-=-=-=-=-=-=-=-=-=-=-=-=-=-=

    // Order Screen Button
    public void OrderScreenButton()
    {
        // Enable the screen
        orderBackground.EnableOrderBackground();
        // If this is a new background, remove the old one
        if ((CurrentBackground)currentBackground != CurrentBackground.OrderScreen)
        {
            DisableCurrentScreen();
        }
        // Update the current background tracker
        currentBackground = (int)CurrentBackground.OrderScreen;
        // Enable the screen again, just in case
        orderBackground.EnableOrderBackground();
    }

    // Dough Screen Button
    public void DoughScreenButton()
    {
        // Enable the screen
        doughBackground.EnableDoughBackground();
        // If this is a new background, remove the old one
        if ((CurrentBackground)currentBackground != CurrentBackground.DoughScreen)
        {
            DisableCurrentScreen();
        }
        // Update the current background tracker
        currentBackground = (int)CurrentBackground.DoughScreen;
        // Enable the screen again, just in case
        doughBackground.EnableDoughBackground();
    }

    // Oven Screen Button
    public void OvenScreenButton()
    {
        // Enable the screen
        ovenBackground.EnableHeatBackground();
        // If this is a new background, remove the old one
        if ((CurrentBackground)currentBackground != CurrentBackground.HeatScreen)
        {
            DisableCurrentScreen();
        }
        // Update the current background tracker
        currentBackground = (int)CurrentBackground.HeatScreen;
        // Enable the screen again, just in case
        ovenBackground.EnableHeatBackground();
    }

    // Topping Screen Button
    public void ToppingScreenButton()
    {
        // Enable the screen
        toppingBackground.EnableToppingBackground();
        // If this is a new background, remove the old one
        if ((CurrentBackground)currentBackground != CurrentBackground.ToppingScreen)
        {
            DisableCurrentScreen();
        }
        // Update the current background tracker
        currentBackground = (int)CurrentBackground.ToppingScreen;
        // Enable the screen again, just in case
        toppingBackground.EnableToppingBackground();
    }

    // Disables the current screen if a new one has been chosen
    public void DisableCurrentScreen()
    {
        // Find out which screen should be disabled and then disable it
        switch ((CurrentBackground)currentBackground)
        {
            case CurrentBackground.OrderScreen:
                orderBackground.DisableOrderBackground();
                break;
            case CurrentBackground.DoughScreen:
                doughBackground.DisableDoughBackground();
                break;
            case CurrentBackground.HeatScreen:
                ovenBackground.DisableHeatBackground();
                break;
            case CurrentBackground.ToppingScreen:
                toppingBackground.DisableToppingBackground();
                break;
            default: // This should never be reached
                UnityEngine.Debug.Log("=-=-=-=-=-=-=-=-= SOMETHING IS BROKEN IN BackgroundManager.cs DisableCurrentScreen =-=-=-=-=-=-=-=-=");
                break;
        }
    }

}
