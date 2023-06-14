using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* **************************************************************************
* 
* 2023 Alexa Amoriello, IGME PROJECT H4CKB0X
*
* This script is apart of phase 2 of the minigame FUZZ BUZZ, which is an adaptation
* to teach the concept of whitebox fuzz testing.
*
* ************************************************************************/

public class FuzzBuzzPhaseTwoWhiteboxGrid : MonoBehaviour
{
    // Minigame Helper
    private MinigameManager helper;

    // Potential bug spots
    [SerializeField] List<GameObject> spots;

    // Camera variables
    private bool camerasFinishedMoving = false;
    private float speed = 2f;

    // Start and end position as well as the player
    [SerializeField] public Transform startPosition;
    [SerializeField] public Transform endPosition;
    [SerializeField] public GameObject player;


    // Sprites to use for bug or crash
    [SerializeField] public Sprite bug;
    [SerializeField] public Sprite crash;

    // Bug UI information
    private int bugsLeft;
    private int bugsTotal;

    #region Start/Middle/End General Methods and Helpers

    /// <summary>
    /// Generate spots, grab the helper, and set the player's position to the start 
    /// Transform of the chosen grid.
    /// </summary>
    void Start()
    {
        spots = GenerateBugSpots();

        helper = GameObject.FindObjectOfType<MinigameManager>();

        Debug.Log("GRID NAME: " + gameObject.name);
        player = GameObject.FindGameObjectWithTag("Player");

        Vector3 pos = new Vector3(startPosition.position.x, startPosition.position.y, startPosition.position.z);
        player.transform.position = pos;
    }

    /// <summary>
    /// Follow the player if the cameras are not animated
    /// </summary>
    void Update()
    {
        if (camerasFinishedMoving)
        {
            FollowPlayer();
        }
    }

    #endregion

    #region Bug Tracking

    /// <summary>
    /// Picks from the spots possible which bugs to spawn 
    /// and disables the other bugs.
    /// </summary>
    /// <returns></returns>
    List<GameObject> GenerateBugSpots()
    {
        bugsTotal = Random.Range(1, 4);
        bugsLeft = bugsTotal;

        List<GameObject> spawnSpots = new List<GameObject>();

        for (int i = 0; i < bugsTotal; i++)
        {
            int spotIndex = Random.Range(0, spots.Count);
            spawnSpots.Add(spots[spotIndex]);

            spots.RemoveAt(spotIndex);
        }

        foreach (GameObject spot in spots)
        {
            spot.SetActive(false);
        }

        return spawnSpots;

    }

    /// <summary>
    /// Removes bugs from the bug count
    /// </summary>
    public void RemoveBugFromCount()
    {
        if (bugsLeft != 0)
        {
            bugsLeft--;
        }

    }

    #endregion

    #region Camera Methods

    /// <summary>
    /// Callback to start coroutine on this grid
    /// </summary>
    public void StartCameraMovement()
    {
        StartCoroutine("ShowBugsAtSpots");
    }

    /// <summary>
    /// Lerp between the current camera and a position
    /// </summary>
    /// <param name="pos">Vector3 position</param>
    /// <param name="name">Optional parameter to print out a name</param>
    /// <returns></returns>
    IEnumerator LerpCamera(Vector3 pos, string name = "")
    {
        while (Vector3.Distance(Camera.main.transform.position, pos) > 0.05f)
        {
            if (name != "")
            {
                Debug.Log("Going to " + name + " current coords: " + Camera.main.transform.position);
            }

            Camera.main.transform.position = Vector3.Lerp(Camera.main.transform.position, pos, speed * Time.deltaTime);
            yield return null;
        }
        yield return null;
    }

    /// <summary>
    /// Camera movement that showcases the start position, the current bugs
    /// on the grid, the ending position and then loops back to the player's position
    /// before starting the timer.
    /// </summary>
    /// <returns></returns>
    IEnumerator ShowBugsAtSpots()
    {
        // Show Start Position
        Vector3 pos = new Vector3(startPosition.position.x, startPosition.position.y, -10);
        yield return StartCoroutine(LerpCamera(pos, "starting"));

        yield return new WaitForSeconds(0.2f);

        // Show Each Spot
        foreach (GameObject spot in spots)
        {
            pos = new Vector3(spot.transform.position.x, spot.transform.position.y, -10);

            yield return StartCoroutine(LerpCamera(pos, spot.name));

            yield return new WaitForSeconds(0.2f);
        }

        // Show End Position
        pos = new Vector3(endPosition.position.x, endPosition.position.y, -10);
        yield return StartCoroutine(LerpCamera(pos, "ending"));
        yield return new WaitForSeconds(0.2f);

        // Show Start Position
        Debug.Log("Starting camera movements");
        pos = new Vector3(startPosition.position.x, startPosition.position.y, -10);
        yield return StartCoroutine(LerpCamera(pos, "starting"));

        // Start Timer
        camerasFinishedMoving = true;

        helper.UpdateTimerText();
        helper.StartTimer(120f);

        Debug.Log("Ended camera movements");
        yield return null;
    }

    /// <summary>
    /// Camera to follow player
    /// </summary>
    void FollowPlayer()
    {
        Camera.main.transform.position = player.transform.position + new Vector3(0, 0, -10);
    }

    #endregion
}
