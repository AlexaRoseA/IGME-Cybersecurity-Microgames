using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnerManager : MonoBehaviour
{
    public PacketSpawner[] packetSpawners;
    public float maxDifficulty;

    public PacketSpawnPattern NextPattern(PacketSpawnPattern[] availablePatterns, PacketSpawner spawner)
    {
        int changingSpawnerIndex = -1;
        float currentDifficulty = 0f;

        for (int i = 0; i < packetSpawners.Length; i++)
        {
            if(spawner == packetSpawners[i])
            {
                changingSpawnerIndex = i;
                if (packetSpawners[i].currentPattern != null)
                {
                    currentDifficulty -= packetSpawners[i].currentPattern.threatLevel;
                }
            }
            else
            {
                if(packetSpawners[i].currentPattern != null)
                {
                    currentDifficulty += packetSpawners[i].currentPattern.threatLevel;
                }
                
            }
        }

        List<PacketSpawnPattern> validPatterns = new List<PacketSpawnPattern>();
        if(currentDifficulty > maxDifficulty)
        {
            currentDifficulty = maxDifficulty - 0.1f;
        }
        foreach(PacketSpawnPattern pattern in availablePatterns)
        {
            if(currentDifficulty + pattern.threatLevel <= maxDifficulty)
            {
                validPatterns.Add(pattern);
            }
        }
        //Debug.Log("valid patterns: " + validPatterns.Count);
        return validPatterns[Random.Range(0, validPatterns.Count)];
    }
}
