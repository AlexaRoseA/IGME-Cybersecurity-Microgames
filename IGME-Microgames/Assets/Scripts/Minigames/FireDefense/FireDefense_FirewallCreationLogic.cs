using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

/* **************************************************************************
*
* This script is a play phase of the minigame Fire Defense; Keeps track
* of the grid array and calculating percentage of completion to the top
* of the canvas screen.
*
* ************************************************************************/

public class FireDefense_FirewallCreationLogic : MonoBehaviour
{
    // Start is called before the first frame update

    public static float dropTime = 0.9f;

    [SerializeField] GameObject pieceContainer;
    private Movement movementScript = null;
    private GameObject blockCreationScreen;

    // 9 by 20 playable
    private int width = 8;
    private int height = 25;
    private int pieceCount;

    private double amtFilled = 0;
    private double totalAmt;

    public static Transform[,] grid;
    [SerializeField] TextMeshProUGUI percentUI;

    // Finalized pieces array made of blocks
    private List<GameObject> totalPieces;

    #region Start/Middle/End General Methods and Helpers

    /// <summary>
    /// Sets the piece count for the Block Creation Screen
    /// </summary>
    private void Awake()
    {
        pieceCount = Random.Range(2, 7);
    }

    /// <summary>
    /// Defines the grid, total amount based on playable space in the grid,
    /// finds the movement script and the UI block creation gameobject.
    /// </summary>
    void Start()
    {
        
        grid = new Transform[width + 1, height];
        totalAmt = (width + 1) * 21;
        movementScript = GameObject.Find("InputManager").GetComponent<Movement>();
        blockCreationScreen = GameObject.Find("BlockCreationScreen");
    }

    /// <summary>
    /// Starts the game and generates the first piece
    /// Sets the total pieces and the blockcreation screen off.
    /// </summary>
    public void StartGame()
    {
        totalPieces = blockCreationScreen.GetComponent<FireDefense_BlockCreationScreen>().GetPieceList();
        blockCreationScreen.GetComponent<FireDefense_BlockCreationScreen>().gameObject.SetActive(false);
        GeneratePiece();
    }

    /// <summary>
    /// Returns the assigned movement script 
    /// </summary>
    /// <returns></returns>
    public Movement ReturnMovementScript()
    {
        return movementScript;
    }

    /// <summary>
    /// Returns the drop time
    /// </summary>
    /// <returns></returns>
    public float GetDropTime()
    {
        return dropTime;
    }

    #endregion

    #region Calculation Methods

    /// <summary>
    /// Recalculates percentage of the grid is filled up properly
    /// Updates the UI element to show percentage
    /// </summary>
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

    /// <summary>
    /// Updates the count of pieces left to generate. 
    /// If reached 0, start the game.
    /// Called on save piece button on a valid entry.
    /// </summary>
    public void UpdatePieceCount()
    {
        pieceCount--;
        Debug.Log("Pieces left to generate: " + pieceCount);

        if (pieceCount <= 0)
        {
            StartGame();
        }
    }

    /// <summary>
    /// Rounds position to interger.
    /// </summary>
    /// <param name="pos"></param>
    /// <returns></returns>
    public Vector2 RoundVector(Vector2 pos)
    {
        return new Vector2(Mathf.RoundToInt(pos.x), Mathf.RoundToInt(pos.y));
    }

    #endregion

    #region Grid Methods

    /// <summary>
    /// Sets the position of the grid to be a set transform
    /// </summary>
    /// <param name="x">X position</param>
    /// <param name="y">Y positon</param>
    /// <param name="value">Transform in said grid position [x,y]</param>
    public void SetGridPos(int x, int y, Transform value)
    {
        grid[x, y] = value;
    }

    /// <summary>
    /// Returns the transform value at a set position in the grid ARRAY
    /// </summary>
    /// <param name="x">X position</param>
    /// <param name="y">Y position</param>
    /// <returns></returns>
    public Transform ReturnGridStatusAtPos(int x, int y)
    {
        return grid[x, y];
    }

    /// <summary>
    /// Returns a boolean
    /// Checks if the set position is inside the grid BOUNDARIES.
    /// </summary>
    /// <param name="pos"></param>
    /// <returns></returns>
    public bool CheckInsideGrid(Vector2 pos)
    {
        return ((int)pos.x >= 0 && (int)pos.x <= width && (int)pos.y >= 0);
    }

    #endregion

    #region Piece Methods

    /// <summary>
    /// Returns the amount of pieces to generate
    /// for the UI element(s)
    /// </summary>
    /// <returns></returns>
    public int GetPieceCount()
    {
        return pieceCount;
    }

    /// <summary>
    /// Generate a new random piece from the custom piece list.
    /// </summary>
    public void GeneratePiece()
    {
        int ranIndex = Random.Range(0, totalPieces.Count);
        int ranX = Random.Range(1, 8);

        GameObject piece = Instantiate(totalPieces[ranIndex], new Vector3(ranX, 22, 0f), Quaternion.identity);
        piece.SetActive(true);
    }

    #endregion
}
