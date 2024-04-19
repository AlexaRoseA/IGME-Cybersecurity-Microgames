using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GhostJumpers : MonoBehaviour
{
    Transform[] ghosts = new Transform[2];
    float screenWidth;

    // Start is called before the first frame update
    void Start()
    {
        var cam = Camera.main;
        var screenBottomLeft = cam.ViewportToWorldPoint(new Vector3(0, 0, transform.position.z));
        var screenTopRight = cam.ViewportToWorldPoint(new Vector3(10, 10, transform.position.z));

        screenWidth = screenTopRight.x - screenBottomLeft.x;
        CreateGhostJumpers();
    }

    void CreateGhostJumpers()
    {
        for (int i = 0; i < 2; i++)
        {
            ghosts[i] = Instantiate(transform, Vector3.zero, Quaternion.identity) as Transform;
            DestroyImmediate(ghosts[i].GetComponent<GameObject>());
        }
    }


    void PositionGhostJumpers()
    {
        var ghostPosition = transform.position;

        // Right jumper
        ghostPosition.x = transform.position.x + screenWidth;
        ghostPosition.y = transform.position.y;
        ghosts[0].position = ghostPosition;

        // Left jumper
        ghostPosition.x = transform.position.x - screenWidth;
        ghostPosition.y = transform.position.y;
        ghosts[1].position = ghostPosition;


    }

    // Update is called once per frame
    void Update()
    {
        PositionGhostJumpers();
    }
}
