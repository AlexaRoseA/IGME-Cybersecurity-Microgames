using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PacketSpawner : MonoBehaviour
{
    public GameObject packetPrefab;
    public LineRenderer packetTrack;
    public bool startAtEnd = false;
    public PacketSpawnPattern[] packetSpawnPatterns;

    private float patternTime = 0f;
    private PacketSpawnPattern currentPattern;
    private int packetsSent = 0;


    // Start is called before the first frame update
    void Start()
    {
        NextPattern();
    }

    // Update is called once per frame
    void Update()
    {
        patternTime += Time.deltaTime;
        if(patternTime > currentPattern.duration)
        {
            NextPattern();
            return;
        }
        if(packetsSent < currentPattern.spawnTimes.Length)
        {
            if (patternTime > currentPattern.spawnTimes[packetsSent].time)
            {
                SendPacket(Random.Range(0f, 1f) < currentPattern.spawnTimes[packetsSent].maliciousChance);
            }
        }
    }

    private void NextPattern()
    {
        patternTime = 0;
        currentPattern = packetSpawnPatterns[Random.Range(0, packetSpawnPatterns.Length)];
        packetsSent = 0;
    }
    
    void SendPacket(bool malicious)
    {
        packetsSent++;
        GameObject packet = Instantiate(packetPrefab, packetTrack.GetPosition(startAtEnd ? 0 : (packetTrack.positionCount - 1)), Quaternion.identity);
        packet.GetComponent<PacketMovement>().track = packetTrack;
        packet.GetComponent<PacketMovement>().startAtEnd = startAtEnd;
        packet.GetComponent<PacketMaliciousness>().malicious = malicious;
    }
}
