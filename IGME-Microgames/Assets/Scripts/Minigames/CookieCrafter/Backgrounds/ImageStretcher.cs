using UnityEngine;
using UnityEngine.UI;

public class ImageStretcher : MonoBehaviour
{
    public Image targetImage; // The image you want to stretch
    public float stretchAmount; // The amount by which you want to stretch the image to the right
    private float xDeltaSave;
    private float yDeltaSave;

    void Start()
    {
        if (targetImage != null)
        {
            RectTransform rectTransform = targetImage.rectTransform;

            // Anchor the image at its current left position
            rectTransform.pivot = new Vector2(0, rectTransform.pivot.y);  // Set pivot x to 0 to anchor left side
            rectTransform.anchorMin = new Vector2(rectTransform.anchorMin.x, 0.5f);  // Anchor horizontally at current position
            rectTransform.anchorMax = new Vector2(rectTransform.anchorMin.x, 0.5f);  // Ensure it's only stretching horizontally

            xDeltaSave = rectTransform.sizeDelta.x;
            yDeltaSave = rectTransform.sizeDelta.y;
        }
        else
        {
            Debug.LogError("Target image is not assigned or is null.");
        }
    }

    // Call this method to stretch the image to the right
    public void StretchImageToRight(float stretchAmount)
    {
        if (targetImage != null)
        {
            RectTransform rectTransform = targetImage.rectTransform;

            // Only modify the width (sizeDelta.x) to stretch to the right
            rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x + stretchAmount, rectTransform.sizeDelta.y);
        }
        else
        {
            Debug.LogError("Target image is not assigned or is null.");
        }
    }

    public void ResetStretch()
    {
        targetImage.rectTransform.sizeDelta = new Vector2(xDeltaSave, yDeltaSave);
    }

    // Get / set for target image
    public Image TargetImage
    {
        get => targetImage;
        set => targetImage = value;
    }

}
