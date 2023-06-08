using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Yarn.Unity;

public class HelperMinigames : MonoBehaviour
{
    // Start is called before the first frame update
    private float timeRemaining = 10;
    private bool timerIsRunning = false;
    [SerializeField] TextMeshProUGUI timeText;

    private string currentPhase;
    private InMemoryVariableStorage variableStorage;

    void Start()
    {
        variableStorage = FindObjectOfType<InMemoryVariableStorage>();
        variableStorage.SetValue("$currentPhase", "none");
        variableStorage.TryGetValue("$currentPhase", out currentPhase);
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(currentPhase);

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
            }
        }
    }

    /// <summary>
    /// Start the timer
    /// </summary>
    /// <param name="time">time </param>
    [YarnCommand("StartTimer")]
    public void StartTimer(float time)
    {
        variableStorage.TryGetValue("$currentPhase", out currentPhase);
        if (timeRemaining == 0)
        {
            timeRemaining = time;
        }
        
        timerIsRunning = true;
    }

    public void StopTimer()
    {
        timerIsRunning = false;
    }

    private void DisplayTime(float displayTime, TextMeshProUGUI timerText)
    {
        displayTime += 1;
        float minutes = Mathf.FloorToInt(displayTime / 60);
        float seconds = Mathf.FloorToInt(displayTime % 60);
        timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds); 
    }

    public bool GetTimer()
    {
        return timerIsRunning;
    }

    public TextMeshProUGUI GetTimeText()
    {
        return timeText;
    }

    public void SetPhase(string phaseName)
    {
        currentPhase = phaseName;
        variableStorage.SetValue("$currentPhase", currentPhase);
    }

    public string GetPhase()
    {
        return currentPhase;
    }

    public void GenerateNextPhase(List<string> phaseNames)
    {
        int chooseNextPhase = Random.Range(0, phaseNames.Count);
        SetPhase(phaseNames[chooseNextPhase]);
    }

    public float GetTimeRemaining()
    {
        return timeRemaining;
    }
}
