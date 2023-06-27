using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Unity.Collections;
using Unity.PlasticSCM.Editor.WebApi;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem.XR;
using UnityEngine.Tilemaps;



public class PathwayFleer : PathwayNavigation
{
    public GameObject fleeTarget;

    private Vector3 fleeDirection;

    private List<Vector3> neighborCells;

    private void OnDrawGizmos()
    {
        Gizmos.color = new Color(1f, 0f, 0f, .5f);
        //Gizmos.DrawRay(fleeDirection * -10 + transform.position, fleeDirection * 10);
        Gizmos.color = new Color(0f, 1f, 0f, .5f);
        if(neighborCells != null)
        {
            foreach (Vector3 cell in neighborCells)
            {
                Gizmos.DrawSphere(cell, 0.6f);
            }

        }
    }

    protected override Node DetermineDestinationNode(List<Node> failed)
    {
        //raycast from past fleer to fleer

        //get furthest tile in direct line away from chaser
        fleeDirection = Vector3.Normalize(fleeTarget.transform.position - transform.position);

        RaycastHit2D fleeDestinationCheck = Physics2D.Raycast(fleeDirection * -10 + transform.position, fleeDirection * 10);


        //Debug.Log(fleeDestinationCheck.collider.gameObject.GetComponent<Node>().cellPosition);

        //distance to furthest tile is low?
        //try at an angle, until finding one 

        Node furthestLinearDestination = fleeDestinationCheck.collider.gameObject.GetComponent<Node>();


        List<Node> neighborNodes = tilemap.GetTile<NodeTiles>(Vector3Int.zero).FindNeighbors(tilemap.WorldToCell(transform.position));
        neighborCells = new List<Vector3>();
        foreach(Node neighbor in neighborNodes)
        {
            neighborCells.Add(tilemap.CellToWorld(neighbor.cellPosition));
        }

        if(!failed.Contains(furthestLinearDestination)) 
            return furthestLinearDestination;

        return null;
    }
}

