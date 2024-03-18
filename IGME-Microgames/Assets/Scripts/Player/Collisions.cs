using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collisions : MonoBehaviour
{
    // Start is called before the first frame update
    private MinigameManager helper;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetHelper()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(helper != null)
        {
            switch(helper.GetPhase())
            {
                case "blackbox":
                    if(collision.GetContact(0).collider.gameObject.tag == "Spot")
                    {
                        GameObject.FindObjectOfType<FuzzBuzzPhaseTwoBlackboxCore>().DestroyBug(collision.GetContact(0).collider.gameObject);
                    }
                    break;
                case "whitebox":
                    if (collision.GetContact(0).collider.gameObject.tag == "Spot")
                    {
                        GameObject.FindObjectOfType<FuzzBuzzPhaseTwoWhiteboxCore>().DestroyBug(collision.GetContact(0).collider.gameObject);
                    }
                    break;
            }
        }

    }
}
