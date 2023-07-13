using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class SpearMovement : InputHandler
{
    private Rigidbody2D rb;
    Vector3 launchDirection;
    private bool directing = false;
    public float maxPullDist = 2f;
    public float launchStrengthMultiplier = 2f;

    private void OnDrawGizmos()
    {
        Gizmos.DrawRay(transform.position, launchDirection);
    }
    // Start is called before the first frame update
    void Start()
    {
        rb = gameObject.GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if(directing)
        {
            //transform.rotation = Quaternion.LookRotation()
        }
    }

    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        Vector3 touchPos = TouchScreenToWorld();
        touchPos.z = 0f;
        if(Vector3.Distance(touchPos, transform.position) < 1)
        {
            directing = true;
        }
    }

    protected override void TouchCancelled(InputAction.CallbackContext context)
    {
        if (!directing) return;

        directing = false;

        Vector3 touchPos = TouchScreenToWorld();
        touchPos.z = transform.position.z;
        launchDirection = touchPos - transform.position;
        launchDirection = Vector3.ClampMagnitude(launchDirection, maxPullDist);
        
        launchDirection *= launchStrengthMultiplier * -1;
        

        rb.AddForce(launchDirection, ForceMode2D.Impulse);
        
    }
}
