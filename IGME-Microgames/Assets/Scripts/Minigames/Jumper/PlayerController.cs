using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.PlayerSettings;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed = 5f;
    public Rigidbody2D rb;
    bool finger = false;
    private MinigameManager helper;

    private float movex;
    // Start is called before the first frame update
    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        helper = GameObject.FindObjectOfType<MinigameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (helper.currentPhase == "startGame")
        {
            if (Input.GetAxis("Horizontal") != 0)
            {
                movex = Input.GetAxis("Horizontal") * moveSpeed;
            }
        }
        else if (Input.acceleration.x != 0)
        {

            movex = Input.acceleration.x * moveSpeed;
        }


    }

    private void FixedUpdate()
    {
        if (helper.currentPhase == "startGame")
        {
            Vector2 velocity = rb.velocity;
            velocity.x = movex;
            rb.velocity = velocity;
        }

        //Vector3 movement = new Vector3(Input.acceleration.x, 0.0f, 0.0f);
        //rb.velocity = movement * moveSpeed;
    }
}
