using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Order : MonoBehaviour
{
    private Cookie cookie;
    private int state;
    private int score;
    private bool isBad;
    private GameObject customer;
    private int completeness;

    // Constructor to initialize a new Order with default values
    public Order(Cookie cookie, int state, bool isBad, GameObject customer)
    {
        this.Cookie = cookie;
        this.State = state;
        this.IsBad = isBad;
        this.Customer = customer;
        score = 1000;
        completeness = 0;
    }

    // Constructor overload for Order for creations
    public Order(Cookie cookie)
    {
        this.Cookie = cookie;
    }

    public Cookie Cookie // The cookie the order is requesting
    {
        get => cookie;
        set => cookie = value;
    }

    public int State // Request, Accepted, Done
    {
        get => state;
        set => state = value;
    }

    public int Score
    {
        get => score;
        set => score = value;
    }

    public bool IsBad // If the order is evil
    {
        get => isBad;
        set => isBad = value;
    }

    public GameObject Customer // Drawing of the customer
    {
        get => customer;
        set => customer = value;
    }

    public int Completeness // needsDough = 0, needsHeat=1, needsStopHeat = 2, needsToppings=3, done=4
    {
        get => completeness;
        set => completeness = value;
    }

}
