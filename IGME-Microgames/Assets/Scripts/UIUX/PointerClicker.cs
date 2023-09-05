using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Yarn.Unity;

public class PointerClicker : MonoBehaviour
{
    // Start is called before the first frame update

    private GameObject clickerCircle, pointer;
    private Animator clickerAnimator;
    private Vector3 positionTo = Vector3.zero;

    void Start()
    {
        clickerCircle = transform.GetChild(0).gameObject;
        pointer = transform.GetChild(1).gameObject;
        clickerAnimator = clickerCircle.GetComponent<Animator>();
        ShowHideClicker(false);
    }

    private IEnumerator MoveToPositionO(float timeToMove = 1f, bool click = false, string nameObject = "noobject") { 
        Vector3 currentPos = transform.position; 
        float currentTime = 0f;
        ShowHideClicker(true);

        if (nameObject != "noobject")
        {
            positionTo = FindObjectPosition(nameObject);
        }

        while (currentTime < 1) {
            currentTime += Time.deltaTime / timeToMove;
            transform.position = Vector3.Lerp(currentPos, positionTo, currentTime); 
            yield return null; 
        } 

        if(click)
        {
            ClickPointer();
        }
    }

    [YarnCommand("MoveToPositionOvertime")]
    public void MoveToPositionOvertime(float timeToMove = 1f, bool click = false, string nameObject = "noobject")
    {
        StartCoroutine(MoveToPositionO(timeToMove, click, nameObject));
    }

    [YarnCommand("MoveToPositionInstant")]
    public void MoveToPositionInstant(bool click = false, string nameObject = "noobject")
    {
        ShowHideClicker(true);
        if (nameObject != "noobject")
        {
            positionTo = FindObjectPosition(nameObject);
        }

        transform.position = positionTo;

        if (click)
        {
            ClickPointer();
        }
    }

    [YarnCommand("Click")]
    public void ClickPointer()
    {
        clickerAnimator.Play("ClickCircle");
    }

    [YarnCommand("ShowHideClicker")]
    public void ShowHideClicker(bool status)
    {
        if (status)
        {
            pointer.gameObject.SetActive(true);
        }
        else
        {
            pointer.gameObject.SetActive(false);
        }
    }

    [YarnCommand("FindObjectPosition")]
    public Vector3 FindObjectPosition(string name)
    {
        return GameObject.Find(name).transform.position;
    }

    [YarnCommand("GenerateVector")]
    public void GenerateVector3(float x, float y, float z)
    {
        positionTo = new Vector3(x, y, 10f);
    }
}
