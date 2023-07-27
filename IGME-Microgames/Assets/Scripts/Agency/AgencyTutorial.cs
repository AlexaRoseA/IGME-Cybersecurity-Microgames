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
    /// <summary>
    /// attempt to show a tip to the player. Won't show the tip if it has already been shown. 
    /// </summary>
    /// <param name="tipName"></param>
    public void ShowTip(string tipName)
    {
        if (shownTips.Contains(tips[tipName])) return;
        foreach(GameObject tip in shownTips)
        {
            tip.SetActive(false);
        }

        //shownTips.Clear();
        tips[tipName].SetActive(true);
        shownTips.Add(tips[tipName]);
    }

    /// <summary>
    /// hide a tip.
    /// </summary>
    /// <param name="tipName"></param>
    public void HideTip(string tipName)
    {
        tips[tipName].SetActive(false);
    }

    /// <summary>
    /// Make a tip able to be shown again. 
    /// </summary>
    /// <param name="tipName"></param>
    public void RefreshTip(string tipName)
    {
        shownTips.Remove(tips[tipName]);
    }
}
