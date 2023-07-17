using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Skewerer : MonoBehaviour
{
    public GameObject[] skeweredPositions;
    public InfiltrationManager infilManager;
    private List<GameObject> skewered;

    // Start is called before the first frame update
    void Start()
    {
        if (infilManager == null) infilManager = FindObjectOfType<InfiltrationManager>();
        skewered = new List<GameObject>();
    } 

    private void OnTriggerEnter2D(Collider2D collider)
    {
        SkewerTarget target = collider.gameObject.GetComponent<SkewerTarget>();
        if (target == null) return;

        infilManager.NextPII();

        Rigidbody2D targetRB = target.GetComponent<Rigidbody2D>();
        if(targetRB != null) Destroy(targetRB);

        target.Skewer(skewered.Count < skeweredPositions.Length ? skeweredPositions[skewered.Count].transform : null);

        skewered.Add(target.gameObject);
    }
}
