using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class FireDefense_BlockCreationScreen : MonoBehaviour
{
    private List<GameObject> totalPieces;
    public GameObject gridUIElement;
    private List<Block> blocks;
    private List<Block> blocksStillOpen;
    private List<Block> blocksFilled;

    private int blockTotalSize = 0;
    private int blockCurrentSize = 0;
    private Color ranColor;

    [SerializeField] GameObject blockObj;
    [SerializeField] GameObject blockParent;

    // Start is called before the first frame update
    void Start()
    {
        totalPieces = new List<GameObject>();
        blocks = new List<Block>();
        blocksStillOpen = new List<Block>();
        blocksFilled = new List<Block>();

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

    public List<GameObject> GetPieceList()
    {
        return totalPieces;
    }

    public void SaveBlockButton()
    {
        if (blockCurrentSize == blockTotalSize)
        {
            GameObject parent = Instantiate(blockParent, Vector3.zero, Quaternion.identity);
            blockObj.GetComponent<SpriteRenderer>().color = ranColor;

            foreach (Block block in blocksFilled)
            {
                Vector3 pos = block.GetCenter();
                
                GameObject spawnedBlock = Instantiate(blockObj, new Vector3(Mathf.Floor(pos.x / 100), Mathf.Floor(pos.y / 100), Mathf.Floor(pos.z / 100)), Quaternion.identity, parent.transform);
            }

            totalPieces.Add(parent);
            parent.SetActive(false);
            Debug.Log("Block saved!");

            ranColor = GenerateNewColor();
            foreach(Block block in blocks)
            {
                block.SetSelectedC(ranColor);
            }
            ResetBoard();
        }
        else
        {
            Debug.Log("Please finish placing blocks to create a shape!");
        }
    }

    private void GenerateBlockSize()
    {
        blockTotalSize = Random.Range(2, 6);
        Debug.Log("This block should be a maximum of: " + blockTotalSize);
    }

    private Color GenerateNewColor()
    {
        return Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
    }

    public void OnToggleValueChanged()
    {
        Block tempblock = GameObjectToBlock(EventSystem.current.currentSelectedGameObject);

        if (tempblock.GetColor() == tempblock.GetSelectedC())
        {
            Debug.Log("Unselecting block...");
            blockCurrentSize--;
            blocksStillOpen.Clear();
            blocksFilled.Remove(tempblock);

            tempblock.SetColor(tempblock.GetDefaultC());

            if(blocksFilled.Count == 0)
            {
                ResetBoard();
            } else
            {
                foreach (Block block in blocksFilled)
                {
                    HideIfNotConnected(block);
                }
            }

        } else if (blockCurrentSize != blockTotalSize && (tempblock.GetColor() != tempblock.GetDisableC() && tempblock.GetColor() != tempblock.GetSelectedC()))
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

    private Block GameObjectToBlock(GameObject block)
    {
        foreach(Block blockTemp in blocks)
        {
            if (blockTemp.GetCenter() == block.gameObject.transform.localPosition)
            {
                Debug.Log("FOUND BLOCK CLICKED" + block.name);
                return blockTemp;
            }
        }

        return null;
    }

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

        public Color GetColor()
        {
            return clicker.GetComponent<Image>().color;
        }

        public void SetColor(Color c)
        {
            clicker.GetComponent<Image>().color = c;
        }

        public void SetSelectedC(Color c)
        {
            selectedColor = c;
        }

        public Color GetSelectedC()
        {
            return selectedColor;
        }

        public Color GetDisableC()
        {
            return disableColor;
        }

        public Color GetDefaultC()
        {
            return defaultColor;
        }
    }
}
