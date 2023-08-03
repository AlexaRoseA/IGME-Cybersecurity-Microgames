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
    public MinigameManager minigameManager;

    // Start is called before the first frame update
    void Start()
    {
        rb = gameObject.GetComponent<Rigidbody2D>();
        if (minigameManager == null) minigameManager = FindObjectOfType<MinigameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if(directing)
        {
            //update the rotation while the player is aiming the spear
            Vector3 forward = (TouchScreenToWorld() - transform.position) * -1f;
            float angle = Mathf.Rad2Deg * Mathf.Atan2(forward.y, forward.x);
            transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
        }
    }

    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        if (!minigameManager.GetTimer()) return;
        Vector3 touchPos = TouchScreenToWorld();
        touchPos.z = 0f;
        directing = Vector3.Distance(touchPos, transform.position) < 2.25;
        Time.timeScale = directing ? 0.3f : 1f;
    }

    protected override void TouchCancelled(InputAction.CallbackContext context)
    {
        if (!directing) return;

        Time.timeScale = 1f;
        directing = false;

        Vector3 touchPos = TouchScreenToWorld();
        touchPos.z = transform.position.z;
        launchDirection = touchPos - transform.position;
        launchDirection = Vector3.ClampMagnitude(launchDirection, maxPullDist);
        
        launchDirection *= launchStrengthMultiplier * -1;
        

        rb.AddForce(launchDirection, ForceMode2D.Impulse);
        
    }
}
