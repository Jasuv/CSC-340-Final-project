#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <queue>
#include <list>
#include <vector>
#include <string>

using namespace std;

class Graph {
private:
    int vertices; // Number of vertices in the graph
    list<int>* adjList; // Adjacency list representation using pointers

public:
    Graph(int vertices);
    ~Graph();
    Graph(const Graph& other);
    Graph& operator=(const Graph& other);

    // add an edge to the graph
    void addEdge(int v, int w);
    // add an edge to the graph
    void addVertex(int v, int w);
    // BFS algorithm
    string BFS(int startVertex);
    // print the shortest path from source to destination
    string printShortestPath(int s, int v);
    // recursive algorithm
    void recursiveAlgorithm(int vertex);
};

#endif