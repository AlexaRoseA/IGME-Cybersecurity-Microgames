using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Controls;
using UnityEngine.Tilemaps;

public class NodeTapper : InputHandler
{

    public Tilemap nodes;

    void Start()
    {
        
    }

    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        Vector3 touchPos = TouchScreenToWorld();
        touchPos.z = 0;

        if(nodes.HasTile(nodes.WorldToCell(touchPos)))
        {
            Node tappedTile = nodes.GetTile<NodeTiles>(nodes.WorldToCell(touchPos)).nodeMap[nodes.WorldToCell(touchPos)];
            //Debug.Log("Tapped " +  nodes.WorldToCell(touchPos));
            tappedTile.RotatePathways();
        }
    }
}

