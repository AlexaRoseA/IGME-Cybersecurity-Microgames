using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HelpfulButtonScripts : MonoBehaviour
{
    private AudioSource _audioSource;
    private GameObject pause;

    // Start is called before the first frame update
    void Start()
    {
        _audioSource = GameObject.FindObjectOfType<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }

    public void PlaySoundButton(string name)
    {
        _audioSource.gameObject.GetComponent<MusicPlayer>().ChangeClipAndPlay(name);
    }

    public void PauseUnPause(bool status)
    {
        if(status)
        {
            pause.SetActive(true);
            Time.timeScale = 0f;
        } else
        {
            Time.timeScale = 1;
            pause.SetActive(false);
        }
    }

    public void SetPauseMenu(GameObject pauseObj)
    {
        pause = pauseObj;
    }

}
