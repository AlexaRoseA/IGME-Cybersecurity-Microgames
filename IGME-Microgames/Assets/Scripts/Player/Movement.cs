using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using Unity.Collections;

public class Movement : MonoBehaviour
{
    // Player object
    public GameObject player;

    // Player input system 
    private PlayerInput playerInput;
    private InputAction touchMovementAction;
    private InputAction touchPressAction;

    // World position of the mouse press
    private Vector3 worldpos;

    private const int MOVE_COST = 10;
    private const int MOVE_DIAG_COST = 14;


    /// <summary>
    /// Awake function that pulls the default player movement
    /// </summary>
    private void Awake()
    {
        playerInput = GetComponent<PlayerInput>();
        touchPressAction = playerInput.actions.FindAction("TouchPress");
        touchMovementAction = playerInput.actions.FindAction("TouchMovement");
    }

    void Start()
    {
        FindPath(new Vector2(0, 0), new Vector2(3, 1));
    }

    /// <summary>
    /// Update is called once per frame
    /// </summary>
    void Update()
    {
    }

    /// <summary>
    /// Subscribe after press
    /// </summary>
    private void OnEnable()
    {
        touchPressAction.performed += TouchPressed;
    }

    /// <summary>
    /// Unsubscribe after press
    /// </summary>

    private void OnDisable()
    {
        touchPressAction.performed -= TouchPressed;
    }

    /// <summary>
    /// On Press, find the press position and convert it to the world position for player movement.
    /// </summary>
    /// <param name="context"></param>
    private void TouchPressed(InputAction.CallbackContext context)
    {
        Vector2 screenPos = touchMovementAction.ReadValue<Vector2>();
        worldpos = Camera.main.ScreenToWorldPoint(screenPos);

        worldpos.z = player.transform.position.z;
        player.transform.position = worldpos;
    }

    private void FindPath(Vector2 startPosition, Vector2 endPosition)
    {
        // Generate a grid for the path nodes
        Vector2 gridSize = new Vector2(4, 4);

        // Create a native array
        NativeArray<PathNode> pathNodes = new NativeArray<PathNode>((int)gridSize[0] * (int)gridSize[1], Allocator.Temp);

        // For each node in the grid, generate all of it's values including
        // the cost as well as it's index inside the grid. 
        for(int x = 0; x < gridSize[0]; x++)
        {
            for(int y = 0; y < gridSize[1]; y++)
            {
                PathNode node = new PathNode();
                node.x = x;
                node.y = y;
                node.index = returnIndex(x, y, (int)gridSize[0]);

                node.gCost = int.MaxValue;
                node.hCost = CalculateDistanceCost(new Vector2(x, y), endPosition);
                node.fCost = node.gCost + node.hCost;

                node.isWalkable = true;
                node.cameFromIndex = -1;

                pathNodes[node.index] = node;
            }
        }

        // Make a copy, modify it, and then return it back to the array updated.
        // Start Node
        PathNode startNode = pathNodes[returnIndex((int)startPosition[0], (int)startPosition[1], (int)gridSize[0])];
        startNode.gCost = 0;
        startNode.fCost = startNode.gCost + startNode.hCost;
        pathNodes[startNode.index] = startNode;

        // End Node
        int endIndex = returnIndex((int)endPosition[0], (int)endPosition[1], (int)gridSize[0]);

        // Neighbours
        NativeArray<Vector2> neighbours = new NativeArray<Vector2>(new Vector2[]
        {
            new Vector2(-1, 0), // Left pos
            new Vector2(1,0), // Right pos
            new Vector2(0, 1), // Up pos
            new Vector2(0, -1), // Down pos
            new Vector2(-1, -1), // Left down pos
            new Vector2(-1, 1), // Left up pos
            new Vector2(1, -1), // Right down pos
            new Vector2(1, 1) /// Right up pos
        }, Allocator.Temp);

        // Generate lists for open and closed spots to move to
        NativeList<int> openSpot = new NativeList<int>(Allocator.Temp);
        NativeList<int> closeSpot = new NativeList<int>(Allocator.Temp);

        // Add the starting node to the list
        openSpot.Add(startNode.index);

        // While there is a spot open, find the next lowest cost node
        // And set the current node to the next index.
        while(openSpot.Length > 0)
        {
            int currentIndex = GetLowestFCost(openSpot, pathNodes);
            PathNode currentNode = pathNodes[currentIndex];

            // If the current index is our ending, break out of the loop
            if(currentNode.index == endIndex)
            {
                break;
            }

            // If we didn't reach the end, remove current node from the
            // open list and keep repeating until the end is reached.
            for (int i = 0; i < openSpot.Length; i++)
            {
                if (openSpot[i] == currentIndex)
                {
                    openSpot.RemoveAtSwapBack(i);
                    break;
                }
            }

            // Now add the current node to the closed list
            closeSpot.Add(currentIndex);

            // Cycle through and check the neighbours
            for (int i = 0; i < neighbours.Length; i++)
            {
                Vector2 neighbourCheck = neighbours[i];
                Vector2 neighbourPos = new Vector2(currentNode.x + (int)neighbourCheck[0], currentNode.y + (int)neighbourCheck[1]);

                if(!CheckInGrid(neighbourPos, gridSize)) {
                    // Neighbour is not in a valid position!
                    continue;
                }

                // Get the neighbour index
                int neighbourIndex = returnIndex((int)neighbourPos[0], (int)neighbourPos[1], (int)gridSize[0]);

                if(closeSpot.Contains(neighbourIndex))
                {
                    // We already checked this neighbour!
                    continue;
                }

                PathNode neighbourNode = pathNodes[neighbourIndex];
                if(!neighbourNode.isWalkable)
                {
                    // The neighbour is not walkable!
                    continue;
                }

                Vector2 currentNodePos = new Vector2(currentNode.x, currentNode.y);
                int tempGCost = currentNode.gCost + CalculateDistanceCost(currentNodePos, neighbourPos);

                // If the cost is cheaper, move to this new node
                // And set the new node's camefrom to the be prior index.

                if(tempGCost < neighbourNode.gCost)
                {
                    neighbourNode.cameFromIndex = currentIndex;
                    neighbourNode.gCost = tempGCost;
                    neighbourNode.fCost = neighbourNode.gCost + neighbourNode.hCost;
                    pathNodes[neighbourIndex] = neighbourNode;

                    // Add to the open list
                    if(!openSpot.Contains(neighbourNode.index))
                    {
                        openSpot.Add(neighbourNode.index);
                    }
                }
            }
        }

        // Check the end node and see if there's a valid path or not.
        PathNode endNode = pathNodes[endIndex];
        if (endNode.cameFromIndex == -1)
        {
            // There is no path!
            Debug.Log("Didn't find a path!");
        } else
        {
            // There is a path!
            NativeList<Vector2> path = CalculatePath(pathNodes, endNode);

            // Print out the points in the path
            foreach (Vector2 pathPos in path )
            {
                Debug.Log(pathPos);
            }
            
            //Dispose of the path after use
            path.Dispose();
        }

        // Dispose of all strut types
        openSpot.Dispose();
        closeSpot.Dispose();
        pathNodes.Dispose();
        neighbours.Dispose();
    }

