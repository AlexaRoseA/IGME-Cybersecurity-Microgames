using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollowTarget : MonoBehaviour
{
    public Camera followCamera;
    public float smoothTime = 0.15f;
    private Vector3 vel;

    // Start is called before the first frame update
    void Start()
    {
        vel = Vector3.zero;
    }

    // Update is called once per frame
    void FixedUpdate()
    {


        Camera camera = followCamera;
        if (camera == null) camera = Camera.main;
        
        Vector3 newCameraPos = Vector3.SmoothDamp(camera.transform.position, new Vector3(transform.position.x, transform.position.y, camera.transform.position.z), ref vel, smoothTime);

        camera.transform.position = newCameraPos;
    }
}
