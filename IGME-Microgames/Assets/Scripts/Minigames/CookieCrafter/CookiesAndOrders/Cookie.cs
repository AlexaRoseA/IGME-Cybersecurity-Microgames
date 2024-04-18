using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;

public class Cookie : MonoBehaviour
{
    // Assume Dough, Heat, and Toppings classes are already defined as described earlier

    private List<Dough> dough;
    private Heat heat;
    private List<Toppings> toppings;

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

    // Constructor to initialize a new Cookie with default values
    public Cookie(List<Dough> dough, Heat heat, List<Toppings> toppings)
    {
        this.dough = dough; // Assign the passed parameter to the field
        this.heat = heat; // Assign the passed parameter to the field
        this.toppings = toppings; // Assign the passed parameter to the field
    }
   
    // Property for Dough
    public List<Dough> DoughList
    {
        get => dough;
        set => dough = value;
    }

    // Property for Heat
    public Heat Heat
    {
        get => heat;
        set => heat = value;
    }

    // Property for Toppings
    public List<Toppings> ToppingsList
    {
        get => toppings;
        set => toppings = value;
    }

    
    //void Start()
    //{
    //    List<Dough> dough = new List<Dough>();
    //    heat = new Heat(2.0);
    //    List<Toppings> toppings = new List<Toppings>();
    //    //UnityEngine.Debug.Log(dough.Type + " =================== " + heat.Level.ToString("0") + " =================== " + toppings.Type);
    //}
    public void DrawCookie()
    {

    }

    
}