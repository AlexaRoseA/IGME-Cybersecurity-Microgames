using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class EITMGameManager : MonoBehaviour
{
    public List<GameObject> lines;
    public GameObject bob;
    public GameObject alice;
    public GameObject signal;
    public int startChannel = 0;
    public int endChannel = 0;

    public GameObject[] enemies;

    public GameObject[] levels;
    public Sprite[] backgrounds;
    public GameObject backgroundObj;
    private GameObject currentLevel;
    private int levelOn = 0;

    public List<GameObject> connections;

    public GameObject gameOverMenu;

    public int score = 0;
    public GameObject scoreText;

    public float baseMoveSpeedModifier = 1f;
    public float maxSpeedModifier = 2.75f;
    private float moveSpeedModifier;
    public float speedIncreaseIncrement = 0.05f;

    public float initialDelaySeconds = 1f;
    public bool ableToBeTapped = false;
    public float birdDisappearDelay = 0.15f;
    public float birdSwapPositionDelay = 0.5f;

    public List<Animator> animators;

    private int oldBobPosition = -1;

    public float signalDelaySeconds = 3;
    public float signalDelayDecrement = 0.2f;
    public float minimumSignalDelay = 1;
    private bool betweenRoundDelayCanTap = false;

    // Start is called before the first frame update
    void Start()
    {
        FreshRestart();
    }
    private void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began && ableToBeTapped)
        {
            ableToBeTapped = false;
            signal.GetComponent<signalMovement>().StartMovement();
        } else if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began && betweenRoundDelayCanTap)
        {
            StopCoroutine(SignalDelay());
            signal.GetComponent<signalMovement>().StartMovement();
        }
    }
    public void UpdateScore(int number)
    {
        scoreText.GetComponent<TextMeshProUGUI>().text = "Score: " + number.ToString();
    }
    public void updateBackground(int index)
    {
        backgroundObj.GetComponent<SpriteRenderer>().sprite = backgrounds[index];
    }
    public void FreshRestart()
    {
        if(currentLevel != null)
        {
            Destroy(currentLevel);
        }
        levelOn = 0;
        currentLevel = Instantiate(levels[levelOn], transform.position, transform.rotation);
        updateBackground(levelOn);
        ableToBeTapped = false;
        score = 0;
        UpdateScore(score);
        moveSpeedModifier = baseMoveSpeedModifier;
        foreach(GameObject connection in connections)
        {
            Destroy(connection);
        }
        gameOverMenu.SetActive(false);
        NewRound();
        StartCoroutine(SendDelay());
    }
    public void ResetStage()
    {
        Line startLine = lines[startChannel].GetComponent<Line>();
        GameObject startPoint = startLine.bottom_point;
        bob.transform.position = startPoint.transform.position;
        signal.transform.position = startPoint.transform.position;
        signal.GetComponent<signalMovement>().SetupMovement(startLine.top_point.transform.position, moveSpeedModifier);

        Line endLine = lines[endChannel].GetComponent<Line>();
        GameObject endPoint = endLine.top_point;
        alice.transform.position = endPoint.transform.position;

        List<GameObject> enemyPositions = new List<GameObject>();
        for (int i = 0; i < 4; i++)
        {
            if(i != endChannel)
            {
                enemyPositions.Add(lines[i]);
            }
        }

        for (int i = 0; i < 3; i++)
        {
            enemies[i].transform.position = enemyPositions[i].GetComponent<Line>().top_point.transform.position;
        }
    }
    public void SuccessfulRound()
    {
        signal.GetComponent<signalMovement>().StopMovement();
        score++;
        UpdateScore(score);
        if (score % 5 == 0)
        {
            SuccessfulRoundChunk();
        } else
        {
            StartCoroutine(SignalDelay());
        } 
    }
    public void SuccessfulRoundChunk()
    {
        signal.GetComponent<signalMovement>().StopMovement();
        Destroy(currentLevel);

        moveSpeedModifier = baseMoveSpeedModifier + speedIncreaseIncrement * score;
        if (moveSpeedModifier > maxSpeedModifier)
        {
            moveSpeedModifier = maxSpeedModifier;
        }

        foreach (GameObject connection in connections)
        {
            Destroy(connection);
        }
        foreach(Animator animator in animators)
        {
            animator.SetTrigger("ClusterEnd");
        }

        signalDelaySeconds -= signalDelayDecrement;
        if (signalDelaySeconds < minimumSignalDelay)
        {
            signalDelaySeconds = minimumSignalDelay;
        }

        ableToBeTapped = false;
        StartCoroutine(SendDelay());
        StartCoroutine(WaitBeforeFlyDown());
    }
    public void NewRound()
    {
        startChannel = Random.Range(0, 4);
        while(startChannel == oldBobPosition)
        {
            startChannel = Random.Range(0, 4);
        }
        oldBobPosition = startChannel;
        endChannel = Random.Range(0, 4);
        ResetStage();
    }
    public void GameOver()
    {
        gameOverMenu.SetActive(true);
    }
    public void addConnection(GameObject connection)
    {
        connections.Add(connection);
    }
    IEnumerator SendDelay()
    {
        yield return new WaitForSeconds(1f);
        ableToBeTapped = true;
    }
    IEnumerator SignalDelay()
    {
        foreach (Animator animator in animators)
        {
            animator.SetTrigger("Swap");
        }
        yield return new WaitForSeconds(birdDisappearDelay);
        NewRound();
        yield return new WaitForSeconds(birdSwapPositionDelay);
        betweenRoundDelayCanTap = true;
        yield return new WaitForSeconds(signalDelaySeconds);
        signal.GetComponent<signalMovement>().StartMovement();
        betweenRoundDelayCanTap = false;
    }
    IEnumerator WaitBeforeFlyDown()
    {
        yield return new WaitForSeconds(1f);
        NewRound();
        foreach (Animator animator in animators)
        {
            animator.SetTrigger("BeginFlydown");
        }
        levelOn++;
        if(levelOn >= levels.Length)
        {
            levelOn = 0;
        }
        currentLevel = Instantiate(levels[levelOn], transform.position, transform.rotation);
        updateBackground(levelOn);
    }
}
