using UnityEngine;
using TMPro;

public class ExfiltratedFile : MonoBehaviour
{
    public int encryptionKey;
    public string fileName;
    public float importance;
    public Rigidbody2D rb;
    public TMP_Text nameText;

    private void Start()
    {
        nameText = GetComponentInChildren<TMP_Text>();
        GetComponentInChildren<Canvas>().worldCamera = Camera.main;

        if (rb == null) rb = GetComponent<Rigidbody2D>();
        encryptionKey = 3;
        fileName = "evilplans.txt";
        importance = 1f;
    }

    public void Score()
    {
    }

    public void Send()
    {

    }

    public void Trash()
    {

    }

    void Update()
    {
        
    }
}