    /// <summary>
    /// Calculate the path starting from the end node 
    /// </summary>
    /// <param name="array">The pathnode array holding all the nodes</param>
    /// <param name="end">The end pathnode</param>
    /// <returns></returns>
    private NativeList<Vector2> CalculatePath(NativeArray<PathNode> array, PathNode end)
    {
        if(end.cameFromIndex == -1)
        {
            // There is no path! Return empty!
            return new NativeList<Vector2>(Allocator.Temp);
        } else
        {
            // There is a path! Walk backwards!
            NativeList<Vector2> path = new NativeList<Vector2>(Allocator.Temp);
            path.Add(new Vector2(end.x, end.y));

            PathNode current = end;
            while(current.cameFromIndex != -1)
            {
                PathNode cameFrom = array[current.cameFromIndex];
                path.Add(new Vector2(cameFrom.x, cameFrom.y));
                current = cameFrom;
            }
            return path;
        }
    }

    /// <summary>
    /// Calculates a cost between point a to b  
    /// </summary>
    /// <param name="pos1">Position (x, y) of point one</param>
    /// <param name="pos2">Position (x, y) of poitn two</param>
    /// <returns></returns>
    private int CalculateDistanceCost(Vector2 pos1, Vector2 pos2)
    {
        int xDis = Mathf.Abs((int)pos1[0] - (int)pos2[0]);
        int yDis = Mathf.Abs((int)pos1[1] - (int)pos2[1]);

        int remain = Mathf.Abs(xDis - yDis);
        return MOVE_DIAG_COST * Mathf.Min(xDis, yDis) + MOVE_COST * remain;
    }

    /// <summary>
    /// Returns if the gridPos is inside the grid
    /// </summary>
    /// <param name="gridPos">Position in the grid to check</param>
    /// <param name="gridItself">The entire grid itself</param>
    /// <returns></returns>
    private bool CheckInGrid(Vector2 gridPos, Vector2 gridItself)
    {
        // Returns if above 0 and within the actual width and height of the grid
        return gridPos[0] >= 0 && 
               gridPos[1] >= 0 &&
               gridPos[1] < gridItself[0] &&
               gridPos[1] <= gridItself[1];

    }

    /// <summary>
    /// Returns the index with the lowest cost in the list
    /// </summary>
    /// <param name="list">The list of indexes of the nodes</param>
    /// <param name="nodeArray">The node array to reference for finding lowest fCost</param>
    /// <returns></returns>
    private int GetLowestFCost(NativeList<int> list, NativeArray<PathNode> nodeArray)
    {
        // Set the lowest cost by default to the first position in the list
        PathNode lowestCost = nodeArray[list[0]];

        // For each node in the list, compare and set if one is lower than the other
        for(int i = 1; i < list.Length; i++)
        {
            PathNode tester = nodeArray[list[i]];
            if(tester.fCost < lowestCost.fCost)
            {
                lowestCost = tester;
            }
        }

        return lowestCost.index;
    }

    /// <summary>
    /// Converts x and y position to the index.
    /// </summary>
    /// <param name="x">X position</param>
    /// <param name="y">y Position</param>
    /// <param name="gridWidth">Width of the entire grid</param>
    /// <returns></returns>
    private int returnIndex(int x, int y, int gridWidth) 
    {
        return x + y * gridWidth;
    }

    private struct PathNode
    {
        // X and y values of the node itself
        public int x;
        public int y;

        // Index of the current node
        public int index;

        // Move cost from start node to next node
        public int gCost;

        // Estimated cost to the end node
        public int hCost;

        // Added g and h together cost
        public int fCost;

        // If the node is walkable
        public bool isWalkable;

        // Which node prior the player came from
        public int cameFromIndex;
    }
}
