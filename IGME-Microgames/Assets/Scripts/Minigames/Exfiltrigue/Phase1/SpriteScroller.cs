using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteScroller : MonoBehaviour
{
    Material material;
    float scroll;

    public float scrollSpeed;

    void Start()
    {
        material = GetComponent<SpriteRenderer>().material;
    }

    void Update()
    {
        scroll += scrollSpeed * Time.deltaTime;
        material.mainTextureOffset = new Vector2(scroll, 0);
    }
}
