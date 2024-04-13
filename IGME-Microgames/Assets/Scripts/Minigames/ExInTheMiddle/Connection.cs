using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Connection : MonoBehaviour
{
    public GameObject startPoint;
    public GameObject startChannelEnd;
    public GameObject endPoint;
    public GameObject endChannelEnd;

    public LineRenderer lRenderer;
    public GameObject colliderObj;

    public void setPoints(Vector3 start, Vector3 end)
    {
        startPoint.transform.position = start;
        endPoint.transform.position = end;
        lRenderer.SetPosition(0, startPoint.transform.position);
        lRenderer.SetPosition(1, endPoint.transform.position);
        updateCollider(start, end);
    }
    public void setChannels(GameObject startTop, GameObject endTop)
    {
        startChannelEnd = startTop;
        endChannelEnd = endTop;
    }
    public void updateCollider(Vector3 start, Vector3 end)
    {
        float length = Vector3.Distance(start, end);
        float width = lRenderer.startWidth;

        CapsuleCollider2D capCollider = colliderObj.GetComponent<CapsuleCollider2D>();
        capCollider.size = new Vector2(length, width);

        Vector3 center = (start + end) / 2f;

        colliderObj.transform.position = center;

        Vector3 direction = start - end;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

        colliderObj.transform.rotation = Quaternion.Euler(0f, 0f, angle);
    }
    public GameObject getFurtherPoint(Vector3 postion)
    {
        float startDist = Vector3.Distance(startPoint.transform.position, postion);
        float endDist = Vector3.Distance(endPoint.transform.position, postion);
        if (startDist > endDist)
        {
            return startPoint;
        }
        else
        {
            return endPoint;
        }
    }
    public GameObject getOtherPoint(GameObject point)
    {
        if (point == startPoint)
        {
            return endPoint;
        }
        else
        {
            return startPoint;
        }
    }
    public GameObject getChannelTop(GameObject point)
    {
        if(point == startPoint)
        {
            return startChannelEnd;
        } else
        {
            return endChannelEnd;
        }
    }
}
