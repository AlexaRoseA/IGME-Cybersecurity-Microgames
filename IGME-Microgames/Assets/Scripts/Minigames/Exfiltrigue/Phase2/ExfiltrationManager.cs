using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExfiltrationManager : MonoBehaviour
{
    public MinigameManager minigameManager;
    // Start is called before the first frame update
    void Start()
    {
        if (minigameManager == null) minigameManager = FindObjectOfType<MinigameManager>();
        minigameManager.UpdateScoreText();
        minigameManager.UpdateTimerText();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
