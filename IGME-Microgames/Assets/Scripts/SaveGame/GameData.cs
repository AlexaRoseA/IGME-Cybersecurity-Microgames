using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GameData
{
    public int currency;
    public bool[] isFloor;
    public int[] purchaseStates;
    public WorkstationSaveData[] workstationSaveDatas;

    public GameData()
    {
        //floor is 18*14- converted to 1d for serialization
        //true means floor, false means wall
        isFloor = new bool[252];
        currency = 5000;
        purchaseStates = new int[4];
        workstationSaveDatas = new WorkstationSaveData[4];
    }
}
