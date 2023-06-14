using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

/* **************************************************************************
* 
* 2023 Alexa Amoriello, IGME PROJECT H4CKB0X
*
* This script is apart of phase 2 of the minigame FUZZ BUZZ, which is an adaptation
* to teach the concept of whitebox fuzz testing.
*
* ************************************************************************/

public class FuzzBuzzPhaseTwoWhiteboxCore : MonoBehaviour
{
    [SerializeField] List<GameObject> grids;
    private GameObject selectedGrid;
    public MinigameManager helper;

    #region Start/Middle/End General Methods and Helpers

    /// <summary>
    /// Grab the helper and select a random grid
    /// </summary>
    void Start()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();
        helper.UpdateScoreText();
        helper.EnablePlayerCollisions();

        int ranGrid = Random.Range(0, grids.Count);
        selectedGrid = Instantiate(grids[ranGrid], new Vector3(0, 0, 0), Quaternion.identity, transform);
    }

    #endregion

    #region Collision Activation and Camera Coroutine Starter
    /// <summary>
    /// Yarnspinner command that activates at the end of dialogue
    /// to start the co-routine for the chosen grid
    /// </summary>
    [YarnCommand("StartCameraMovement")]
    private void StartCameraMovement()
    {
        selectedGrid.GetComponent<FuzzBuzzPhaseTwoWhiteboxGrid>().StartCameraMovement();
    }

    /// <summary>
    /// Destroys the bug on the grid and updates the proper grid for it's bugcount.
    /// If the end of the grid is reached, end the game.
    /// </summary>
    /// <param name="bug">The bug passed in from the player's collision script</param>
    public void DestroyBug(GameObject bug)
    {
        if (bug.name == "Spot_Crash")
        {
            //end game
            helper.UpdateScore(1000);
            Destroy(bug);
            helper.StopTimer();
            helper.EndGame();
        }
        else
        {
            selectedGrid.GetComponent<FuzzBuzzPhaseTwoWhiteboxGrid>().RemoveBugFromCount();
            Destroy(bug);
            helper.UpdateScore(100);
        }
    }

    #endregion
}
