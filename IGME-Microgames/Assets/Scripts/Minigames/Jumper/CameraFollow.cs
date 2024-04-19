using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public Transform target;
    private MinigameManager helper;

    private void Start()
    {
        //finds the minigame manager
        helper = GameObject.FindObjectOfType<MinigameManager>();
    }

    private void LateUpdate()
    {
        //if the game has started, make sure the camera follows the player.
        if (helper.currentPhase == "startGame")
        {
            if (target.position.y > transform.position.y)
            {
                Vector3 newPosition = new Vector3(transform.position.x, target.position.y, transform.position.z);
                transform.position = newPosition;
            }
        }
    }
}
