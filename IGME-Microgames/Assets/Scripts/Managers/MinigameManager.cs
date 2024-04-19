using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Yarn.Unity;
using UnityEngine.EventSystems;
using System.Linq;

public class MinigameManager : LevelManager
{
    // Time text
    private float timeRemaining = 10;
    private bool timerIsRunning = false;
    private TextMeshProUGUI timeText;

    // Keep track of the current phase name
    public string currentPhase;

    // Keep track of the current phase index and game title
    private int phaseNum = 1;
    private string priorPhase;
    [SerializeField] string gameTitle;

    // Variable storage for YarnSpinner and dialog running
    public InMemoryVariableStorage variableStorage;
    public DialogueRunner dialogueRunner;

    // All the potential phase instances
    public List<GameObject> phases = new List<GameObject>();
    private GameObject chosen;

    // Score Variables
    private int score;
    private TextMeshProUGUI scoreText;
    public int scoreAnimationThreshold = 100; //how much does the score have to change by to play the animation?

    private GameObject subphaseContainer;
    [SerializeField]
    private List<GameObject> subphases;
    private GameObject currentSubPhase = null;

    #region Start/Middle/End General Methods

    /// <summary>
    /// Sets the variables at start in Yarnspinner and default start phase
    /// </summary>
    protected override void Start()
    {
        base.Start();
        variableStorage = FindObjectOfType<InMemoryVariableStorage>();
        variableStorage.SetValue("$currentPhase", "none");
        variableStorage.TryGetValue("$currentPhase", out currentPhase);

        variableStorage.SetValue("$timeRemaining", 0);
        variableStorage.TryGetValue("$timeRemaining", out timeRemaining);

        ResetScore();

        currentPhase = "none";

        SetPhase(false);

        subphaseContainer = GameObject.Find("Subphases");
        if(subphaseContainer != null)
        {
            subphases = new List<GameObject>();
            foreach (Transform child in subphaseContainer.transform)
            {
                subphases.Add(child.gameObject);
                subphases[subphases.Count - 1].gameObject.SetActive(false);
            }
        }
    }

    /// <summary>
    /// Displays the time every update and changes phase if the
    /// timer runs out to the next phase.
    /// </summary>
    void Update()
    {
        if (timeText != null)
        {
            //UpdateScoreUI();
        }

        if (timerIsRunning)
        {

            if (timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                DisplayTime(timeRemaining, GetTimeText());
            }
            else
            {
                Debug.Log("Time has run out!");
                timeRemaining = 0;
                timerIsRunning = false;

                
                SetPhase();
            }
        }
    }

    /// <summary>
    /// Sets all canvases loaded to have the main camera.
    /// </summary>
    public void SetCamera()
    {
        foreach (Canvas canvasElement in GameObject.FindObjectsOfType<Canvas>())
        {

            canvasElement.worldCamera = Camera.main;
        }
    }

    /// <summary>
    /// Returns the chosen minigame gameobject.
    /// </summary>
    public GameObject GetChosen()
    {
        return chosen;
    }

    /// <summary>
    /// Base end the game method
    /// </summary>
    [YarnCommand("EndGame")]
    public void EndGame()
    {
        // end game
        Debug.Log("Game Ended!");

        gameManager.EndMinigame(score);
    }

    /// <summary>
    /// End Game method for tutorial
    /// </summary>
    [YarnCommand("EndTutorial")]
    public void EndTutorial()
    {
        // end game
        Debug.Log("Tutorial Ended!");

        gameManager.EndTutorial(score);
    }

    public static void AddEventTriggerListener(EventTrigger trigger, EventTriggerType eventType, System.Action<BaseEventData> callback)
    {
        EventTrigger.Entry entry = new EventTrigger.Entry();
        entry.eventID = eventType;
        entry.callback = new EventTrigger.TriggerEvent();
        entry.callback.AddListener(new UnityEngine.Events.UnityAction<BaseEventData>(callback));
        trigger.triggers.Add(entry);
    }

    #endregion

    #region Timer Methods

    /// <summary>
    /// Start the timer through Unity code
    /// </summary>
    /// <param name="time">time </param>
    public void StartTimer(float time)
    {
        variableStorage.TryGetValue("$currentPhase", out currentPhase);

        if (timeRemaining == 0)
        {
            timeRemaining = time;
        }

        timerIsRunning = true;
    }

