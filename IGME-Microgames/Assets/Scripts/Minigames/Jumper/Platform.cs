using System.Collections;
using System.Collections.Generic;
using UnityEditor.PackageManager;
using UnityEngine;

public class Platform : MonoBehaviour
{
    public float jumpForce = 5f;

    Animator m_animator;

    private void OnCollisionEnter2D(Collision2D collision)
    {
        
        if (collision.relativeVelocity.y <= 0f)
        {
            Rigidbody2D rb = collision.gameObject.GetComponent<Rigidbody2D>();
            if (rb != null )
            {
                Vector2 velocity = rb.velocity;
                velocity.y = jumpForce;
                rb.velocity = velocity;
                GameObject.Find("Jumpy").GetComponent<Animator>().Play("Jumping", 0, 0f);

            }
        }
    }
}
