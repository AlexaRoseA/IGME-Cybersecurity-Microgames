using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collisions : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Spot")
        {
            FuzzBuzzPhaseTwoWhiteboxCore whiteboxCore = (FuzzBuzzPhaseTwoWhiteboxCore) GameObject.FindObjectOfType(typeof(FuzzBuzzPhaseTwoWhiteboxCore));
            whiteboxCore.DestroyBug(collision.gameObject);
        }
    }
}
