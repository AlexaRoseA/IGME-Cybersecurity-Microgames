using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;
using UnityEngine.UI;

public class AgencyTutorial : MonoBehaviour
{
    List<Dictionary<string, GameObject>> sequences;
    List<Dictionary<string, bool>> shownTips;

    GameObject activeTip;
    private AudioSource _audioSource;

    List<bool> sequenceClosed;

    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
        shownTips = new List<Dictionary<string, bool>>();

        sequenceClosed = new List<bool>();
        sequences = new List<Dictionary<string, GameObject>>();
        for(int i = 0; i < transform.childCount; i++)
        {
            Transform sequence = transform.GetChild(i);

            sequences.Insert(i, new Dictionary<string, GameObject>());
            shownTips.Insert(i, new Dictionary<string, bool>());
            sequenceClosed.Insert(i, false);
            for (int j = 0; j < sequence.childCount; j++)
            {
                Transform tip = sequence.GetChild(j);
                tip.GetComponentInChildren<Button>().onClick.AddListener(() => CloseSequence(tip.gameObject));
                tip.gameObject.SetActive(false);
                sequences[i].Add(tip.name, sequence.GetChild(j).gameObject);
                shownTips[i].Add(tip.name, false);
            }
        }
    }
    /// <summary>
    /// attempt to show a tip to the player. Won't show the tip if it has already been shown. 
    /// </summary>
    /// <param name="tipName"></param>
    public void ShowTip(string tipName)
    {
        for(int i = 0; i < sequences.Count; i++)
        {
            if(sequences[i].ContainsKey(tipName))
            {
                //matching tip found

                if (sequenceClosed[i] || shownTips[i][tipName]) continue;
                //if theres an active tip, hide it
                if(activeTip != null)
                {
                    activeTip.SetActive(false);
                    activeTip = null;
                }

                //play tip audio
                _audioSource.Play();

                //mark this tip has been seen. don't reshow it.
                activeTip = sequences[i][tipName];
                sequences[i][tipName].SetActive(true);
                shownTips[i][tipName] = true;

                //if the sequence has been completed, don't reshow it.
                if(!shownTips[i].ContainsValue(false)) //doesn't contain false (all values are true)
                {
                    sequenceClosed[i] = true;
                }
            }
        }
    }

    /// <summary>
    /// hide a tip.
    /// </summary>
    /// <param name="tipName"></param>
    public void HideTip(string tipName)
    {
        foreach (Dictionary<string, GameObject> sequence in sequences)
        {
            if(sequence.ContainsKey(tipName))
                sequence[tipName].SetActive(false);
        }
    }

    /// <summary>
    /// closes a sequence, so that tips in that sequence won't be shown
    /// </summary>
    /// <param name="tipName"></param>
    public void CloseSequence(GameObject tip)
    {
        for(int i = 0; i < sequences.Count; i++)
        {
            if(sequences[i].ContainsKey(tip.name))
            {
                sequenceClosed[i] = true;
            }
        }
    }

    /// <summary>
    /// Make a tip able to be shown again. 
    /// </summary>
    /// <param name="tipName"></param>
    public void RefreshTip(string tipName)
    {
        for (int i = 0; i < sequences.Count; i++)
        {
            if (sequences[i].ContainsKey(tipName))
            {
                sequenceClosed[i] = false;
                shownTips[i][tipName] = false;
            }
        }
    }
}
