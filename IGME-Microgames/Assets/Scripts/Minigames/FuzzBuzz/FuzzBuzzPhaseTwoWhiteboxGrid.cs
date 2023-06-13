using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

public class FuzzBuzzPhaseTwoWhiteboxGrid: MonoBehaviour
{

    // Minigame Helper
    private MinigameManager helper;

    [SerializeField] List<GameObject> spots;

    private bool camerasFinishedMoving = false;
    private float speed = 2f;

    private Transform cameraOrigin;
    [SerializeField] public Transform startPosition;
    [SerializeField] public Transform endPosition;
    [SerializeField] public GameObject player;

    [SerializeField] public Sprite bug;
    [SerializeField] public Sprite crash;

    private int bugsLeft;
    private int bugsTotal;

    // Start is called before the first frame update
    void Start()
    {
        spots = GenerateBugSpots();
        cameraOrigin = Camera.main.transform;

        helper = GameObject.FindObjectOfType<MinigameManager>();

        Debug.Log("GRID NAME: " + gameObject.name);
        player = GameObject.FindGameObjectWithTag("Player");
        player.transform.position = new Vector3(startPosition.position.x, startPosition.position.y, startPosition.position.z);
    }

    // Update is called once per frame
    void Update()
    {
        if(camerasFinishedMoving)
        {
            FollowPlayer();
        }
    }

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

        foreach(GameObject spot in spots)
        {
            spot.SetActive(false);
        }

        return spawnSpots;

    }

    public void RemoveBugFromCount()
    {
        if(bugsLeft != 0)
        {
            bugsLeft--;
        }

    }

    /// <summary>
    /// Callback to start Coroutine
    /// </summary>
    public void StartCameraMovement()
    {
        StartCoroutine("ShowBugsAtSpots");
    }
    IEnumerator LerpCamera(Vector3 pos, string name)
    {
        while (Vector3.Distance(Camera.main.transform.position, pos) > 0.05f)
        {
            Debug.Log("Going to " + name + " current coords: " + Camera.main.transform.position);
            Camera.main.transform.position = Vector3.Lerp(Camera.main.transform.position, pos, speed * Time.deltaTime);
            yield return null;
        }
        yield return null;
    }

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

    void FollowPlayer()
    {
        Camera.main.transform.position = player.transform.position + new Vector3(0, 0, -10);
    }
}
