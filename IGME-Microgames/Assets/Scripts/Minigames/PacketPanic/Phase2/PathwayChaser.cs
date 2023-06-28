using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathwayChaser : PathwayNavigation
{
    public GameObject target;

    /// <summary>
    /// returns the node the target is on. 
    /// </summary>
    /// <returns></returns>
    protected override Node DetermineDestinationNode(List<Node> failed)
    {
        return failed.Count == 0 ? tilemap.GetTile<NodeTiles>(Vector3Int.zero).nodeMap[tilemap.WorldToCell(target.transform.position)] : null;
    }

    protected override void Update()
    {
        base.Update();

        //overlap
        if (Vector3.SqrMagnitude(transform.position - target.transform.position) < .2)
        {
            Debug.Log("captured");
        }
    }
}
