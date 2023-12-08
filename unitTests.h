#ifndef UNIT_TESTS_H
#define UNIT_TESTS_H

#include "graph.h"

bool testAddEdge() {
    Graph g;
    g.addVertex();
    g.addVertex();
    g.addVertex();
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    const auto& nodes = g.getNodes();
    return (nodes[0].edges.size() == 1) &&
           (nodes[1].edges.size() == 2) &&
           (nodes[2].edges.size() == 1);
}

bool testAddVertex() {
    Graph g;
    g.addVertex();
    g.addVertex();
    g.addVertex();
    const auto& nodes = g.getNodes();
    return (nodes.size() == 3) &&
           (nodes[0].value == 1) &&
           (nodes[1].value == 2) &&
           (nodes[2].value == 3);
}

bool testBFS() {
    Graph g;
    g.addVertex();
    g.addVertex();
    g.addVertex();
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    const auto& nodes = g.getNodes();
    string output;
    streambuf* coutBuf = cout.rdbuf();
    cout.rdbuf(reinterpret_cast<basic_streambuf<char>*>(0));
    g.BFS(1);
    cout.rdbuf(coutBuf);
    string expectedOutput = "Node 1: NULL, 0;\nNode 2: 1, 1;\nNode 3: 2, 2;\n";
    return (output == expectedOutput);
}

bool testPrintShortestPath() {
    Graph g;
    g.addVertex();
    g.addVertex();
    g.addVertex();
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    const auto& nodes = g.getNodes();
    string output;
    streambuf* coutBuf = cout.rdbuf();
    cout.rdbuf(reinterpret_cast<basic_streambuf<char>*>(0));
    string path = g.printShortestPath(1, 3);
    cout.rdbuf(coutBuf);
    string expectedPath = "1 -> 2 -> 3";
    return (path == expectedPath);
}

#endif