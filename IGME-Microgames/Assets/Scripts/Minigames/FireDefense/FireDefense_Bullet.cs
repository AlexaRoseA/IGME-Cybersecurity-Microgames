using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Bullet : MonoBehaviour
{
    // Player information
    private FireDefense_Shooter playerStats;
    private GameObject player;

    // Information about bullet:
    // Colliding bool, bulletBefore, velocity, and rigidbody.
    public bool colliding = false;
    public GameObject bulletBeforeMe = null;
    private float velocity = 3f;
    private Rigidbody2D rb;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.Find("Player");
        playerStats = player.GetComponent<FireDefense_Shooter>();
        rb = GetComponent<Rigidbody2D>();
    }

    /// <summary>
    /// Moves the bullet by the velocity and the current up transform of the position.
    /// </summary>
    void Update()
    {
        rb.velocity = transform.up * velocity;
    }

    /// <summary>
    /// Dealing with collision with boundaries, enemies, and other bullets
    /// </summary>
    /// <param name="collision"></param>
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag == "Enemey" || collision.transform.tag == "BulletBoundary")
        {
            playerStats.bulletsRespawn.Add(this.gameObject);
        }

        if (collision.transform.tag == "Bullet" && collision.gameObject == bulletBeforeMe)
        {
            Debug.Log("I'm colliding with another bullet!");
            colliding = true;
        }

    }

    /// <summary>
    /// Returns false when not colliding with the bullet prior to itself.
    /// </summary>
    /// <param name="collision"></param>
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.transform.tag == "Bullet" && collision.gameObject == bulletBeforeMe)
        {
            colliding = false;
            Debug.Log("I'm NOT colliding with another bullet!");
        }
    }
}
