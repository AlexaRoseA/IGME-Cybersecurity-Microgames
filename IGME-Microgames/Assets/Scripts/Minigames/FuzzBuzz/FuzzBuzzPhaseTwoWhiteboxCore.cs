using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Yarn.Unity;

public class FuzzBuzzPhaseTwoWhiteboxCore : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] List<GameObject> grids;
    private GameObject selectedGrid;
    public MinigameManager helper; 
    void Start()
    {
        int ranGrid = Random.Range(0, grids.Count);
        selectedGrid = Instantiate(grids[ranGrid], new Vector3(0, 0, 0), Quaternion.identity, transform);
    }

    // Update is called once per frame
    void Update()
    {
        helper = GameObject.FindObjectOfType<MinigameManager>();
    }

    [YarnCommand("StartCameraMovement")]
    private void StartCameraMovement()
    {
        selectedGrid.GetComponent<FuzzBuzzPhaseTwoWhiteboxGrid>().StartCameraMovement();
    }

    public void DestroyBug(GameObject bug)
    {
        if(bug.name == "Spot_Crash")
        {
            //end game
            helper.UpdateScore(1000);
            Destroy(bug);
            helper.StopTimer();
            helper.EndGame();
        } else
        {
            Destroy(bug);
            helper.UpdateScore(100);
        }
    }
}
