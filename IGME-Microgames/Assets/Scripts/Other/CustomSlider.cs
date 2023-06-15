using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CustomSlider : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] TextMeshProUGUI valueTextMeshProObjectOptional;
    [SerializeField] int minValue;
    [SerializeField] int maxValue;

    private CustomSliderKnob knob;

    void Start()
    {
        knob = GetComponentInChildren<CustomSliderKnob>();
        knob.GenerateKnob(GetComponent<BoxCollider2D>(), minValue, maxValue, valueTextMeshProObjectOptional);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
