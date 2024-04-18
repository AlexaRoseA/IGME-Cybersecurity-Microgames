using System.Collections;
using System.Collections.Generic;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;

public class TitlescreenManager : MonoBehaviour
{
 
    public void Start()
    {
  

        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptAlways, (code) =>
        {
            Debug.Log(code);
            if (code == SignInStatus.Success)
            {
                // Continue with Play Games Services
                Debug.Log("Authentication Successful!");
            }
            else
            {
                //TODO: Google play failed
                Debug.Log("Authentication Failed");
                //GameObject.Find("Play").GetComponent<Image>().color = Color.black;


                // Disable your integration with Play Games Services or show a login button
                // to ask users to sign-in. Clicking it should call
                // PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication).
            }
        });
    }


}
