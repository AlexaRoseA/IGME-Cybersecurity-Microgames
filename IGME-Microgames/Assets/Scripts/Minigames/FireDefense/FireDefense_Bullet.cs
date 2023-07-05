using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Bullet : MonoBehaviour
{
    private FireDefense_Shooter playerStats;
    private float velocity = 3f;
    private Rigidbody2D rb;
    private GameObject player;
    public bool colliding = false;

    public GameObject bulletBeforeMe = null;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player");
        playerStats = player.GetComponent<FireDefense_Shooter>();
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        rb.velocity = transform.up * velocity;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag == "Enemey")
        {
            playerStats.bulletsRespawn.Add(this.gameObject);
        }

        if (collision.transform.tag == "BulletBoundary")
        {
            playerStats.bulletsRespawn.Add(this.gameObject);
        }

        if (collision.transform.tag == "Bullet" && collision.gameObject == bulletBeforeMe)
        {
            Debug.Log("I'm colliding with another bullet!");
            colliding = true;
        }

    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.transform.tag == "Bullet" && collision.gameObject == bulletBeforeMe)
        {
            colliding = false;
            Debug.Log("I'm NOT colliding with another bullet!");
        }
    }
}
