using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Enemy : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject target = null;
    [SerializeField] GameObject repairPlayer;
    [SerializeField] GameObject shootPlayer;
    [SerializeField] Transform spawnSpot;

    // Status bar
    [SerializeField] GameObject statusBar;

    private FireDefense_FirewallDefense man;

    private int health = 100;
    private float speed = 2f;
    private bool attackingWall;
    private bool wander = false;

    private Rigidbody2D rb;

    void Start()
    {
        attackingWall = false;
        man = GameObject.FindGameObjectWithTag("Phase").GetComponent<FireDefense_FirewallDefense>();
        spawnSpot = GameObject.Find("SpawnEnemies").transform;
        transform.position = new Vector3(Random.Range(0, 9), spawnSpot.position.y, 0f);
        shootPlayer = GameObject.FindGameObjectWithTag("Player");
        repairPlayer = GameObject.FindGameObjectWithTag("Spot");
        rb = gameObject.GetComponent<Rigidbody2D>();

        SetTarget();
    }

    public void ResetEnemy()
    {
        health = 100;
        wander = false;
        statusBar.transform.localScale = new Vector3(health / 100, 1, 1);
        transform.position = new Vector3(Random.Range(0, 9), spawnSpot.position.y, 0f);
        target.GetComponent<FireDefense_RepairWallBlock>().RemoveTouching(this.gameObject);
        attackingWall = false;
        SetTarget();
    }

    public Rigidbody2D GetRigidbody2D()
    {
        return rb;
    }

    // Update is called once per frame
    void Update()
    {
        if (man.startBattle && !attackingWall && !wander)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed * Time.deltaTime);
        }
    }

    public void SetTarget(GameObject self = null)
    {
        wander = false;
        GameObject[] wallBlocks = GameObject.FindGameObjectWithTag("Phase").GetComponent<FireDefense_FirewallDefense>().GetBlockRow();
        List<GameObject> repaired = new List<GameObject>();

        foreach(GameObject wallBlock in wallBlocks)
        {
            bool status = wallBlock.GetComponent<FireDefense_RepairWallBlock>().GetRepairStatus();
            if(!status && self != wallBlock)
            {
                repaired.Add(wallBlock);
            }
        }

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

    public GameObject GetTarget()
    {
        return target;
    }

    IEnumerator Wander()
    {
        int counterSeconds = Random.Range(2, 4);
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

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.transform.tag == "Wall")
        {
            ResetEnemy();
        }
    }


    public IEnumerator PushBack()
    {
        Vector3 forcePos = new Vector3(transform.position.x, transform.position.y + Random.Range(6, 8), transform.position.z);
        
        while(Vector3.Distance(transform.position, forcePos) > 0.2)
        {
            transform.position = Vector3.MoveTowards(transform.position, forcePos, 3 * Time.deltaTime);
            yield return null;
        }

        attackingWall = false;
        SetTarget();
        yield return null;

    }
}
