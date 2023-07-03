using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_EnemyManager : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] GameObject enemyPrefab;
    private List<GameObject> enemies;
    private int maxEnemies = 5;

    private FireDefense_FirewallDefense man;

    void Start()
    {
        enemies = new List<GameObject>();
        man = transform.parent.GetComponent<FireDefense_FirewallDefense>();

    }

    // Update is called once per frame
    void Update()
    {
        if (man.startBattle)
        {
            if (enemies.Count < maxEnemies)
            {
                StartCoroutine("SpawnEnemy");
            }
        }
    }

    IEnumerator SpawnEnemy()
    {
        GameObject enemey = Instantiate(enemyPrefab, transform.position, Quaternion.identity);
        enemies.Add(enemey);    
        yield return new WaitForSeconds(0.5f);
    }

    public void SetMaxEnemies(int num)
    {
        if(num > 0)
        {
            maxEnemies = num;
        } else
        {
            Debug.Log("Cannot set max enemies to 0 or less");
        }

    }
}
