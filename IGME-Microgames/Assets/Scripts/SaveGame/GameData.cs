using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public int currency;
    public bool[] isFloor;

    public GameData()
    {
        //floor is 18*14
        //true means floor, false means wall
        isFloor = new bool[252];
        currency = 5000;
    }
}
