using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class JumperGameManager : MonoBehaviour
{
    public GameObject platformPrefab;
    private MinigameManager helper;
    Renderer myRenderer;
    RectTransform jumpyCanvas;

    public int platformCount = 300;


    // Start is called before the first frame update
    void Start()
    {
        Vector3 spawnPosition = new Vector3();
        for (int i = 0; i < platformCount; i++)
        {
            spawnPosition.y += Random.Range(2f, 3f);
            spawnPosition.x = Random.Range(-3f, 3f);
            Instantiate(platformPrefab, spawnPosition, Quaternion.identity);
        }
        helper = GameObject.FindObjectOfType<MinigameManager>();
        myRenderer = GameObject.Find("Jumpy").GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {
        var cam = Camera.main;
        var viewportPosition = cam.WorldToViewportPoint(GameObject.Find("Jumpy").transform.position);
        if (!myRenderer.isVisible && (viewportPosition.y <= 0))
        { 
            helper.EndGame();
        }
    }


}
