using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DLPSMovement : MonoBehaviour
{
    public Vector3 start;
    public Vector3 end;
    public float speed; // u/s

    private float lerpSpeed;
    private float lerpProgress;

    // Start is called before the first frame update
    void Start()
    {
        lerpSpeed = speed / Vector3.Distance(start, end);

    }

    // Update is called once per frame
    void Update()
    {
        lerpProgress += lerpSpeed * Time.deltaTime;
        transform.position = Vector3.Lerp(start, end, lerpProgress);
        if(lerpProgress > 1f || lerpProgress < 0f)
        {
            lerpSpeed *= -1f;
        }
    }
}
