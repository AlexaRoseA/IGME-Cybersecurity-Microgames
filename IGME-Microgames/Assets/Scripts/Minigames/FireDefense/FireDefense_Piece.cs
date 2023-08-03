using GG.Infrastructure.Utils.Swipe;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

/* **************************************************************************
*
* This script is a part of a play phase of the minigame Fire Defense.
* 
* Script assigned to a piece that keeps track of it's lifetime, parent,
* quick drop status, and sends updates to the grid script on placement.
*
* ************************************************************************/

public class FireDefense_Piece : MonoBehaviour
{
    private float lifeTimer = 0;

    private FireDefense_FirewallCreationLogic firewallManager;
    private SwipeListener swipeListener;
    private MinigameManager minigameManager;

    private bool startTimer = false;
    GameObject parent;

    PlayerInput playerInput;
    InputAction touchDoubleAction;

    bool quickDrop = false;

    private ParticleSystem fastPlaceParticle;

    /// <summary>
    /// Sets up the firewall manager, grabs player input AND
    /// finds the touch double action, sets up swipe listener.
    /// </summary>
    void Awake()
    {
        minigameManager = GameObject.Find("MinigameManager").GetComponent<MinigameManager>();

        if(minigameManager.GetPhase() == "placingPieces")
        {
            firewallManager = GameObject.Find("FirewallCreationGame").GetComponent<FireDefense_FirewallCreationLogic>();
            playerInput = GameObject.FindObjectOfType<PlayerInput>();
            touchDoubleAction = playerInput.actions.FindAction("TouchDouble");
            parent = transform.parent.gameObject;
            swipeListener = gameObject.GetComponent<SwipeListener>();
            fastPlaceParticle = parent.transform.GetChild(1).GetChild(0).GetComponent<ParticleSystem>();
        }
    }

    /// <summary>
    /// On double touchPress, determine safeRotation
    /// </summary>
    /// <param name="context"></param>
    private void TouchPressed(InputAction.CallbackContext context)
    {
        safeRotate(90);
    }

    /// <summary>
    /// Rotates the block but checks if it's valid after rotation.
    /// If it's not valid, rotate back to the original position.
    /// </summary>
    /// <param name="degree"></param>
    void safeRotate(float degree)
    {
        transform.Rotate(0, 0, degree);

        if (!CheckInValidPos())
        {
            transform.Rotate(0, 0, -degree);
        }
    }

    /// <summary>
    /// If the start timer is vaid, increase the block's life timer.
    /// 
    /// Then, check if the drop time is still valid (has not reached the bottom OR another block)
    /// And also make sures no quick drop.
    /// * If this is true, move the piece down.
    /// 
    /// If not in a valid position vertically (there is a block landed during the current life cycle)
    /// * Subtract the position to be at a correct one (the last position prior)
    /// * Disable the script
    /// * Add to the overall board grid
    /// * Update the percentage filled
    /// * Generate a new piece
    /// 
    /// Secondly is horizontal movement: if not quick dropping and the mouse is within the drag circle
    /// * Drag the piece using their finger left and right
    /// </summary>
    void Update()
    {
        if(minigameManager.GetPhase() == "placingPieces")
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
                if (firewallManager.CheckInsideGrid(new Vector2(parent.transform.position.x, parent.transform.position.y))) {
                    Movement();
                }
            }
        }
    }

    /// <summary>
    /// Simulates the quick drop animation movement, waiting a few seconds
    /// in between to allow for "animation" to take place.
    /// 
    /// After placement, set the quickdrop back to false, add the block
    /// to the grid, disable the script. Wait a few seconds before updating the
    /// percentage filled and generating a new piece. 
    /// </summary>
    /// <returns></returns>
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

        fastPlaceParticle.Play();

        yield return new WaitForSeconds(.1f);

        firewallManager.UpdateNumFilled();

        firewallManager.GeneratePiece();

        yield return null;
    }

    /// <summary>
    /// On piece enable, start the timer, update the current block to move ("player"),
    /// Assign the double touch action and swipe listener.
    /// </summary>
    private void OnEnable()
    {
        if (minigameManager.GetPhase() == "placingPieces")
        {
            startTimer = true;
            firewallManager.ReturnMovementScript().UpdatePlayer(gameObject);
            touchDoubleAction.performed += TouchPressed;
            swipeListener.OnSwipe.AddListener(OnSwipe);
        }
    }

    /// <summary>
    /// On piece disable, end the timer, set the life timer to 0, 
    /// unassign the double touch action, and remove swipe listener.
    /// </summary>
    private void OnDisable()
    {
        if (minigameManager.GetPhase() == "placingPieces")
        {
            startTimer = false;
            lifeTimer = 0;
            touchDoubleAction.performed -= TouchPressed;
            swipeListener.OnSwipe.RemoveListener(OnSwipe);
        }
    }

    /// <summary>
    /// On a swipe (up only), activate the quick drop.
    /// </summary>
    /// <param name="swipe"></param>
    private void OnSwipe(string swipe)
    {
        if (swipe.ToLower() == "up" || swipe.ToLower() == "upright" || swipe.ToLower() == "upleft")
        {
            quickDrop = true;
            StartCoroutine(QuickDropMovement());
        }
    }

    /// <summary>
    /// Returns the lifetimer.
    /// </summary>
    /// <returns></returns>
    public float GetLifeTimer()
    {
        return lifeTimer;
    }

    /// <summary>
    /// Sets the lifetimer.
    /// </summary>
    /// <param name="time"></param>
    public void SetLifeTimer(float time)
    {
        lifeTimer = time;
    }

    /// <summary>
    /// Movement horizontally.
    /// </summary>
    public void Movement()
    {
        Vector3 oldPos = transform.position;
        parent.transform.position = new Vector3(Mathf.Clamp(Mathf.FloorToInt(firewallManager.ReturnMovementScript().TouchScreenToWorld().x), 0, 10), parent.transform.position.y, parent.transform.position.z);

        if (!CheckInValidPos())
        {
            parent.transform.position = oldPos;
        }
    }

    /// <summary>
    /// Checks if the position is valid within the grid as well as
    /// it's not interacting with a block currently at a positon in the grid.
    /// </summary>
    /// <returns></returns>
    private bool CheckInValidPos()
    {
        foreach (Transform block in transform)
        {
            Vector2 pos = firewallManager.RoundVector(block.position);
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

    /// <summary>
    /// Adds the current block to the grid based on it's x and y position.
    /// </summary>
    void AddToGrid()
    {
        foreach (Transform block in transform)
        {
            Vector2 pos = firewallManager.RoundVector(block.transform.position);

            firewallManager.SetGridPos((int)pos.x, (int)pos.y, block);
        }
    }
}
