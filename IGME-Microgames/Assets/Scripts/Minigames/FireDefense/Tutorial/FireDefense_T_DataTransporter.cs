using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_T_DataTransporter : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] SpriteRenderer rend;
    private string name;
    private List<Color> goodColors;
    private List<Color> badColors;

    void Start()
    {
        name = gameObject.name;
        name = name.Split("_")[1];
        name = name.Substring(0, name.Length - 8).ToLower();
        Debug.Log(name);

        switch (name.ToLower())
        {
            case "good":
                goodColors = new List<Color>();
                GenerateColorList(goodColors, 1);
                rend.material.SetColor("_BaseColor", goodColors[Random.Range(0, goodColors.Count)]);
                break;
            case "bad":
                badColors = new List<Color>();
                GenerateColorList(badColors, 0.5f);
                rend.material.SetColor("_BaseColor", badColors[Random.Range(0, badColors.Count)]);
                break;
        }
    }

    private void GenerateColorList(List<Color> colorList, float endval)
    {
        int numPosition = Random.Range(0, 2);
        float[] colorsChosen = new float[3];

        for (int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(j != numPosition)
                {
                    colorsChosen[j] = Random.Range(0, endval); 
                } else
                {
                    colorsChosen[j] = endval;
                }
            }
            colorList.Add(new Color(colorsChosen[0], colorsChosen[1], colorsChosen[2]));
        }
    }
}
