using GG.Infrastructure.Utils.Swipe;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class FireDefense_Piece : MonoBehaviour
{
    private float lifeTimer = 0;

    private FireDefense_FirewallCreationLogic firewallManager;
    private SwipeListener swipeListener;

    private bool startTimer = false;

    PlayerInput playerInput;
    InputAction touchDoubleAction;

    CapsuleCollider2D capsuleForDownFast;
    GameObject parent;

    bool quickDrop = false;

    // Start is called before the first frame update
    void Awake()
    {
        firewallManager = GameObject.Find("FirewallCreationGame").GetComponent<FireDefense_FirewallCreationLogic>();
        playerInput = GameObject.FindObjectOfType<PlayerInput>();
        touchDoubleAction = playerInput.actions.FindAction("TouchDouble");
        capsuleForDownFast = transform.parent.gameObject.GetComponent<CapsuleCollider2D>();
        parent = transform.parent.gameObject;
        swipeListener = gameObject.GetComponent<SwipeListener>();
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
        {
            transform.Rotate(0, 0, -degree);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (startTimer)
        {
            lifeTimer += 1 * Time.deltaTime;

            if (GetLifeTimer() > firewallManager.GetDropTime() && !quickDrop)
            {
                parent.transform.position -= new Vector3(0, 1, 0);

                if (!CheckInValidPos())
                {
                    parent.transform.position -= new Vector3(0, -1, 0);

                    enabled = false;

                    AddToGrid();

                    firewallManager.UpdateNumFilled();

                    firewallManager.GeneratePiece();
                }
                SetLifeTimer(0);
            }
        }

        if (firewallManager.ReturnMovementScript().checkIfWithinDragCircle() && !quickDrop)
        {
            Movement();
        }
    }

    IEnumerator QuickDropMovement()
    {
        while (CheckInValidPos())
        {
            parent.transform.position -= new Vector3(0, 1, 0);

            if(CheckInValidPos())
            {
                yield return new WaitForSeconds(.05f);
            }
            
        }

        parent.transform.position -= new Vector3(0, -1, 0);

        quickDrop = false;

        AddToGrid();

        enabled = false;

        yield return new WaitForSeconds(.1f);

        firewallManager.UpdateNumFilled();

        firewallManager.GeneratePiece();

        yield return null;
    }

    private void OnEnable()
    {
        startTimer = true;
        firewallManager.ReturnMovementScript().UpdatePlayer(gameObject);
        touchDoubleAction.performed += TouchPressed;
        swipeListener.OnSwipe.AddListener(OnSwipe);
    }

    private void OnDisable()
    {
        startTimer = false;
        lifeTimer = 0;
        touchDoubleAction.performed -= TouchPressed;
        swipeListener.OnSwipe.RemoveListener(OnSwipe);
    }

    private void OnSwipe(string swipe)
    {
        Debug.Log(swipe + " swipe");
        if (swipe.ToLower() == "up" || swipe.ToLower() == "upright" || swipe.ToLower() == "upleft")
        {
            quickDrop = true;
            StartCoroutine(QuickDropMovement());
        }
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
        foreach (Transform block in transform)
        {
            Vector2 pos = firewallManager.FloorVector(block.position);
            if (!firewallManager.CheckInsideGrid(pos))
            {
                return false;
            }

            if (firewallManager.ReturnGridStatusAtPos((int)pos.x, (int)pos.y) != null)
            {
                return false;
            }
        }
        return true;
    }
    void AddToGrid()
    {
        foreach (Transform block in transform)
        {
            int roundX = Mathf.RoundToInt(block.transform.position.x);
            int roundY = Mathf.RoundToInt(block.transform.position.y);

            firewallManager.SetGridPos(roundX, roundY, block);
        }
    }
}
