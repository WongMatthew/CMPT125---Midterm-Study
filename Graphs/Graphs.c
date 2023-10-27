// W8(2)

// ============================================================================
/*
Graphs - Describes the relationship among items in a collection
- The items are called vertices (Represented via dots or junctions)
- The relations are called edgeds (Represented by lines between vertices)

Example1: Social Circles/Networks
Alice is friends with Bob and Carl, and Bob is friends with Dan

Carl <-> Alice <-> Bob <-> Dan

Example2: Transit Stops
Granville, Abbott, Main, Commercial, etc.
*/
// ============================================================================
/* Properties/Terminologies

Path: A sequence of edges with connects a vertex to another vertex (Connects one item to another)
- A cycle happens if there is a path connected to a vertex back to itself

Connected Graph: A graph in which there is a path from any vertex to any other vertex
- A graph is "disconnected" if there is at least one vertex that cannot be reached from any other vertices

Completed Graph (Opposite of disconnected graph): A graph in which there is an edge between any 2 vertices

Weighted Graph: A graph in which each edge has a value
- Example: Distance between two stops in a transportation network

Directed graph: A graph in which each edge only describes the relation from one vertex to another
- Example: A follows B, but doesn't mean B follows A
- A graph is "non-directed" if each edge is bidirectional
- Example: If A is friend of B, then B is a friend of A
*/
// ============================================================================
// Representing graphs in C

// Adjacency Matrix
#define NUM_OF_VERTICES 

int adjMatrix[NUM_OF_VERTICES][NUM_OF_VERTICES];

// No edge between vertex 0 and vertex 1
adjMatrix[0][1] = 0;
adjMatrix[1][0] = 0;

// Edge between vertex 2 and vertex 3
adjMatrix[2][3] = 1;
adjMatrix[3][2] = 1;

// ============================================================================
// Adjacency List
#define NUM_OF_VERTICES

// LList is a linked list
LList adjList[NUM_OF_VERTICES];

// No edge between vertex 0 and vertex 1
// Do nothing

// Edge between vertex 2 and vertex 3
insertEnd(adjList[2], 3);
insertEnd(adjList[3], 2);