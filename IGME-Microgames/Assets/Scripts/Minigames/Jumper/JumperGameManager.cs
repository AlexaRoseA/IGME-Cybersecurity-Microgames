using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class JumperGameManager : MonoBehaviour
{
    public GameObject platformPrefab;
    public GameObject powerupPrefab;
    public GameObject backdoorPowerupPrefab;


    private MinigameManager helper;
    Renderer myRenderer;
    


    public const int platformCount = 300;
    public int powerupCount = 10;
    
    

    // Start is called before the first frame update
    void Start()
    {
        int randomBackdoorSpawn = Random.Range(20, platformCount-85);
        if (randomBackdoorSpawn % (platformCount/powerupCount) == 0)
        {
            randomBackdoorSpawn++;
        }
        Vector3 spawnPosition = new Vector3();
        Vector3 powerupPosition = new Vector3();
        Vector3 backdoorPowerupPosition = new Vector3();
        Vector3 screenWidth = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, 0));
        for (int i = 0; i < platformCount; i++)
        {
            spawnPosition.y += Random.Range(2f + (16f * i / 3000f), 3f + (8f*i / 3000f));
            //if (i == 0)
            //{
              //  spawnPosition.y += Random.Range(2f, 3f);
            //}
            //else
            //{
             //   spawnPosition.y += Random.Range(3.8f, 3.81f);
            //}
            
            spawnPosition.x = Random.Range(-screenWidth.x, screenWidth.x);
            Instantiate(platformPrefab, spawnPosition, Quaternion.identity);
            if (i%(platformCount/powerupCount)==0)
            {
                powerupPosition.y = spawnPosition.y + 1;
                powerupPosition.x = spawnPosition.x;
                Instantiate(powerupPrefab, powerupPosition, Quaternion.identity);
            }
            if (i==randomBackdoorSpawn)
            {
                backdoorPowerupPosition.y = spawnPosition.y + 1;
                backdoorPowerupPosition.x = spawnPosition.x;
                Instantiate(backdoorPowerupPrefab, backdoorPowerupPosition, Quaternion.identity);
            }

        }
        helper = GameObject.FindObjectOfType<MinigameManager>();
        myRenderer = GameObject.Find("Jumpy").GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {
        print(Camera.main.aspect * Camera.main.orthographicSize * 2);
        var cam = Camera.main;
        var viewportPosition = cam.WorldToViewportPoint(GameObject.Find("Jumpy").transform.position);
        if (!myRenderer.isVisible && (viewportPosition.y <= 0))
        {
            helper.SetScore(helper.GetScore());
            helper.EndGame();
        }
    }


}
