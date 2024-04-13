using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class connectionManager : MonoBehaviour
{

    public GameObject connectionPrefab;
    public GameObject currentConnection;

    private Vector3 startPoint;
    private Vector3 endPoint;

    private LineRenderer lRenderer;
    private bool startedLine = false;

    public LayerMask channelLayer;
    public LayerMask connectionLayer;
    public float maxXDistance = 1.2f;

    private EITMGameManager gm;

    // Start is called before the first frame update
    void Start()
    {
        lRenderer = GetComponent<LineRenderer>();
        gm = FindObjectOfType<EITMGameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if(touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
            {
                if(startedLine == false)
                {
                    startPoint = Camera.main.ScreenToWorldPoint(touch.position);
                    startPoint.z = 0;
                    startedLine = true;
                }

                endPoint = Camera.main.ScreenToWorldPoint(touch.position);
                endPoint.z = 0;

                lRenderer.positionCount = 2;
                lRenderer.SetPosition(0, startPoint);
                lRenderer.SetPosition(1, endPoint);
            }
            if (touch.phase == TouchPhase.Ended)
            {
                RaycastHit2D starthit = Physics2D.Raycast(startPoint, endPoint - startPoint, Vector2.Distance(startPoint, endPoint), channelLayer);
                RaycastHit2D endhit = Physics2D.Raycast(endPoint, startPoint - endPoint, Vector2.Distance(startPoint, endPoint), channelLayer);
                RaycastHit2D hitConnection = Physics2D.Raycast(startPoint, endPoint - startPoint, Vector2.Distance(startPoint, endPoint), connectionLayer);

                bool canConnect = CheckPossibleConnection(starthit, endhit, hitConnection);

                if (canConnect)
                {
                    currentConnection = Instantiate(connectionPrefab);
                    Vector3 newStart = GetPoint(startPoint, starthit);
                    Vector3 newEnd = GetPoint(endPoint, endhit);
                    currentConnection.GetComponent<Connection>().setPoints(newStart, newEnd);
                    currentConnection.GetComponent<Connection>().setChannels(starthit.collider.GetComponent<Line>().top_point,endhit.collider.GetComponent<Line>().top_point);
                    gm.addConnection(currentConnection);
                }

                startedLine = false;
                currentConnection = null;
                lRenderer.positionCount = 0;
            }
        }
    }
    public bool CheckPossibleConnection(RaycastHit2D starthit, RaycastHit2D endhit, RaycastHit2D connectionhit)
    {
        if (connectionhit.collider != null)
        {
            print("CONNECTIONSNAP");
            return false;
        }
        if (starthit.collider == null || endhit.collider == null)
        {
            print("RAYSNAP");
            return false;
        } else if (starthit.collider.name == endhit.collider.name)
        {
            print("SAMESNAP");
            return false;
        } else
        {
            Vector3 beginning = starthit.collider.transform.position;
            Vector3 end = endhit.collider.transform.position;
            if (Mathf.Abs(beginning.x - end.x) < maxXDistance)
            {
                return true;
            } else
            {
                print("TOOLONGSNAP");
                return false;
            }
        }
    }
    public Vector3 GetPoint(Vector3 originalPoint, RaycastHit2D hit)
    {
        Vector3 newPoint = new Vector3(hit.collider.transform.position.x, hit.point.y);
        return newPoint;
    }
}
