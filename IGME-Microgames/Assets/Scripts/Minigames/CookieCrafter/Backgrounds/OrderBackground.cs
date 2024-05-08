using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;

public class OrderBackground : MonoBehaviour
{
    // Images used in the background
    public GameObject background;
    public GameObject acceptOrderButton;
    public GameObject denyOrderButton;
    public GameObject orderText;
    public GameObject ordersTakenText;


    public OrderBackground()
    {
    }

    void Start()
    {
        // Should not be telling the user that there are no applicable orders by default
        ordersTakenText.SetActive(false);
    }

    // The text that lets the user know when there are no applicable orders
    public GameObject OrdersTakenText
    {
        get => ordersTakenText;
        set => ordersTakenText = value;
    }

    // Enable all objects in the background (for when this background is selected)
    public void EnableOrderBackground()
    {
        background.SetActive(true);
        acceptOrderButton.SetActive(true);
        denyOrderButton.SetActive(true);
        orderText.SetActive(true);
    }

    // Disables all objects for this background so they are not visible
    public void DisableOrderBackground()
    {
        background.SetActive(false);
        acceptOrderButton.SetActive(false);
        denyOrderButton.SetActive(false);
        orderText.SetActive(false);
        ordersTakenText.SetActive(false);
    }

}
