using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Skewerer : MonoBehaviour
{
    public GameObject[] skeweredPositions;
    private List<GameObject> skewered;

    // Start is called before the first frame update
    void Start()
    {
        skewered = new List<GameObject>();
    } 

    private void OnTriggerEnter2D(Collider2D collider)
    {
        SkewerTarget target = collider.gameObject.GetComponent<SkewerTarget>();
        if (target == null) return;

        Rigidbody2D targetRB = target.GetComponent<Rigidbody2D>();
        if(targetRB != null) Destroy(targetRB);

        target.Skewer(skeweredPositions[skewered.Count].transform);


        skewered.Add(target.gameObject);
    }
}
