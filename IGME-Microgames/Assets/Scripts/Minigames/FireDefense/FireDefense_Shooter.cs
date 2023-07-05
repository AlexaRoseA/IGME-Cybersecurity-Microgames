using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Shooter : MonoBehaviour
{
    private int maxBullets = 19;

    [SerializeField] GameObject bulletPrefab;
    [SerializeField] Transform shootLoc;
    [SerializeField] Movement movementScript;

    private FireDefense_FirewallDefense man;
    private List<GameObject> bullets = new List<GameObject>();
    public List<GameObject> bulletsRespawn = new List<GameObject>();

    private bool spawning = false;
    private Quaternion rot;

    public GameObject prevBullet = null;
    public GameObject currentBullet = null;

    // Start is called before the first frame update
    void Start()
    {
        man = transform.parent.GetComponent<FireDefense_FirewallDefense>();
        rot = Quaternion.identity;
    }

    // Update is called once per frame
    void Update()
    {
        if(man.startBattle)
        {
            if (bullets.Count <= maxBullets && !spawning)
            {
                StartCoroutine("SpawnBullet");
            }

            if (movementScript.checkIfWithinDragCircle())
            {
                Vector2 dir = movementScript.TouchScreenToWorld() - transform.position;
                float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;

                rot = Quaternion.AngleAxis(angle - 90, Vector3.forward);
                Debug.Log(rot);

            }

            if(bulletsRespawn.Count != 0 && !spawning)
            {
                StartCoroutine(RestartBullet());
            }

            if (rot != null)
            {
                transform.rotation = rot;
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
            bullets.Add(Instantiate(bulletPrefab, new Vector3(shootLoc.position.x, shootLoc.position.y, transform.position.z), rot));
            yield return new WaitForSeconds(0.5f);
        }
        spawning = false;
        yield return null;
    }

    public IEnumerator RestartBullet()
    {
        spawning = true;
        int index = GameObjectToIndex(bulletsRespawn[bulletsRespawn.Count - 1]);

        bullets[index].gameObject.transform.position = new Vector3(shootLoc.position.x, shootLoc.position.y, transform.position.z);
        bullets[index].gameObject.transform.rotation = rot;
        bulletsRespawn.Remove(bulletsRespawn[bulletsRespawn.Count - 1]);
        
        if(bulletsRespawn.Count != 0)
        {
            yield return new WaitForSeconds(0.5f);
            StartCoroutine(RestartBullet());
        }

        spawning = false;
        yield return null;
    }

    private bool checkIfColliding(GameObject obj)
    {
        foreach(GameObject bullet in bullets)
        {
            if (Vector3.Distance(bullet.transform.position, obj.transform.position) < 1.5 && bullet != obj)
            {
                return true;
            }
        }
        return false;
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
