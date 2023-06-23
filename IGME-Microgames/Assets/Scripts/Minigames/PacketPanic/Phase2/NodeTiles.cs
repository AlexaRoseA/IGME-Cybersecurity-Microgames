using System.Collections;
using System.Collections.Generic;
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

        return true;
    }
}
