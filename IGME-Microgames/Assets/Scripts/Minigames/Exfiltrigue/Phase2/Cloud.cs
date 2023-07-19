using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cloud : MonoBehaviour
{
    ExfilFileManager fileManager;

    private void Start()
    {
        fileManager = FindObjectOfType<ExfilFileManager>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        fileManager.FileHit(gameObject);
    }
}
