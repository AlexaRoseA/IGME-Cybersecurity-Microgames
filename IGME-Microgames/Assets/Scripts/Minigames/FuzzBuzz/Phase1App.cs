using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

/* **************************************************************************
* 
* 2023 Alexa Amoriello, IGME PROJECT H4CKB0X
*
* This script is phase 1 of the minigame FUZZ BUZZ, which is an adaptation
* to teach players about fuzzign in cybersecurity.
*
* ************************************************************************/

public class Phase1App : MonoBehaviour
{
    [SerializeField] HelperMinigames helper;

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
    private List<string> words;
    private string currentletters;
    private string currentword;
    private GameObject priorButtonPress = null;

    /// <summary>
    /// Creates the list of potential popups as well as populates the word array.
    /// </summary>
    void Start()
    {
        popupList = new List<GameObject>();
        words = new List<string>();

        popupList.Add(popupButton);
        popupList.Add(popupSlider);
        popupList.Add(popupText);

        words.Add("Cats");
        words.Add("Dogs");
    }

    /// <summary>
    /// Update method will generate new popups each time the prior popup
    /// is completed AND the timer is running.
    /// </summary>
    void Update()
    {
        if (helper.GetTimer() && currentPopup == null)
        {
            GenerateNewPopUp();
        }
    }

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
                userValue = 0;
                userGoal = Random.Range(10, 21);
                break;

            // Slider popup minigame:
            // - Add event listener to instance of popup on creation
            // - Set the current variable (holds the text instance to change by user) to it's TextMeshProGUI gameobject
            // - Set the random desired value to a new Random number.
            // - Set the goal value text
            case 1:
                currentPopup.GetComponentInChildren<Slider>().onValueChanged.AddListener(SetText);
                current = GameObject.Find("CurrentSliderValue").GetComponent<TextMeshProUGUI>();

                userGoal = Random.Range(1, 101);
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

                currentword = words[0].ToUpper();
                currentletters = "";
                current = GameObject.Find("CurrentWord").GetComponent<TextMeshProUGUI>();


                List<char> wordChars = new List<char>();
                wordChars.AddRange(currentword.ToCharArray());


                foreach (TextMeshProUGUI lettertext in GameObject.Find("Letters").GetComponentsInChildren<TextMeshProUGUI>())
                {
                    int pos = Random.Range(0, wordChars.Count);
                    lettertext.text = wordChars[pos].ToString();
                    wordChars.RemoveAt(pos);
                }

                current.text = currentword.ToUpper().ToString();
                current.color = Color.gray;

                break;
        }

    }

    /// <summary>
    /// Destroys popup after completion and sets the current popup to be null
    /// so that Update() will generate a new popup.
    /// </summary>
    /// <param name="popup"></param>
    private void DestroyPopup()
    {
        Debug.Log(currentPopup);
        DestroyImmediate(currentPopup);
        currentPopup = null;
    }

    /// <summary>
    /// Used for the button pressing minigame: each button click increase a value,
    /// checking against the needed value to complete the popup. 
    /// </summary>
    public void UpdateClicks()
    {
        userValue++;
        Debug.Log("KEEP GOING!");

        if (userValue >= userGoal)
        {
            Debug.Log("NEXT PHASE");
            DestroyPopup();
        }
    }

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
            Debug.Log("NEXT PHASE");
            DestroyPopup();
        }
        else
        {
            Debug.Log("NOT QUITE THERE YET!");
        }
    }

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
            Debug.Log("NEXT PHASE");
            DestroyPopup();
        }
        else if (currentletters.Length >= 4)
        {
            Debug.Log("NOT QUITE THERE YET!");
            currentletters = "";
            priorButtonPress = null;

            current.color = Color.gray;
            current.text = currentword;
        }


    }
}
