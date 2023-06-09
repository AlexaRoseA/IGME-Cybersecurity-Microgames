using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class FuzzbuzzPhase1FileCore : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] List<Texture2D> images;
    [SerializeField] List<GameObject> imageBoxes;

    private MinigameManager helper;

    private List<string> endings;
    private bool enableButtonClicking = false;

    private int uploadValue = 10;
    private float currentMultiply = 0;

    void Start()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();

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

        foreach(GameObject box in imageBoxes)
        {
            box.transform.GetChild(0).GetComponent<Button>().interactable = enableButtonClicking;
        }
    }

    // Update is called once per frame
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
                    UpdateImage(box);
                }
            }

        }
    }

    private int returnRandom(int ending)
    {
        return Random.Range(0, images.Count);
    }

    public void UpdateImage(GameObject fileBox)
    {
        int imageIndex = returnRandom(images.Count);
        fileBox.transform.GetChild(0).GetComponent<Image>().sprite = ConvertToSprite(images[imageIndex]);
        fileBox.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = images[imageIndex].name + endings[returnRandom(endings.Count)];
        RollForMultiplier(fileBox.transform.GetChild(2).gameObject);
    }

    private Sprite ConvertToSprite(Texture2D texture)
    {
        return Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), Vector2.zero);
    }

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


        helper.UpdateScore(uploadValue);
        return false;
    }

    IEnumerator WaitTime(int seconds, GameObject multiply)
    {
        multiply.SetActive(true);

        multiply.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = currentMultiply.ToString();

        yield return new WaitForSeconds(seconds);

        if(multiply.activeInHierarchy == true)
        {
            multiply.SetActive(false);
        }
 
    }

    public void MultiplyPress()
    {
        Debug.Log("Multiplier applied!");
        helper.UpdateScore(Mathf.RoundToInt(uploadValue * currentMultiply));
        UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.SetActive(false);
    }
}
