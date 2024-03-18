using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class BubbleTrail : MonoBehaviour
{
    public Rigidbody2D rb;
    public ParticleSystem bubbleTrailParticles;

    // Start is called before the first frame update
    void Start()
    {
        if (rb == null) rb = gameObject.GetComponent<Rigidbody2D>();
        if (bubbleTrailParticles == null) bubbleTrailParticles = gameObject.GetComponent<ParticleSystem>();
    }

    // Update is called once per frame
    void Update()
    {
        var emis = bubbleTrailParticles.emission;
            
        emis.rateOverTime = rb.velocity.magnitude * 2;
    }
}
