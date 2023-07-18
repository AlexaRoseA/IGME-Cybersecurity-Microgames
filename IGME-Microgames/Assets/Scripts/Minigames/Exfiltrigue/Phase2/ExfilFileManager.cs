using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.InputSystem;

public class ExfilFileManager : InputHandler
{
    public Slider encrytionSlider;
    //public TMP_Text fileName;
    public ExfiltratedFile currentFile;
    public GameObject filePrefab;
    public float holdingDrag = 30f;
    public float thrownDrag = 0f;
    public string validCharacters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*(){}[];:',.<>/?~`|";
    public float maxDragSpeed = 2f;

    bool dragging = false;

    // Start is called before the first frame update
    void Start()
    {
        currentFile = Instantiate(filePrefab).GetComponent<ExfiltratedFile>();
    }

    // Update is called once per frame
    void Update()
    {
        if(dragging)
        {
            currentFile.rb.AddForce(TouchScreenToWorld() - currentFile.transform.position);
            currentFile.rb.velocity = Vector3.ClampMagnitude(currentFile.rb.velocity, maxDragSpeed);
        }
    }

    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        if(currentFile.encryptionKey == encrytionSlider.value)
        {
            dragging = true;

            currentFile.rb.drag = holdingDrag;
        }
    }

    protected override void TouchCancelled(InputAction.CallbackContext context)
    {
        if (!dragging) return;
        dragging = false;
        currentFile.rb.drag = thrownDrag;

    }

    /// <summary>
    /// called when the slider is changed. updates the displayed file name.
    /// </summary>
    public void UpdateSlider()
    {
        if (encrytionSlider.value == currentFile.encryptionKey)
            currentFile.nameText.text = currentFile.fileName;
        else
        {
            currentFile.nameText.text = BuildRandomString(currentFile.fileName.Length);
        }
    }

    public void NextFile()
    {

    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="length"></param>
    /// <returns>returns a string of the specified length, comprised of characters from the validCharacters string.</returns>
    private string BuildRandomString(int length)
    {
        char[] randomCharacters = new char[length];

        for(int i = 0; i < length; i++)
        {
            randomCharacters[i] = validCharacters[Random.Range(0, validCharacters.Length)];
        }

        return new string(randomCharacters);
    }
}
