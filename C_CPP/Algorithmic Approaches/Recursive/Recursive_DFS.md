# Recursive  

The C/C++ language allows a programmer to write subroutines and functions that call themselves. These routines are called recursive. We can also say the process of defining something in terms of itself is recursive.

For example:
```cpp
int factorial(int x) {
  int a, b;
  if (n == 0)
    return (1);
  a = x - 1;
  b = factorial(a);
  return (x * b);
}
```

In the statement b=factorial(a); the function factorial calls itself.

## DFS

The DFS (depth-first search) or DFT (depth-first traverse) algorithm is used to traverse or search data structures such as graphs. Before retracing, the algorithm starts at the root node and investigates each branch as far as possible. So the basic idea is to start at the root or any arbitrary node and mark it, then advance to the next unmarked node and repeat until there are no more unmarked nodes. Then go back and check for any more unmarked nodes to cross. Finally, print the path's nodes.
	
Hence the algorithm for DFS:-

- Make a recursive function that takes the node's index and a visited array as input.
- Mark the current node as visited, then print it.
- Call the recursive function with the index of the adjacent node after traversing all nearby and unmarked nodes.

### Example
```cpp
// C++ program to print DFT traversal from
//a specific vertex in a graph
#include <bits/stdc++.h>
using namespace std;
class Graph
{
  public:
    map < int, bool > visited;
  map < int, list < int >> adj;

  // addEdge function to add an edge to graph
  void addEdge(int v, int w);
  void DFS(int v);
};

void Graph::addEdge(int v, int w) {
  adj[v].push_back(w); // This will add w to v’s list.
}

void Graph::DFS(int v) {
  // Now the current node marked as visited 
  visited[v] = true;
  cout << v << " ";

  // Recursion for all the vertices adjacent
  // to this vertex
  list < int > ::iterator i;
  for (i = adj[v].begin(); i != adj[v].end(); ++i)
    if (!visited[ * i])
      DFS( * i);
}

int main() {
  // Create a graph given in the above diagram
  Graph g;
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  cout << "Following is Depth First Search"
  " (starting from vertex 2) \n";
  g.DFS(2);

  return 0;
}
```

Output
```
Following is Depth First Search (starting from vertex 2)
2 0 1 3
```
