using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Yarn.Unity;

/* **************************************************************************
*
* This script is a set up phase of the minigame Fire Defense, which builds pieces
* using blocks, which are used to build the firewall in the second phase.
*
* ************************************************************************/

public class FireDefense_BlockCreationScreen : MonoBehaviour
{
    // Finalized pieces array made of blocks
    private List<GameObject> totalPieces;

    // The UI element that is the grid
    public GameObject gridUIElement;
    [SerializeField] TextMeshProUGUI counter;

    private DialogueRunner dialogSystem;
    private MinigameManager minigameManager;

    // Blocks...
    // * All the blocks converted from the UI element
    // * Open to trigger
    // * blocks currently filled (selected)
    private List<Block> blocks;
    private List<Block> blocksStillOpen;
    private List<Block> blocksFilled;

    // The current size and the max size for a piece
    // The piece's color
    private int blockTotalSize = 0;
    private int blockCurrentSize = 0;
    private Color ranColor;
    private int pieceCount = 0;

    // The block object to create the saved piece
    // The parent object to add all the block objects to
    [SerializeField] GameObject blockObj;
    [SerializeField] GameObject blockParent;

    #region Start/Middle/End General Methods and Helpers

    /// <summary>
    /// Create the lists, generate the first block size,
    /// generate the first color, and convert UI elements into
    /// the custom block class for easy use
    /// </summary>
    void Start()
    {
        Canvas cL = GetComponent<Canvas>();
        cL.worldCamera = Camera.main;

        minigameManager = GameObject.Find("MinigameManager").GetComponent<MinigameManager>();
        dialogSystem = GameObject.Find("Dialogue System").GetComponent<DialogueRunner>();
        //dialogSystem.StartDialogue("FireDefense_Phase1");

        totalPieces = new List<GameObject>();
        blocks = new List<Block>();
        blocksStillOpen = new List<Block>();
        blocksFilled = new List<Block>();

        //firemanager = GameObject.Find("FirewallCreationGame").GetComponent<FireDefense_FirewallCreationLogic>();

        pieceCount = GeneratePieceCount();
        counter.text = pieceCount.ToString();

        GenerateBlockSize();
        ranColor = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);

