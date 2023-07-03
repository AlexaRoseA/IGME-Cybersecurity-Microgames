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
    private bool attacked = false;

    // Status bar and player 
    [SerializeField] GameObject statusBar;
    [SerializeField] GameObject player;

    private FireDefense_FirewallDefense defenseManager;

    private List<GameObject> outToGetMe;
    private List<GameObject> touching;

    #region Start/Middle/End General Methods and Helpers
    void Start()
    {
        defenseManager = gameObject.transform.parent.parent.gameObject.GetComponent<FireDefense_FirewallDefense>();
        outToGetMe = new List<GameObject>();
        touching = new List<GameObject>();
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

    public void SetAttackStatus(bool status)
    {
        attacked = status;
    }

    #endregion

    #region Collision Handling

    /// <summary>
    /// On collision enter, set the current block as the selected one
    /// </summary>
    /// <param name="collision"></param>
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Debug.Log("SHOW STATUS!");
        statusBar.gameObject.SetActive(true);
        selected = true;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Enemy")
        {
            touching.Add(collision.gameObject);

            if (!attacked)
            {
                if(collision.gameObject.GetComponent<FireDefense_Enemy>().GetTarget() == this.gameObject)
                {
                    Debug.Log("There's an attack!");
                    attacked = true;
                    StartCoroutine("Attack");
                }
            }
        }
    }

    /// <summary>
    /// While staying in collide, repair if need be
    /// </summary>
    /// <param name="collision"></param>
    private void OnCollisionStay2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Spot")
        {
            if (needsRepair && !attacked)
            {
                StartCoroutine("Repair");
            }
            else if (attacked)
            {
                Debug.Log("You're being attacked!");
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
        timeElapsed = 0;
        selected = false;
    }

    #endregion

    #region Block Status and Attack

    /// <summary>
    /// If called, damages the current block
    /// </summary>
    public void DamageBlock(bool attacked = false)
    {

        timeElapsed = 0;
        dead = false;
        needsRepair = true;
        lerpDuration = Random.Range(20000, 50000);
        gameObject.GetComponent<SpriteRenderer>().color = repairColor;
        if (!attacked)
        {
            SetRepairAmount();
        }
        else
        {
            timeElapsed = Mathf.RoundToInt(Random.Range(4, 6));
            currentRepairStatus = 1;
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
        }
        statusBar.gameObject.SetActive(true);
    }

    public void RemoveTouching(GameObject enemy)
    {
        if(touching.Contains(enemy))
        {
            touching.Remove(enemy);
        }
    }

    /// <summary>
    /// If called, heals the current block
    /// </summary>
    private void HealBlock()
    {
        needsRepair = false;
        blockColor = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
        gameObject.GetComponent<SpriteRenderer>().color = blockColor;
        statusBar.gameObject.SetActive(false);
        foreach (GameObject enemies in outToGetMe)
        {
            enemies.GetComponent<FireDefense_Enemy>().SetTarget();
        }

        foreach (GameObject enemy in outToGetMe)
        {
            //ignore self
            enemy.GetComponent<FireDefense_Enemy>().SetTarget(this.gameObject);
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
            if (!selected)
            {
                break;
            }
            currentRepairStatus = Mathf.Lerp(currentRepairStatus, 1, timeElapsed / lerpDuration);
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
            timeElapsed += Time.deltaTime;

            if (currentRepairStatus >= 0.95)
            {
                repaired = true;
                break;
            }
            yield return null;
        }
        if (repaired)
        {
            HealBlock();
            currentRepairStatus = 1;
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
        }
    }

    IEnumerator Attack()
    {
        if (!needsRepair)
        {
            DamageBlock(true);
        }

        while (((timeElapsed < lerpDuration) || !dead) && touching.Count > 0)
        {
            currentRepairStatus = Mathf.Lerp(currentRepairStatus, 0, timeElapsed / lerpDuration);
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
            timeElapsed += Time.deltaTime + ((touching.Count/10) * 2);

            if (currentRepairStatus >= 0.1)
            {
                Debug.Log("Attacking! " + currentRepairStatus);
            }
            else
            {
                dead = true;
                currentRepairStatus = 0;
                statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
                break;
            }
            yield return null;
        }

        if (dead)
        {
            statusBar.transform.localScale = new Vector3(0, 1, 1);

            foreach (GameObject enemy in touching)
            {
                FireDefense_Enemy script = enemy.GetComponent<FireDefense_Enemy>();
                StartCoroutine(script.PushBack());
            }

            List<GameObject> temp = outToGetMe;
            outToGetMe.Clear();

            foreach (GameObject enemy in temp)
            {
                if (!touching.Contains(enemy))
                {
                    FireDefense_Enemy script = enemy.GetComponent<FireDefense_Enemy>();
                    script.SetTarget();
                }
            }

            touching.Clear();
            attacked = false;
            statusBar.gameObject.SetActive(false);
        }
        yield return null;
    }

    /// <summary>
    /// When pointer (touch) or mouse enters collider
    /// and the battle is started, move the player to the 
    /// currently selected block
    /// </summary>
    private void OnMouseEnter()
    {
        if (defenseManager.startBattle)
        {
            GameObject buttonPressed = gameObject;
            player.transform.position = Vector3.Lerp(player.transform.position, new Vector3(buttonPressed.transform.position.x, player.transform.position.y, player.transform.position.z), 1.5f);
        }
    }
    #endregion
}
