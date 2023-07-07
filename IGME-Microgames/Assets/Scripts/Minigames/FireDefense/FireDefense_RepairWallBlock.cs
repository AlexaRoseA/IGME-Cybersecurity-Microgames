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
    private MinigameManager minigameManager;

    private List<GameObject> outToGetMe;
    private List<GameObject> touching;

    #region Start/Middle/End General Methods and Helpers
    void Start()
    {
        minigameManager = GameObject.Find("MinigameManager").GetComponent<MinigameManager>();
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

    /// <summary>
    /// Sets the attack status
    /// </summary>
    /// <param name="status"></param>
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
        selected = true;
    }

    /// <summary>
    /// On trigger enter deals with enemies to allow for them to bypass the collisions
    /// If the enemy is in the block's range, add it to it's touch list
    /// 
    /// If the block itself isn't attacked and the collision's set target
    /// is this current wall block, set the block to being attacked and 
    /// run the coroutine to start draining health.
    /// </summary>
    /// <param name="collision"></param>
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Enemy")
        {
            touching.Add(collision.gameObject);

            if (!attacked)
            {
                if(collision.gameObject.GetComponent<FireDefense_Enemy>().GetTarget() == this.gameObject)
                {
                    attacked = true;
                    StartCoroutine("Attack");
                }
            }
        }
    }

    /// <summary>
    /// When the enemy leaves, remove it from the touching list
    /// If the touch count is 0 after removing, set the block
    /// to not be attacked anymore.
    /// </summary>
    /// <param name="collision"></param>
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.tag == "Enemy")
        {
            touching.Remove(collision.gameObject);

            if(touching.Count == 0)
            {
                attacked = false;
            }
        }
    }

    /// <summary>
    /// While staying in collide, repair if need be
    /// if not being attacked.
    /// * Cannot repair while being attacked
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
            currentRepairStatus = 0.95f;
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
        }
    }

    /// <summary>
    /// Removes an enemy if in the list
    /// from touching the wall block.
    /// </summary>
    /// <param name="enemy"></param>
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
        if(needsRepair)
        {
            minigameManager.UpdateScore(100);
        }
        needsRepair = false;
        blockColor = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
        gameObject.GetComponent<SpriteRenderer>().color = blockColor;

        foreach (GameObject enemy in outToGetMe)
        {
            //ignore this block since it's repaired
            enemy.GetComponent<FireDefense_Enemy>().SetTarget(this.gameObject);
        }

        outToGetMe.Clear();
        touching.Clear();
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
    /// Repairs the block overtime based on Backup being in it's touch zone
    /// 
    /// Set the time to be 0 and a boolean for checking local repair status.
    /// While the time is not reached OR it's not repaired,
    /// ** CHECK IF THE BLOCK IS SELECTED! IF NOT BREAK. DO NOT RUN UNLESS BACKUP IS ON TOP!
    /// - Update the status to be between 0 and 1 based on the time
    /// - Set the status bar to follow the repairStatus
    /// - Increase time.
    /// 
    /// If the repair status is very close to 1 (bug preventing at 1 exactly)
    /// - Set the repair to true and break. 
    /// 
    /// If repaired: Heal the block, set the status bar to be full, and update
    /// the UI element of the statusBar itself.
    /// </summary>
    /// <returns></returns>
    IEnumerator Repair()
    {
        bool repaired = false;
        timeElapsed = 0;

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

    /// <summary>
    /// Drains block overtime of the block based on an enemy attack.
    /// 
    /// Damange the block
    /// While the time is set OR not dead yet, and there's items touching this block
    /// - Drain the health over time (more touching, faster it goes)
    /// 
    /// If the repairStatus is less than or equal to 0.1, set the block to be fully dead
    /// Set the repair status to 0 and update the UI.
    /// 
    /// If dead, update the UI and set the score -100 for allowing enemies to kill the block.
    /// For each enemy that is touching, push them back away from the block.
    /// For each enemy that is not touching but out to get the dead block,
    /// generate a new target block.
    /// 
    /// Clear the target's touching list and set attacked to false to allow repair.
    /// </summary>
    /// <returns></returns>
    IEnumerator Attack()
    {
        DamageBlock(true);

        while (((timeElapsed < lerpDuration) || !dead) && touching.Count > 0)
        {
            currentRepairStatus = Mathf.Lerp(currentRepairStatus, 0, timeElapsed / lerpDuration);
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
            timeElapsed += Time.deltaTime + ((touching.Count/5) * 2);

            if (currentRepairStatus <= 0.1)
            {
                dead = true;
                break;
            }
            yield return null;
        }

        if (dead)
        {
            currentRepairStatus = 0;
            statusBar.transform.localScale = new Vector3(currentRepairStatus, 1, 1);
            minigameManager.UpdateScore(-100);

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

    /// <summary>
    /// Prints out block information for debug purposes.
    /// </summary>
    /// <param name="buttonPressed"></param>
    private void DebugStats(GameObject buttonPressed)
    {
        Debug.Log("\n----------");
        Debug.Log(buttonPressed.name + " Status: \n" + "Repair? " + needsRepair + "\n Attacked?: " + attacked + "\nDead?: " + dead);
        Debug.Log("Out to get me: ");
        foreach (GameObject e in outToGetMe)
        {
            Debug.Log("\n" + e.name);
        }
        Debug.Log("Currently Touching: ");
        foreach (GameObject e in touching)
        {
            Debug.Log("\n" + e.name);
        }
        Debug.Log("\n----------");
    }
    #endregion
}
