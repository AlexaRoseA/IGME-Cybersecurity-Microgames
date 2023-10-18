using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColorPicker : MonoBehaviour
{
    // Start is called before the first frame update
    RectTransform Rect;
    public GameObject colorPickImage;
    Texture2D ColorTexture;
    Color colorFinal;
    Color colorPrevious;
    public GameObject previewerMain;
    public GameObject selectedColorFromPriorMenu;

    private Material updateThisMaterial;

    void Start()
    {
        colorPrevious = updateThisMaterial.color;
        previewerMain.GetComponent<Image>().color = colorPrevious;
        Rect = colorPickImage.GetComponent<RectTransform>();
        ColorTexture = colorPickImage.GetComponent<Image>().mainTexture as Texture2D;
    }

    // Update is called once per frame
    void Update()
    {
        if (RectTransformUtility.RectangleContainsScreenPoint(Rect, Input.mousePosition))
        {
            Vector2 delta;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(Rect, Input.mousePosition, null, out delta);

            float width = Rect.rect.width;
            float height = Rect.rect.height;

            delta += new Vector2(width * 0.5f, height * 0.5f);

            float x = Mathf.Clamp(delta.x / Rect.rect.width, 0f, 1f);
            float y = Mathf.Clamp(delta.y / Rect.rect.height, 0f, 1f);

            int texX = Mathf.RoundToInt(x * ColorTexture.width);
            int texY = Mathf.RoundToInt(y * ColorTexture.height);

            colorFinal = ColorTexture.GetPixel(texX, texY);
            previewerMain.GetComponent<Image>().color = colorFinal;
            updateThisMaterial.color = colorFinal;
        }
    }

    public void SetMaterialOnClick(Material pass)
    {
        updateThisMaterial = pass;
    }

    public void SaveColor()
    {
        colorPrevious = colorFinal;
        selectedColorFromPriorMenu.GetComponent<Image>().color = colorFinal;

        //close window
        this.gameObject.SetActive(false);
    }

    public void CloseColorPicker()
    {
        updateThisMaterial.color = colorPrevious;
        //close window, do not save color
        this.gameObject.SetActive(false);
    }

    public void OpenColorPicker(GameObject self)
    {
        this.gameObject.SetActive(true);

        selectedColorFromPriorMenu = self;
    }
}
