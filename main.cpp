#include "graph.h"
#include "unitTests.h"

int main() {

    int start = 0;
    int end = 5;

    cout << "testing basic graph creation and BFS starting from vertex 0: " << (testBasicGraphAndBFS() ? " Success!!!" : " Failed...") << endl;
    cout << "testing graph with a cycle - BFS starting from vertex 0: " << (testGraphWithCycle() ? " Success!!!" : " Failed...") << endl;
    cout << "testing shortest path from " << to_string(start) << " to " << to_string(end) << (testShortestPathCalculation() ? " Success!!!" : " Failed...") << endl;

    return 0;
}