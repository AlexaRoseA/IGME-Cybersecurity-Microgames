using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CookieManager : MonoBehaviour
{
    // List of currently drawn cookie parts, so they can easily be deleted later
    private List<GameObject> currentlyDrawn = new List<GameObject>();

    // Loading in the single dough type textures
    public GameObject chocolateNormal;
    public GameObject chocolateBurnt;
    public GameObject chocolateUnderdone;
    public GameObject redVelvetNormal;
    public GameObject redVelvetBurnt;
    public GameObject redVelvetUnderdone;
    public GameObject sugarNormal;
    public GameObject sugarBurnt;
    public GameObject sugarUnderdone;

    // Loading in the double dough type textures
    public GameObject chocolateRedVelvetNormal;
    public GameObject chocolateRedVelvetBurnt;
    public GameObject chocolateRedVelvetUnderdone;
    public GameObject redVelvetSugarNormal;
    public GameObject redVelvetSugarBurnt;
    public GameObject redVelvetSugarUnderdone;
    public GameObject sugarChocolateNormal;
    public GameObject sugarChocolateBurnt;
    public GameObject sugarChocolateUnderdone;

    // Loading in the triple dough type textures and the toppings
    public GameObject sugarChocolateRedVelvetNormal;
    public GameObject sugarChocolateRedVelvetBurnt;
    public GameObject sugarChocolateRedVelvetUnderdone;
    public GameObject chocolateChips;
    public GameObject sprinkles;
    public GameObject nuts;

    // Anchor for drawing the cookie
    public GameObject cookieAnchor;

    // Empty constructor
    public CookieManager()
    {

    }

    // Start is called before the first frame update
    void Start()
    {
        // Disable single doughs
        chocolateNormal.SetActive(false);
        chocolateBurnt.SetActive(false);
        chocolateUnderdone.SetActive(false);
        redVelvetNormal.SetActive(false);
        redVelvetBurnt.SetActive(false);
        redVelvetUnderdone.SetActive(false);
        sugarNormal.SetActive(false);
        sugarBurnt.SetActive(false);
        sugarUnderdone.SetActive(false);

        // Disable double doughs
        chocolateRedVelvetNormal.SetActive(false);
        chocolateRedVelvetBurnt.SetActive(false);
        chocolateRedVelvetUnderdone.SetActive(false);
        redVelvetSugarNormal.SetActive(false);
        redVelvetSugarBurnt.SetActive(false);
        redVelvetSugarUnderdone.SetActive(false);
        sugarChocolateNormal.SetActive(false);
        sugarChocolateBurnt.SetActive(false);
        sugarChocolateUnderdone.SetActive(false);

        // Disable triple doughs
        sugarChocolateRedVelvetNormal.SetActive(false);
        sugarChocolateRedVelvetBurnt.SetActive(false);
        sugarChocolateRedVelvetUnderdone.SetActive(false);

        // Disable Toppings
        chocolateChips.SetActive(false);
        sprinkles.SetActive(false);
        nuts.SetActive(false);
    }

    // Property for CurrentlyDrawn
    public List<GameObject> CurrentlyDrawn
    {
        get => currentlyDrawn;
        set => currentlyDrawn = value;
    }


    // Draw the cookie according to the dough and toppings
    // Stretch goal / future work could be adding the raw / burnt textures
    public void DrawCookie(Cookie cookie)
    {
        // Remove the currently drawn cookie
        foreach (GameObject element in CurrentlyDrawn)
        {
            element.SetActive(false);
        }

        int doughInt = 0;
        // Find the doughs in the list and track them using doughInt
        foreach (Dough dough in cookie.DoughList)
        {
            if (dough.Type == "Chocolate") // 1
            {
                doughInt += 1;
            }
            else if (dough.Type == "Red Velvet") // 2
            {
                doughInt += 2;
            }
            else // Sugar, 4
            {
                doughInt += 4;
            }
        }

        // Create tmp objects to keep track of the cookie dough and toppings
        GameObject cookieDough;
        // Assign the dough value
        if (cookie.Heat.Level < 1.0) // If heat level is low, pass in underdone dough values
        {
            cookieDough = DetermineDough(doughInt, chocolateUnderdone, redVelvetUnderdone, chocolateRedVelvetUnderdone,
             sugarUnderdone, sugarChocolateUnderdone, redVelvetSugarUnderdone, sugarChocolateRedVelvetUnderdone);
        }
        else if (cookie.Heat.Level > 5.0) // If heat level is high, pass in burnt dough values
        {
            cookieDough = DetermineDough(doughInt, chocolateBurnt, redVelvetBurnt, chocolateRedVelvetBurnt,
             sugarBurnt, sugarChocolateBurnt, redVelvetSugarBurnt, sugarChocolateRedVelvetBurnt);
        }
        else // Otherwise, pass in normal dough values
        {
            cookieDough = DetermineDough(doughInt, chocolateNormal, redVelvetNormal, chocolateRedVelvetNormal,
             sugarNormal, sugarChocolateNormal, redVelvetSugarNormal, sugarChocolateRedVelvetNormal);
        }

        // Set the selected dough as active and add it to the list of currently drawn cookie parts
        cookieDough.SetActive(true);
        CurrentlyDrawn.Add(cookieDough);

        // Loop through the toppings for the cookie and draw them
        foreach (Toppings top in cookie.ToppingsList)
        {
            if (top.Type == "Chocolate Chips")
            {
                chocolateChips.SetActive(true);
                CurrentlyDrawn.Add(chocolateChips);
            }
            else if (top.Type == "Sprinkles")
            {
                sprinkles.SetActive(true);
                CurrentlyDrawn.Add(sprinkles);
            }
            else // Sprinkles
            {
                nuts.SetActive(true);
                CurrentlyDrawn.Add(nuts);
            }
        }

    }

    // Destroy the currently drawn cookie
    public void DestroyCookie()
    {
        // Remove the currently drawn cookie
        foreach (GameObject element in CurrentlyDrawn)
        {
            element.SetActive(false);
        }
    }

    // Determine the dough that the cookie should have
    public GameObject DetermineDough(int doughInt, GameObject dough1, GameObject dough2, GameObject dough3,
        GameObject dough4, GameObject dough5, GameObject dough6, GameObject dough7)
    {
        GameObject cookieDough = dough1; // Default value is just chocolate
        // Determine the flavor(s) based on the DoughInt. This uses a similar system as CHMOD
        switch (doughInt)
        {
            case 1: // 1
                cookieDough = dough1;
                break;
            case 2: // 2
                cookieDough = dough2;
                break;
            case 3: // 1 + 2
                cookieDough = dough3;
                break;
            case 4: // 4
                cookieDough = dough4;
                break;
            case 5: // 4 + 1
                cookieDough = dough5;
                break;
            case 6: // 4 + 2
                cookieDough = dough6;
                break;
            case 7: // 4 + 2 + 1
                cookieDough = dough7;
                break;
        }
        return cookieDough;
    }

}
