#ifndef UNIT_TESTS_H
#define UNIT_TESTS_H

#include "graph.h"

inline bool testBasicGraphAndBFS() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    string expectedOutput = "0 1 2 3 4";
    return g.BFS(0) == expectedOutput;
}

inline bool testGraphWithCycle() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    string expectedOutput = "0 1 2 3";
    return g.BFS(0) == expectedOutput;
}

inline bool testShortestPathCalculation() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    string expectedOutput = "0 2 4 5";
    return g.printShortestPath(0, 5) == expectedOutput;
}

#endif