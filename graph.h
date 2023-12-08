#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <list>
#include <queue>
#include <string>
#include <vector>

using namespace std;

class Graph {
public:
    struct Node {
        int value;        // value of the node
        string color;     // tracks the state of the node
        Node* pi;         // parent node
        int d;            // distance from source node
        vector<Node*> edges; // Adjacent nodes
    };
    Graph();
    ~Graph();
    Graph(const Graph &other);
    Graph &operator=(const Graph &other);
    const vector<Node>& getNodes() const;
    void addEdge(int v, int w);             // add an edge to the graph
    void addVertex();                       // add an vertex to the graph
    void BFS(int s);                      // BFS algorithm
    string printShortestPath(int s, int v); // print the shortest path from source to destination
    void recursiveAlgorithm(int vertex);    // recursive algorithm

private:
    vector<Node> nodes; // store nodes of the graph
};

#endif