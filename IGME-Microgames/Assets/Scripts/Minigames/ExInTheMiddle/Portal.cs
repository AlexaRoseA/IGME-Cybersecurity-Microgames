using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Portal : MonoBehaviour
{
    public GameObject portalA;
    public GameObject portalB;

    public GameObject startLineTop;
    public GameObject endLineTop;

    public LayerMask channelLayer;

    public void Start()
    {
        Vector3 startPointPos = portalA.transform.position;
        Vector3 endPointPos = portalB.transform.position;
        RaycastHit2D starthit = Physics2D.Raycast(startPointPos, endPointPos - startPointPos, Vector2.Distance(startPointPos, endPointPos), channelLayer);
        RaycastHit2D endhit = Physics2D.Raycast(endPointPos, startPointPos - endPointPos, Vector2.Distance(startPointPos, endPointPos), channelLayer);
        if (starthit.collider != null && endhit.collider != null)
        {
            startLineTop = starthit.collider.GetComponent<Line>().top_point;
            endLineTop = endhit.collider.GetComponent<Line>().top_point;
        }
        else
        {
            Destroy(gameObject);
        }
    }
    public GameObject getFurtherPoint(Vector3 postion)
    {
        float startDist = Vector3.Distance(portalA.transform.position, postion);
        float endDist = Vector3.Distance(portalB.transform.position, postion);
        if (startDist > endDist)
        {
            return portalA;
        }
        else
        {
            return portalB;
        }
    }
    public GameObject getOtherPoint(GameObject point)
    {
        if (point == portalA)
        {
            return portalB;
        }
        else
        {
            return portalA;
        }
    }
    public GameObject getChannelTop(GameObject point)
    {
        if (point == portalA)
        {
            return startLineTop;
        }
        else
        {
            return endLineTop;
        }
    }
}
