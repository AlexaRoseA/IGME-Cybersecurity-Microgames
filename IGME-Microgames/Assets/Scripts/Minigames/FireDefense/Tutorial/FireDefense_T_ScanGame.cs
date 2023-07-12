using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FireDefense_T_ScanGame : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] GameObject currentBot;
    [SerializeField] GameObject nextBot;
    [SerializeField] GameObject scanBar;
    private bool scanned = false;

    [SerializeField] Button scan;
    [SerializeField] Button approve;
    [SerializeField] Button deny;

    [SerializeField] Transform standPos;

    private float seconds = 1.5f;
    private float timer;
    private float percent;


    void Start()
    {
        ResetScans();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void ResetScans()
    {
        scanned = false;
        approve.interactable = false;
        deny.interactable = false;
    }

    public void StartScan()
    {
        StartCoroutine(Scan());
    }

    IEnumerator Scan()
    {
        scan.interactable = false;
        scanBar.SetActive(true);
        Vector3 startPos = scanBar.transform.position;
        Debug.Log("position: " + scanBar.transform.position);
        Vector3 endPos = new Vector3(startPos.x, -2, startPos.z);

        timer = 0;

        // top to bottom
        while (timer <= seconds)
        {
            Debug.Log("timer: " + timer + "seconds: " + seconds);
            timer += Time.deltaTime / seconds;
            scanBar.transform.position = Vector3.MoveTowards(scanBar.transform.position, endPos, 0.01f);
            if (scanBar.transform.position == endPos)
            {
                timer = seconds + 1;
            }
            yield return null;
        }

        timer = 0;

        //bottom to top
        while (timer <= seconds)
        {
            timer += Time.deltaTime / seconds;
            scanBar.transform.position = Vector3.MoveTowards(scanBar.transform.position, startPos, 0.01f);
            if (scanBar.transform.position == startPos)
            {
                timer = seconds + 1;
            }
            yield return null;
        }

        scanBar.SetActive(false);
        scanned = true;
        approve.interactable = true;
        deny.interactable = true;
        timer = 0;

        yield return null;
    }

}
