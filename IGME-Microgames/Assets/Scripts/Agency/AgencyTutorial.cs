using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

public class AgencyTutorial : MonoBehaviour
{
    Dictionary<string, GameObject> tips;
    List<GameObject> shownTips;


    private void Start()
    {
        shownTips = new List<GameObject>();
        tips = new Dictionary<string, GameObject>();
        for(int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).gameObject.SetActive(false);
            tips.Add(transform.GetChild(i).name, transform.GetChild(i).gameObject);
        }
    }
    public void ShowTip(string tipName)
    {
        foreach(GameObject tip in shownTips)
        {
            tip.SetActive(false);
        }

        shownTips.Clear();
        tips[tipName].SetActive(true);
        shownTips.Add(tips[tipName]);
    }

    public void HideTip(string tipName)
    {
        tips[tipName].SetActive(false);
        shownTips.Remove(tips[tipName]);
    }
}
