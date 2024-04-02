using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenWrap : MonoBehaviour
{
    Renderer[] renderers;
    bool isWrappingX = false;

    // Start is called before the first frame update
    void Start()
    {
        renderers = GetComponentsInChildren<Renderer>();
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


    // Update is called once per frame
    void Update()
    {
        WrapFromScreen();
    }
}
