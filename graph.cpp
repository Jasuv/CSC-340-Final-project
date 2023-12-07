#include "graph.h"

// Constructor
Graph::Graph(int vertices) : vertices(vertices) {
    adjList = new std::list<int>[vertices];
}

// Destructor
Graph::~Graph() {
    delete[] adjList;
}

// Copy constructor
Graph::Graph(const Graph& other) : vertices(other.vertices) {
    adjList = new std::list<int>[vertices];
    for (int i = 0; i < vertices; ++i) {
        adjList[i] = other.adjList[i];
    }
}

// Copy assignment operator
Graph& Graph::operator=(const Graph& other) {
    if (this != &other) {
        delete[] adjList;
        vertices = other.vertices;
        adjList = new std::list<int>[vertices];
        for (int i = 0; i < vertices; ++i) {
            adjList[i] = other.adjList[i];
        }
    }
    return *this;
}

// Function to add an edge to the graph
void Graph::addEdge(int v, int w) {
    adjList[v].push_back(w);
}

// Breadth First Search (BFS) algorithm
void Graph::BFS(int startVertex) {
    std::vector<bool> visited(vertices, false);
    std::queue<int> queue;

    visited[startVertex] = true;
    queue.push(startVertex);

    while (!queue.empty()) {
        int currentVertex = queue.front();
        std::cout << currentVertex << " ";
        queue.pop();

        for (const auto& neighbor : adjList[currentVertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queue.push(neighbor);
            }
        }
    }
}

// Function to print the shortest path from source to destination
void Graph::printShortestPath(int source, int destination) {
    // Implementation of shortest path algorithm (e.g., Dijkstra's or BFS)
    // ...

    // Print the shortest path
    // ...
}

// Recursive algorithm (Slide 10)
void Graph::recursiveAlgorithm(int vertex) {
    // Implementation of the recursive algorithm
    // ...
}