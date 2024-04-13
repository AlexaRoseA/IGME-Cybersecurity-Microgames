using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class signalMovement : MonoBehaviour
{
    public float baseSpeed = 2f;
    public float speed;
    private Rigidbody2D rb;

    public float minimumDistanceToConnect = 1f;

    public bool moving = false;
    private bool movingAcrossConnection = false;

    private Vector3 targetPosition;
    private GameObject connectionOn;

    private EITMGameManager gm;

    public GameObject graphic;

    private List<GameObject> connectionsTraveled;

    // Start is called before the first frame update
    void Start()
    {
        connectionsTraveled = new List<GameObject>();
        StopMovement();
        rb = GetComponent<Rigidbody2D>();
        gm = FindObjectOfType<EITMGameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (movingAcrossConnection)
        {
            transform.position = Vector3.MoveTowards(transform.position, targetPosition, speed * Time.deltaTime);
            if(transform.position == targetPosition)
            {
                movingAcrossConnection = false;
                transform.position = connectionOn.transform.position;
                targetPosition = connectionOn.GetComponentInParent<Connection>().getChannelTop(connectionOn).transform.position;
                connectionOn = null;
            }
        } else if (moving)
        {
            transform.position = Vector3.MoveTowards(transform.position, targetPosition, speed * Time.deltaTime);
        }
    }

    public void SetupMovement(Vector3 target, float speedModifier)
    {
        connectionsTraveled = new List<GameObject>();
        speed = baseSpeed * speedModifier;
        targetPosition = target;
    }
    public void StartMovement()
    {
        graphic.SetActive(true);
        moving = true;
    }
    public void StopMovement()
    {
        graphic.SetActive(false);
        movingAcrossConnection = false;
        moving = false;
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Connection"))
        {
            Connection connect = collision.GetComponentInParent<Connection>();
            GameObject furtherPoint = connect.getFurtherPoint(transform.position);
            GameObject closerPoint = connect.getOtherPoint(furtherPoint);
            if (Vector3.Distance(closerPoint.transform.position, transform.position) < minimumDistanceToConnect)
            {
                if (!connectionsTraveled.Contains(connect.gameObject))
                {
                    connectionsTraveled.Add(connect.gameObject);
                    connectionOn = furtherPoint;
                    targetPosition = furtherPoint.transform.position;
                    transform.position = closerPoint.transform.position;
                    movingAcrossConnection = true;
                } else
                {
                    print("Already Traveled!");
                }
            } else
            {
                print("Point too far!");
            }
        }
        else if (collision.CompareTag("Portal"))
        {
            Portal portal = collision.GetComponentInParent<Portal>();
            GameObject furtherPoint = portal.getFurtherPoint(transform.position);
            if (!connectionsTraveled.Contains(portal.gameObject))
            {
                connectionsTraveled.Add(portal.gameObject);
                targetPosition = portal.getChannelTop(furtherPoint).transform.position;
                transform.position = furtherPoint.transform.position;
            }
        }
        else if (collision.CompareTag("Alice"))
        {
            StopMovement();
            gm.SuccessfulRound();
        } else if (collision.CompareTag("Enemy"))
        {
            StopMovement();
            gm.GameOver();
        }
    }
}
