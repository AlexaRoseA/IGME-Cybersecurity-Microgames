using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefenseT_ColorChanger : MonoBehaviour
{
    // Start is called before the first frame update

    public Color newColor;
    private SpriteRenderer rend;

    void Start()
    {
        rend = GetComponent<SpriteRenderer>();

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
