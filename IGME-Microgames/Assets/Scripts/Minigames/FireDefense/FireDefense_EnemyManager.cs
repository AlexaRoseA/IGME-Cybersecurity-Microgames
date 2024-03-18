using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_EnemyManager : MonoBehaviour
{
    // Manager and enemy prefab
    private FireDefense_FirewallDefense man;
    [SerializeField] GameObject enemyPrefab;

    // Enemy generation information
    private List<GameObject> enemies;
    private int maxEnemies = 5;

    /// <summary>
    /// Creates an enemy list and finds the manager.
    /// </summary>
    void Start()
    {
        enemies = new List<GameObject>();
        man = transform.parent.GetComponent<FireDefense_FirewallDefense>();
    }

    /// <summary>
    /// Once the battle starts, if there aren't enough enemies spawn them.
    /// </summary>
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

    /// <summary>
    /// Spawn an enemy every x amount of time at this GameObject's transform.
    /// </summary>
    /// <returns></returns>
    IEnumerator SpawnEnemy()
    {
        GameObject enemey = Instantiate(enemyPrefab, transform.position, Quaternion.identity);
        enemies.Add(enemey);    
        yield return new WaitForSeconds(0.5f);
    }

    /// <summary>
    /// Changes the max enemy amount if it's above 0
    /// </summary>
    /// <param name="num"></param>
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
