using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Order : MonoBehaviour
{
    private Cookie cookie;
    private int state;
    private int score;
    private bool isBad;

    // Constructor to initialize a new Cookie with default values
    public Order(Cookie cookie, int state, bool isBad)
    {
        this.Cookie = cookie; // Assign the passed parameter to the field
        this.State = state; // Assign the passed parameter to the field
        this.IsBad = isBad;
        score = 1000;
    }

    public Cookie Cookie
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

    public bool IsBad
    {
        get => isBad;
        set => isBad = value;
    }

}
