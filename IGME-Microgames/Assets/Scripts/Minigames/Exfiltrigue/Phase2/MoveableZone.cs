using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveableZone : MonoBehaviour
{
    ExfilFileManager fileManager;

    private void Start()
    {
        fileManager = FindObjectOfType<ExfilFileManager>();
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        //fileManager.LeftMoveZone();
    }
}
