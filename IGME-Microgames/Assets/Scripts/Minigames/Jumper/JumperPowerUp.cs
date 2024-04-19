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

        //this checks to see what powerup the player ran into and plays the corresponding effect
        if (gameObject.name.Contains("JumpHigherPowerup"))
        {
            //gets all platforms and increases the jump height multiplier on all of them
            platforms = GameObject.FindGameObjectsWithTag("Platform");
            foreach (GameObject platform in platforms)
            {
                platform.GetComponent<Platform>().jumpForce *= multiplier;
            }
            //removes the powerup from the game
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            //updates score
            helper.UpdateScore(10);
            //wait for the duration (seconds)
            yield return new WaitForSeconds(duration);

            //reverse effect on player
            foreach (GameObject platform in platforms)
            {
                platform.GetComponent<Platform>().jumpForce /= multiplier;
            }
        }
        else if (gameObject.name.Contains("BackdoorPowerup"))
        {
            //updates score
            helper.UpdateScore(1000);

            //teleports the player up 75 units (I think world space) 
            //this powerup cannot spawn close to game height to prevent teleportation out of the game
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
            //the way to win the game
            //domain admin is the final goal so it gives you the points needed for 5 starts if somehow you didn't get there already
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(10000);
            yield return new WaitForSeconds(duration);
            //ends the game
            helper.EndGame();
        }
        //these three are collectables. In pentesting you need lateral movement to successfully get DA so this simulates that
        //standard users gives you some points and are more common throughout the level
        else if (gameObject.name.Contains("standardUser"))
        {
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(100);
            yield return new WaitForSeconds(duration);
        }
        //admin users are less common and more helpful for a pentest -> more points rewarded
        else if (gameObject.name.Contains("localAdminUser"))
        {
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<Collider2D>().enabled = false;
            helper.UpdateScore(500);
            yield return new WaitForSeconds(duration);
        }
        //I'm calling this a system user because idk what else to call it. basically a user with system level priviledges which is amazing for a pentest
        //this powerup spawns every 100 games or so and is incredibly rare. if they find it, they get a perminant jump boost and 4k points
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
