using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* **************************************************************************
* 
* 2023 Alexa Amoriello, IGME PROJECT H4CKB0X
*
* This script is phase 2 of the minigame FUZZ BUZZ, which is an adaptation
* to teach players about blackbox fuzz testing.
*
* ************************************************************************/

public class FuzzBuzzPhaseTwoBlackboxCore : MonoBehaviour
{
    // MinigameManager and all bug information globally
    private MinigameManager helper;
    private List<GameObject> bugPositions;
    public GameObject allBugs;

    // Bug and Crash gameobjects to populate map with (prefab)
    public GameObject bug, crash;

    // Player and current bug information
    [SerializeField] GameObject player;
    private GameObject currentBugSearch;
    private float startDistance;

    // Detection objects and animators
    private GameObject detectionRingLarge;
    private Animator detectionRingLargeAnimator;
    private GameObject detectionRingSmall;
    private Animator detectionRingSmallAnimator;
    private GameObject detectionArrow;

    #region Start/Middle/End General Methods

    // Start is called before the first frame update
    void Start()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();

        detectionRingLarge = GameObject.Find("Detection Ring Large");
        detectionRingLargeAnimator = detectionRingLarge.GetComponent<Animator>();

        detectionRingSmall = GameObject.Find("Detection Ring Small");
        detectionRingSmallAnimator = detectionRingLarge.GetComponent<Animator>();

        detectionArrow = GameObject.Find("Detection Arrow");
        detectionArrow.SetActive(false);

        helper.UpdateTimerText();
        helper.UpdateScoreText();
        helper.EnablePlayerCollisions();

        bugPositions = new List<GameObject>();

        SetBugPositions();

        currentBugSearch = FindClosestBug();
    }

    // Update is called once per frame
    void Update()
    {
        if(currentBugSearch != null)
        {
            float percentage = (GetDistanceToClosestBug() / startDistance) * 100f;
            RingDetection((1 - (percentage / 100f) + 0.3f));
            Debug.Log("Percent: " + (1 - (percentage / 100f) + 0.3f));
        }
    }

    #endregion

    #region Detection System

    /// <summary>
    /// Determines to show larger ring, smaller ring, and arrow
    /// based on the percentage distance to the bug from
    /// the player.
    /// </summary>
    /// <param name="dis">Distance % from the closest bug generatedfrom prior bug collection</param>
    public void RingDetection(float dis)
    {
        // Large ring is always on and setting it's speed to the current speed
        detectionRingLargeAnimator.speed = dis;

        // If the speed is less than 50% and the small
        // detection ring is active, disable it
        // Otherwise, if the speed is greater than 50% and
        // the small detection ring is disabled, enable it
        if (dis < 0.50 && detectionRingSmall.activeSelf)
        {
            detectionRingSmall.SetActive(false);

        } else if (dis > 0.50 && !detectionRingSmall.activeSelf)
        {
            detectionRingSmall.SetActive(true);
        } 
        
        // Detection arrow reguides if less than 40% speed
        // or it guides if greater than 50. Otherwise, disable 
        if ((dis < 0.3 || dis > 0.50) && !detectionArrow.activeSelf)
        {
            detectionArrow.SetActive(true);
        } else if (detectionArrow.activeSelf && !(dis < 0.3 || dis > 0.50))
        {
            detectionArrow.SetActive(false);
        }

        // If the smaller ring is active, constantly set the speed
        if(detectionRingSmall.activeSelf)
        {
            detectionRingSmallAnimator.speed = dis;
        }

        // If the arrow is active, constantly set direction and rotation
        if (detectionArrow.activeSelf)
        {
            Vector3 dir = currentBugSearch.transform.position - player.transform.position;
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            detectionArrow.transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
        }

        // If the speed is greater than 80%, tint the rings
        if (dis > 0.80)
        {
            detectionRingLarge.GetComponent<SpriteRenderer>().color = new Color(dis, 0, 0, detectionRingLarge.GetComponent<SpriteRenderer>().color.a);
            detectionRingSmall.GetComponent<SpriteRenderer>().color = new Color(dis, 0, 0, detectionRingSmall.GetComponent<SpriteRenderer>().color.a);
        }

    }

    #endregion

    #region Bug storing, creation, and deletion

    /// <summary>
    /// Randomly place x amount of bugs on the screen
    /// and add them to the bug count list.
    /// </summary>
    private void SetBugPositions()
    {
        int bugNum = Random.Range(2, 5);

        for (int i = 0; i < bugNum; i++)
        {
            float xPos = Random.Range(-20, 20);
            float yPos = Random.Range(-20, 20);
            int bugChoice = Random.Range(0, 2);

            GameObject bugSpawn = null;

            switch (bugChoice)
            {
                case 0:
                    bugSpawn = Instantiate(bug, new Vector3(xPos, yPos, 0f), Quaternion.identity, allBugs.transform);
                    Debug.Log("Added bug");
                    break;
                case 1:
                    bugSpawn = Instantiate(crash, new Vector3(xPos, yPos, 0f), Quaternion.identity, allBugs.transform);
                    Debug.Log("Added crash");
                    break;
            }

            bugPositions.Add(bugSpawn);
        }
    }

    /// <summary>
    /// Returns the closest bug from the player's current position.
    /// </summary>
    /// <returns></returns>
    private GameObject FindClosestBug()
    {
        startDistance = 0;

        float closestBug = int.MaxValue;
        GameObject bugTemp = null;

        foreach (GameObject bug in bugPositions)
        {
            Debug.Log("Checking distance to: " + bug.name + " to " + player.name);
            float distance = Vector3.Distance(bug.transform.position, player.transform.position);
            if (distance < closestBug)
            {
                closestBug = distance;
                bugTemp = bug;
            }
        }

        if(bugTemp != null)
        {
            startDistance = Vector3.Distance(player.transform.position, bugTemp.transform.position);
        }

        return bugTemp;
    }

    /// <summary>
    /// Returns the distance at the current player position (not from starting position)
    /// </summary>
    /// <returns></returns>
    private float GetDistanceToClosestBug()
    {
        return Vector3.Distance(currentBugSearch.transform.position, player.transform.position);
    }

    /// <summary>
    /// Destroys the bug in space and updates score
    /// </summary>
    /// <param name="bug">The bug passed in from the player's collision script</param>
    public void DestroyBug(GameObject bug)
    {
        // If the bug is a crash, give more poitns

        if (bug.name == "Spot_Crash")
        {
            helper.UpdateScore(1000);

        }
        else
        {
            helper.UpdateScore(100);
        }

        // Remove the bug from the list, then destroy it.
        // Then, search for the next closest bug while resetting the rings

        bugPositions.Remove(bug);
        Destroy(bug);
        currentBugSearch = FindClosestBug();

        detectionRingLarge.GetComponent<SpriteRenderer>().color = Color.white;
        detectionRingSmall.GetComponent<SpriteRenderer>().color = Color.white;

        // If there are no bugs on the screen, end the game.

        if (currentBugSearch == null)
        {
            helper.StopTimer();
            helper.EndGame();
        }
    }

    #endregion
}
