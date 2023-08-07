using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Yarn.Unity;

public class FireDefense_T_ScanGame : LevelManager
{
    // Bot storage information - current and prior
    private GameObject currentBot;
    private Animator currentBotAnimator;
    private GameObject priorBot;

    // All potential bot choices + scanbar
    [SerializeField] List<GameObject> botChoices;
    [SerializeField] GameObject scanBar;

    // Input fields and spawn pos
    [SerializeField] Button scan;
    [SerializeField] Button approve;
    [SerializeField] Button deny;
    [SerializeField] Transform standPos;
    [SerializeField] GameObject orbs;

    // Timer and game start variables
    private float seconds = 1.5f;
    private float timer;
    private float percent;
    private bool startGame = false;
    private int count = 0;

    private int score = 0;

    // Variable storage for YarnSpinner and dialog running
    public InMemoryVariableStorage variableStorage;
    public DialogueRunner dialogueRunner;

    /// <summary>
    /// Grabs all necessary variabes
    /// </summary>
    void Start()
    {
        base.Start();
        ResetScans();
        scan.interactable = false;
        priorBot = null;

        dialogueRunner.StartDialogue("FireDefense_T_2");
    }

    /// <summary>
    /// Spawns and resets scans based on current bot being null
    /// </summary>
    void Update()
    {
        if(startGame && currentBot == null)
        {
            ResetScans();
            SpawnBot();
        }
    }

    /// <summary>
    /// Spawns a bot based on either random choice or force choice
    /// </summary>
    /// <param name="forceChoice">Force the next bot to be a set type</param>
    [YarnCommand("SpawnBot")]
    public void SpawnBot(string forceChoice = "")
    {
        if(currentBot != null)
        {
            priorBot = currentBot;
        }

        if(forceChoice == "")
        {
            int ranNum = Random.Range(0, botChoices.Count);
            currentBot = Instantiate(botChoices[ranNum], standPos.position, Quaternion.identity);
        } else
        {
            foreach(GameObject botChoice in botChoices)
            {
                if(botChoice.name == forceChoice)
                {
                    currentBot = Instantiate(botChoice, standPos.position, Quaternion.identity);
                    currentBotAnimator = currentBot.transform.GetChild(0).GetComponent<Animator>();
                    break;
                }
            }
        }

        currentBotAnimator = currentBot.transform.GetChild(0).GetComponent<Animator>();
    }

    /// <summary>
    /// Starts the game loop
    /// </summary>
    [YarnCommand("StartGame")]
    public void StartGame()
    {
        Debug.Log("GameStart");
        scan.interactable = true;
        startGame = true;

        DestroyAllBits();
    }

    /// <summary>
    /// Destroys all bits on screen
    /// </summary>
    [YarnCommand("DestroyAllBits")]
    public void DestroyAllBits()
    {
        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemy"))
        {
            Destroy(enemy);
        }
    }

    /// <summary>
    /// Has the bit progress, makes them walk off screen
    /// </summary>
    /// <param name="force">force spawn bot as next</param>
    /// <returns></returns>
    IEnumerator BitGo(string force = "")
    {
        float timer = 0;
        float seconds = 4f;
        priorBot = currentBot;

        while (timer <= seconds)
        {
            timer += Time.deltaTime;
            percent = timer / seconds;
            priorBot.transform.position = new Vector3(priorBot.transform.position.x, priorBot.transform.position.y + 1f, priorBot.transform.position.z);
        }

        Destroy(priorBot);
        DestroyAllBits();
        Debug.Log("Bot Destroyed.");
        currentBot = null;
        SpawnBot(force);

        yield return null;
    }

    /// <summary>
    /// Runs animator, plays death animation
    /// </summary>
    /// <param name="force">force spawn bot as next</param>
    /// <returns></returns>
    IEnumerator BitDead(string force = "")
    {

        Destroy(priorBot);
        Debug.Log("Bot Destroyed.");
        currentBot = null;
        SpawnBot(force);

        yield return null;
    }

    /// <summary>
    /// Completes a set task based on good/bad.
    /// 
    /// Originally had a different coroutine for bad, currently on pause
    /// </summary>
    /// <param name="value"></param>
    public void CheckStatus(string value)
    {
        value = value.ToLower();
        string type = currentBot.name.Split("_")[1];
        type = type.Substring(0, type.Length - 8).ToLower();

        Debug.Log(type);

        switch(type)
        {
            case "good":
                if(value == type)
                {
                    //give positive stuff - good passed
                    StartCoroutine(BitGo());
                    FillOrb("yes");
                } else
                {
                    //give negative stuff - bad passed
                    FillOrb("no");
                    StartCoroutine(BitGo());
                }
                break;
            case "bad":
                if (value == type)
                {
                    //give positive stuff - bad dead
                    FillOrb("yes");
                    StartCoroutine(BitGo());
                }
                else
                {
                    //give negative stuff - good dead
                    FillOrb("no");
                    StartCoroutine(BitGo());
                }
                break;
        }

        ResetScans();
    }

    /// <summary>
    /// Resets the screen for a new scanner
    /// </summary>
    private void ResetScans()
    {
        if(count < 10)
        {
            approve.interactable = false;
            deny.interactable = false;
            scan.interactable = true;
        }
    }

    /// <summary>
    /// Starts the scan
    /// </summary>
    public void StartScan()
    {
        StartCoroutine(Scan());
    }

    /// <summary>
    /// Scan animation
    /// </summary>
    /// <returns></returns>
    IEnumerator Scan()
    {
        scan.interactable = false;
        scanBar.SetActive(true);
        Vector3 startPos = scanBar.transform.position;
        Debug.Log("position: " + scanBar.transform.position);
        Vector3 endPos = new Vector3(startPos.x, -2, startPos.z);

        timer = 0;

        // top to bottom
        while (timer <= seconds)
        {
            Debug.Log("timer: " + timer + "seconds: " + seconds);
            timer += Time.deltaTime / seconds;
            scanBar.transform.position = Vector3.MoveTowards(scanBar.transform.position, endPos, 0.01f);
            if (scanBar.transform.position == endPos)
            {
                timer = seconds + 1;
            }
            yield return null;
        }

        timer = 0;

        //bottom to top
        while (timer <= seconds)
        {
            timer += Time.deltaTime / seconds;
            scanBar.transform.position = Vector3.MoveTowards(scanBar.transform.position, startPos, 0.01f);
            if (scanBar.transform.position == startPos)
            {
                timer = seconds + 1;
            }
            yield return null;
        }

        scanBar.SetActive(false);
        approve.interactable = true;
        deny.interactable = true;
        timer = 0;

        yield return null;
    }

    /// <summary>
    /// Fills the orb on the top of the screen based on if the selection is correct
    /// Also checks for end game state after filling orb
    /// </summary>
    /// <param name="correct"></param>
    private void FillOrb(string correct)
    {
        correct = correct.ToLower();
        switch(correct)
        {
            case "yes":
                orbs.transform.GetChild(count).GetComponent<Image>().color = Color.green;
                count++;
                score += 100;
                break;
            case "no":
                orbs.transform.GetChild(count).GetComponent<Image>().color = Color.black;
                count++;
                break;
        }

        if(count >= 10)
        {
            //endgame
            approve.interactable = false;
            deny.interactable = false;
            scan.interactable = false;
            dialogueRunner.StartDialogue("FireDefense_T_3");
        }
    }

    [YarnCommand("End")]
    public void EndTutorial()
    {
        gameManager.EndTutorial(score);
    }
}
