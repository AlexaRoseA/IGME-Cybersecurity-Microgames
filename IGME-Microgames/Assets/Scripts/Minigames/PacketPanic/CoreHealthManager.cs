using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CoreHealthManager : MonoBehaviour
{
    private PanicManager panicManager;

    // Start is called before the first frame update
    void Start()
    {
        //link to panic manager
        panicManager = FindObjectOfType<PanicManager>();
        panicManager.coreHealthText = GetComponentInChildren<TMP_Text>();
        panicManager.AddCoreHealth(0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
