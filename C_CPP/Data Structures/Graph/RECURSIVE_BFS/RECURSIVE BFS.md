# RECURSIVE BFS IN C++

**Definition Of BFS**

Breadth-First Search is an algorithm to traverse tree/graph. It starts from the root node and explores the neighbouring nodes before moving to the next level neighbour nodes.

**Applications of BFS:-**

* Copying Garbage Collection, Cheney's algorithm
* Finding the shortest path between two nodes with path length measured by the total number of edges(An advantages over DFS)
* Minimum Spanning Tree For an undirected graph
* Ford-Fulkerson Method for computing the flow from a flow network
* Web Crawler

**Implementations of BFS**

There are basically 2 ways by which we can implement BFS algorithm

* Iterative Method
* Recursive Method

## RECURSIVE METHOD OF BFS

We can implement BFS in recursive way, Here is the C++ code for recursive code--  

### C++ Code  

```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
// Data structure to store a graph edge
struct Edge {
    int src, dest;
};
 
// A class to represent a graph object
class Graph
{
public:
    // a vector of vectors to represent an adjacency list
    vector<vector<int>> adjList;
 
    // Graph Constructor
    Graph(vector<Edge> const &edges, int N)
    {
        // resize the vector to hold `N` elements of type `vector<int>`
        adjList.resize(N);
 
        // add edges to the undirected graph
        for (auto &edge: edges)
        {
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
};
 
// Perform BFS on the graph starting from vertex `v`
void BFS(Graph const &graph, int v, vector<bool> &discovered)
{
    // create a queue for doing BFS
    queue<int> q;
 
    // mark the source vertex as discovered
    discovered[v] = true;
 
    // enqueue source vertex
    q.push(v);
 
    // loop till queue is empty
    while (!q.empty())
    {
        // dequeue front node and print it
        v = q.front();
        q.pop();
        cout << v << " ";
 
        // do for every edge `v —> u`
        for (int u: graph.adjList[v])
        {
            if (!discovered[u])
            {
                // mark it as discovered and enqueue it
                discovered[u] = true;
                q.push(u);
            }
        }
    }
}
 
int main()
{
    // vector of graph edges as per the above diagram
    vector<Edge> edges = {
        {1, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {5, 9},
        {5, 10}, {4, 7}, {4, 8}, {7, 11}, {7, 12}
        // vertex 0, 13, and 14 are single nodes
    };
 
    // total number of nodes in the graph
    int N = 15;
 
    // build a graph from the given edges
    Graph graph(edges, N);
 
    // to keep track of whether a vertex is discovered or not
    vector<bool> discovered(N, false);
 
    // Perform BFS traversal from all undiscovered nodes to
    // cover all unconnected components of a graph
    for (int i = 0; i < N; i++)
    {
        if (discovered[i] == false)
        {
            // start BFS traversal from vertex `i`
            BFS(graph, i, discovered);
        }
    }
 
    return 0;
}

```
### Output  

```cpp
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14

```

### Time Complexity

The time complexity of BFS is ***O(V+E)*** where ***V*** is ***total number of vertices*** and ***E*** is ***total number of edges***.