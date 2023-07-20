using UnityEngine;
using TMPro;

public class ExfiltratedFile : MonoBehaviour
{
    public int encryptionKey;
    public string fileName;
    public float importance;
    public Rigidbody2D rb;
    public TMP_Text nameText;

    public string[] possibleNames;
    public float[] possibleNamesImportance;

    private void Start()
    {

        if (rb == null) rb = GetComponent<Rigidbody2D>();

        if(nameText == null) nameText = GetComponentInChildren<TMP_Text>();
        GetComponentInChildren<Canvas>().worldCamera = Camera.main;
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
