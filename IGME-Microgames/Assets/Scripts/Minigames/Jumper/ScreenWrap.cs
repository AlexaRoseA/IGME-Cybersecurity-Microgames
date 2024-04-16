using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenWrap : MonoBehaviour
{
    Renderer[] renderers;
    bool isWrappingX = false;
    Transform[] ghosts = new Transform[2];
    Vector3 screenWidth;
    

    // Start is called before the first frame update
    void Start()
    {
        renderers = GetComponentsInChildren<Renderer>();

        screenWidth = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, 0));
        //CreateGhostShips();

    }
    bool CheckRenderers()
    {
        foreach(var renderer in renderers)
        {
            if (renderer.isVisible)
            {
                return true;
            }
        }
        return false;
    }

    void WrapFromScreen()
    {
        var isVisible = CheckRenderers();
        if (isVisible)
        {
            isWrappingX = false;
            return;
        }
        if (isWrappingX)
        {
            return;
        }

        var cam = Camera.main;
        var viewportPosition = cam.WorldToViewportPoint(transform.position);
        var newPosition = transform.position;

        if (!isWrappingX && (viewportPosition.x >= 1 || viewportPosition.x <= 0))
        {
            newPosition.x = -newPosition.x;
            isWrappingX = true;
        }
        transform.position = newPosition;
    }

    void CreateGhostShips()
    {
        for (int i = 0; i < 2; i++)
        {
            ghosts[i] = Instantiate(transform, Vector3.zero, Quaternion.identity) as Transform;
            DestroyImmediate(ghosts[i].GetComponent(typeof(Component)));
        }
    }
    void PositionGhostShips()
    {
        // All ghost positions will be relative to the ships (this) transform,
        // so let's star with that.
        var ghostPosition = transform.position;
        // We're positioning the ghosts clockwise behind the edges of the screen.
        // Let's start with the far right.
        ghostPosition.x = transform.position.x + screenWidth.x;
        ghostPosition.y = transform.position.y;
        ghosts[0].position = ghostPosition;
        ghosts[0].rotation = transform.rotation;

        // Left
        ghostPosition.x = transform.position.x - screenWidth.x;
        ghostPosition.y = transform.position.y;
        ghosts[1].position = ghostPosition;
        ghosts[1].rotation = transform.rotation;
    }


        // Update is called once per frame
        void Update()
    {
        //PositionGhostShips();
        WrapFromScreen();
    }
}
