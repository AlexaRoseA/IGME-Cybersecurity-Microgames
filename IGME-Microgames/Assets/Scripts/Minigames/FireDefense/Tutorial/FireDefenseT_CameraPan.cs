using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

public class FireDefenseT_CameraPan : MonoBehaviour
{
    // Start is called before the first frame update
    private string cameraPhase;
    private float seconds = 3;
    private float timer;
    private float percent;
    [SerializeField] GameObject fadeBox;
    [SerializeField] List<GameObject> scenes;
    private Material mat;

    private Vector3 originalPos;

    void Start()
    {
        mat = fadeBox.GetComponent<SpriteRenderer>().material;
        originalPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [YarnCommand("cameraPhase")]
    public void UpdatePhase(string phase)
    {
        cameraPhase = phase;
        DetermineNext();
    }

    private void DetermineNext()
    {
        switch(cameraPhase)
        {
            case "T_1_Intro":
                //StartCoroutine(Pan(new Vector3(1, 0, 0)));
                break;
            case "T_1_ZoomIn":
                //StartCoroutine(Pan(new Vector3(1.15f, 0.44f, 0)));
                //StartCoroutine(Zoom(2.5f));
                break;
            case "T_1_FadeIn":
                //StartCoroutine(Fade(255));
                break;
        }
    }

    IEnumerator Pan(Vector3 point)
    {
        Vector3 start = transform.position;
        Vector3 difference = point - start;
        timer = 0;

        while (timer <= seconds)
        {
            timer += Time.deltaTime;
            percent = timer / seconds;
            transform.position = start + difference * percent;
        }
        yield return null;
    }

    IEnumerator Zoom(float amt)
    {
        timer = 0;

        while (timer <= seconds)
        {
            timer += Time.deltaTime;
            percent = timer / seconds;
            Camera.main.fieldOfView = Mathf.Lerp(Camera.main.fieldOfView, amt, timer);
        }
        yield return null;
    }

    IEnumerator Fade(float targetAlpha)
    {
        while (mat.color.a != targetAlpha)
        {
            var newAlpha = Mathf.MoveTowards(mat.color.a, targetAlpha, 2f * Time.deltaTime);
            mat.color = new Color(mat.color.r, mat.color.g, mat.color.b, newAlpha);
            yield return null;
        }
    }

} 
