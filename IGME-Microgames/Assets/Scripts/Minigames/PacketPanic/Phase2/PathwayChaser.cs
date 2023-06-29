using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PathwayChaser : PathwayNavigation
{
    public GameObject target;
    public PanicManagerPhase2 panicManager;
    public float captureSpeed;
    public float captureDecayRate;
    public float capturingPercent;
    public Sprite capturing;
    public Sprite normal;
    public Slider slider;

    private SpriteRenderer spriteRenderer;

    /// <summary>
    /// returns the node the target is on. 
    /// </summary>
    /// <returns></returns>
    protected override Node DetermineDestinationNode(List<Node> failed)
    {
        NodeTiles tiles = tilemap.GetTile<NodeTiles>(tilemap.WorldToCell(target.transform.position));

        if (tiles == null)
        {
            return null;
        }
        Node targetHex = tiles.nodeMap[tilemap.WorldToCell(target.transform.position)];
        Node thisHex = tilemap.GetTile<NodeTiles>(Vector3Int.zero).nodeMap[tilemap.WorldToCell(transform.position)];

        // if the target and the chaser are on the same node, it will pick a random direction.
        // this makes it so that instead of a random direction, it still goes towards the target. 
        if (targetHex == thisHex)
        {
            //find neighbor that target is closest too- thats where they are going
            float closestDist = float.MaxValue;
            Node closestNode = null;
            foreach (Node neighbor in tilemap.GetTile<NodeTiles>(Vector3Int.zero).FindNeighbors(targetHex.cellPosition))
            {

                float neighborSqrMag = Vector3.SqrMagnitude(target.transform.position - tilemap.CellToWorld(neighbor.cellPosition));
                if (neighborSqrMag < closestDist && !failed.Contains(neighbor))
                {
                    closestNode = neighbor;
                    closestDist = neighborSqrMag;
                }
            }
            return closestNode;
        }

        Node goal = failed.Contains(targetHex) ? null : targetHex;
        return goal;
    }

    protected override void Start()
    {
        base.Start();
        spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
    }

    protected override void Update()
    {
        base.Update();
        //overlap
        if (Vector3.SqrMagnitude(transform.position - target.transform.position) < 1.0f)
        {
            //Debug.Log("overlapping: " + Vector3.SqrMagnitude(transform.position - target.transform.position));
            capturingPercent += captureSpeed * Time.deltaTime;
            spriteRenderer.sprite = capturing;
        }
        else
        {
            capturingPercent -= captureDecayRate * Time.deltaTime;
            spriteRenderer.sprite = normal;
        }

        slider.value = capturingPercent;

        if(capturingPercent > 1.0f)
        {
            panicManager.EndPhase(true);
        }
        else if(capturingPercent <= 0.0f)
        {
            capturingPercent = 0.0f;
        }
    }
}
