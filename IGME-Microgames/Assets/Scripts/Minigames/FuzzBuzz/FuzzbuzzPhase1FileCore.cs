using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

/* **************************************************************************
* 
* This script is phase 1 of the minigame FUZZ BUZZ, which is an adaptation
* to teach players about fuzzign in cybersecurity about file upload fuzzing.
*
* ************************************************************************/

public class FuzzbuzzPhase1FileCore : MonoBehaviour
{
    // Sprite and box list information
    [SerializeField] List<Texture2D> textures;
    private List<Sprite> finalSprites;
    [SerializeField] List<GameObject> imageBoxes;
    private List<string> endings;

    // Minigame Helper
    private MinigameManager helper;

    // Keeping track of local variables needed across methods
    private int uploadValue = 10;
    private float currentMultiply = 0;
    private bool enableButtonClicking = false;
    private GameObject boxTracker = null;
    private int imageIndex = -1;

    #region Start/Middle/End General Methods and Helpers

    /// <summary>
    /// Set up the helper, convert textures to sprites,
    /// and add photo endings to the list
    /// </summary>
    void Start()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();
        helper.SetCamera();
        helper.UpdateTimerText();
        helper.UpdateScoreText();

        finalSprites = new List<Sprite>();

        endings = new List<string>();
        endings.Add(".png");
        endings.Add(".gif");
        endings.Add(".svg");
        endings.Add(".jpg");
        endings.Add(".jpeg");
        endings.Add(".tiff");
        endings.Add(".raw");
        endings.Add(".bmp");
        endings.Add(".ico");
        endings.Add(".apng");

        foreach(Texture2D t in textures)
        {
            finalSprites.Add(ConvertToSprite(t));
        }
    }



    /// <summary>
    /// Run the game if the timer is started and enable button clicking
    /// on the buttons due to them starting as interactable = false
    /// </summary>
    void Update()
    {
        if (helper.GetPhase() == "file")
        {
            if (helper.GetTimer() && !enableButtonClicking)
            {
                enableButtonClicking = true;

                foreach (GameObject box in imageBoxes)
                {
                    box.transform.GetChild(0).GetComponent<Button>().interactable = enableButtonClicking;
                    UpdateBox(box);
                }
            }

        }
    }

    /// <summary>
    /// Convert images to sprite
    /// </summary>
    /// <param name="texture"></param>
    /// <returns></returns>
    private Sprite ConvertToSprite(Texture2D texture)
    {
        return Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), Vector2.zero);
    }

    #endregion

    #region Clicking either box or multiplier

    /// <summary>
    /// Generate a random image that ISN'T the image it was prior
    /// Set the filebox sprite to the new image as well as the text to have the
    /// image name and a random custom ending.
    /// 
    /// Finally, roll for multiplier popup chance.
    /// </summary>
    /// <param name="fileBox"></param>
    public void UpdateBox(GameObject fileBox)
    {
        int priorIndex = imageIndex;

        while (imageIndex == priorIndex)
        {
            imageIndex = Random.Range(0, finalSprites.Count);
        }

        boxTracker = fileBox;

        fileBox.transform.GetChild(0).GetComponent<Image>().sprite = finalSprites[imageIndex];
        fileBox.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = textures[imageIndex].name + endings[Random.Range(0, endings.Count)];

        RollForMultiplier(fileBox.transform.GetChild(2).gameObject);
    }
    
    /// <summary>
    /// Update image if the image is clicked on with no multiplier 
    /// Then, update the box to a new image.
    /// </summary>
    /// <param name="fileBox"></param>
    public void UploadImage(GameObject fileBox)
    {
        helper.UpdateScore(uploadValue);
        UpdateBox(fileBox);
    }

    #endregion

    #region Multiplier 

    /// <summary>
    /// Roll randomly for a chance to get a multiplier
    /// </summary>
    /// <param name="multiplyerObj">Multiplier circle to update</param>
    /// <returns></returns>
    private bool RollForMultiplier(GameObject multiplyerObj)
    {
        int rollRandom = Random.Range(0, 101);
        currentMultiply = 0;

        // 1.5 multiply
        if (rollRandom >= 25 && rollRandom <= 50)
        {
            currentMultiply = 1.5f;
            StartCoroutine(WaitTime(2, multiplyerObj));
            return true;
        }

        // 2 multiplyer
        if (rollRandom >= 80 && rollRandom <= 100)
        {
            currentMultiply = 2f;
            StartCoroutine(WaitTime(2, multiplyerObj));
            return true;
        }

        return false;
    }

    /// <summary>
    /// Wait x amount of time and if not pressed within that time remove the multiplier circle
    /// </summary>
    /// <param name="seconds">Seconds to wait</param>
    /// <param name="multiply">How much to multiply by</param>
    /// <returns></returns>
    IEnumerator WaitTime(int seconds, GameObject multiply)
    {
        multiply.SetActive(true);

        multiply.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = currentMultiply.ToString();

        yield return new WaitForSeconds(seconds);

        if(multiply.activeInHierarchy == true)
        {
            multiply.SetActive(false);
        }
 
    }

    /// <summary>
    /// If the multiplier circle is pressed (OnClick), add the multiplier
    /// </summary>
    public void MultiplyPress()
    {
        Debug.Log("Multiplier applied!");
        helper.UpdateScore(Mathf.RoundToInt(uploadValue * currentMultiply));
        
        UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.SetActive(false);
        UpdateBox(boxTracker);
    }
    #endregion
}
