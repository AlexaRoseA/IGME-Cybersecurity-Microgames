using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class JumperGameManager : MonoBehaviour
{
    public GameObject platformPrefab;
    public GameObject powerupPrefab;
    public GameObject backdoorPowerupPrefab;
    public GameObject domainAdminPrefab;
    public GameObject standardUserPrefab;
    public GameObject localAdminUserPrefab;
    public GameObject systemUserPrefab;

    private MinigameManager helper;
    private Transform basePlatform;
    Renderer myRenderer;
    


    public const int platformCount = 300;
    public int powerupCount = 10;
    
    

    // Start is called before the first frame update
    void Start()
    {
        Vector3 spawnPosition = new Vector3();
        Vector3 powerupPosition = new Vector3();
        Vector3 backdoorPowerupPosition = new Vector3();
        Vector3 domainAdminPosition = new Vector3();
        Vector3 standardUserPosition = new Vector3();
        Vector3 localAdminUserPosition = new Vector3();
        Vector3 systemUserPosition = new Vector3();

        Vector3 screenWidth = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, 0));

        basePlatform = GameObject.Find("JumpyFloor").GetComponent<Transform>();
        spawnPosition = basePlatform.position;

        int randomBackdoorSpawn = Random.Range(20, platformCount-85);
        int defaultUserSpawn = Random.Range(21, 29);
        int localAdminUserSpawn = Random.Range(7, 13);
        int systemUserSpawn = Random.Range(0, platformCount-100);
        bool systemUserPowerupEnabled = false;
        if (Random.Range(0,100) == 90)
        {
            systemUserPowerupEnabled = true;
        }
        if (randomBackdoorSpawn % (platformCount/powerupCount) == 0)
        {
            randomBackdoorSpawn++;
        }

        for (int i = 0; i < platformCount; i++)
        {
            spawnPosition.y += Random.Range(2f + (16f * i / 3000f), 3f + (8f*i / 3000f));
            spawnPosition.x = Random.Range(-(screenWidth.x+3f), (screenWidth.x));

            Instantiate(platformPrefab, spawnPosition, Quaternion.identity, transform.parent);
            if (i == platformCount-1)
            {
                domainAdminPosition.y = spawnPosition.y + 1;
                domainAdminPosition.x = spawnPosition.x;
                Instantiate(domainAdminPrefab, domainAdminPosition, Quaternion.identity, transform.parent);
            }
            else if (i%(platformCount/powerupCount)==0)
            {
                powerupPosition.y = spawnPosition.y + 1;
                powerupPosition.x = spawnPosition.x;
                Instantiate(powerupPrefab, powerupPosition, Quaternion.identity, transform.parent);
            }
            else if (i==randomBackdoorSpawn)
            {
                backdoorPowerupPosition.y = spawnPosition.y + 1;
                backdoorPowerupPosition.x = spawnPosition.x;
                Instantiate(backdoorPowerupPrefab, backdoorPowerupPosition, Quaternion.identity, transform.parent);
            }
            else if (i%(platformCount/defaultUserSpawn) == 0)
            {
                standardUserPosition.y = spawnPosition.y + 1;
                standardUserPosition.x = spawnPosition.x;
                Instantiate(standardUserPrefab, standardUserPosition, Quaternion.identity, transform.parent);
            }
            else if (i % (platformCount / localAdminUserSpawn) == 0)
            {
                localAdminUserPosition.y = spawnPosition.y + 1;
                localAdminUserPosition.x = spawnPosition.x;
                Instantiate(localAdminUserPrefab, localAdminUserPosition, Quaternion.identity, transform.parent);
            }
            else if (i == systemUserSpawn && systemUserPowerupEnabled)
            {
                systemUserPosition.y = spawnPosition.y + 1;
                systemUserPosition.x = spawnPosition.x;
                Instantiate(systemUserPrefab, systemUserPosition, Quaternion.identity, transform.parent);
            }
        }

        helper = GameObject.FindObjectOfType<MinigameManager>();
        helper.UpdateScoreText();
        myRenderer = GameObject.Find("Jumpy").GetComponent<Renderer>();
        GameObject.Find("Jumpy").GetComponent<Rigidbody2D>().simulated = false;
    }

    // Update is called once per frame
    void Update()
    {
        print(helper.currentPhase);
        if (helper.currentPhase == "startGame")
        {
            GameObject.Find("Jumpy").GetComponent<Rigidbody2D>().simulated = true;
            print(Camera.main.aspect * Camera.main.orthographicSize * 2);
            var cam = Camera.main;
            var viewportPosition = cam.WorldToViewportPoint(GameObject.Find("Jumpy").transform.position);
            if (!myRenderer.isVisible && (viewportPosition.y <= 0))
            {
                
                helper.EndGame();
            }
        }
    }


}
