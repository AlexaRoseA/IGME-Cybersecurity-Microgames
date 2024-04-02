using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class Phase1_OrderStation : MonoBehaviour
{

    public MinigameManager minigameManager;


    // Start is called before the first frame update
    void Start()
    {
        if (minigameManager == null) minigameManager = FindObjectOfType<MinigameManager>();

        minigameManager.UpdateTimerText();
        minigameManager.UpdateScoreText();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
