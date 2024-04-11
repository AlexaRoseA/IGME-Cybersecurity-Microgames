using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChestUI : MonoBehaviour
{
    // Start is called before the first frame update

    Animator chestAnimator;
    void Start()
    {
        chestAnimator = gameObject.GetComponent<Animator>();

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Shake()
    {
        chestAnimator.SetTrigger("Shake");
    }

    public void OpenCloseChest(bool open = true)
    {
        chestAnimator.SetBool("Open", open);
    }

    public void DetermineShakeChance()
    {
        int percent = Random.Range(0, 101);
        Debug.Log("Shake chance: " + percent);

        if(percent < 20)
        {
            Shake();
        }
    }
}
