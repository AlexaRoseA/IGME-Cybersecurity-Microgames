using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class FireDefense_Piece : MonoBehaviour
{
    private float lifeTimer = 0;

    private FireDefense_FirewallCreationLogic firewallManager;

    private bool placed = false;
    private bool startTimer = false;

    PlayerInput playerInput;
    InputAction touchDoubleAction;

    CapsuleCollider2D capsuleForDownFast;
    GameObject parent;

    // Start is called before the first frame update
    void Awake()
    {
        firewallManager = GameObject.Find("FirewallCreationGame").GetComponent<FireDefense_FirewallCreationLogic>();
        playerInput = GameObject.FindObjectOfType<PlayerInput>();
        touchDoubleAction = playerInput.actions.FindAction("TouchDouble");
        capsuleForDownFast = transform.parent.gameObject.GetComponent<CapsuleCollider2D>();
        parent = transform.parent.gameObject;
    }

    /// <summary>
    /// On Press, find the press position and convert it to the world position for player movement.
    /// </summary>
    /// <param name="context"></param>
    private void TouchPressed(InputAction.CallbackContext context)
    {
        safeRotate(90);
    }

    void safeRotate(float degree)
    {
        transform.Rotate(0, 0, degree);
        if (!CheckInValidPos())
            transform.Rotate(0, 0, -degree);
    }

    // Update is called once per frame
    void Update()
    {

        if (startTimer)
        {
            lifeTimer += 1 * Time.deltaTime;

            if (capsuleForDownFast.bounds.Contains(firewallManager.ReturnMovementScript().TouchScreenToWorld()) 
                && GetLifeTimer() > firewallManager.GetQuickDropTime())
            {
                parent.transform.position -= new Vector3(0, 1, 0);

                if (!CheckInValidPos())
                {
                    parent.transform.position -= new Vector3(0, -1, 0);
                }
                SetLifeTimer(0);

            }
            if (GetLifeTimer() > firewallManager.GetDropTime())
            {
                parent.transform.position -= new Vector3(0, 1, 0);

                if (!CheckInValidPos())
                {
                    parent.transform.position -= new Vector3(0, -1, 0);
                }
                SetLifeTimer(0);
            }
        }

        if (firewallManager.ReturnMovementScript().checkIfWithinDragCircle())
        {
            Movement();
        }
    }

    private void OnEnable()
    {
        if (!placed)
        {
            startTimer = true;
            Debug.Log("I am the main! " + gameObject.name);
            firewallManager.ReturnMovementScript().UpdatePlayer(gameObject);
            firewallManager.GetComponent<FireDefense_FirewallCreationLogic>().UpdatePiece(gameObject);
            touchDoubleAction.performed += TouchPressed;
        }
    }

    private void OnDisable()
    {
        startTimer = false;
        lifeTimer = 0;
        touchDoubleAction.performed -= TouchPressed;
    }

    public float GetLifeTimer()
    {
        return lifeTimer;
    }

    public void SetLifeTimer(float time)
    {
        lifeTimer = time;
    }

    public void Movement()
    {
        Vector3 oldPos = transform.position;
        parent.transform.position = new Vector3(Mathf.FloorToInt(firewallManager.ReturnMovementScript().TouchScreenToWorld().x), parent.transform.position.y, parent.transform.position.z);

        if (!CheckInValidPos())
        {
            parent.transform.position = oldPos;
        }
    }

    private bool CheckInValidPos()
    {
        foreach(Transform block in transform)
        {
            Vector2 pos = firewallManager.GetComponent<FireDefense_FirewallCreationLogic>().FloorVector(block.position);  
            if(!firewallManager.GetComponent<FireDefense_FirewallCreationLogic>().CheckInsideGrid(pos))
            {
                return false;
            }
        }
        return true;
    }
}
