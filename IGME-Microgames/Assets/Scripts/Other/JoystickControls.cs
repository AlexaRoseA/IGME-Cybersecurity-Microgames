using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using Yarn.Unity;

public class JoystickControls : MonoBehaviour
{
    private Vector2 JoystickMovement;

    [SerializeField] Rigidbody2D rb;

    private float speed = 2f;

    private bool isMoving;
    private Vector2 dir;
    private bool dialogDone;

    // Start is called before the first frame update
    void Start()
    {
        dialogDone = false;
    }

    // Update is called once per frame
    void Update()
    {
        dir = -JoystickMovement.normalized;
        isMoving = Convert.ToBoolean(dir.magnitude);
    }

    private void FixedUpdate()
    {
        if(rb != null && dialogDone)
        {
            rb.MovePosition(rb.position + dir * speed * Time.fixedDeltaTime);
        }
    }

    public void OnJoystickMovement(InputValue input)
    {
        JoystickMovement = input.Get<Vector2>();
    }

    [YarnCommand("ChangeDialogStatus")]
    public void ChangeDialogStatus(bool status)
    {
        dialogDone = status;
    }

    public bool GetDialogStatus()
    {
        return dialogDone;
    }
}
