using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenWrap : MonoBehaviour
{
    Renderer[] renderers;
    bool isWrappingX = false;
    Transform[] ghosts = new Transform[2];
    Vector3 screenWidth;
    private MinigameManager helper;


    // Start is called before the first frame update
    void Start()
    {
        //finds things rendering the screen
        renderers = GetComponentsInChildren<Renderer>();

        screenWidth = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, 0));
        helper = GameObject.FindObjectOfType<MinigameManager>();

    }
    //used to checking if the player is currently being rendered
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

    //fun thing to have player wrap from one side of screen to the other
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
        //makes player wrap. 
        if (!isWrappingX && (viewportPosition.x >= 1 || viewportPosition.x <= 0))
        {
            //for some reason this needs to be +3f because of how hackbox has the objects positioned.
            //(if you need to change this value also change it in the jumper game manager for when it creates platforms based off of screen width).
            newPosition.x = -(newPosition.x+3f);
            isWrappingX = true;
        }
        transform.position = newPosition;
    }

        // Update is called once per frame
        void Update()
    {
        //PositionGhostShips();
        if (helper.currentPhase == "startGame")
        {
            WrapFromScreen();
        }
    }
}
