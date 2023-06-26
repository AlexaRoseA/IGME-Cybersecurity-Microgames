using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineRendererMovement : MonoBehaviour
{
    public LineRenderer track;
    public float speed = 18.0f;
    public bool movingForward = false; //is the gameobject moving along the line towards the last index, or the first?
    public MinigameManager helper;

    private float segmentProgress;
    private float segmentSpeed; //speed, expressed in % of segment / second

    protected int currentPointIndex = 0;

    private int nextIndex; // -1 for end to start, +1 for start to end. relative to this index, what is the next index? 
    private int endIndex; //at what index should the packet stop?

    protected virtual void Start()
    {
        if (helper == null)
        {
            helper = FindObjectOfType<MinigameManager>();
        }
        ResetLine();
    }

    // Update is called once per frame
    void Update()
    {
        //if theres no track, it's likely this phase has been ended.
        if (track == null)
        {
            Destroy(gameObject);
            return;
        }

        if (!helper.GetTimer())
        {
            //timer paused- don't move
            return;
        }

        segmentProgress += segmentSpeed * Time.deltaTime;
        if (segmentProgress > 1.0f)
        {
            //there is no next point- reached the end of the line
            if (!NextPoint())
            {
                EndLine();
            }
        }
        //track coordinates are relative - this puts them into world
        gameObject.transform.position = track.gameObject.transform.position + Vector3.Lerp(track.GetPosition(currentPointIndex), track.GetPosition(currentPointIndex + nextIndex), segmentProgress);
    }

    /// <summary>
    /// updates the packet's segment speed, and increments the current point index. 
    /// </summary>
    /// <returns>true if there is a next point</returns>
    protected virtual bool NextPoint()
    {
        currentPointIndex += nextIndex;
        if (currentPointIndex == endIndex)
        {
            return false;
        }

        //reset position - in case of floating point errors, this solves the packet drifting slightly off track. 
        gameObject.transform.position = track.GetPosition(currentPointIndex);

        //reset segment progress
        segmentProgress = 0f;

        float nextSegmentLength = Vector3.Distance(track.GetPosition(currentPointIndex), track.GetPosition(currentPointIndex + nextIndex));

        segmentSpeed = speed / nextSegmentLength;
        return true;
    }

    protected virtual void EndLine()
    {

    }

    protected void ResetLine()
    {
        //this determines if the packet will move from the start of the line to the end, or vise versa.
        if (movingForward)
        {
            currentPointIndex = -1;
            endIndex = track.positionCount - 1;
            nextIndex = 1;
        }
        else
        {
            currentPointIndex = track.positionCount;
            endIndex = 0;
            nextIndex = -1;
        }


        //starts movement
        NextPoint();
    }
}
