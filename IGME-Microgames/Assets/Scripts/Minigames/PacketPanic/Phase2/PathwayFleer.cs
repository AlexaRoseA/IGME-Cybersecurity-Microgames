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



public class PathwayFleer : LineRendererMovement
{


    public GameObject fleeTarget;
    public Tilemap tilemap;

    protected override void EndLine()
    {
        Vector3Int tilePos = tilemap.WorldToCell(transform.position);
        Node node = tilemap.GetTile<NodeTiles>(tilePos).nodeMap[tilePos];
        List<Pathway> possiblePaths = node.connectedPathways;


        Node targetNode = NextNode();

        //random path:
        //Pathway targetPath = possiblePaths[Random.Range(0, possiblePaths.Count)];
        //track = targetPath.line;
        //movingForward = targetPath.nodes[0] == node;
        
        foreach (Pathway pathway in possiblePaths)
        {
            if (pathway.nodes.Contains(targetNode))
            {
                track = pathway.line;
                movingForward = pathway.nodes[0] == node;
                break;
            }
        }
        ResetLine();
    }


    /// <summary>
    /// returns what node the fleer should go to next, using A*
    /// </summary>
    /// <returns></returns>
    Node NextNode()
    {
        
        Vector3Int tilePos = tilemap.WorldToCell(transform.position);
        Node start = tilemap.GetTile<NodeTiles>(tilePos).nodeMap[tilePos];
        Node end = DetermineDestinationNode();
        end.parent = null;

        List<Node> open = new List<Node>();
        List<Node> closed = new List<Node>();

        open.Add(start);

        while(open.Count > 0)
        {
            
            Node current = GetLowestFCost(open);

            open.Remove(current);

            foreach(Node successor in GetSuccessors(current))
            {
                
                

                if (successor == end)
                {
                    List<Node> possibleMoves = GetSuccessors(start);
                    successor.parent = current;
                    //found end, backtrack
                    Node previous = end;
                    while(!possibleMoves.Contains(previous))
                    {
                        previous = previous.parent;
                    }
                    return previous;
                }



                int g = current.g + 1;
                int h = ApproximateDistance(successor, end);

                if (open.Contains(successor))
                {
                    //this node has already been visited, with a lower f(faster path)
                    if (successor.f < g + h)
                        continue;
                }

                if(closed.Contains(successor))
                {
                    //this node has already been visited, with a lower f(faster path)
                    if (successor.f < g + h)
                        continue;
                }
                successor.g = g;
                successor.h = h;
                successor.f = g + h;

                open.Add(successor);
                successor.parent = current;
            }
            closed.Add(current);
            //Debug.Log(open.Count);
        }
        return null;
    }

    Node GetLowestFCost(List<Node> open)
    {
        Node lowestF = open[0];
        foreach(Node node in open)
        {
            if(node.f < lowestF.f)
            {
                lowestF = node;
            }
        }

        return lowestF;
    }

    Node DetermineDestinationNode()
    {
        return tilemap.GetTile<NodeTiles>(Vector3Int.zero).nodeMap[Vector3Int.zero];
    }

    List<Node> GetSuccessors(Node parent)
    {
        List<Node> successors = new List<Node>();

        for(int i = 0; i < parent.connectedPathways.Count; i++)
        {
            foreach(Node attachedNode in parent.connectedPathways[i].nodes)
            {
                if (attachedNode != parent)
                {
                    
                    successors.Add(attachedNode);
                    break;
                }
            }
        }

        return successors;
    }

    int ApproximateDistance(Node node1, Node node2)
    {
        //TODO: make this a better approximation for hexes. 
        return Mathf.Abs(node1.cellPosition.x - node2.cellPosition.x) + Mathf.Abs(node1.cellPosition.y - node2.cellPosition.y);
    }
}
