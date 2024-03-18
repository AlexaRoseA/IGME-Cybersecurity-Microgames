using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Yarn.Unity;

public class OnScreenCharacterManager : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] List<GameObject> allCharsOnScreen;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /// <summary>
    /// Shows a character on screen with a set ID
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("ShowCharacterOnly")]
    public void ShowCharacterOnly(int id)
    {
        foreach(GameObject character in allCharsOnScreen)
        {
            if(character != allCharsOnScreen[id])
            {
                character.gameObject.SetActive(false);
            } else
            {
                character.gameObject.SetActive(true);
            }
        }
    }

    /// <summary>
    /// Shows all characters on screen
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("ShowAllCharacters")]
    public void ShowAllCharacters()
    {
        foreach (GameObject character in allCharsOnScreen)
        {
            character.gameObject.SetActive(true);
        }
    }

    /// <summary>
    /// Hides all characters on screen
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("HideAllCharacters")]
    public void HideAllCharacters()
    {
        foreach (GameObject character in allCharsOnScreen)
        {
            character.gameObject.SetActive(false);
        }
    }

    /// <summary>
    /// Highlights (NOT REMOVES) a character on screen with a set ID
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("HighlightCharacter")]
    public void HighlightCharacter(int id)
    {
        allCharsOnScreen[id].GetComponent<Image>().color = Color.white;
    }

    /// <summary>
    /// UnHighlights (NOT REMOVES) a character on screen with a set ID
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("UnHighlightCharacter")]
    public void UnHighlightCharacter(int id)
    {
        allCharsOnScreen[id].GetComponent<Image>().color = Color.gray;
    }

    /// <summary>
    /// Set bool for animator
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("SetBool")]
    public void SetBool(int id, string name, bool value)
    {
        allCharsOnScreen[id].GetComponent<Animator>().SetBool(name, value);
    }

    /// <summary>
    /// Set float for animator
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("SetFloat")]
    public void SetFloat(int id, string name, float value)
    {
        allCharsOnScreen[id].GetComponent<Animator>().SetFloat(name, value);
    }


    /// <summary>
    /// Set int for animator
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("SetInt")]
    public void SetFloat(int id, string name, int value)
    {
        allCharsOnScreen[id].GetComponent<Animator>().SetInteger(name, value);
    }


    /// <summary>
    /// Set trigger for animator
    /// </summary>
    /// <param name="id"></param>
    [YarnCommand("SetTrigger")]
    public void SetTrigger(int id, string name)
    {
        allCharsOnScreen[id].GetComponent<Animator>().SetTrigger(name);
    }
}
