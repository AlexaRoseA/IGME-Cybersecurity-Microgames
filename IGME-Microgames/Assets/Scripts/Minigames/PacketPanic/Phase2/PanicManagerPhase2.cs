using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

public class PanicManagerPhase2 : MonoBehaviour
{
    // Start is called before the first frame update

    public int averagePaths = 10;
    public GameObject pathwayPrefab;
    public Tilemap tilemap;

    void Start()
    {
        //determine how many paths there will be
        int pathsToPlaceRemaining = Random.Range(averagePaths, (int)(averagePaths * 2f));


        for(int i = 0; i < pathsToPlaceRemaining; i++)
        {
            //generate a random position on the tilemap
            Vector3Int randomCellPos = new Vector3Int();
            randomCellPos.x = Random.Range(tilemap.cellBounds.x, tilemap.cellBounds.xMax);
            randomCellPos.y = Random.Range(tilemap.cellBounds.y, tilemap.cellBounds.yMax);

            Vector3 randomWorldPos = tilemap.CellToWorld(randomCellPos);

            //check if the random position is a valid location for a pathway
            if (tilemap.GetTile<NodeTiles>(randomCellPos) == null)
            {
                i--;
                continue;
            }

            //create path
            GameObject newPath = Instantiate(pathwayPrefab);
            newPath.GetComponent<Pathway>().tilemap = tilemap;

            //Pathway component works on the assumption that the line renderer moves, and the transform of the gameobject stays at 0, 0, 0

            //set the starting point
            newPath.GetComponent<LineRenderer>().SetPosition(0, randomWorldPos);

            //2nd point will start as the cell just to the right of the first point. It will be rotated in Pathway's Start()
            randomCellPos.x += 1;
            randomWorldPos = tilemap.CellToWorld(randomCellPos);
            newPath.GetComponent<LineRenderer>().SetPosition(1, randomWorldPos);


            //check for overlap
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
