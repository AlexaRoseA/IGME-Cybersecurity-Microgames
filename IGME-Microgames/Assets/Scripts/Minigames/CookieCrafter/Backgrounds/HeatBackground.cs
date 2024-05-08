using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeatBackground : MonoBehaviour
{
    // Images used in the background
    public GameObject background;
    public GameObject ordersTakenText;
    public GameObject startOvenButton;
    public GameObject stopOvenButton;
    public GameObject orderCard;
    public GameObject orderText;

    // Oven bars
    public GameObject ovenBar1;
    public GameObject ovenBar2;
    public GameObject ovenBar3;
    public GameObject ovenBar4;
    public GameObject ovenBar5;
    public GameObject ovenBar0;
    public GameObject ovenBarTracker;
    // List of currently drawn oven bar parts, so they can easily be deleted later
    private List<GameObject> currentlyDrawn = new List<GameObject>();

    public HeatBackground()
    {
    }

    void Start()
    {
        // Disable this background at the start, since the start is the order background
        DisableHeatBackground();
        // Should not be telling the user that there are no applicable orders by default
        ordersTakenText.SetActive(false);
        // Should not show the buttons to move on by default
        startOvenButton.SetActive(false);
        stopOvenButton.SetActive(false);
        ovenBar1.SetActive(false);
        ovenBar2.SetActive(false);
        ovenBar3.SetActive(false);
        ovenBar4.SetActive(false);
        ovenBar5.SetActive(false);
        ovenBar0.SetActive(false);
        ovenBarTracker.SetActive(false);
    }

    // Enable all objects in the background (for when this background is selected)
    public void EnableHeatBackground()
    {
        background.SetActive(true);
        orderCard.SetActive(true);
        orderText.SetActive(true);
        ovenBar0.SetActive(true);
    }

    // Disables all objects for this background so they are not visible
    public void DisableHeatBackground()
    {
        background.SetActive(false);
        ordersTakenText.SetActive(false);
        orderCard.SetActive(false);
        orderText.SetActive(false);
        startOvenButton.SetActive(false);
        stopOvenButton.SetActive(false);
        ovenBar1.SetActive(false);
        ovenBar2.SetActive(false);
        ovenBar3.SetActive(false);
        ovenBar4.SetActive(false);
        ovenBar5.SetActive(false);
        ovenBar0.SetActive(false);
        ovenBarTracker.SetActive(false);
    }

    // Find the oven bar with the correct indicator based off of the heat
    public GameObject FindCurrentOvenBar(Heat heat)
    {
        if (heat.Level == 1.0)
        {
            return ovenBar1;
        }
        else if (heat.Level == 2.0)
        {
            return ovenBar2;
        }
        else if (heat.Level == 3.0)
        {
            return ovenBar3;
        }
        else if (heat.Level == 4.0)
        {
            return ovenBar4;
        }
        else // heat.Level == 5.0
        {
            return ovenBar5;
        }
    }

    // Draw the oven bar
    public void DrawOvenBar(GameObject bar)
    {
        bar.SetActive(true);
        ovenBarTracker.SetActive(true);
        currentlyDrawn.Add(bar);
        currentlyDrawn.Add(ovenBarTracker);
    }

    // Destroy the oven bar drawing
    public void DestroyOvenBar()
    {
        foreach (GameObject element in CurrentlyDrawn)
        {
            element.SetActive(false);
        }
    }


    // Property for CurrentlyDrawn
    public List<GameObject> CurrentlyDrawn
    {
        get => currentlyDrawn;
        set => currentlyDrawn = value;
    }

    // The text that lets the user know when there are no applicable orders
    public GameObject OrdersTakenText
    {
        get => ordersTakenText;
        set => ordersTakenText = value;
    }

    // A button that allows the user to start the oven / heat
    public GameObject StartOvenButton
    {
        get => startOvenButton;
        set => startOvenButton = value;
    }

    // A button that allows the user to stop the oven and move the order to toppings
    public GameObject StopOvenButton
    {
        get => stopOvenButton;
        set => stopOvenButton = value;
    }

    // The Default Oven Bar
    public GameObject OvenBar0
    {
        get => ovenBar0;
        set => ovenBar0 = value;
    }

}
