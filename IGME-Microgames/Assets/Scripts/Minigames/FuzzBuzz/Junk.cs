using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Junk : MonoBehaviour
{
    public bool collidingWithBug = false;

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
        if(collision.gameObject.tag == "Spot" || collision.gameObject.tag == "Player")
        {
            collidingWithBug = true;
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Spot")
        {
            collidingWithBug = false;
        }
    }

    public void GenerateNewPlacement(int xMin, int xMax, int yMin, int yMax)
    {
        float xPos = Random.Range(xMin, xMax);
        float yPos = Random.Range(yMin, yMax);

        transform.position = new Vector3(xPos, yPos, transform.position.z);
    }
}
