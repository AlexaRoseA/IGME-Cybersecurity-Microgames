using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public Transform target;
    private MinigameManager helper;

    private void Start()
    {

        helper = GameObject.FindObjectOfType<MinigameManager>();
    }

    private void LateUpdate()
    {
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
