using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class BinaryChanger : MonoBehaviour
{
    // Start is called before the first frame update

    TextMeshProUGUI guiText;
    int startColor;

    void Start()
    {
        int startNum = Random.Range(0, 2);
        startColor = Random.Range(0, 2);

        guiText = gameObject.GetComponent<TextMeshProUGUI>();

        if (startColor == 0)
        {
            guiText.color = Color.white;
        }
        else
        {
            guiText.color = Color.green;
        }

        guiText.text = startNum.ToString();
        gameObject.GetComponent<Animator>().SetInteger("ranFade", startNum);
    }

    public void NumberChange()
    {
        //Debug.Log("Num change");
        //if(guiText.text == "0")
        //{
        //    guiText.text = "1";
        //} else
        //{
        //    guiText.text = "0";
        //}
    }

    public void ColorChange()
    {
        //Debug.Log(guiText.color.a);
        //if (guiText.color == Color.green)
        //{
        //    guiText.color = Color.white;
        //}
        //else if (guiText.color == Color.white)
        //{
        //    guiText.color = Color.green;
        //}
    }

}
