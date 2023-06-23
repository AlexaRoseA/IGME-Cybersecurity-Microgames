using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_FirewallCreationLogic : MonoBehaviour
{
    // Start is called before the first frame update

    public static float dropTime = 0.9f;
    public static float quickDropTime = 0.05f;

    private GameObject currentPiece = null;
    private FireDefense_Piece pieceScript;

    private Movement movementScript = null;

    void Start()
    {
        movementScript = GameObject.Find("InputManager").GetComponent<Movement>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {

    }

    public void UpdatePiece(GameObject obj)
    {
        currentPiece = obj;
        pieceScript = obj.GetComponent<FireDefense_Piece>();

    }

    public Movement ReturnMovementScript()
    {
        return movementScript;
    }

    public bool ValidMovement(Vector3 pos)
    {
        return true;
    }

    public float GetDropTime()
    {
        return dropTime;
    }

    public float GetQuickDropTime()
    {
        return quickDropTime;
    }
}
