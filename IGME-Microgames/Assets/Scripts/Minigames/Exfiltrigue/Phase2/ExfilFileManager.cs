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
    public MinigameManager minigameManager;

    public Collider2D moveableZone;

    private List<int> alreadyUsedFileIndexes;

    bool dragging = false;

    // Start is called before the first frame update
    void Start()
    {
        if (minigameManager == null) minigameManager = FindObjectOfType<MinigameManager>();
        minigameManager.UpdateScoreText();
        minigameManager.UpdateTimerText();
        Camera.main.transform.position = new Vector3(0f, 0f, -10f);
        if (moveableZone == null) moveableZone = GameObject.Find("FileMoveableZone").GetComponent<Collider2D>();

        alreadyUsedFileIndexes = new List<int>();
        NextFile();
    }

    // Update is called once per frame
    void Update()
    {
        if(dragging)
        {
            //if the player is pressing their finger (in a valid location) add a force to direct the file towards the finger
            currentFile.rb.AddForce(TouchScreenToWorld() - currentFile.transform.position);
            currentFile.rb.velocity = Vector3.ClampMagnitude(currentFile.rb.velocity, maxDragSpeed);
        }
        if(!moveableZone.OverlapPoint(TouchScreenToWorld()))
        {
            EndDrag();
        }
    }

    protected override void TouchPressed(InputAction.CallbackContext context)
    {
        //if it has been decrypted
        //and the finger is touching the file
        //and the finger is in the moveable zone. 
        if(currentFile.encryptionKey == encrytionSlider.value && 
            currentFile.rb.OverlapPoint(TouchScreenToWorld()) &&
            moveableZone.OverlapPoint(TouchScreenToWorld()))
        {
            
            dragging = true;
            currentFile.rb.drag = holdingDrag;
        }
    }

    protected override void TouchCancelled(InputAction.CallbackContext context)
    {
        EndDrag();
    }

    /// <summary>
    /// ends the player's drag control on the file. 
    /// </summary>
    private void EndDrag()
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

    /// <summary>
    /// creates a new file and sets it as the current file
    /// </summary>
    public void NextFile()
    {
        if (currentFile != null) 
            Destroy(currentFile.gameObject);


        currentFile = Instantiate(filePrefab).GetComponent<ExfiltratedFile>();
        currentFile.transform.position = new Vector3(0f, -3f);
        if (alreadyUsedFileIndexes.Count >= currentFile.possibleNames.Length)
            return;

        //randomize the file's properties
        currentFile.encryptionKey = Random.Range(1, 9);
        int nameIndex = Random.Range(0, currentFile.possibleNames.Length);
        while(alreadyUsedFileIndexes.Contains(nameIndex))
        {
            nameIndex = Random.Range(0, currentFile.possibleNames.Length);
        }
        currentFile.fileName = currentFile.possibleNames[nameIndex];
        currentFile.importance = currentFile.possibleNamesImportance[nameIndex];
        alreadyUsedFileIndexes.Add(nameIndex);
        //reset the slider
        encrytionSlider.value = 0;
        UpdateSlider();
        dragging = false;
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

    public void FileHit(GameObject hitObj)
    {
        if (hitObj.GetComponent<Cloud>() != null)
        {
            //hit the cloud - score points
            minigameManager.UpdateScore((int)(currentFile.importance * 1000f));
        }
        else if (hitObj.GetComponent<RecycleZone>() != null)
        {
            //recycled
            minigameManager.UpdateScore(50);
        }
        else
        {
            //hit a wall
            minigameManager.UpdateScore(-500);
        }
        NextFile();
    }
}
