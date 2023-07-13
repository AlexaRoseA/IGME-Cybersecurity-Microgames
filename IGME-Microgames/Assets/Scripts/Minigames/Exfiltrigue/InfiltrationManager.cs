using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfiltrationManager : MonoBehaviour
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
