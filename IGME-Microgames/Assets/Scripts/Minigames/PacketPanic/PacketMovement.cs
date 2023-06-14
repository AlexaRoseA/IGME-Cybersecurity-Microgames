using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PacketMovement : MonoBehaviour
{
    public LineRenderer track;
    public float speed = 18.0f;
    public bool startAtEnd = false;

    private float segmentProgress;
    private float segmentSpeed; //speed, expressed in % of segment / second

    private int currentPointIndex = 0;

    private int nextIndex; // -1 for end to start, +1 for start to end. relative to this index, what is the next index? 
    private int endIndex; //at what index should the packet stop?


    // Start is called before the first frame update
    void Start()
    {
        if(startAtEnd)
        {
            currentPointIndex = track.positionCount;
            endIndex = 0;
            nextIndex = -1;
        }
        else
        {
            currentPointIndex = -1;
            endIndex = track.positionCount - 1;
            nextIndex = 1;
        }
        NextPoint();
    }

    // Update is called once per frame
    void Update()
    {
        segmentProgress += segmentSpeed * Time.deltaTime;
        if(segmentProgress > 1.0f)
        {
            if(!NextPoint())
            {
                PanicManager panicManager = GameObject.Find("MinigameManager").GetComponent<PanicManager>();
                if(panicManager == null)
                {
                    Debug.LogWarning("panic manager is null. is there a panic manager script attached to the minigamemanager game object?");
                }
                else
                {
                    panicManager.DestroyPacket(gameObject, false);
                }
                
                return;
            }
        }
                            //track coordinates are relative - this puts them into world
        gameObject.transform.position = track.gameObject.transform.position + Vector3.Lerp(track.GetPosition(currentPointIndex), track.GetPosition(currentPointIndex + nextIndex), segmentProgress);
    }

    /// <summary>
    /// 
    /// </summary>
    /// <returns>true if there is a next point</returns>
    private bool NextPoint()
    {
        currentPointIndex += nextIndex;
        if(currentPointIndex == endIndex)
        {
            return false;
        }

        //reset position - in case of floating point errors
        gameObject.transform.position = track.GetPosition(currentPointIndex);

        //reset segment progress
        segmentProgress = 0f;

        float nextSegmentLength = Vector3.Distance(track.GetPosition(currentPointIndex), track.GetPosition(currentPointIndex + nextIndex));

        segmentSpeed = speed / nextSegmentLength;
        return true;
    }
}
