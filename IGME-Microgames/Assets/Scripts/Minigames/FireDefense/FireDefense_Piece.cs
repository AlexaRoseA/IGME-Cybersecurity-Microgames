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

    // Start is called before the first frame update
    void Awake()
    {
        firewallManager = GameObject.Find("FirewallCreationGame").GetComponent<FireDefense_FirewallCreationLogic>();
    }

    // Update is called once per frame
    void Update()
    {
        if (startTimer)
        {
            lifeTimer += 1 * Time.deltaTime;

            if (GetComponent<CapsuleCollider2D>().bounds.Contains(firewallManager.ReturnMovementScript().TouchScreenToWorld()) && GetLifeTimer() > firewallManager.GetQuickDropTime())
            {
                transform.position -= new Vector3(0, 1, 0);
                SetLifeTimer(0);
            }
            if (GetLifeTimer() > firewallManager.GetDropTime())
            {
                transform.position -= new Vector3(0, 1, 0);
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
        }
    }

    private void OnDisable()
    {
        startTimer = false;
        lifeTimer = 0;
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
        transform.position = new Vector3(Mathf.RoundToInt(firewallManager.ReturnMovementScript().TouchScreenToWorld().x), transform.position.y, transform.position.z);
    }
}
