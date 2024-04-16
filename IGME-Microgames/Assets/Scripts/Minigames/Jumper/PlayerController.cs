using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEditor.PlayerSettings;

public class PlayerController : MonoBehaviour
{
    public float moveSpeed = 5f;
    public Rigidbody2D rb;
    bool finger = false;

    private float movex;
    // Start is called before the first frame update
    void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetAxis("Horizontal") != 0)
        {
            movex = Input.GetAxis("Horizontal") * moveSpeed;
        }
        //else if (Input.acceleration.x != 0)
        //{

        //    movex = Input.acceleration.x * moveSpeed;
        //}
        //else if (Input.touchCount > 0)
        //{
        //    movex = Input.GetTouch(0).position.x * moveSpeed;
        //}

    }

    private void FixedUpdate()
    {
        Vector2 velocity = rb.velocity;
        velocity.x = movex;
        rb.velocity = velocity;


        //Vector3 movement = new Vector3(Input.acceleration.x, 0.0f, 0.0f);
        //rb.velocity = movement * moveSpeed;
    }
}
