using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDefense_RepairWallBlock : MonoBehaviour
{
    // Repair status
    private bool needsRepair = false;
    private float repairRate = 5;
    private float currentRepairStatus = 0;

    // Time variables
    float timeElapsed = 0;
    private float lerpDuration = 20000;

    // Base coloring
    private Color blockColor;
    private Color repairColor;

    // Check if is the currently selected one
    private bool selected = false;
    private bool dead = false;

    // Status bar and player 
    [SerializeField] GameObject statusBar;
    [SerializeField] GameObject player;

    private FireDefense_FirewallDefense defenseManager;

    private List<GameObject> outToGetMe;

    #region Start/Middle/End General Methods and Helpers
    void Start()
    {
        defenseManager = gameObject.transform.parent.parent.gameObject.GetComponent<FireDefense_FirewallDefense>();
        outToGetMe = new List<GameObject>();
    }

    public void AddEnemy(GameObject obj)
    {
        outToGetMe.Add(obj);
    }

    /// <summary>
    /// Sets the repair color
    /// </summary>
    /// <param name="c">Color</param>
    public void SetRepairColor(Color c)
    {
        repairColor = c;
    }

    /// <summary>
    /// Sets the block color
    /// </summary>
    /// <param name="c">Color</param>
    public void SetBlockColor(Color c)
    {
        blockColor = c;
    }

    /// <summary>
    /// Sets the current color forcefully
    /// </summary>
    /// <param name="c">Color</param>
    public void SetCurrentColor(Color c)
    {
        gameObject.GetComponent<SpriteRenderer>().color = c;
    }

    /// <summary>
    /// Returns the repair status
    /// </summary>
    /// <returns></returns>
    public bool GetRepairStatus()
    {
        return needsRepair;
    }

    #endregion

    #region Collision Handling

    /// <summary>
    /// On collision enter, set the current block as the selected one
    /// </summary>
    /// <param name="collision"></param>
    private void OnCollisionEnter2D(Collision2D collision)
    {
        statusBar.gameObject.SetActive(true);
        selected = true;
    }

    /// <summary>
    /// While staying in collide, repair if need be
    /// </summary>
    /// <param name="collision"></param>
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

    /// <summary>
    /// When not colliding with said block, reset the time
    /// and hide the status bar
    /// </summary>
    /// <param name="collision"></param>
    private void OnCollisionExit2D(Collision2D collision)
    {
        statusBar.gameObject.SetActive(false);
        timeElapsed = 0;
        selected = false;
    }

    #endregion

    #region Block Status and Attack

    /// <summary>
    /// If called, damages the current block
    /// </summary>
    public void DamageBlock()
    {
        timeElapsed = 0;
        needsRepair = true;
        lerpDuration = Random.Range(20000, 50000);
        gameObject.GetComponent<SpriteRenderer>().color = repairColor;
        SetRepairAmount();
    }

    /// <summary>
    /// If called, heals the current block
    /// </summary>
    private void HealBlock()
    {
        needsRepair = false;
        blockColor = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
        gameObject.GetComponent<SpriteRenderer>().color = blockColor;
        foreach(GameObject enemies in outToGetMe)
        {
            enemies.GetComponent<FireDefense_Enemy>().SetTarget();
        }
        outToGetMe.Clear();
        defenseManager.CheckIfRowsRepaired();
    }

    /// <summary>
    /// Sets the repair cost randomly for the block
    /// </summary>
    private void SetRepairAmount()
    {
        timeElapsed = Mathf.RoundToInt(Random.Range(2, 4));
        currentRepairStatus = Random.Range(0, 0.6f);
        statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
    }

    /// <summary>
    /// Repairs the block overtime
    /// </summary>
    /// <returns></returns>
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

    /// <summary>
    /// When pointer (touch) or mouse enters collider
    /// and the battle is started, move the player to the 
    /// currently selected block
    /// </summary>
    private void OnMouseEnter()
    {
        if(defenseManager.startBattle)
        {
            GameObject buttonPressed = gameObject;
            player.transform.position = Vector3.Lerp(player.transform.position, new Vector3(buttonPressed.transform.position.x, player.transform.position.y, player.transform.position.z), 1.5f);
        }
    }
    #endregion
}
