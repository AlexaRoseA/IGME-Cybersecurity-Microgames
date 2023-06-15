using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnerManager : MonoBehaviour
{
    public PacketSpawner[] packetSpawners;
    public float maxDifficulty;

    /// <summary>
    /// picks one of the available patterns, based on the combined threat level of the packet spawners. 
    /// This doesn't update the pattern on its own, it simply returns the pattern that the spawner should use. 
    /// </summary>
    /// <param name="availablePatterns">patterns for the manager to pick from</param>
    /// <param name="spawner">the spawner that will be updated. </param>
    /// <returns></returns>
    public PacketSpawnPattern NextPattern(PacketSpawnPattern[] availablePatterns, PacketSpawner spawner)
    {
        int changingSpawnerIndex = -1;
        float currentDifficulty = 0f;

        //assess current difficulty level, sum of all of the spawner's threat levels.
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


        //builds a list of all patterns that have a low enough threat level to not go over the max. 
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

        //return a random pattern that is easy enough to not go over the max difficulty. 
        return validPatterns[Random.Range(0, validPatterns.Count)];
    }
}
