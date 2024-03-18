using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Enemy : MonoBehaviour
{
    // Managers
    private MinigameManager minigameManager;
    private FireDefense_FirewallDefense man;

    // Target and spawn from location
    private GameObject target = null;
    private Transform spawnSpot;

    // Status bar
    [SerializeField] GameObject statusBar;

    // Enemey information
    // Health, speed, if attacking a wall, and wander mode
    private int health = 100;
    private float speed = 2f;
    private bool attackingWall;
    private bool wander = false;

    /// <summary>
    /// On creation, find all managers and it's spawn spot
    /// Set the position based on spawn spot and find the ideal target
    /// </summary>
    void Start()
    {
        attackingWall = false;
        minigameManager = GameObject.Find("MinigameManager").GetComponent<MinigameManager>();
        man = GameObject.FindGameObjectWithTag("Phase").GetComponent<FireDefense_FirewallDefense>();
        spawnSpot = GameObject.Find("SpawnEnemies").transform;
        transform.position = new Vector3(Random.Range(0, 9), spawnSpot.position.y, 0f);
        SetTarget();
    }

    /// <summary>
    /// Resets the enemy to full health,
    /// not wandering, not attacking, updates the score,
    /// resets the statusBar, generates a new position
    /// remove from old target list and generate new target
    /// </summary>
    public void ResetEnemy()
    {
        health = 100;
        wander = false;
        minigameManager.UpdateScore(10);
        statusBar.transform.localScale = new Vector3(health / 100, 1, 1);
        transform.position = new Vector3(Random.Range(0, 9), spawnSpot.position.y, 0f);
        target.GetComponent<FireDefense_RepairWallBlock>().RemoveTouching(this.gameObject);
        attackingWall = false;
        SetTarget();
    }

    /// <summary>
    /// Runs if the game is started, not attacking a wall, and not wandering.
    /// </summary>
    void Update()
    {
        if (man.startBattle && !attackingWall && !wander && target != null)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed * Time.deltaTime);
        }
    }

    /// <summary>
    /// Sets a target. Uses an optional parameter
    /// to ignore a set gameObject passed in as self.
    /// </summary>
    /// <param name="self">Target object to ignore in list</param>
    public void SetTarget(GameObject self = null)
    {
        wander = false;
        GameObject[] wallBlocks = GameObject.FindGameObjectWithTag("Phase").GetComponent<FireDefense_FirewallDefense>().GetBlockRow();
        List<GameObject> repaired = new List<GameObject>();

        // For each wallBlock, generate a status
        // If the wall is repaired AND not set to ignore,
        // add to a repaired list.
        foreach(GameObject wallBlock in wallBlocks)
        {
            bool status = wallBlock.GetComponent<FireDefense_RepairWallBlock>().GetRepairStatus();
            if(!status && self != wallBlock)
            {
                repaired.Add(wallBlock);
            }
        }

        // If the list generated is not 0, pick a random
        // target from the list and add this enemy as the
        // target's enemy. Otherwise, wander this enemy.
        if (repaired.Count != 0)
        {
            target = repaired[Random.Range(0, repaired.Count)];
            target.GetComponent<FireDefense_RepairWallBlock>().AddEnemy(this.gameObject);
        }
        else
        {
            StartCoroutine(Wander());
        }
    }

    /// <summary>
    /// Returns the target of the enemy.
    /// </summary>
    /// <returns></returns>
    public GameObject GetTarget()
    {
        return target;
    }

    /// <summary>
    /// Wanders for a random interval of time in the shooter's range.
    /// </summary>
    /// <returns></returns>
    IEnumerator Wander()
    {
        int counterSeconds = Random.Range(4, 6);
        float normalizedTime = 0;
        Vector3 pos = new Vector3(Random.Range(-1,9), Random.Range(6f, 18f), transform.position.z);
        while(normalizedTime <= 1f)
        {
            Debug.Log("Wandering...");
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(pos.x, pos.y, transform.position.z), speed * Time.deltaTime);
            normalizedTime += Time.deltaTime / counterSeconds;
            yield return null;
        }
        SetTarget();
        yield return null;

    }

    /// <summary>
    /// If the enemy is hit by a bullet, reset.
    /// If the enemy hits a wall, set wall attack to true.
    /// </summary>
    /// <param name="collision"></param>
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag == "Bullet")
        {
            health -= Random.Range(25, 51);
            statusBar.transform.localScale = new Vector3(health * 0.01f, 2, 2);

            if (health <= 0)
            {
                ResetEnemy();
            }
        }

        if(collision.tag == "Wall")
        {
            attackingWall = true;
        }
    }

    /// <summary>
    /// If the enemy successfully destroys a wall, reset enemy.
    /// </summary>
    /// <param name="collision"></param>
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.transform.tag == "Wall")
        {
            ResetEnemy();
        }
    }

    /// <summary>
    /// Pushes the enemy back over a set period of time based on a random force.
    /// </summary>
    /// <returns></returns>
    public IEnumerator PushBack()
    {
        Vector3 forcePos = new Vector3(transform.position.x, transform.position.y + Random.Range(6, 8), transform.position.z);
        
        while(Vector3.Distance(transform.position, forcePos) > 0.2)
        {
            transform.position = Vector3.MoveTowards(transform.position, forcePos, 1.5f * Time.deltaTime);
            yield return null;
        }

        attackingWall = false;
        SetTarget();
        yield return null;

    }
}
