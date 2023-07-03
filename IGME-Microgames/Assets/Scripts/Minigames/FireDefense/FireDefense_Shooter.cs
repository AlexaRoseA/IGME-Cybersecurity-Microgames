using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Shooter : MonoBehaviour
{
    private int maxBullets = 6;

    [SerializeField] GameObject bulletPrefab;

    private FireDefense_FirewallDefense man;
    private List<GameObject> bullets = new List<GameObject>();

    private bool spawning = false;

    // Start is called before the first frame update
    void Start()
    {
        man = transform.parent.GetComponent<FireDefense_FirewallDefense>();
    }

    // Update is called once per frame
    void Update()
    {
        if(man.startBattle)
        {
            Debug.Log("Number of bullets on screen: " + bullets.Count);
            if (bullets.Count <= maxBullets && !spawning)
            {
                StartCoroutine("SpawnBullet");
            }
        }
    }

    public void IncreaseMaxBullets()
    {
        maxBullets++;
    }

    IEnumerator SpawnBullet()
    {
        spawning = true;
        while (bullets.Count <= maxBullets)
        {
            bullets.Add(Instantiate(bulletPrefab, new Vector3(transform.position.x, transform.position.y + 2, transform.position.z), Quaternion.identity));
            yield return new WaitForSeconds(0.5f);
        }
        spawning = false;
        yield return null;
    }

    public void RestartBullet(GameObject bullet)
    {
        int index = GameObjectToIndex(bullet);
        bullets[index].gameObject.transform.position = new Vector3(transform.position.x, transform.position.y + 2, transform.position.z);
    }

    int GameObjectToIndex(GameObject targetObj)
    {
        //Loop through GameObjects
        for (int i = 0; i < bullets.Count; i++)
        {
            //Check if GameObject is in the List
            if (bullets[i] == targetObj)
            {
                //It is. Return the current index
                return i;
            }
        }
        //It is not in the List. Return -1
        return -1;
    }
}
