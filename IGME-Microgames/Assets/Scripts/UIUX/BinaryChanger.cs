using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class BinaryChanger : MonoBehaviour
{
    // Start is called before the first frame update

    void Start()
    {
        
        StartCoroutine(LoopBetween(gameObject.GetComponent<TextMeshProUGUI>()));
    }


    IEnumerator LoopBetween(TextMeshProUGUI text)
    {
        int ranNum = Random.Range(0, 3);

        Debug.Log("Hello! " + ranNum);


        switch (ranNum)
        {
            case 0:
                StartCoroutine(NumberChange(text));
                break;
            case 1:
                StartCoroutine(ColorChange(text));
                break;
            case 2:
                StartCoroutine(FadeInOut(text));
                break;
        }

        yield return null;
    }

    IEnumerator NumberChange(TextMeshProUGUI text)
    {
        Debug.Log("Num change");
        if(text.text == "0")
        {
            text.text = "1";
        } else
        {
            text.text = "0";
        }
        yield return LoopBetween(text);
    }

    IEnumerator ColorChange(TextMeshProUGUI text)
    {
        Color c = new Color(0, 1, 0, 1);
        Debug.Log("Color change: " + c);
        text.color = c;
        yield return LoopBetween(text);
    }

    IEnumerator FadeInOut(TextMeshProUGUI text)
    {
        //forever
        bool fadeEnded = false;
        while (!fadeEnded)
        {
            // fade out
            yield return Fade(text, 0);
            // wait
            yield return new WaitForSeconds(0.3f);
            // fade in
            yield return Fade(text, 1);
            // wait
            yield return new WaitForSeconds(0.3f);
            fadeEnded = true;
        }
        yield return LoopBetween(text);
    }

    IEnumerator Fade(TextMeshProUGUI text, int alpha)
    {

        Color initialColor = text.color;
        Color targetColor = new Color(initialColor.r, initialColor.g, initialColor.b, alpha);

        float elapsedTime = 0f;

        while (elapsedTime < 0.5f)
        {
            elapsedTime += Time.deltaTime;
            text.color = Color.Lerp(initialColor, targetColor, elapsedTime / 0.5f);
            yield return null;
        }
    }

}
