#include "graph.h"

Graph::Graph(int vertices) : vertices(vertices) {
    adjList = new list<int>[vertices];
}

Graph::~Graph() {
    delete[] adjList;
}

/*
You could declare/implement a class that can be instantiated into a linked list. 
Class singlyList{
	Private:
        Node* head; //
};
std::vector<singlyList> adjacencyLists; 
*/

Graph::Graph(const Graph& other) : vertices(other.vertices) {
    adjList = new list<int>[vertices];
    for (int i = 0; i < vertices; ++i) {
        adjList[i] = other.adjList[i];
    }
}

Graph& Graph::operator=(const Graph& other) {
    if (this != &other) {
        delete[] adjList;
        vertices = other.vertices;
        adjList = new list<int>[vertices];
        for (int i = 0; i < vertices; ++i) {
            adjList[i] = other.adjList[i];
        }
    }
    return *this;
}

// add an edge to the graph
void Graph::addEdge(int v, int w) {
    adjList[v].push_back(w);
}

// add an edge to the graph
void Graph::addVertex(int v, int w) {
    //adjList[v].push_back(w);
}

// BFS algorithm
// each node: pi, d  (Node 1: null, 0; Node 2: 1, 1; Node 4: 3, 2)
// pi: the parent of a node in the resulting BFS tree;  NIL:  null
// input data: G=<V, E>, source node
string Graph::BFS(int startVertex) {
    vector<bool> visited(vertices);
    queue<int> queue;
    string output;

    visited[startVertex] = true;
    queue.push(startVertex);

    while (!queue.empty()) {
        int currentVertex = queue.front();
        output += to_string(queue.front()) + " ";
        queue.pop();

        for (const auto& neighbor : adjList[currentVertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queue.push(neighbor);
            }
        }
    }

    output.pop_back();
    return output;
}

// print the shortest path from source to destination
string Graph::printShortestPath(int source, int destination) {
    //1-->2
    //    2-->5
    //        5-->6
    //1-->3
    //    3-->4
}

// recursive algorithm
void Graph::recursiveAlgorithm(int vertex) {

}