using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

/* **************************************************************************
*
* This script is phase 1 of the minigame FUZZ BUZZ, which is an adaptation
* to teach players about fuzzing in cybersecurity about application fuzzing.
*
* ************************************************************************/

public class FuzzbuzzPhase1ApplicationCore : MonoBehaviour
{
    private MinigameManager helper;

    private Animator animator;

    // Popup list and current popup variable
    [SerializeField] GameObject popupButton, popupSlider, popupText;
    private List<GameObject> popupList;
    private GameObject currentPopup = null;

    // General Minigame Variables
    private int choosePopup;
    private float userValue = 0;
    private float userGoal = 0;
    private TextMeshProUGUI current;

    // Word spelling Minigame Variables
    [SerializeField] string wordFilePath = "wordlist";
    private List<string> words;
    private string currentletters;
    private string currentword;
    private GameObject priorButtonPress = null;

    #region Start/Middle/End General Methods
    /// <summary>
    /// Creates the list of potential popups as well as populates the word array.
    /// </summary>
    void Start()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();
        popupList = new List<GameObject>();
        words = new List<string>();

        popupList.Add(popupButton);
        popupList.Add(popupSlider);
        popupList.Add(popupText);

        ReadWords();
        helper.UpdateTimerText();
    }

    /// <summary>
    /// Update method will generate new popups each time the prior popup
    /// is completed AND the timer is running.
    /// </summary>
    void Update()
    {
        if (helper.GetPhase() == "application")
        {
            if (helper.GetTimer() && currentPopup == null)
            {
                GenerateNewPopUp();
            }
        }
    }

    /// <summary>
    /// Resets each minigame based on the current popup index.
    /// </summary>
    private void ResetGame()
    {
        switch (choosePopup)
        {
            // Button popup minigame:
            // - Add event listener to instance of popup on creation
            // - Set the number of clicks to 0
            // - Set the random desired value to a new Random number.

            case 0:
                currentPopup.GetComponentInChildren<Button>().onClick.AddListener(delegate { UpdateClicks(); });
                animator = currentPopup.GetComponent<Animator>();
                userValue = 0;
                userGoal = Random.Range(2, 7);
                animator.SetTrigger("appOpen");
                break;

            // Slider popup minigame:
            // - Add event listener to instance of popup on creation
            // - Set the current variable (holds the text instance to change by user) to it's TextMeshProGUI gameobject
            // - Set the random desired value to a new Random number.
            // - Set the goal value text
            case 1:
                //currentPopup.GetComponentInChildren<Button>().OnPointerDown.AddListener(SetText);
                EventTrigger trigger = GameObject.Find("SliderKnob").GetComponent<EventTrigger>();
                MinigameManager.AddEventTriggerListener(trigger, EventTriggerType.PointerUp, SetText);
                current = GameObject.Find("CurrentSliderValue").GetComponent<TextMeshProUGUI>();

                userGoal = Random.Range(10, 90);
                GameObject.Find("GoalSliderValue").GetComponent<TextMeshProUGUI>().text = userGoal.ToString();
                break;

            // Spelling popup minigame:
            // - Add event listener to all four button instance of popup on creation
            // - Set the current word randomly from the list and uppercase it
            // - Reset the current letters if prior game is played
            // - Set current variable (holds the text instance to change by user) to it's TextMeshProGUI gameobject
            // - Generate a list of wordchars and convert from array -> list so that chars can be removed when random placing on buttons
            // - Place random letters at x positions on each button and remove from the temporary list to not have duplicates
            // - Set the color of the word to be gray to show no user input has been added and the text to be uppercase.
            case 2:


                foreach (Button buttonLetters in GameObject.Find("Letters").GetComponentsInChildren<Button>())
                {
                    buttonLetters.GetComponentInChildren<Button>().onClick.AddListener(SpellWord);
                }

                currentword = words[Random.Range(0, words.Count)].ToUpper();
                currentletters = "";
                current = GameObject.Find("CurrentWord").GetComponent<TextMeshProUGUI>();


                List<char> wordChars = new List<char>();
                wordChars.AddRange(currentword.ToCharArray());


                foreach (Transform buttons in GameObject.Find("Letters").transform)
                {
                    int pos = Random.Range(0, wordChars.Count);

                    foreach (Transform buttonLetters in buttons.transform)
                    {
                        buttonLetters.gameObject.GetComponent<TextMeshProUGUI>().text = wordChars[pos].ToString();
                    }
                        
                    wordChars.RemoveAt(pos);
                }

                current.text = currentword.ToUpper().ToString();
                current.color = Color.gray;

                break;
        }

    }

    private void SetText(BaseEventData obj)
    {
        int value = int.Parse(current.text);
        SetText(value);
    }
    #endregion

    #region Popup Management
    /// <summary>
    /// Generates a new popup based on the list count at a random location 
    /// on the screen with some padding.
    /// 
    /// This method also calls to reset the games after generating the new popup.
    /// </summary>
    private void GenerateNewPopUp()
    {
        choosePopup = Random.Range(0, popupList.Count);
        currentPopup = Instantiate(ReturnPopup(), new Vector3(Random.Range(600, Screen.width - 600), Random.Range(600, Screen.height - 600), 0f), Quaternion.identity, transform);
        ResetGame();
    }

    /// <summary>
    /// Returns popup from the list
    /// </summary>
    /// <param name="choosePopup"></param>
    /// <returns></returns>
    private GameObject ReturnPopup()
    {
        return popupList[choosePopup];
    }


    /// <summary>
    /// Destroys popup after completion and sets the current popup to be null
    /// so that Update() will generate a new popup.
    /// </summary>
    /// <param name="popup"></param>
    private void DestroyPopup()
    {
        DestroyImmediate(currentPopup);
        currentPopup = null;
    }

    #endregion

    #region Button Minigame
    /// <summary>
    /// Used for the button pressing minigame: each button click increase a value,
    /// checking against the needed value to complete the popup. 
    /// </summary>
    public void UpdateClicks()
    {
        animator.SetTrigger("close");
        userValue++;

        if (userValue >= userGoal)
        {
            DestroyPopup();
        }
    }
    #endregion

    #region Slider Minigame
    /// <summary>
    /// Used for the slider spam minigame: Sets the text of the slider 
    /// and checks the slider value to the desired value.
    /// </summary>
    /// <param name="value">The value of the slider at it's given position</param>
    /// 
    public void SetText(float value)
    {
        current.text = value.ToString();

        if (value <= userGoal + 5 && value >= userGoal - 5)
        {
            animator = null;
            DestroyPopup();
        }
    }
    #endregion

    #region Word Minigame

    /// <summary>
    /// Checks if the current word the user is spelling is at the 4 character limit
    /// and if so, compares to the word desired from the word list. If so, destroy the popup.
    /// If not, reset the display to show the word the player is trying to spell in a lighter color
    /// and reset the player's progress (as well as the prior button to prevent double tapping the
    /// same letter at the same button position).
    /// </summary>
    public void SpellWord()
    {

        if (currentletters.Length < 4 && priorButtonPress != UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject)
        {
            priorButtonPress = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject;
            currentletters += UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.GetComponentInChildren<TextMeshProUGUI>().text;
            current.color = Color.black;
            current.text = currentletters;

        }

        if (currentletters == currentword)
        {
            DestroyPopup();
        }
        else if (currentletters.Length >= 4)
        {
            currentletters = "";
            priorButtonPress = null;

            current.color = Color.gray;
            current.text = currentword;
        }


    }

    /// <summary>
    /// Reads all the words from the wordfile list
    /// </summary>
    private void ReadWords()
    {
        string AllWords = Resources.Load<TextAsset>(wordFilePath).text;

        string[] wordsSplit = AllWords.Split("\r\n");

        words = new List<string>(wordsSplit);
    }
    #endregion
}
