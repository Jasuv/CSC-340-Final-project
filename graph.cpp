#include "Graph.h"
static int ID = 0;

// Constructor
Graph::Graph() { }

// Destructor
Graph::~Graph() {
    nodes.clear();
}

// Copy Constructor
Graph::Graph(const Graph &other) {
    nodes = other.nodes; // Assuming Node struct supports copying or is trivially copyable
}

// Copy Assignment Operator
Graph &Graph::operator=(const Graph &other) {
    if (this != &other) {
        nodes = other.nodes; // Assuming Node struct supports copying or is trivially copyable
    }
    return *this;
}

// returns the nodes
const vector<Graph::Node>& Graph::getNodes() const {
    return nodes;
}

// adds an edge
void Graph::addEdge(int v, int w) {
    nodes[v - 1].edges.push_back(&nodes[w - 1]);
    nodes[w - 1].edges.push_back(&nodes[v - 1]);
}

// adds a vertex
void Graph::addVertex() {
    Node newNode;
    ID++;
    newNode.value = ID;
    newNode.color = "WHITE";
    newNode.pi = nullptr;
    newNode.d = -1;
    newNode.edges.resize(0);
    nodes.push_back(newNode);
}

// simulates the BFS
void Graph::BFS(int s) {
    nodes[s-1].color = "GRAY";
    nodes[s-1].d = 0;
    nodes[s-1].pi = nullptr;
    queue<Node*> Q;
    Q.push(&nodes[s-1]);
    while (!Q.empty()) {
        Node *u = Q.front();
        Q.pop();
        for (auto &v : u->edges) {
            if (v->color == "WHITE") {
                v->color = "GRAY";
                v->d = u->d + 1;
                v->pi = u;
                Q.push(v);
            }
        }
        u->color = "BLACK";
        cout << "Node " + to_string(u->value) + ": " + 
                ((u->pi != nullptr) ? to_string(u->pi->value) : "NULL") + ", " + 
                to_string(u->d) + ";\n";
    }
}

// recursivley finds the shortest path
string Graph::printShortestPath(int s, int v) {
    string path;
    if (s == v) {
        path += to_string(s);
    } else if (nodes[v-1].pi == nullptr) {
        path += "No path from " + to_string(s) + " to " + to_string(v);
    } else {
        path += printShortestPath(s, nodes[v-1].pi->value) + " -> " + to_string(v);
    }
    return path;
}