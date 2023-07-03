using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Bullet : MonoBehaviour
{
    private FireDefense_Shooter playerStats;
    private float velocity = 3f;
    private Rigidbody2D rb;
    private GameObject player;

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
            playerStats.RestartBullet(this.gameObject);
        }

        if (collision.transform.tag == "BulletBoundary")
        {
            playerStats.RestartBullet(this.gameObject);
        }
    }
}
