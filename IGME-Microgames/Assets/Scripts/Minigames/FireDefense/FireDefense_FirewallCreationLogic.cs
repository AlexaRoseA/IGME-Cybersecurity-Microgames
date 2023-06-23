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

    private int width = 8;
    private int height = 25;

    void Start()
    {
        movementScript = GameObject.Find("InputManager").GetComponent<Movement>();
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

    public bool CheckInsideGrid(Vector2 pos)
    {
        Debug.Log("POS X: " + (int)pos.x);
        return ((int)pos.x >= 0 && (int)pos.x <= width && (int)pos.y >= 0);
    }

    public Vector2 FloorVector(Vector2 pos)
    {
        return new Vector2(Mathf.RoundToInt(pos.x), Mathf.RoundToInt(pos.y));
    }
}
