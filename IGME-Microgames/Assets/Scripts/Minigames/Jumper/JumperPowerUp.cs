using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumperPowerUp : MonoBehaviour
{

    public GameObject pickupEffect;
    public float multiplier = 10f;
    public float duration = 8;
    GameObject[] platforms;
    Transform jumpy;
    MinigameManager helper;
    // Start is called before the first frame update
    private void Start()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();
        helper.UpdateScoreText();
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        //helper = GameObject.FindObjectOfType<MinigameManager>();
        //helper.UpdateScore(100);
        StartCoroutine( Pickup(collision) );
    }

    IEnumerator Pickup(Collider2D player)
    {
        // Spawn cool effect
        GameObject effect = Instantiate(pickupEffect, transform.position, Quaternion.identity);
        effect.transform.localScale = new Vector3((float)1, (float)1, 8);

        // apply effect to player
        print(gameObject.name);
        if (gameObject.name.Contains("JumpHigherPowerup"))
        {
            platforms = GameObject.FindGameObjectsWithTag("Platform");
            foreach (GameObject platform in platforms)
            {
                platform.GetComponent<Platform>().jumpForce *= multiplier;
            }
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(10);
            //wait x seconds
            yield return new WaitForSeconds(duration);

            //reverse effect on player
            foreach (GameObject platform in platforms)
            {
                platform.GetComponent<Platform>().jumpForce /= multiplier;
            }
        }
        else if (gameObject.name.Contains("BackdoorPowerup"))
        {
            helper.UpdateScore(1000);

            jumpy = GameObject.Find("Jumpy").transform;
            Vector3 bar = jumpy.position;
            bar.y = bar.y + 75;
            GameObject effect2 = Instantiate(pickupEffect, bar, Quaternion.identity);
            effect2.transform.localScale = new Vector3((float)1, (float)1, 8);
            jumpy.position = bar;
            yield return new WaitForSeconds(duration);

        }
        else if (gameObject.name.Contains("DomainAdministrator"))
        {
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(10000);
            yield return new WaitForSeconds(duration);
            helper.EndGame();
        }
        else if (gameObject.name.Contains("standardUser"))
        {
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(100);
            yield return new WaitForSeconds(duration);
        }
        else if (gameObject.name.Contains("localAdminUser"))
        {
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(500);
            yield return new WaitForSeconds(duration);
        }
        else if (gameObject.name.Contains("SystemUser"))
        {
            platforms = GameObject.FindGameObjectsWithTag("Platform");
            foreach (GameObject platform in platforms)
            {
                platform.GetComponent<Platform>().jumpForce *= multiplier;
            }
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(4000);
            yield return new WaitForSeconds(duration);
        }


        // remove powerup object
        Destroy(gameObject);
    
    }

}
