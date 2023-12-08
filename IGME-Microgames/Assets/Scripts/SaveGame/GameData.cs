using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public int currency;
    public Dictionary<Vector3Int, bool> isFloor;

    public GameData()
    {
        //floor is 18*13
        //true means floor, false means wall
        isFloor = new Dictionary<Vector3Int, bool>();
        currency = 0;
    }
}
