using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// A manager class for scenes (minigames and agency) that has a reference to the GameManager. 
/// </summary>
public class LevelManager : MonoBehaviour
{
    public GameManager gameManager;
    // Start is called before the first frame update
    protected virtual void Start()
    {
        gameManager = GetGameManager();
        if (gameManager == null)
        {
            Debug.LogError("GameManager is null. is the GameManagerScene loading properly?");
        }
    }

    /// <summary>
    /// Finds a reference to the game manager by looking at GameManagerScene
    /// </summary>
    /// <returns></returns>
    private GameManager GetGameManager()
    {
        //get the GameManagerScene
        Scene gameManagerScene = SceneManager.GetSceneByName("GameManagerScene");

        if(!gameManagerScene.IsValid())
        {
            return null;
        }
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
