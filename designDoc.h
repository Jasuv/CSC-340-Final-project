/*
G=<V,E>
 - V: the set of nodes (or vertices)
 - E: the set of edges
    - Directed or undirected
    - Weighted or unweighted

BFS PSUEDO CODE:
procedure BFS(G, root) is
    let Q be a queue
    label root as explored
    Q.enqueue(root)
    while Q is not empty do
        v := Q.dequeue()
        if v is the goal then
            return v
        for all edges from v to w in G.adjacentEdges(v) do
            if w is not labeled as explored then
                label w as explored
                w.parent := v
                Q.enqueue(w)


your design doc.  (No need to include the BFS and shortest-path algorithms. Simply referring to the corresponding slides will suffice.

What you need to include:
-the list of data structures, and the rationale behind each.
-the list of member/free-standing functions; include a brief description for this fruncgtion if it’s straightforward, e.g., a simple accessor. For some function, you should consider to describe it in pseudocide, For example, if you choose to generate a visual representation of the BFS tree.
- briefly describe each team member’s main contributions.


run your program using a relatively small graph prepared by the instructor. This small graph will be described in the following format:
V: {1, 2, 3, 4, 5, 6, ...}    //the set of nodes, numbered sequentially from 1
E: {(1,2),  (2, 3), ...}        //the set of undirected edges
a source node for your program to produce a BFS-tree
a pair of nodes in V for your program to produce a shortest path
 */