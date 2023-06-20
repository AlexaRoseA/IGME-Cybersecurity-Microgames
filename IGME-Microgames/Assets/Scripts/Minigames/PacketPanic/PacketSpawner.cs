using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PacketSpawner : MonoBehaviour
{
    public GameObject packetPrefab;
    public LineRenderer packetTrack;
    public bool startAtEnd = false;
    public PacketSpawnPattern[] packetSpawnPatterns;
    public SpawnerManager spawnerManager;

    private float patternTime = 0f;
    public PacketSpawnPattern currentPattern;
    private int packetsSent = 0;
    public MinigameManager helper;


    // Start is called before the first frame update
    void Start()
    {
        helper = GameObject.Find("MinigameManager").GetComponent<MinigameManager>();

        NextPattern();
    }

    // Update is called once per frame
    void Update()
    {
        if(!helper.GetTimer())
        {
            return;
        }
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

    /// <summary>
    /// gets the next pattern from the spawnerManager, resets the pattern variables.
    /// </summary>
    private void NextPattern()
    {
        patternTime = 0;
        PacketSpawnPattern nextpattern = spawnerManager.NextPattern(packetSpawnPatterns, this);
        //Debug.Log(nextpattern);
        currentPattern = nextpattern;
        packetsSent = 0;
    }
    
    /// <summary>
    /// spawns a packet at the end of the track.
    /// </summary>
    /// <param name="malicious">determines whether or not the spawned packet will be malicious or not.</param>
    void SendPacket(bool malicious)
    {
        packetsSent++;
        GameObject packet = Instantiate(packetPrefab, packetTrack.GetPosition(startAtEnd ? 0 : (packetTrack.positionCount - 1)), Quaternion.identity);
        packet.GetComponent<PacketMovement>().track = packetTrack;
        packet.GetComponent<PacketMovement>().startAtEnd = startAtEnd;
        packet.GetComponent<PacketMaliciousness>().malicious = malicious;
        packet.GetComponent<PacketMaliciousness>().hider = malicious ? Random.Range(0, 10) == 0 : false;
    }
}
