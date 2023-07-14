using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkewerTarget : MonoBehaviour
{
    public Sprite underSkewer;
    public Sprite overSkewer;

    public void Skewer(Transform newParent)
    {

        gameObject.GetComponent<Collider2D>().enabled = false;

        FishMovement movement = gameObject.GetComponent<FishMovement>();
        if (movement != null) movement.enabled = false;

        //reset transform and parent to the passed in transform, so that it will be at the desired location
        transform.parent = newParent;
        transform.localPosition = Vector3.zero;
        transform.localRotation = Quaternion.identity;

        //update this sprite to be the sprite that will be under the skewer
        SpriteRenderer under = gameObject.GetComponent<SpriteRenderer>();
        under.sprite = underSkewer;
        under.sortingLayerName = "Player";
        under.sortingOrder = -1;


        //spawn a gameobject with sprite renderer attached to display over the skewer.
        GameObject overGameObject = new GameObject("overSkewer");

        //parent to the original gameobject and fix transform
        overGameObject.transform.parent = transform;
        overGameObject.transform.localScale = Vector3.one;
        overGameObject.transform.localPosition = Vector3.zero;
        overGameObject.transform.localRotation = Quaternion.identity;

        //add a sprite to the new gameobject that will display above the player
        SpriteRenderer overRenderer = overGameObject.AddComponent<SpriteRenderer>();
        overRenderer.sprite = overSkewer;
        overRenderer.sortingLayerName = "Player";
        overRenderer.sortingOrder = 1;
    }
}
