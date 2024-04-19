using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed = 8f;
    public Rigidbody2D rb;
    private MinigameManager helper;

    private float movex;
    // Start is called before the first frame update
    void Awake()
    {
        //gets the player and minigame manager.
        rb = GetComponent<Rigidbody2D>();
        helper = GameObject.FindObjectOfType<MinigameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (helper.currentPhase == "startGame")
        {
            //this does nothing because of the movex = Input.acceleration line below. if you want to test gameplay using the keyboard without loading to file, uncomment below and comment the other movex line
            //movex = Input.GetAxis("Horizontal") * moveSpeed;

            //comment this out if you want to test on computer in "game" mode (not simulator)
            movex = Input.acceleration.x * moveSpeed;
        }

    }

    private void FixedUpdate()
    {
        if (helper.currentPhase == "startGame")
        {
            //sets the velocity to the one gathered from device tilt.
            Vector2 velocity = rb.velocity;
            velocity.x = movex;
            rb.velocity = velocity;
        }
    }
}
