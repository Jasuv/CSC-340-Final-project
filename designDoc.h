/*
1. Data Structures
1.1 Graph Class
1.1.1 std::vector<Node> nodes
Rationale: Dynamic array to store graph nodes.
1.2 Node Struct
struct Node {
    int value;
    std::string color;
    Node* pi;
    int d;
    std::vector<Node*> edges;
};
Rationale: Represents a node in the graph with relevant properties.
2. Member/Free-Standing Functions
2.1 Member Functions
2.1.1 Graph()
    Description: Constructor.
2.1.2 ~Graph()
    Description: Destructor, releases dynamically allocated memory.
2.1.3 void addEdge(int v, int w)
    Description: Adds an edge between nodes v and w.
2.1.4 void addVertex()
    Description: Adds a new vertex.
2.1.5 void BFS(int s)
    Description: Breadth-First Search (BFS) traversal starting from node s.
2.1.6 std::string printShortestPath(int s, int v)
    Description: Prints shortest path from node s to v.
2.1.7 void recursiveAlgorithm(int vertex)
    Description: Recursive algorithm, possibly using depth-first search (DFS).
 */