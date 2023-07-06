using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_FirewallDefense : MonoBehaviour
{
    // Start is called before the first frame update

    // Wall block array, row repair and battle checker
    private GameObject[] wallBlocks;
    private bool rowRepaired = true;
    [SerializeField] public bool startBattle = false;

    // Current player movement (top NOT repair) and
    // it's movement script
    [SerializeField] GameObject player;
    [SerializeField] Movement movementScript;
    private MinigameManager minigameManager;

    void Start()
    {
        wallBlocks = GameObject.FindGameObjectsWithTag("Wall");
        minigameManager = GameObject.Find("MinigameManager").GetComponent<MinigameManager>();

        foreach (GameObject wallBlock in wallBlocks)
        {
            Color32 colorRan = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
            wallBlock.GetComponent<FireDefense_RepairWallBlock>().SetBlockColor(colorRan);

            //Color colorDarker = new Color(colorRan.r - 20, colorRan.g - 20, colorRan.b - 20);
            wallBlock.GetComponent<FireDefense_RepairWallBlock>().SetRepairColor(Color.gray);

            wallBlock.GetComponent<FireDefense_RepairWallBlock>().SetCurrentColor(colorRan);
        }

        Debug.Log("Blocks collected: " + wallBlocks);
    }

    // Update is called once per frame
    void Update()
    {
        if (!startBattle)
        {
            if (minigameManager.GetPhase() == "fighting")
            {
                minigameManager.UpdateScoreText();
                startBattle = true;
            }
        }

        if (rowRepaired && startBattle)
        {
            CoordinateDowntime();
        } 
    }

    private void CoordinateDowntime()
    {
        if(rowRepaired)
        {
            minigameManager.UpdateScore(1000);
        }
        rowRepaired = false;

        foreach (GameObject block in wallBlocks)
        {
            float damageChance = Random.Range(0, 2);
            Debug.Log(damageChance);
            if(damageChance >= 0.8)
            {
                FireDefense_RepairWallBlock blockWall = block.GetComponent<FireDefense_RepairWallBlock>();
                blockWall.DamageBlock();
                minigameManager.UpdateScore(-50);

            }
        }

        CheckIfRowsRepaired();
    }

    public GameObject[] GetBlockRow()
    {
        return wallBlocks;
    }

    public void CheckIfRowsRepaired()
    {
        bool tempStatus = true;

        foreach (GameObject block in wallBlocks)
        {
            FireDefense_RepairWallBlock blockWall = block.GetComponent<FireDefense_RepairWallBlock>();
            if(blockWall.GetRepairStatus())
            {
                tempStatus = false;
                return;
            }
        }
        rowRepaired = tempStatus;
    }
}
