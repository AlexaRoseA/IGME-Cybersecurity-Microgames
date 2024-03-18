using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Tilemaps;

public class PathwayNavigation : LineRendererMovement
{
    public Tilemap tilemap;

    protected override void EndLine()
    {
        
        Vector3Int tilePos = tilemap.WorldToCell(transform.position);
        NodeTiles tiles = tilemap.GetTile<NodeTiles>(tilePos);

        if(tiles == null)
        {
            track.gameObject.GetComponent<Pathway>().rotationFinished.Add(EndLine);
            return;
        }
        Node node = tiles.nodeMap[tilePos];
        List<Pathway> possiblePaths = node.connectedPathways;

        //nodes that couldn't be pathfound
        List<Node> failedNodes = new List<Node>();

        Node destination = DetermineDestinationNode(failedNodes);
        Node targetNode = NextNode(destination);
            
        
        //keep trying new destinations until one works
        while (targetNode == null && destination != null)
        {
            failedNodes.Add(destination);
            destination = DetermineDestinationNode(failedNodes);
            targetNode = NextNode(destination);
        }

        if (targetNode == null)
        {
            //couldn't pathfind to destination, pick a random path
            Pathway targetPath = possiblePaths[Random.Range(0, possiblePaths.Count)];
            track = targetPath.line;
            movingForward = targetPath.nodes[0] == node;
            ResetLine();
            return;
        }

        //find the pathway that corresponds to the targetNode
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
    /// <returns>returns null if there is no path</returns>
    Node NextNode(Node destination)
    {
        if(destination == null) return null;
        Vector3Int tilePos = tilemap.WorldToCell(transform.position);
        Node start = tilemap.GetTile<NodeTiles>(tilePos).nodeMap[tilePos];
        Node end = destination;
        end.parent = null;

        List<Node> open = new List<Node>();
        List<Node> closed = new List<Node>();

        open.Add(start);

        while (open.Count > 0)
        {

            //current is the most promising open node
            Node current = GetLowestFCost(open);

            open.Remove(current);

            foreach (Node successor in GetSuccessors(current))
            {
                //if this successor is our goal, follow the parent references back to the start.
                if (successor == end)
                {
                    List<Node> possibleMoves = GetSuccessors(start);
                    successor.parent = current;
                    //found end, backtrack
                    Node previous = end;
                    while (!possibleMoves.Contains(previous))
                    {
                        previous = previous.parent;
                    }
                    return previous;
                }


                //g is distance from the start
                int g = current.g + 1;

                //heuristics- approximated distance from this node to goal
                int h = ApproximateDistance(successor, end);

                if (open.Contains(successor))
                {
                    //this node has already been visited, with a lower f(faster path)
                    if (successor.f < g + h)
                        continue;
                }

                if (closed.Contains(successor))
                {
                    //this node has already been closed
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
        }

        //couldn't find a path
        return null;
    }

    /// <summary>
    /// returns the node with the lowest F in the list. 
    /// </summary>
    /// <param name="open"></param>
    /// <returns></returns>
    Node GetLowestFCost(List<Node> open)
    {
        Node lowestF = open[0];
        foreach (Node node in open)
        {
            if (node.f < lowestF.f)
            {
                lowestF = node;
            }
        }

        return lowestF;
    }

    /// <summary>
    /// returns 0, 0, 0
    /// </summary>
    /// <returns></returns>
    protected virtual Node DetermineDestinationNode(List<Node> failed)
    {
        return tilemap.GetTile<NodeTiles>(Vector3Int.zero).nodeMap[Vector3Int.zero];
    }

    /// <summary>
    /// returns a list of all of the nodes that the AI can move to from the parent node. 
    /// </summary>
    /// <param name="parent"></param>
    /// <returns></returns>
    List<Node> GetSuccessors(Node parent)
    {
        List<Node> successors = new List<Node>();

        for (int i = 0; i < parent.connectedPathways.Count; i++)
        {
            foreach (Node attachedNode in parent.connectedPathways[i].nodes)
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

    /// <summary>
    /// manhattan distance between 2 points
    /// this is less accurate on a hex grid
    /// </summary>
    /// <param name="node1"></param>
    /// <param name="node2"></param>
    /// <returns></returns>
    int ApproximateDistance(Node node1, Node node2)
    {
        //TODO: make this a better approximation for hexes. 
        return Mathf.Abs(node1.cellPosition.x - node2.cellPosition.x) + Mathf.Abs(node1.cellPosition.y - node2.cellPosition.y);
    }
}
