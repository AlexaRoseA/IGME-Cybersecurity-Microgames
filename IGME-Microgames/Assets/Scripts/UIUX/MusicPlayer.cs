using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicPlayer : MonoBehaviour
{
    private AudioSource _audioSource;

    public List<AudioClip> clips;
    private AudioClip currentClip;

    private void Awake()
    {
        DontDestroyOnLoad(transform.gameObject);
        _audioSource = GetComponent<AudioSource>();
        currentClip = _audioSource.clip;
    }

    public void PlayMusic()
    {
        if (currentClip == null) return;
        if (_audioSource.isPlaying) return;
        _audioSource.Play();
    }

    public void StopMusic()
    {
        _audioSource.Stop();
    }

    public void ChangeClip(string name)
    {
        foreach(AudioClip minClip in clips)
        {
            if(minClip.name.ToLower() == name.ToLower())
            {
                currentClip = minClip;
                _audioSource.clip = currentClip;
                Debug.Log("Audio clip found.");
                return;
            }
        }

        Debug.Log("Audio clip not found.");
        currentClip = null;
    }

    public void ChangeClipAndPlay(string name)
    {
        ChangeClip(name);
        StopMusic();
        PlayMusic();
    }

    public void TurnOnOffLooping()
    {
        _audioSource.loop = !_audioSource.loop;
    }
}
