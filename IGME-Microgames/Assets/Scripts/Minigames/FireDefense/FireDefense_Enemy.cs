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
    private float speed = 0.5f;

    void Start()
    {
        man = GameObject.FindGameObjectWithTag("Phase").GetComponent<FireDefense_FirewallDefense>();
        spawnSpot = GameObject.Find("SpawnEnemies").transform;
        transform.position = new Vector3(Random.Range(0, 9), spawnSpot.position.y, 0f);
        shootPlayer = GameObject.FindGameObjectWithTag("Player");
        repairPlayer = GameObject.FindGameObjectWithTag("Spot");


        SetTarget();
    }

    public void ResetEnemy()
    {
        health = 100;
        statusBar.transform.localScale = new Vector3(health / 100, 1, 1);
        transform.position = new Vector3(Random.Range(0, 9), spawnSpot.position.y, 0f);
        SetTarget();
    }

    // Update is called once per frame
    void Update()
    {
        if (man.startBattle)
        {
            transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed * Time.deltaTime);
        }
    }

    public void SetTarget()
    {
        GameObject[] wallBlocks = GameObject.FindGameObjectWithTag("Phase").GetComponent<FireDefense_FirewallDefense>().GetBlockRow();
        List<GameObject> notRepaired = new List<GameObject>();

        foreach(GameObject wallBlock in wallBlocks)
        {
            bool status = wallBlock.GetComponent<FireDefense_RepairWallBlock>().GetRepairStatus();
            if(status)
            {
                notRepaired.Add(wallBlock);
            }
        }

        if (notRepaired.Count != 0)
        {
            target = notRepaired[Random.Range(0, notRepaired.Count)];
            target.GetComponent<FireDefense_RepairWallBlock>().AddEnemy(this.gameObject);
        }
        else
        {
            target = repairPlayer;
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.transform.tag == "Bullet")
        {
            health -= Random.Range(25, 51);
            Debug.Log("Health scaler: " + health * 0.01);
            statusBar.transform.localScale = new Vector3(health * 0.01f, 2, 2);

            if (health <= 0)
            {
                ResetEnemy();
            }
        }
    }
}
