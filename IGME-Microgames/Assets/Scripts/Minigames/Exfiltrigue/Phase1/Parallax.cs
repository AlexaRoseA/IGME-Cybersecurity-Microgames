using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallax : MonoBehaviour
{
    public Camera main;
    public float parallaxAmount;

    Vector3 start;

    // Start is called before the first frame update
    void Start()
    {
        start = transform.position;
        if (main == null) main = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 distance = main.transform.position * parallaxAmount;

        Vector3 NewPosition = new Vector3(start.x + distance.x, start.y + distance.y, transform.position.z);

        transform.position = NewPosition;
    }
}
