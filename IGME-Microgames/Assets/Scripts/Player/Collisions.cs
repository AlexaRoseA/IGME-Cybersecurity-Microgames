using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collisions : MonoBehaviour
{
    // Start is called before the first frame update

    void Start()
    {
        if (TryGetComponent<MinigameManager>(out MinigameManager helper))
        {
            //try to get
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Spot")
        {

            if (TryGetComponent<FuzzBuzzPhaseTwoWhiteboxCore>(out FuzzBuzzPhaseTwoWhiteboxCore whiteboxCore))
            {
                whiteboxCore.DestroyBug(collision.gameObject);
            }

        }

        if(collision.GetContact(0).collider.gameObject.tag == "Spot")
        {
            Debug.Log("Collision with bug");
            GameObject blackbox = GameObject.Find("FuzzBuzz_Phase2_Blackbox(Clone)");
            Debug.Log(blackbox);
            if (blackbox != null)
            {
                blackbox.GetComponent<FuzzBuzzPhaseTwoBlackboxCore>().DestroyBug(collision.GetContact(0).collider.gameObject);
            }
        }
    }
}
