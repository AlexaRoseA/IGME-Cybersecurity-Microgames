using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CustomSlider : MonoBehaviour
{
    // Set the min, max and the optional text value to show the value at location of the slider.
    [SerializeField] TextMeshProUGUI valueTextMeshProObjectOptional;
    [SerializeField] int minValue;
    [SerializeField] int maxValue;

    private CustomSliderKnob knob;

    /// <summary>
    /// Populate the knob with information
    /// </summary>
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
