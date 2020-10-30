/*
Code is part of iGraphly Library

Name of the algorithm:

Time Complexity:

Pros:

Cons:

Algorithm Description:

*/
#include<stdio.h>

struct Edge
{
    //To Store Weighted edge of the Graph
    int src, dest, weight;
};

//Structure can represent connected, undirected & weighted graph as a collection of edges
struct Graph
{
    // V -> # Vertices, E -> # Edges
    int V, E;

    // Graph is represented as an array of edges. Since the graph is undirected, the edge
    // from src to dest is also edge from dest to src. Both are counted as 1 edge here.
    Edge *edge;
};

// Structure to represent a subset for union-find
struct subset
{
    int parent;
    int rank;
};

// Function prototypes for union-find
int find(struct subset subsets[], int i);
void union(struct subset subsets[], int x, int y);

// Logic for MST using Boruvka's Algorithm
void boruvkaMST(struct Graph* graph)
{

}