        // Add all the toggles to the grid
        foreach (Transform child in gridUIElement.transform)
        {
            Debug.Log(child.gameObject);
            Block tempBlock = new Block();

            tempBlock.CreateBlock(ranColor, Color.gray, Color.white, child.gameObject);
            blocks.Add(tempBlock);
        }
    }

    /// <summary>
    /// Returns the pieces list
    /// </summary>
    /// <returns></returns>
    public List<GameObject> GetPieceList()
    {
        return totalPieces;
    }

    public int GeneratePieceCount()
    {
       return Random.Range(2, 7);
    }

    /// <summary>
    /// Generate how large the next block should be.
    /// </summary>
    private void GenerateBlockSize()
    {
        blockTotalSize = Random.Range(2, 6);
        Debug.Log("This block should be a maximum of: " + blockTotalSize);
    }

    /// <summary>
    /// Generates a new random color.
    /// </summary>
    /// <returns></returns>
    private Color GenerateNewColor()
    {
        return Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
    }

    #endregion

    #region UI Methods

    /// <summary>
    /// Resets the board for easy shape re-creation
    /// * Do not put color here, board reset gets called if there's 0 items
    /// * on the board if the only object is unselected manually
    /// </summary>
    public void ResetBoard()
    {
        blockCurrentSize = 0;
        blocksStillOpen.Clear();
        blocksFilled.Clear();

        foreach (Block b in blocks)
        {
            b.SetColor(b.GetDefaultC());
        }
    }

    /// <summary>
    /// UI button save block
    /// 
    /// If the limit is reached...
    /// * Create a new parent container
    /// * Set the block object to be the current random color
    /// * Create a vector3 centerpoint for off middle row blocks and a list to store children
    /// * For each block that is filled, grab it's center and Instantiate under the parent container
    /// * Add the child's position to the centerpoint position and the storage list
    /// * Detach all blocks from the parent and divide the centerpoint by how many blocks there are
    /// * Round the centerpoint to be an interger (an actual block instead of middle of one)
    /// * Add each child back to it's parent
    /// * Add the parent to the generated pieces array for use later
    /// * Hide the parent
    /// * Generate a new color, and set the color of the blocks to be the new color
    /// * Reset the board
    /// * Generate new block size for next iteration
    /// </summary>
    public void SaveBlockButton()
    {
        if (blockCurrentSize == blockTotalSize)
        {
            GameObject parent = Instantiate(blockParent, Vector3.zero, Quaternion.identity);
            parent.name = "Piece_" + (totalPieces.Count + 1);
            blockObj.GetComponent<SpriteRenderer>().color = ranColor;

            Vector3 centerpoint = Vector3.zero;
            List<GameObject> objBlocks = new List<GameObject>();

            foreach (Block block in blocksFilled)
            {
                Vector3 pos = block.GetCenter();
                
                GameObject child = Instantiate(blockObj, new Vector3(Mathf.Floor(pos.x / 100), Mathf.Floor(pos.y / 100), Mathf.Floor(pos.z / 100)), Quaternion.identity, parent.transform.GetChild(0).transform);
                centerpoint += child.transform.position;
                objBlocks.Add(child);
            }

            parent.transform.GetChild(0).transform.DetachChildren();
            centerpoint /= blocksFilled.Count;
            centerpoint = new Vector3(Mathf.RoundToInt(centerpoint.x), Mathf.RoundToInt(centerpoint.y), 0f);

            Debug.Log("CENTERPOINT: " + centerpoint);
            parent.transform.GetChild(0).transform.position = centerpoint;

            foreach (GameObject obj in objBlocks)
            {
                obj.transform.SetParent(parent.transform.GetChild(0).transform);
            }

            totalPieces.Add(parent);
            //parent.SetActive(false);
            Debug.Log("Block saved!");

            ranColor = GenerateNewColor();
            foreach(Block block in blocks)
            {
                block.SetSelectedC(ranColor);
            }

            ResetBoard();
            GenerateBlockSize();

            UpdatePieceCount();
            counter.text = pieceCount.ToString();
        }
        else
        {
            Debug.Log("Please finish placing blocks to create a shape!");
        }
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
            minigameManager.SetPhase();
            //DestroyImmediate(this.gameObject);
        }
    }

    /// <summary>
    /// Grabs the current block selected. Runs directly on the UI element.
    /// 
    /// If the block is already selected...
    /// * Unselect it and generate a new clickable block board
    /// * based on the blocks that are left that are selected.
    /// * If no blocks are selected, restart the board.
    /// 
    /// If there is room to select blocks, the block isn't disabled or selected...
    /// * Add the block to the blocks filled list
    /// * Increase the blocks placed size
    /// * Set the color to be the selected color (random color)
    /// * Generate connections and set them to be open/closed based on what is already selected (if any)
    /// 
    /// If the block limit is reached, run command to block block placements.
    /// </summary>
    /// 
    public void OnToggleValueChanged()
    {
        if (minigameManager.GetPhase() == "creatingPieces")
        {

        Block tempblock = GameObjectToBlock(EventSystem.current.currentSelectedGameObject);

        if (tempblock.GetColor() == tempblock.GetSelectedC())
        {
            Debug.Log("Unselecting block...");
            blockCurrentSize--;
            blocksStillOpen.Clear();
            blocksFilled.Remove(tempblock);

            tempblock.SetColor(tempblock.GetDefaultC());

            if (blocksFilled.Count == 0)
            {
                ResetBoard();
            }
            else
            {
                foreach (Block block in blocksFilled)
                {
                    HideIfNotConnected(block);
                }
            }

        }
        else if (blockCurrentSize != blockTotalSize && (tempblock.GetColor() != tempblock.GetDisableC() && tempblock.GetColor() != tempblock.GetSelectedC()))
        {
            Debug.Log("Adding block to the list...");

            tempblock.SetColor(tempblock.GetSelectedC());
            blocksFilled.Add(tempblock);
            blockCurrentSize++;
            HideIfNotConnected(tempblock);
        }

        if (blockCurrentSize == blockTotalSize)
        {
            BlockLimitReach();
        }
        }
    }

    #endregion

    #region Block Information

    /// <summary>
    /// Converts game object press to a button based on it's local position.
    /// </summary>
    /// <param name="block"></param>
    /// <returns></returns>
    private Block GameObjectToBlock(GameObject block)
    {
        foreach(Block blockTemp in blocks)
        {
            if (blockTemp.GetCenter() == block.gameObject.transform.localPosition)
            {
                return blockTemp;
            }
        }

        return null;
    }

    /// <summary>
    /// Disables all the buttons if the block limit is reached.
    /// </summary>
    private void BlockLimitReach()
    {
        foreach (Block blockTemp in blocks)
        {
            if (blockTemp.GetColor() == blockTemp.GetDefaultC())
            {
                blockTemp.SetColor(blockTemp.GetDisableC());
            }
        }

        Debug.Log("Block limit reached, please reset the board to continue placing.");
    }

    /// <summary>
    /// Checks each block in the grid and returns if it's a movable spot.
    /// * Ignores already selected blocks and their possibilities to move using their connections
    /// </summary>
    /// <param name="tempBlock">The block to check surroundings</param>
    private void HideIfNotConnected(Block tempBlock)
    {
        foreach (Block blockCheck in blocks)
        {
            if (blockCheck.GetColor() != blockCheck.GetSelectedC() || (blocksStillOpen.Contains(blockCheck) && blockCheck.GetColor() != blockCheck.GetSelectedC()))
            {
                blockCheck.SetColor(blockCheck.GetDefaultC());
            }

            if (!tempBlock.ReturnTouching(blockCheck.GetCenter()) && blockCheck.GetColor() != blockCheck.GetSelectedC() && !blocksStillOpen.Contains(blockCheck))
            {
                blockCheck.SetColor(blockCheck.GetDisableC());
            } else
            {
                blocksStillOpen.Add(blockCheck);
            }
        }
    }

    #endregion

    #region Block Class
    class Block
    {
        private Vector3 center;
        private Vector3 left;
        private Vector3 right;
        private Vector3 up;
        private Vector3 down;

        private List<Vector3> positions;

        private Color selectedColor;
        private Color disableColor;
        private Color defaultColor;

        private GameObject clicker;

        public Vector3 GetCenter()
        {
            return center;
        }
        /// <summary>
        /// Creates a block based on passed in information
        /// </summary>
        /// <param name="sel">Selected color</param>
        /// <param name="dis">Disabled color</param>
        /// <param name="def">Default color</param>
        /// <param name="obj">Gameobject</param>
        public void CreateBlock(Color sel, Color dis, Color def, GameObject obj)
        {
            positions = new List<Vector3>();
            center = obj.transform.localPosition;

            left = new Vector3(center.x - 100, center.y, center.z);
            right = new Vector3(center.x + 100, center.y, center.z);
            up = new Vector3(center.x, center.y + 100, center.z);
            down = new Vector3(center.x, center.y - 100, center.z);

            positions.Add(left);
            positions.Add(right);
            positions.Add(up);
            positions.Add(down);

            selectedColor = sel;
            disableColor = dis;
            defaultColor = def;

            clicker = obj;
        }


        /// <summary>
        /// Returns if the position passed in is one of the
        /// touching sides (4 sides possible)
        /// </summary>
        /// <param name="pos">Position to check</param>
        /// <returns></returns>
        public bool ReturnTouching(Vector3 pos)
        {
            foreach(Vector3 positionTouching in positions)
            {
                if(positionTouching == pos)
                {
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// Returns the color of the image at this moment
        /// </summary>
        /// <returns></returns>
        public Color GetColor()
        {
            return clicker.GetComponent<Image>().color;
        }

        /// <summary>
        /// Set the color of the image to be a set color
        /// </summary>
        /// <param name="c">Wanted color</param>
        public void SetColor(Color c)
        {
            clicker.GetComponent<Image>().color = c;
        }

        /// <summary>
        /// Sets the selected color to be an new color
        /// </summary>
        /// <param name="c">Wanted color</param>
        public void SetSelectedC(Color c)
        {
            selectedColor = c;
        }

        /// <summary>
        /// Returns the selected color
        /// </summary>
        /// <returns></returns>
        public Color GetSelectedC()
        {
            return selectedColor;
        }

        /// <summary>
        /// Returns the disabled color
        /// </summary>
        /// <returns></returns>
        public Color GetDisableC()
        {
            return disableColor;
        }

        /// <summary>
        /// Returns the default color
        /// </summary>
        /// <returns></returns>
        public Color GetDefaultC()
        {
            return defaultColor;
        }
    }
    #endregion
}
