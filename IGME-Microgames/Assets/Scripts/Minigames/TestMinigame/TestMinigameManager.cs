using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TestMinigameManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /// <summary>
    /// Finds a reference to the game manager by looking at GameManagerScene
    /// </summary>
    /// <returns></returns>
    private GameManager GetGameManager()
    {
        //get the GameManagerScene
        Scene gameManagerScene = SceneManager.GetSceneByName("GameManagerScene");

        //list of gameobjects in the gameManagerScene
        List<GameObject> rootGameObjects = new List<GameObject>();
        gameManagerScene.GetRootGameObjects(rootGameObjects);

        foreach (GameObject go in rootGameObjects)
        {
            if (go.GetComponent<GameManager>() != null)
            {
                return go.GetComponent<GameManager>();
            }
        }
        return null;
    }
}
