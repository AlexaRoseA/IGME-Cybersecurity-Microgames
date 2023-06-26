using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class PathwayFleer : LineRendererMovement
{
    public GameObject fleeTarget;
    public Tilemap tilemap;

    void UpdateDirection()
    {
        

    }

    protected override void EndLine()
    {
        Vector3Int tilePos = tilemap.WorldToCell(transform.position);
        Node node = tilemap.GetTile<NodeTiles>(tilePos).nodeMap[tilePos];
        List<Pathway> possiblePaths = node.connectedPathways;

        int nextIndex = Random.Range(0, possiblePaths.Count);

        track = possiblePaths[nextIndex].line;
        movingForward = possiblePaths[nextIndex].nodes[0] == node;

        ResetLine();
    }
}
