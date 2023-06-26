using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Node : MonoBehaviour
{

    public List<Pathway> connectedPathways;

    //these are for A Star
    public int g;
    public int h;
    public int f;
    public Node parent;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void RotatePathways()
    {
        foreach (Pathway pathway in connectedPathways)
        {
            int movingPoint = 0;
            if(pathway.nodes[0] == this)
            {
                //this node is connected to point 0 on the line renderer.
                movingPoint = 1;
            }

            pathway.Rotate(movingPoint, 60);
        }
    }

    
}
