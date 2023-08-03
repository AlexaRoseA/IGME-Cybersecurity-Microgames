using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FishMovement : MonoBehaviour
{
    public float dartMinCooldown;
    public float dartSpeed;

    public GameObject fleeTarget;
    public float fleeRange = 3f;
    public bool tutorial = false;

    float dartCooldown;
    float nextDartTime;

    MinigameManager minigameManager;

    Rigidbody2D rb;
    // Start is called before the first frame update
    void Start()
    {
        minigameManager = FindObjectOfType<MinigameManager>();
        rb = gameObject.GetComponent<Rigidbody2D>();
        if (fleeTarget == null) fleeTarget = GameObject.Find("Spear");
    }

    // Update is called once per frame
    void Update()
    {
        if (!minigameManager.GetTimer()) return;
        //if fish is further than 10 units away from the player
        Vector3 playerDist = transform.position - fleeTarget.transform.position;

        if (Vector3.SqrMagnitude(playerDist) > 100f)
        {
            //teleport them to 6 units away
            transform.position = (Vector3)(Random.insideUnitCircle.normalized * 6f) + fleeTarget.transform.position;
        }

        //update dartCD
        dartCooldown -= Time.deltaTime;

        //if CD is less than zero, fish is able to dart
        if (dartCooldown > 0 || tutorial) return;

        //spear is too close, dart away
        if(Vector3.SqrMagnitude(transform.position - fleeTarget.transform.position) < fleeRange * fleeRange)
        {

            //get a random direction
            Vector3 randomDir = Random.insideUnitCircle.normalized;
            Vector3 chaserDir = (transform.position - fleeTarget.transform.position).normalized;

            //while the random direction is towards the chaser
            //2f is the sqrMagnitude if the random direction is at a 90deg angle from the chaser direction
            while (Vector3.SqrMagnitude(randomDir + chaserDir) < 2f) 
            {
                randomDir = Random.insideUnitCircle.normalized;
            }

            Dart(randomDir);
        }

        if(dartCooldown < nextDartTime)
        {
            //dart in a random direction
            Dart(Random.insideUnitCircle.normalized);
        }
    }

    void Dart(Vector3 heading)
    {
        dartCooldown = dartMinCooldown;
        nextDartTime = Random.Range(-7f, -3f);

        //update look direction
        transform.localScale = new Vector3(Mathf.Abs(transform.localScale.x) * ((heading.x > 0) ? 1 : -1), transform.localScale.y, 1f);

        //add impulse
        rb.AddForce(heading * dartSpeed, ForceMode2D.Impulse);
        
    }
}
