using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartingConnection : MonoBehaviour
{
    private Connection connection;
    public GameObject startLine;
    public GameObject endLine;

    public LayerMask channelLayer;
    // Start is called before the first frame update
    void Start()
    {
        connection = GetComponent<Connection>();
        connection.setPoints(connection.startPoint.transform.position, connection.endPoint.transform.position);
        Vector3 startPointPos = connection.startPoint.transform.position;
        Vector3 endPointPos = connection.endPoint.transform.position;
        RaycastHit2D starthit = Physics2D.Raycast(startPointPos, endPointPos - startPointPos, Vector2.Distance(startPointPos, endPointPos), channelLayer);
        RaycastHit2D endhit = Physics2D.Raycast(endPointPos, startPointPos - endPointPos, Vector2.Distance(startPointPos, endPointPos), channelLayer);
        if(starthit.collider != null && endhit.collider != null)
        {
            startLine = starthit.collider.gameObject;
            endLine = endhit.collider.gameObject;
        } else
        {
            Destroy(gameObject);
        }
        connection.setChannels(startLine.GetComponent<Line>().top_point, endLine.GetComponent<Line>().top_point);
    }
}
