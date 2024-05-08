using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;

public class DoughBackground : MonoBehaviour
{
    // Images used in the background
    public GameObject background;
    public GameObject orderText;
    public GameObject orderCard;
    public GameObject ordersTakenText;
    public GameObject moveToOvenButton;
    public GameObject bowl;

    // Jar Objects
    public GameObject chocolateJar;
    public GameObject redVelvetJar;
    public GameObject sugarJar;
    public GameObject chocolateJarLid;
    public GameObject redVelvetJarLid;
    public GameObject sugarJarLid;

    public DoughBackground()
    {
    }

    void Start()
    {
       // Disable this background at the start, since the start is the order background
       DisableDoughBackground();
       // Should not be telling the user that there are no applicable orders by default
       ordersTakenText.SetActive(false);
       // Should not show the button to move on by default
       moveToOvenButton.SetActive(false);
    }

    // Enable all objects in the background (for when this background is selected)
    public void EnableDoughBackground()
    {
        background.SetActive(true);
        orderText.SetActive(true);
        orderCard.SetActive(true);
        bowl.SetActive(true);
        chocolateJar.SetActive(true);
        redVelvetJar.SetActive(true);
        sugarJar.SetActive(true);
        chocolateJarLid.SetActive(true);
        redVelvetJarLid.SetActive(true);
        sugarJarLid.SetActive(true);
    }

    // Disables all objects for this background so they are not visible
    public void DisableDoughBackground()
    {
        background.SetActive(false);
        orderText.SetActive(false);
        orderCard.SetActive(false);
        ordersTakenText.SetActive(false);
        moveToOvenButton.SetActive(false);
        bowl.SetActive(false);
        chocolateJar.SetActive(false);
        redVelvetJar.SetActive(false);
        sugarJar.SetActive(false);
        chocolateJarLid.SetActive(false);
        redVelvetJarLid.SetActive(false);
        sugarJarLid.SetActive(false);
    }

    // The text that lets the user know when there are no applicable orders
    public GameObject OrdersTakenText
    {
        get => ordersTakenText;
        set => ordersTakenText = value;
    }

    // A button that allows the user to move the order to the oven station
    public GameObject MoveToOvenButton
    {
        get => moveToOvenButton;
        set => moveToOvenButton = value;
    }





}