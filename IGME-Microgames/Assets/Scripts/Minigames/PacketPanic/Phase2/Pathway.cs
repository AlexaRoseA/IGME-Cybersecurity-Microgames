using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;
using static UnityEditor.PlayerSettings;

public class Pathway : MonoBehaviour
{
    public Tilemap tilemap;

    public LineRenderer line;
    

    public Node[] nodes;

    private float desiredAngle;
    private bool rotating;

    private void Start()
    {
        nodes = new Node[line.positionCount];
        for(int i = 0; i < nodes.Length; i++)
        {
            nodes[i] = tilemap.GetTile<NodeTiles>(tilemap.WorldToCell(line.GetPosition(i))).nodeMap[tilemap.WorldToCell(line.GetPosition(i))];
            nodes[i].connectedPathways.Add(this);
        }

        //Debug.Log(node0.connectedPathways.Count);

        //Debug.Log(node0.pos);
        //Debug.Log(node1.pos);
        

    }

    void Update()
    {
        
    }

    public void Rotate(int movingPoint, float degrees)
    {
        float rad = Mathf.Deg2Rad * degrees;
        
        //point that will be rotated
        Vector3 pointToRotate = line.GetPosition(movingPoint);

        //index of the point to rotate the moving point around
        Vector3 rotateAround = line.GetPosition((movingPoint - 1) * (movingPoint - 1));

        Vector3 newPos = Vector3.zero;

        //rotate 
        newPos.x = ((pointToRotate.x - rotateAround.x) * Mathf.Cos(rad) - (pointToRotate.y - rotateAround.y) * Mathf.Sin(rad)) + rotateAround.x;
        newPos.y = ((pointToRotate.x - rotateAround.x) * Mathf.Sin(rad) + (pointToRotate.y - rotateAround.y) * Mathf.Cos(rad)) + rotateAround.y;

        //convert to cell and back to snap to grid
        line.SetPosition(movingPoint, tilemap.CellToWorld(tilemap.WorldToCell(newPos)));


        //if the pathway is now pointing to a tile that isn't a node tile (ie off the board)
        NodeTiles newConnection = tilemap.GetTile<NodeTiles>(tilemap.WorldToCell(line.GetPosition(movingPoint)));

        if(newConnection == null)
        {
            //call the method recursively until it can attach to a valid tile
            Rotate(movingPoint, degrees);
            return;
        }
        
        //update connections
        nodes[movingPoint].connectedPathways.Remove(this);
        nodes[movingPoint] = newConnection.nodeMap[tilemap.WorldToCell(line.GetPosition(movingPoint))];
        nodes[movingPoint].connectedPathways.Add(this);
    }
}
