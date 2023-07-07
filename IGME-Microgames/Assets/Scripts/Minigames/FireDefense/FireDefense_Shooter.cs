using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_Shooter : MonoBehaviour
{
    // Bullet status information
    private int maxBullets = 19;
    [SerializeField] GameObject bulletPrefab;
    private List<GameObject> bullets = new List<GameObject>();
    public List<GameObject> bulletsRespawn = new List<GameObject>();
    [SerializeField] Transform shootLoc;

    // Managers
    private FireDefense_FirewallDefense man;

    // Player information
    [SerializeField] Movement movementScript;
    private bool spawning = false;

    // Bullet update information
    private Quaternion rot;
    public GameObject prevBullet = null;
    public GameObject currentBullet = null;

    /// <summary>
    /// Grabs the defense manager and sets the default rotation
    /// </summary>
    void Start()
    {
        man = transform.parent.GetComponent<FireDefense_FirewallDefense>();
        rot = Quaternion.identity;
    }

    /// <summary>
    /// If the battle is started:
    /// - Check the bullet count. If we're in the spawn start 
    /// phase, spawn the first x amount of bullets.
    /// 
    /// - Check if touching the drag circle. Generate a direction for the
    /// touch, angle, and generate a new rotation based on the current forward.
    /// 
    /// - Check the bulletRespawn count. If the bullet hit an enemy OR a wall, it'll 
    /// be added to this list. If this is true, restart the last ended bullet.
    /// 
    /// - Update the rotation each frame unless it's null.
    /// </summary>
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

    /// <summary>
    /// Spawns bullets while checking if hit the max amount of bullets.
    /// Once complete, prevent more bullets from spawning.
    /// </summary>
    /// <returns></returns>
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

    /// <summary>
    /// Restarts the bullets. If the last index doesn't equal -1 (there are no bullets in respawn list),
    /// grab the last index and parse it into a gameobject. Set that gameobject's position + rotation to the 
    /// current rotation and spawn bullet position. Once done, remove that from the respawn list.
    /// 
    /// If bullet count doesn't equal 0 after this, re-run the co-routine until the respawn list is empty.
    /// Once empty, set spawning to false.
    /// </summary>
    /// <returns></returns>
    public IEnumerator RestartBullet()
    {
        spawning = true;
        if((bulletsRespawn.Count - 1) >= 0)
        {
            int index = GameObjectToIndex(bulletsRespawn[bulletsRespawn.Count - 1]);

            bullets[index].gameObject.transform.position = new Vector3(shootLoc.position.x, shootLoc.position.y, transform.position.z);
            bullets[index].gameObject.transform.rotation = rot;
            bulletsRespawn.Remove(bulletsRespawn[bulletsRespawn.Count - 1]);

        }
        
        if(bulletsRespawn.Count != 0)
        {
            yield return new WaitForSeconds(0.5f);
            StartCoroutine(RestartBullet());
        }

        spawning = false;
        yield return null;
    }

    /// <summary>
    /// Returns the index of a set gameobject in the bullet list
    /// Returns -1 if not in the list. Returns index if it is.
    /// </summary>
    /// <param name="targetObj">Bullet GameObject</param>
    /// <returns></returns>
    int GameObjectToIndex(GameObject targetObj)
    {
        for (int i = 0; i < bullets.Count; i++)
        {
            if (bullets[i] == targetObj)
            {
                return i;
            }
        }
        return -1;
    }
}
