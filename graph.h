#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <queue>
#include <list>
#include <vector>

using namespace std;

class Graph {
private:
    int vertices; // Number of vertices in the graph
    std::list<int>* adjList; // Adjacency list representation using pointers

public:
    // Constructor
    Graph(int vertices);

    // Destructor
    ~Graph();

    // Copy constructor
    Graph(const Graph& other);

    // Copy assignment operator
    Graph& operator=(const Graph& other);

    // Function to add an edge to the graph
    void addEdge(int v, int w);

    // Breadth First Search (BFS) algorithm
    void BFS(int startVertex);

    // Function to print the shortest path from source to destination
    void printShortestPath(int source, int destination);

    // Recursive algorithm (Slide 10)
    void recursiveAlgorithm(int vertex);
};

#endif