    internal void AddEventTriggerListener(EventTrigger trigger, EventTriggerType pointerDown, System.Action<PointerEventData> setText)
    {
        throw new System.NotImplementedException();
    }

    /// <summary>
    /// Enables the player collision script
    /// </summary>
    public void EnablePlayerCollisions()
    {
        Collisions playerCollisions = FindObjectOfType<Collisions>();
        if (playerCollisions != null)
        {
            playerCollisions.SetHelper();
        }
    }

    /// <summary>
    /// Start the timer from YarnSpinner (button or via code)
    /// </summary>
    /// <param name="time">time </param>
    [YarnCommand("StartTimer")]
    public void StartTimer()
    {
        variableStorage.TryGetValue("$currentPhase", out currentPhase);
        variableStorage.TryGetValue("$timeRemaining", out timeRemaining);

        timerIsRunning = true;
    }

    /// <summary>
    /// Stop timer forcefully
    /// </summary>
    public void StopTimer()
    {
        timerIsRunning = false;
    }

    /// <summary>
    /// Display the time in Minutes and Seconds on the UI
    /// </summary>
    /// <param name="displayTime">The time to display</param>
    /// <param name="timerText"> the UI element to cast the time onto</param>
    private void DisplayTime(float displayTime, TextMeshProUGUI timerText)
    {
        displayTime += 1;
        int minutes = Mathf.FloorToInt(displayTime / 60);
        int seconds = Mathf.FloorToInt(displayTime % 60);

        //string[] displayed = timerText.text.Split(":");

        //if (minutes == int.Parse(displayed[0]) && seconds == int.Parse(displayed[1])) return;

        timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    #endregion

    #region Phase Switching and Setting

    /// <summary>
    /// Determines the phase options
    /// </summary>
    private void ChoosePhaseOption()
    {
        // List to store the subphases
        List<GameObject> subphaseChoices = new List<GameObject>();

        // Loop through all of the phases
        // and grab the matching subphase numbered ones 
        foreach (GameObject choice in phases)
        {
            // Split the name of the phase by underscore
            string[] splitName = choice.name.Split('_');

            // If the middle (GAMENAME_PHASE#_PHASENAME) matches the desired phase,
            // Add to the subphases to choose from list
            if (splitName[1] == "Phase" + phaseNum)
            {

                subphaseChoices.Add(choice);
            }
        }

        // If the count generate is 0 (reasons):
        // - The game is over
        // - Prefab is not inside the minigame helper that links to said phase
        // - Prefab is not named correctly
        // Format: GAMENAME_PHASE#_PHASENAME

        if (subphaseChoices.Count == 0)
        {
            Debug.Log("If this is not the intended outcome, please check the helper prefab list fields and/or prefab names!");
            EndGame();
            chosen = null;
        }
        else
        {
            // Set the chosen gameobject to be a random subphase choice
            chosen = subphaseChoices[Random.Range(0, subphaseChoices.Count)];
            string[] chosenSplit = chosen.name.Split('_');

            // Set the current phase name to be the last string under split
            // Format: GAMENAME_PHASE#_PHASENAME
            priorPhase = currentPhase;
            currentPhase = chosenSplit[2].ToLower();
        }
    }

    private IEnumerator JumpToNodeCoroutine(string nodeTitle)
    {
        yield return new WaitForSeconds(0.01f);
        dialogueRunner.StartDialogue(nodeTitle);
    }

    /// <summary>
    /// Sets the phase
    /// </summary>
    /// <param name="increasePhaseNum">Optional parameter, set to true by default but can add false if start of the minigame!</param>
    public void SetPhase(bool increasePhaseNum = true)
    {
        DestroyImmediate(chosen);

        if (increasePhaseNum)
        {
            phaseNum++;
        }

        ChoosePhaseOption();

        if (chosen != null)
        {
            variableStorage.SetValue("$currentPhase", currentPhase);
            //dialogueRunner.StartDialogue(gameTitle + "_Phase" + phaseNum);
            StartCoroutine(JumpToNodeCoroutine(gameTitle + "_Phase" + phaseNum));
            chosen = Instantiate(chosen);
        }
        else
        {
            variableStorage.SetValue("$currentPhase", "none");
            currentPhase = "none";
        }

    }

    /// <summary>
    /// Get the name of the current phase
    /// </summary>
    /// <returns></returns>
    public string GetPhase()
    {
        return currentPhase;
    }

    /// <summary>
    /// Forces the phase name
    /// </summary>
    /// <returns></returns>
    [YarnCommand("ForcePhase")]
    public void ForcePhase(string name)
    {
        currentPhase = name;
        variableStorage.SetValue("$currentPhase", name);
    }

    public string GetPriorPhase()
    {
        return priorPhase;
    }

    #endregion

    #region Subphases

    /// <summary>
    /// Sets the subphase based on index or name
    /// Disables the previous subphase and sets the current subphase to new one
    /// </summary>
    /// <param name="index">Index of the phase. If using name, put any number here.</param>
    /// <param name="name">Name of phase, does not matter casing as long as everything else is same.</param>
    public void SetSubphase(int index, string name = "n/a")
    {
        GameObject sb = GetSubphase(index, name);

        if(sb != null)
        {
            if(currentSubPhase != null)
            {
                currentSubPhase.SetActive(false);
            }

            currentSubPhase = sb;
            currentSubPhase.SetActive(true);
        }
    }

    /// <summary>
    /// Looks for a subphase either by index or optionally by phase name.
    /// </summary>
    /// <param name="index">Index of the phase. If using name, put any number here.</param>
    /// <param name="name">Name of phase, does not matter casing as long as everything else is same.</param>
    /// <returns></returns>
    private GameObject GetSubphase(int index, string name = "n/a")
    {
        if (name != "n/a")
        {
            foreach(GameObject obj in subphases)
            {
                if(obj.name.ToLower() == name.ToLower())
                {
                    return obj;
                }
            }
        } 

        return subphases.ElementAtOrDefault(index);
    }

    #endregion

    #region Timer

    /// <summary>
    /// Get the time remaining (not converted)
    /// </summary>
    /// <returns></returns>
    public float GetTimeRemaining()
    {
        return timeRemaining;
    }

    /// <summary>
    /// Returns if the timer is running or not
    /// </summary>
    /// <returns></returns>
    public bool GetTimer()
    {
        return timerIsRunning;
    }

    /// <summary>
    /// Update the timer text UI
    /// </summary>
    public void UpdateTimerText()
    {
        timeText = GameObject.FindGameObjectWithTag("Timer").GetComponent<TextMeshProUGUI>();
        Debug.Log("TIMER: " + timeText);
    }

    /// <summary>
    /// Returns the passed in timer text UI element
    /// </summary>
    /// <returns></returns>
    public TextMeshProUGUI GetTimeText()
    {
        return timeText;
    }
    #endregion

    #region Score Updating
    /// <summary>
    /// Update score based on an amount added to the current score
    /// </summary>
    /// <param name="amount">Amount to add to score</param>
    public void UpdateScore(int amount)
    {
        SetScore(score + amount);
    }

    /// <summary>
    /// Get the current score
    /// </summary>
    /// <returns></returns>
    public int GetScore()
    {
        return score;
    }

    /// <summary>
    /// Set the score
    /// </summary>
    /// <param name="total"></param>
    public void SetScore(int total)
    {
        if (Mathf.Abs(score - total) < scoreAnimationThreshold)
        {
            score = total;
            UpdateScoreUI();
            return;
        }

        bool increase = total > score;
        score = total;
        UpdateScoreUI(increase);
    }

    /// <summary>
    /// Reset the score to 0
    /// </summary>
    public void ResetScore()
    {
        SetScore(0);
    }

    /// <summary>
    /// Update the UI score text
    /// Plays the score change animation
    /// </summary>
    private void UpdateScoreUI(bool increase)
    {
        if (scoreText != null)
        {
            scoreText.text = score.ToString();
            Animator controller = scoreText.gameObject.GetComponent<Animator>();
            if (controller != null)
            {
                controller.SetTrigger(increase ? "ChangeNumberGood" : "ChangeNumberBad");
            }
        }
    }

    /// <summary>
    /// Update the UI score text
    /// </summary>
    private void UpdateScoreUI()
    {
        if (scoreText != null)
        {
            scoreText.text = score.ToString();
        }
    }

    /// <summary>
    /// Update the score text
    /// </summary>
    public void UpdateScoreText()
    {
        scoreText = GameObject.FindGameObjectWithTag("Score").GetComponent<TextMeshProUGUI>();
    }
    #endregion
}
