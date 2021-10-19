
# RECURSIVE BFS IN C++

### Contributed By-- [Tamal Das](https://github.com/Rijudas149)

***Q. What is BFS?***

***Ans.*** Breadth-First Search is an algorithm to traverse tree/graph. It starts from the root node and explores the neighbouring nodes before moving to the next level neighbour nodes.

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

### RECURSIVE METHOD OF BFS

We can implement BFS in recursive way, Here is the C++ code for recursive code--




## Code


```bash
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Edge {
    int src, dest;
};
class Graph
{
public:
    vector<vector<int>> adjList;
    Graph(vector<Edge> const &edges, int N)
    {
        adjList.resize(N);
        for (auto &edge: edges)
        {
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
};
void recursiveBFS(Graph const &graph, queue<int> &q,
                    vector<bool> &discovered)
{
    if (q.empty()) {
        return;
    }
    int v = q.front();
    q.pop();
    cout << v << " ";
    for (int u: graph.adjList[v])
    {
        if (!discovered[u])
        {
            discovered[u] = true;
            q.push(u);
        }
    }
 
    recursiveBFS(graph, q, discovered);
}
 
int main()
{
    vector<Edge> edges = {
        {1, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {5, 9},
        {5, 10}, {4, 7}, {4, 8}, {7, 11}, {7, 12}
    };
    int N = 15;
    Graph graph(edges, N);
    vector<bool> discovered(N, false);
    queue<int> q;
    for (int i = 0; i < N; i++)
    {
        if (discovered[i] == false)
        {
            discovered[i] = true;
            q.push(i);
            recursiveBFS(graph, q, discovered);
        }
    }
 
    return 0;
}



```
## Output

```bash
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14

```

## Time Complexity

The time complexity of BFS is ***O(V+E)*** where ***V*** is ***total number of vertices*** and ***E*** is ***total number of edges***.