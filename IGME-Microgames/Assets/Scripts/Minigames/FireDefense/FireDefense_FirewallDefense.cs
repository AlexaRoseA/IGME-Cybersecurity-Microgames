using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_FirewallDefense : MonoBehaviour
{

    // Wall block array, row repair and battle checker
    private GameObject[] wallBlocks;
    private bool rowRepaired = true;
    [SerializeField] public bool startBattle = false;

    // Current player movement (top NOT repair) and
    // it's movement script
    [SerializeField] GameObject player;
    [SerializeField] Movement movementScript;
    private MinigameManager minigameManager;

    /// <summary>
    /// Finds all the wall blocks and manager
    /// For each wallblock, set the color uptime to be
    /// a random color and set the downtime color to be gray.
    /// </summary>
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

    }

    /// <summary>
    /// If the battle hasn't started yet and the phase is 
    /// set to the fight phase, update the score text and
    /// start the battle.
    /// 
    /// While running the battle, if the row is currently 
    /// fully repaired, coordinate a new downtime for x 
    /// amount of blocks randomly chosen.
    /// </summary>
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

    /// <summary>
    /// Sets up a downtime.
    /// If the row is repaired on start, give the player 1000 points and reset 
    /// For each gameObject, generate a random percentage if the block gets damaged.
    /// Subtract 50 points on break.
    /// Check if the row is not fully repaired afterwards.
    /// Has a check in case a rare chance all blocks are fully repaired after run.
    /// </summary>
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

    /// <summary>
    /// Returns the array of blocks in the row
    /// </summary>
    /// <returns></returns>
    public GameObject[] GetBlockRow()
    {
        return wallBlocks;
    }
    
    /// <summary>
    /// Sets the rowRepaired boolean to true or false 
    /// based on the row's repair status
    /// </summary>
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
