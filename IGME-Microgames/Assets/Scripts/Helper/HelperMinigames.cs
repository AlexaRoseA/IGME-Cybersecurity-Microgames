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

    [SerializeField] MinigameUIManager minigameMan;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (timerIsRunning && minigameMan != null)
        {
            if (timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                DisplayTime(timeRemaining, minigameMan.GetTimeText());
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
        timeRemaining = time;
        timerIsRunning = true;
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
}
