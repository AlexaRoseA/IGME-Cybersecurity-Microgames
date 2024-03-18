using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Xml;
using Unity.Collections;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem.XR;
using UnityEngine.Tilemaps;



public class PathwayFleer : PathwayNavigation
{
    public GameObject fleeTarget;

    private Vector3 fleeDirection;
    Node furthestLinearDestination;

    List<Vector3> fleeDirectionsTried;

    /*private void OnDrawGizmos()
    {
        if (furthestLinearDestination != null)
            Gizmos.DrawSphere(tilemap.CellToWorld(furthestLinearDestination.cellPosition), .7f);
        //Gizmos.color = Color.red;

        Color color = new Color(-0.6f, 0f, 0f);

        foreach(Vector3 direction in fleeDirectionsTried)
        {
            Gizmos.DrawRay(transform.position, direction * -10);
            color.r += .6f;
            Gizmos.color = color;
        }
    }*/

    protected override Node DetermineDestinationNode(List<Node> failed)
    {
        NodeTiles nodeTile = tilemap.GetTile<NodeTiles>(Vector3Int.zero);
        Node current = nodeTile.nodeMap[tilemap.WorldToCell(transform.position)];
        float chaserDist = Vector3.SqrMagnitude(fleeTarget.transform.position - transform.position);
        //chaser is close - panic mode (force running directly away)
        if (chaserDist < 2.5f)
        {
            Node furthestOption = null;
            float furthestDist = -1f;
            foreach(Pathway pathway in current.connectedPathways)
            {
                Node other = pathway.nodes[pathway.nodes[0] == current ? 1 : 0];
                float otherSqrMag = Vector3.SqrMagnitude(fleeTarget.transform.position - tilemap.CellToWorld(other.cellPosition));
                if (otherSqrMag > furthestDist && !failed.Contains(other))
                {
                    furthestOption = other;
                    furthestDist = otherSqrMag;
                }
            }
            return furthestOption;
        }

        fleeDirectionsTried = new List<Vector3>();
        //get furthest tile in direct line away from chaser
        fleeDirection = Vector3.Normalize(fleeTarget.transform.position - transform.position);

        //RaycastHit2D fleeDestinationCheck = Physics2D.Raycast(fleeDirection * -10 + transform.position, fleeDirection * 10);
        //Node furthestLinearDestination = fleeDestinationCheck.collider.gameObject.GetComponent<Node>();

        RaycastHit2D fleeDestinationCheck;
        
        


        for (int i = 0; i < 6; i++)
        {
            fleeDirection = Quaternion.Euler(0f, 0f, (i%2 == 1 ? 30f : -30f) * i) * fleeDirection;
            //Debug.Log(fleeDirection);
            fleeDirectionsTried.Add(fleeDirection);
            fleeDestinationCheck = Physics2D.Raycast(fleeDirection * -10 + transform.position, fleeDirection * 10);
            furthestLinearDestination = fleeDestinationCheck.collider.gameObject.GetComponent<Node>();
            //while furthestLinear isn't this node, and isn't one of this node's neighbors
            int j = 0;
            while (furthestLinearDestination.cellPosition != tilemap.WorldToCell(transform.position) &&
                !nodeTile.FindNeighbors(tilemap.WorldToCell(transform.position)).Contains(furthestLinearDestination) && j < 4)
            {
                //if it hasn't failed, return furthest
                if (!failed.Contains(furthestLinearDestination))
                {
                    return furthestLinearDestination;
                }

                //if it has failed, try closer
                RaycastHit2D[] hits = new RaycastHit2D[1];
                furthestLinearDestination.GetComponent<CircleCollider2D>().Raycast(fleeDirection * 10, hits);

                if (hits[0].collider == null) //there is no closer tile
                    break;

                furthestLinearDestination = hits[0].collider.gameObject.GetComponent<Node>();
                j++;
            }


        }

        
        
        //haven't found a good destination in a direct line- try at an angle


        return null;
    }
}

