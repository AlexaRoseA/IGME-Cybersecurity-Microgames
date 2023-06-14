using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "SpawnPattern", menuName = "ScriptableObjects/SpawnManagerScriptableObject", order = 1)]
public class PacketSpawnPattern : ScriptableObject
{
    public float duration;
    public Spawn[] spawnTimes;
}

[System.Serializable]
public struct Spawn
{
    public float time;
    public float maliciousChance;
}

