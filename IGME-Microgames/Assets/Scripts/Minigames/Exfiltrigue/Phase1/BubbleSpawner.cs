using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BubbleSpawner : MonoBehaviour
{
    public GameObject bubblePrefab;
    public float spawnRate;

    float spawnCountdown;

    // Start is called before the first frame update
    void Start()
    {
        transform.parent = Camera.main.transform;
    }

    // Update is called once per frame
    void Update()
    {
        if(spawnCountdown > 0f)
        {
            spawnCountdown -= Time.deltaTime;
            return;
        }

        spawnCountdown = spawnRate * Random.RandomRange(.8f, 1.2f);

        Vector3 spawnPosition = transform.position;

        spawnPosition.y -= 4f;
        spawnPosition.x += Random.RandomRange(-3f, 3f);

        Instantiate(bubblePrefab).transform.position = spawnPosition;
    }
}
