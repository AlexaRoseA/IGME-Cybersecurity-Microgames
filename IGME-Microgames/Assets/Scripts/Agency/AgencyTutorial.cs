using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;
using UnityEngine.UI;

public class AgencyTutorial : MonoBehaviour, IDataPersistence
{
    private Dictionary<string, Tip> tips;
    private Tip[] tipList;
    private Tip shownTip;
    private AudioSource _audioSource;


    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
        tips = new Dictionary<string, Tip>();

        tipList = FindObjectsByType<Tip>(FindObjectsSortMode.InstanceID);
        foreach(Tip tip in tipList)
        {
            tip.gameObject.SetActive(false);
            tips.Add(tip.name, tip);
        }
    }
    /// <summary>
    /// attempt to show a tip to the player. Won't show the tip if it has already been shown. 
    /// </summary>
    /// <param name="tipName"></param>
    public void ShowTip(string tipName)
    {
        //If the tip doesn't exist, do nothing
        if(!tips.ContainsKey(tipName))
        {
            Debug.LogWarning("Attempted to show a tip that does not exist.");
            return;
        }

        //If the tip has been triggered and isn't retriggerable, do nothing
        if(tips[tipName].triggered && !tips[tipName].retriggerable)
        {
            return;
        }

        //hide the tip that is currently showing
        if(shownTip != null)
        {
             shownTip.gameObject.SetActive(false);
             shownTip = null;
        }

        //play tip audio
        _audioSource.Play();

        shownTip = tips[tipName];
        shownTip.gameObject.SetActive(true);
        shownTip.triggered = true;
    }

    /// <summary>
    /// hide a tip.
    /// </summary>
    /// <param name="tipName"></param>
    public void HideTip(string tipName)
    {
            if(tips.ContainsKey(tipName))
                tips[tipName].gameObject.SetActive(false);
    }

    void IDataPersistence.SaveData(ref GameData data)
    {
        //convert tip dictionary to array
        Tip[] tiparr = new Tip[tips.Count];
        tips.Values.CopyTo(tiparr, 0);

        //get the triggered bool from the tip array, and save it in triggered tips
        data.triggeredTips = new bool[tips.Count];
        for (int i = 0; i < tiparr.Length; i++)
        {
            data.triggeredTips[i] = tiparr[i].triggered;
        }
    }
    void IDataPersistence.LoadData(GameData data)
    {
        for(int i = 0; i < data.triggeredTips.Length; i++)
        {
            tipList[i].triggered = data.triggeredTips[i];

            //since some tips are shown at game start, its possible for a tip to be shown before its loaded in as triggered.
            //This rechecks the shown tip, so that it can be hidden if it wasn't meant to be shown. 
            if(tipList[i] == shownTip && data.triggeredTips[i])
            {
                shownTip.gameObject.SetActive(false);
                shownTip = null;
            }
        }
    }
}
