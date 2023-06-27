using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Xml;
using Unity.Collections;
using Unity.PlasticSCM.Editor.WebApi;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem.XR;
using UnityEngine.Tilemaps;



public class PathwayFleer : PathwayNavigation
{
    public GameObject fleeTarget;

    private Vector3 fleeDirection;

    protected override Node DetermineDestinationNode(List<Node> failed)
    { 
        //get furthest tile in direct line away from chaser
        fleeDirection = Vector3.Normalize(fleeTarget.transform.position - transform.position);

        RaycastHit2D fleeDestinationCheck = Physics2D.Raycast(fleeDirection * -10 + transform.position, fleeDirection * 10);
        Node furthestLinearDestination = fleeDestinationCheck.collider.gameObject.GetComponent<Node>();



        NodeTiles nodeTile = tilemap.GetTile<NodeTiles>(Vector3Int.zero);
        //if furthestLinear isn't this node, and isn't one of this node's neighbors
        while(furthestLinearDestination.cellPosition != tilemap.WorldToCell(transform.position) &&
            !nodeTile.FindNeighbors(tilemap.WorldToCell(transform.position)).Contains(furthestLinearDestination))
        {
            //if it hasn't failed, return furthest
            if(!failed.Contains(furthestLinearDestination))
            {
                return furthestLinearDestination;
            }

            //if it has failed, try closer
            RaycastHit2D[] hits = new RaycastHit2D[0];
            furthestLinearDestination.GetComponent<CircleCollider2D>().Raycast(fleeDirection * 10, hits);
            furthestLinearDestination = hits[0].collider.gameObject.GetComponent<Node>();
        }
        
        //otherwise, try at an angle

        return null;
    }
}

