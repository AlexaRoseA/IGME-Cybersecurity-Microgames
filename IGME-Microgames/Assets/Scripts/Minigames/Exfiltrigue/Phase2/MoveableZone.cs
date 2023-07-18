using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveableZone : MonoBehaviour
{
    private void OnTriggerExit2D(Collider2D collision)
    {
        Debug.Log("exit");
    }
}
