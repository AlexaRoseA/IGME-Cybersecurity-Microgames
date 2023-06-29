using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_RepairWallBlock : MonoBehaviour
{
    // Start is called before the first frame update
    private bool needsRepair = false;
    private float repairRate = 5;
    private float currentRepairStatus = 0;

    float timeElapsed = 0;
    private float lerpDuration = 20000;

    private Color blockColor;
    private Color repairColor;
    private bool selected = false;

    [SerializeField] GameObject statusBar;
    [SerializeField] GameObject player;

    private FireDefense_FirewallDefense defenseManager;

    void Start()
    {
        defenseManager = gameObject.transform.parent.parent.gameObject.GetComponent<FireDefense_FirewallDefense>();
    }

    public void SetRepairColor(Color c)
    {
        repairColor = c;
    }

    public void SetBlockColor(Color c)
    {
        blockColor = c;
    }

    public void SetCurrentColor(Color c)
    {
        gameObject.GetComponent<SpriteRenderer>().color = c;
    }

    public void SetRepairStatus(bool status)
    {
        needsRepair = status;
    }

    public bool GetRepairStatus()
    {
        return needsRepair;
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        statusBar.gameObject.SetActive(true);
        selected = true;
    }

    private void OnCollisionStay2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Spot")
        {
            if (needsRepair)
            {
                StartCoroutine("Repair");
            }
            else
            {
                Debug.Log("This block doesn't need repair!");
            }
        }
    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        statusBar.gameObject.SetActive(false);
        timeElapsed = 0;
        selected = false;
    }

    public void DamageBlock()
    {
        timeElapsed = 0;
        needsRepair = true;
        lerpDuration = Random.Range(20000, 50000);
        gameObject.GetComponent<SpriteRenderer>().color = repairColor;
        SetRepairAmount();
    }

    private void HealBlock()
    {
        needsRepair = false;
        blockColor = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
        gameObject.GetComponent<SpriteRenderer>().color = blockColor;
        defenseManager.CheckIfRowsRepaired();
    }

    private void SetRepairAmount()
    {
        timeElapsed = Mathf.RoundToInt(Random.Range(2, 4));
        currentRepairStatus = Random.Range(0, 0.6f);
        statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
    }

    IEnumerator Repair()
    {
        bool repaired = false;
        timeElapsed = 0;
        Debug.Log("Repair time: " + lerpDuration);

        while ((timeElapsed < lerpDuration) || !repaired)
        {
            if(!selected)
            {
                break;
            }
            currentRepairStatus = Mathf.Lerp(currentRepairStatus, 1, timeElapsed / lerpDuration);
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
            timeElapsed += Time.deltaTime;

            if (currentRepairStatus >= 0.97)
            {
                repaired = true;
                break;
            }
            yield return null;
        }

        if(repaired)
        {
            HealBlock();
            currentRepairStatus = 1;
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
        }
    }

    private void OnMouseEnter()
    {
        if(defenseManager.startBattle)
        {
            GameObject buttonPressed = gameObject;
            player.transform.position = Vector3.Lerp(player.transform.position, new Vector3(buttonPressed.transform.position.x, player.transform.position.y, player.transform.position.z), 1.5f);
        }
    }
}
