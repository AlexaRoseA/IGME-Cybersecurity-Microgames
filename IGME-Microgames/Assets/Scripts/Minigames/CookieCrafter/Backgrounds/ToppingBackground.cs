using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToppingBackground : MonoBehaviour
{
    // Images used in the background
    public GameObject background;
    public GameObject ordersTakenText;
    public GameObject completeOrderButton;
    public GameObject orderCard;
    public GameObject orderText;

    // Jar Objects
    public GameObject chocolateChipJar;
    public GameObject sprinklesJar;
    public GameObject nutsJar;
    public GameObject chocolateChipJarLid;
    public GameObject nutsJarLid;

    public ToppingBackground()
    {
    }

    void Start()
    {
        // Disable this background at the start, since the start is the order background
        DisableToppingBackground();
        // Should not be telling the user that there are no applicable orders by default
        ordersTakenText.SetActive(false);
        // Should not show the button to move on by default
        completeOrderButton.SetActive(false);
    }

    // Enable all objects in the background (for when this background is selected)
    public void EnableToppingBackground()
    {
        background.SetActive(true);
        orderCard.SetActive(true);
        orderText.SetActive(true);
        chocolateChipJar.SetActive(true);
        sprinklesJar.SetActive(true);
        nutsJar.SetActive(true);
        chocolateChipJarLid.SetActive(true);
        nutsJarLid.SetActive(true);
    }

    // Disables all objects for this background so they are not visible
    public void DisableToppingBackground()
    {
        background.SetActive(false);
        ordersTakenText.SetActive(false);
        completeOrderButton.SetActive(false);
        orderCard.SetActive(false);
        orderText.SetActive(false);
        chocolateChipJar.SetActive(false);
        sprinklesJar.SetActive(false);
        nutsJar.SetActive(false);
        chocolateChipJarLid.SetActive(false);
        nutsJarLid.SetActive(false);
    }

    // The text that lets the user know when there are no applicable orders
    public GameObject OrdersTakenText
    {
        get => ordersTakenText;
        set => ordersTakenText = value;
    }

    // A button that allows the user to complete an order
    public GameObject CompleteOrderButton
    {
        get => completeOrderButton;
        set => completeOrderButton = value;
    }

}
