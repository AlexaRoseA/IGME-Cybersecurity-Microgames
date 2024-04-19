using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CookieGameManager : MonoBehaviour
{
    public MinigameManager helper;
    //public Subphases subphases;

    // Start is called before the first frame update
    void Start()
    {
        //helper = new MinigameManager();
    }

    void Update()
    {
        helper.SetSubphase(2);
        //helper.EndGame();
    }
}
