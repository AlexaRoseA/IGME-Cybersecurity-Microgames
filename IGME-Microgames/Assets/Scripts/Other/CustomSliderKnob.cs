using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;

public class CustomSliderKnob : Button
{
    // This script attaches to the
    // knob of the slider.

    private Vector3 targetPos;

    private float sliderLength;
    private float sliderPercent;
    private int sliderValue;

    private bool touchingSliderKnob = false;

    private BoxCollider2D sliderBounds;
    private TextMeshProUGUI sliderValueText;
    private int minValue;
    private int maxValue;

    public void GenerateKnob(BoxCollider2D boundaries, int min, int max, TextMeshProUGUI valueTextMeshProObjectOptional = null)
    {
        sliderBounds = boundaries;
        sliderValueText = valueTextMeshProObjectOptional;
        minValue = min;
        maxValue = max;

        Start();
    }

    //Change me to change the touch phase used.
    UnityEngine.TouchPhase touchPhase = UnityEngine.TouchPhase.Began;
    protected override void Start()
    {
        base.Start();

        targetPos = transform.position + Vector3.right;

        sliderLength = sliderBounds.size.x;

        sliderPercent = 0f;
        sliderValue = Mathf.FloorToInt(Mathf.Lerp(-3, 103, sliderPercent));
    }

    /// <summary>
    /// If the knob is being held, grab the player's mount position as the target
    /// If the mouse is within the slider bounds, set the transform.position of the knob
    /// Set the percentage slide to be clamped to the length of the bounds
    /// Using the said percentage, generate a value number and assign it to the 
    /// slider value TextMeshProUGUI element
    /// </summary>
    void Update()
    {
        if(touchingSliderKnob)
        {
            targetPos = new Vector3(Input.mousePosition.x, targetPos.y, targetPos.z);
            if(sliderBounds.GetComponent<BoxCollider2D>().bounds.Contains(targetPos))
            {
                transform.position = Vector3.Lerp(transform.position, targetPos, Time.deltaTime * 7f);
            }

            sliderPercent = Mathf.Clamp01((transform.localPosition.x + sliderLength / 2) / sliderLength);

            sliderValue = Mathf.FloorToInt(Mathf.Lerp(minValue - 3, maxValue + 3, sliderPercent));

            if(sliderValueText != null)
            {
                sliderValueText.text = sliderValue.ToString();
            }
        }
    }

    /// <summary>
    /// When pushed down, enable the knot
    /// </summary>
    /// <param name="eventData"></param>
    public override void OnPointerDown(PointerEventData eventData)
    {
        base.OnPointerDown(eventData);
        touchingSliderKnob = true;
    }

    /// <summary>
    /// When lifted up, disable the knob
    /// </summary>
    /// <param name="eventData"></param>
    public override void OnPointerUp(PointerEventData eventData)
    {
        base.OnPointerUp(eventData);
        touchingSliderKnob = false;
    }
}
