using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Tilemaps;




[CreateAssetMenu(fileName = "NodeTile", menuName = "ScriptableObjects/NodeTile", order = 1)]

public class NodeTiles : TileBase
{
    public Sprite nodeSprite;
    public GameObject nodePrefab;

    public Dictionary<Vector3Int, Node> nodeMap;

    public override void GetTileData(Vector3Int position, ITilemap tilemap, ref TileData tileData)
    {
        tileData.sprite = nodeSprite;
        tileData.gameObject = nodePrefab;
    }

    public override bool StartUp(Vector3Int position, ITilemap tilemap, GameObject go)
    {
        //instead of each tile being a NodeTiles object, the nodeTiles object is the same for each tile.
        //Startup creates a unique gameobject for each tile, from the prefab determined in GetTileData().
        if (nodeMap == null)
        {
            nodeMap = new Dictionary<Vector3Int, Node>();
        }

        nodeMap.Add(position, go.GetComponent<Node>());
        go.GetComponent<Node>().cellPosition = position;

        return true;
    }

    /// <summary>
    /// returns all node neighbors to the given position.
    /// </summary>
    /// <param name="position"></param>
    /// <returns></returns>
    public List<Node> FindNeighbors(Vector3Int position)
    {
        List<Node> neighbors = new List<Node>();

        int xMin = position.x - 1;
        int xMax = position.x + 1;
        int yMin = position.y - 1;
        int yMax = position.y + 1;

        for (int x = xMin; x <= xMax; x++)
        {
            for(int y = yMin; y <= yMax; y++)
            {
                if (nodeMap.ContainsKey(new Vector3Int(x, y)))
                {
                    // 0= even 2= odd
                    int odd2 = Mathf.Abs(y % 2 * 2);

                    // 0 = left 2= right
                    int xRel = x - xMin;

                    //odd2 != xRel
                    //ignore if its on the right and odd, or left and even.
                    //those are the corners that shouldn't be included, but are because of the coordinate system.

                    //y == position.y
                    //include if its in line with the center. odd2 != xRel will wrongfully not include the center-right/left node.

                    //x != position.x || y != position.y
                    //don't include the center (it isn't a neighbor to itself)
                    if ((odd2 != xRel || y == position.y) && (x != position.x || y != position.y))
                    {
                        neighbors.Add(nodeMap[new Vector3Int(x, y)]);
                    }
                }
            }
        }
        return neighbors;
    }
}
