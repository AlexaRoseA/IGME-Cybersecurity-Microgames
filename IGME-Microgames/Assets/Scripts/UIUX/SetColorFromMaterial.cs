using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SetColorFromMaterial : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    public Material copyMat;
    void Start()
    {
        GetComponent<Image>().color = copyMat.color;
    }

}
