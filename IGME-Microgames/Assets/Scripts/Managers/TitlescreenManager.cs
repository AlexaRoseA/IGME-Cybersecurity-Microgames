using System.Collections;
using System.Collections.Generic;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GooglePlayGames;
using GooglePlayGames.BasicApi;

public class TitlescreenManager : MonoBehaviour
{
    public void Start()
    {
        Debug.Log("START!");
        //PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication);
        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptAlways, (code) =>
        {
            Debug.Log(code);
            if (code == SignInStatus.Success)
            {
                // Continue with Play Games Services
            }
            else
            {
                GameObject.Find("Play").GetComponent<Image>().color = Color.black;

                // Disable your integration with Play Games Services or show a login button
                // to ask users to sign-in. Clicking it should call
                // PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication).
            }
        });
    }

    internal void ProcessAuthentication(SignInStatus status)
    {

    }
}
