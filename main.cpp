#include "graph.h"
#include "unitTests.h"

int main() {

    cout << testAddEdge << endl;
    cout << testAddVertex << endl;
    cout << testBFS << endl;
    cout << testPrintShortestPath << endl;

    string input;
    string input2;
    int i;
    
    // enter number of vertices
    cout << "Enter number of vertices(nodes): ";
    getline(cin, input);
    Graph G;
    for (i = 0; i < stoi(input); ++i) {
        G.addVertex();
    }

    // enter edges
    cout << "Enter an edge (type 'stop' to exit): " << endl;
    while (true) {
        getline(cin, input);
        if (input == "stop") break;
        cout << input << " to ? ";
        getline(cin, input2);
        G.addEdge(stoi(input), stoi(input2));
        cout << "adding edge " << input << " to " << input2 << endl;
    }

    // enter start node
    cout << "Enter a VALID starting node: " << endl;
    getline(cin, input);
    G.BFS(stoi(input));

    // enter start and end node for path
    cout << "Enter a VALID starting node:" << endl;
    getline(cin, input);
    cout << "Enter a VALID ending node:" << endl;
    getline(cin, input2);

    cout << G.printShortestPath(stoi(input), stoi(input2));

    return 0;
}