using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Yarn.Unity;

public class FireDefense_T_ScanGame : MonoBehaviour
{
    // Start is called before the first frame update
    private GameObject currentBot;
    private Animator currentBotAnimator;
    private GameObject priorBot;
    [SerializeField] List<GameObject> botChoices;
    [SerializeField] GameObject scanBar;
    private bool scanned = false;

    [SerializeField] Button scan;
    [SerializeField] Button approve;
    [SerializeField] Button deny;

    [SerializeField] Transform standPos;
    private FireDefenseT_CameraPan cameraScript;

    private float seconds = 1.5f;
    private float timer;
    private float percent;
    private bool startGame = false;

    // Variable storage for YarnSpinner and dialog running
    public InMemoryVariableStorage variableStorage;
    public DialogueRunner dialogueRunner;


    void Start()
    {
        cameraScript = FindObjectOfType<FireDefenseT_CameraPan>();
        ResetScans();
        scan.interactable = false;
        priorBot = null;

        dialogueRunner.StartDialogue("FireDefense_T_2");
    }

    // Update is called once per frame
    void Update()
    {
        if(startGame && currentBot == null)
        {
            ResetScans();
            SpawnBot();
        }
    }

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
                }
            }
        }

        currentBotAnimator = currentBot.transform.GetChild(0).GetComponent<Animator>();
    }

    [YarnCommand("StartGame")]
    public void StartGame()
    {
        Debug.Log("GameStart");
        scan.interactable = true;
        startGame = true;

        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemy"))
        {
            Destroy(enemy);
        }
    }

    [YarnCommand("DestroyAllBits")]
    public void DestroyAllBits()
    {
        foreach (GameObject enemy in GameObject.FindGameObjectsWithTag("Enemy"))
        {
            Debug.Log("found " + enemy.name + ", destroying...");
            Destroy(enemy);
        }
    }

    [YarnCommand("PassGo")]
    public void YouPassGo(string force = "")
    {
        StartCoroutine(BitGo(force));
    }

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
        Debug.Log("Bot Destroyed.");
        currentBot = null;
        SpawnBot(force);

        yield return null;
    }

    IEnumerator BitDead(string force = "")
    {
        yield return null;
    }

    public void AcceptButton()
    {
        string type = currentBot.name.Split("_")[1];
        type = type.Substring(0, type.Length - 8).ToLower();

        Debug.Log(type);
        StartCoroutine(BitGo());
        ResetScans();
    }

    private void ResetScans()
    {
        scanned = false;
        approve.interactable = false;
        deny.interactable = false;
        scan.interactable = true;
    }

    public void StartScan()
    {
        StartCoroutine(Scan());
    }

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
        scanned = true;
        approve.interactable = true;
        deny.interactable = true;
        timer = 0;

        yield return null;
    }
}
