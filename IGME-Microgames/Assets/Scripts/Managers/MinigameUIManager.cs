using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MinigameUIManager : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI timeText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public TextMeshProUGUI GetTimeText()
    {
        return timeText;
    }
}
