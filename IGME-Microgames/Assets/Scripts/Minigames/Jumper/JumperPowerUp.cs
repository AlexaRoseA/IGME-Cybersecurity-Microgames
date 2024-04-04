using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumperPowerUp : MonoBehaviour
{

    public GameObject pickupEffect;
    public float multiplier = 10f;
    public float duration = 4;
    GameObject[] platforms;
    // Start is called before the first frame update
    private void OnTriggerEnter2D(Collider2D collision)
    {
        StartCoroutine( Pickup(collision) );
    }

    IEnumerator Pickup(Collider2D player)
    {
        // Spawn cool effect
        GameObject effect = Instantiate(pickupEffect, transform.position, Quaternion.identity);
        effect.transform.localScale = new Vector3((float)0.001, (float)0.001, 8);

        // apply effect to player
        platforms = GameObject.FindGameObjectsWithTag("Platform");
        foreach(GameObject platform in platforms)
        {
            platform.GetComponent<Platform>().jumpForce *= multiplier;
        }
       


        //player.transform.localScale *= multiplier;
        print("Powerup picked up");

        GetComponent<SpriteRenderer>().enabled = false;
        GetComponent<Collider2D>().enabled = false;

        //wait x seconds
        yield return new WaitForSeconds(duration);

        //reverse effect on player
        foreach (GameObject platform in platforms)
        {
            platform.GetComponent<Platform>().jumpForce /= multiplier;
        }

        // remove powerup object
        Destroy(gameObject);
    
    }

}
