using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoDrawZone : MonoBehaviour
{
    public GameObject border;
    public GameObject fill;
    private BoxCollider2D box;
    public void Start()
    {
        box = GetComponent<BoxCollider2D>();
        border.GetComponent<SpriteRenderer>().size = new Vector2(box.size.x * transform.localScale.x, box.size.y * transform.localScale.y);
        fill.GetComponent<SpriteRenderer>().size = new Vector2(box.size.x * transform.localScale.x, box.size.y * transform.localScale.y);
    }
}
