using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Tilemaps;
using static UnityEditor.PlayerSettings;

public class Pathway : MonoBehaviour
{
    public Tilemap tilemap;

    public LineRenderer line;

    public float degreesPerSecond;
    public Node[] nodes;

    public List<LineRendererMovement.MoveComplete> rotationFinished;
    private float desiredRotation = 0f;
    private int rotatingPoint = -1;

    private void Start()
    {
        rotationFinished = new List<LineRendererMovement.MoveComplete>();
        nodes = new Node[line.positionCount];
        for(int i = 0; i < nodes.Length; i++)
        {
            NodeTiles tile = tilemap.GetTile<NodeTiles>(tilemap.WorldToCell(line.GetPosition(i)));
            if(tile != null)
            {
                nodes[i] = tile.nodeMap[tilemap.WorldToCell(line.GetPosition(i))];
                nodes[i].connectedPathways.Add(this);
            }
            
        }

        //Debug.Log(node0.connectedPathways.Count);

        //Debug.Log(node0.pos);
        //Debug.Log(node1.pos);

        AddRotation(1, 60 * Random.Range(1, 7));
        while (!UpdateConnections(1))
        {
            AddRotation(1, 60 * Random.Range(1, 7));
        }

        //remove duplicates
        bool duplicate = false;
        foreach (Node node in nodes)
        {
            foreach(Pathway pathway in node.connectedPathways)
            {
                if (pathway.nodes.Contains(nodes[0]) && pathway.nodes.Contains(nodes[1]) && pathway != this)
                {
                    duplicate = true;
                    Destroy(gameObject);
                }
            }
            if(duplicate)
                node.connectedPathways.Remove(this);
        }
        
    }

    void Update()
    {
        if(rotatingPoint != -1)
        {
            float deg = degreesPerSecond * Time.deltaTime;
            desiredRotation -= deg;

            AddRotation(rotatingPoint, deg);

            if (desiredRotation <= 0)
            {
                UpdateConnections(rotatingPoint);
                rotatingPoint = -1;
                desiredRotation = 0f;
                for(int i = 0; i < rotationFinished.Count; i++)
                {
                    rotationFinished[i]();
                }
            }

        }
    }

    public void Rotate(int movingPoint, float degrees)
    {
        desiredRotation += degrees;
        float rad = Mathf.Deg2Rad * desiredRotation;
        rotatingPoint = movingPoint;
        
        //point that will be rotated
        Vector3 pointToRotate = line.GetPosition(movingPoint);

        //index of the point to rotate the moving point around
        Vector3 rotateAround = line.GetPosition((movingPoint - 1) * (movingPoint - 1));

        Vector3 newPos = Vector3.zero;

        //rotate 
        newPos.x = ((pointToRotate.x - rotateAround.x) * Mathf.Cos(rad) - (pointToRotate.y - rotateAround.y) * Mathf.Sin(rad)) + rotateAround.x;
        newPos.y = ((pointToRotate.x - rotateAround.x) * Mathf.Sin(rad) + (pointToRotate.y - rotateAround.y) * Mathf.Cos(rad)) + rotateAround.y;

        //convert to cell and back to snap to grid
        //goalPosition = tilemap.CellToWorld(tilemap.WorldToCell(newPos));


        //if the pathway is now pointing to a tile that isn't a node tile (ie off the board)
        NodeTiles newConnection = tilemap.GetTile<NodeTiles>(tilemap.WorldToCell(newPos));

        if(newConnection == null)
        {
            //call the method recursively until it can attach to a valid tile
            Rotate(movingPoint, 60);
            return;
        }

        //update connections
        if (nodes[movingPoint] != null)
        {
            nodes[movingPoint].connectedPathways.Remove(this);
        }
    }

    void AddRotation(int movingPoint, float degrees)
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
        line.SetPosition(movingPoint, newPos);
    }

    bool UpdateConnections(int movingPoint)
    {
        //if it has a connection, remove it
        if (nodes[movingPoint] != null)
        {
            nodes[movingPoint].connectedPathways.Remove(this);
        }
        NodeTiles nodeTile = tilemap.GetTile<NodeTiles>(tilemap.WorldToCell(line.GetPosition(movingPoint)));

        if(nodeTile == null)
        {
            return false;
        }

        Node touchingNode = nodeTile.nodeMap[tilemap.WorldToCell(line.GetPosition(movingPoint))];
        line.SetPosition(movingPoint, tilemap.CellToWorld(touchingNode.cellPosition));
        nodes[movingPoint] = touchingNode;
        nodes[movingPoint].connectedPathways.Add(this);
        return true;
    }
}
