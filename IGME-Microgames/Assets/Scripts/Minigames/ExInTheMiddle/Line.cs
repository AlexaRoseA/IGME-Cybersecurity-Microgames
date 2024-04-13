using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Line : MonoBehaviour
{
    public List<GameObject> points;
    public GameObject top_point;
    public GameObject bottom_point;

    private LineRenderer lRenderer;

    // Start is called before the first frame update
    void Start()
    {
        lRenderer = GetComponent<LineRenderer>();
        lRenderer.positionCount = 2;
        //Set the top and bottom positions.
        lRenderer.SetPosition(0, bottom_point.transform.position);
        lRenderer.SetPosition(1, top_point.transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
