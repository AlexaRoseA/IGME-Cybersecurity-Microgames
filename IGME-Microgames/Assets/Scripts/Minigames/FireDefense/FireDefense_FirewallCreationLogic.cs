using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using TMPro;

public class FireDefense_FirewallCreationLogic : MonoBehaviour
{
    // Start is called before the first frame update

    // 9 by 20 playable

    public static float dropTime = 0.9f;
    public static float quickDropTime = 0.05f;

    [SerializeField] GameObject pieceContainer;

    private Movement movementScript = null;
    private GameObject blockCreationScreen;

    private int width = 8;
    private int height = 25;
    private int pieceCount;

    private double amtFilled = 0;
    private double totalAmt;

    public static Transform[,] grid;
    [SerializeField] TextMeshProUGUI percentUI;

    // Finalized pieces array made of blocks
    private List<GameObject> totalPieces;
    private void Awake()
    {
        pieceCount = Random.Range(2, 7);
    }

    void Start()
    {
        
        grid = new Transform[width + 1, height];
        totalAmt = (width + 1) * 21;
        movementScript = GameObject.Find("InputManager").GetComponent<Movement>();
        blockCreationScreen = GameObject.Find("BlockCreationScreen");
    }

    public void UpdateNumFilled()
    {
        float temp = 0;
        for (int i = 0; i < width + 1; i++)
        {
            for (int j = 0; j < 21; j++)
            {
                if (grid[i,j] != null)
                {
                    temp++;
                }
            }
        }
        amtFilled = System.Math.Round(((temp / totalAmt) * 100), 2);
        percentUI.text = amtFilled.ToString();
    }

    public void SetGridPos(int x, int y, Transform value)
    {
        grid[x, y] = value;
    }

    public Transform ReturnGridStatusAtPos(int x, int y)
    {
        return grid[x, y];
    }

    public Movement ReturnMovementScript()
    {
        return movementScript;
    }

    public float GetDropTime()
    {
        return dropTime;
    }

    public float GetQuickDropTime()
    {
        return quickDropTime;
    }

    public void UpdatePieceCount()
    {
        pieceCount--;
        Debug.Log("Pieces left to generate: " + pieceCount);

        if (pieceCount <= 0)
        {
            StartGame();
        }
    }

    public int GetPieceCount()
    {
        return pieceCount;
    }


    public bool CheckInsideGrid(Vector2 pos)
    {
        return ((int)pos.x >= 0 && (int)pos.x <= width && (int)pos.y >= 0);
    }

    public Vector2 FloorVector(Vector2 pos)
    {
        return new Vector2(Mathf.RoundToInt(pos.x), Mathf.RoundToInt(pos.y));
    }

    public void StartGame()
    {
        totalPieces = blockCreationScreen.GetComponent<FireDefense_BlockCreationScreen>().GetPieceList();
        blockCreationScreen.GetComponent<FireDefense_BlockCreationScreen>().gameObject.SetActive(false);
        GeneratePiece();
    }

    public void GeneratePiece()
    {
        int ranIndex = Random.Range(0, totalPieces.Count);
        int ranX = Random.Range(1, 8);

        GameObject piece = Instantiate(totalPieces[ranIndex], new Vector3(ranX, 22, 0f), Quaternion.identity);
        piece.SetActive(true);
    }
}
