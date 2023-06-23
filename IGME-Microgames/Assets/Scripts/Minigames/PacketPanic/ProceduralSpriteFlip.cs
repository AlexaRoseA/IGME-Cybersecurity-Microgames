using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProceduralSpriteFlip : MonoBehaviour
{
    public GameObject flippingObject;
    public Sprite sideA;
    public Sprite sideB;
    public float flipSpeed = 2f;
    public float xScale = 1f;

    private SpriteRenderer spriteRenderer;

    bool flippingIn = false;

    bool flippingOut = false;

    private bool currentGoalSpriteIsA;

    public void Flip()
    {
        //Debug.Log("Flip");
        currentGoalSpriteIsA = !currentGoalSpriteIsA;
        flippingIn = true;
    }

    public void Flip(bool toSideA)
    {
        //Debug.Log(toSideA ? sideA.name : sideB.name);
        currentGoalSpriteIsA = toSideA;
        flippingIn = true;
    }

    void Start()
    {
        spriteRenderer = flippingObject.GetComponent<SpriteRenderer>();
        //currentGoalSpriteIsA = renderer.sprite != sideA;
    }

    void Update()
    {
        
        if (flippingIn) // decreasing scale
        {
            flippingObject.transform.localScale -= new Vector3(flipSpeed * Time.deltaTime, 0, 0);
            if (flippingObject.transform.localScale.x <= 0f)
            {
                //sprite is on the edge / invisible
                flippingObject.transform.localScale = new Vector3(0f, flippingObject.transform.localScale.y, flippingObject.transform.localScale.z);

                //start increasing scale
                flippingIn = false;
                flippingOut = true;

                //change sprite
                spriteRenderer.sprite = currentGoalSpriteIsA ? sideA : sideB;
            }
        }
        else if (flippingOut) // increasing scale
        {
            flippingObject.transform.localScale += new Vector3(flipSpeed * Time.deltaTime, 0, 0);
            if (flippingObject.transform.localScale.x >= xScale)
            {
                //sprite is at the correct xScale
                flippingObject.transform.localScale = new Vector3(xScale, flippingObject.transform.localScale.y, flippingObject.transform.localScale.z);
                flippingOut = false;
                //stop flipping
            }
        }

    }
}
