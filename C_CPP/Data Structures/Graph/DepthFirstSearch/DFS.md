# Graph ✨
> Graph is a non-linear data structure that is used in a wide number of applications in real life starting from Google Maps to Facebook. It is essentially a collection of nodes/vertices which are connected to each other through edges(either directed or undirected). 
> The two algorithms for graph traversal are
> #### 1. BFS (Breadth First Search) 
> #### 2. DFS (Depth First Search)
> Here, we will be talking about the implementation of graph traversal using DFS in cpp.
## What is Depth First Search? 🤔
In this traversal algorithm, we start from a node, visit its adjacent vertex and then recursively keep on visiting all the reachable vertices from it till there are no reachable vertices left. When there is no reachable vertex to visit, the algorithm backtracks to a point from where it can choose a new vertex to visit. 
Lets understand with the help of this undirected and connected graph.
![1](https://user-images.githubusercontent.com/88573135/134897904-950d2655-e563-4c1f-b147-3d660f2c948c.png)
<br>
One possible DFS traversal of this graph is 1-2-3-4-5-6
![2](https://user-images.githubusercontent.com/88573135/134897762-8c3a32bf-9a67-442e-b6d8-c36b912ad52c.png)
## How to implement DFS traversal of graph in cpp?
It’s super simple to implement DFS traversal! 😁 To represent graph we will use adjacency list and for DFS traversal a simple recursive code will do the trick.
```cpp
#include <bits/stdc++.h>
using namespace std;
void DFS_Traversal(vector<int> adj[], int source, bool visited[])
{
    visited[source] = true; //Marking vertex as visited
    cout << source << " ";
 
    for (int x : adj[source]) //For every neighbour of source vertex, run the loop
    {
        if (visited[x] == false) //If vertex is unvisited, do DFS Traversal
            DFS_Traversal(adj, x, visited);
    }
}
void DFS(vector<int> adj[], int V)
{
    bool visited[V];
    for (int i = 1; i < V; i++) //Marking all the vertices unvisited
        visited[i] = false;
 
    for (int i = 1; i < V; i++)
    {
        if (visited[i] == false) //If vertex is unvisited, do DFS Traversal
            DFS_Traversal(adj, i, visited);
    }
}
int main()
{
    int V, E;
    cin >> V >> E;              //taking input for Vertices and Edges
    vector<int> adj[V + 1];     //Vertices are numbered from 0 to V
    for (int i = 0; i < E; i++) //Adding edges inside adjacency list
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << "Following is Depth First Traversal: " << endl;
    DFS(adj, V + 1);
    return 0;
}
  ```
## Output:
  ![Screenshot (1331)](https://user-images.githubusercontent.com/88573135/134897018-531a3473-8fd6-4ae1-b603-d11b4c1ac2bf.png)

* In this cpp code within the main function, we are adding the edges of graph in the adjacency list and then calling the DFS function with the adjacency list and number of vertices as input parameters.
* Within the DFS function we are marking every vertex in the boolean visited[] array as false initially as none of the vertices are visited.
* Then we call the actual recursive function DFS_Traversal function with adjacency list, vertex index and the visited[] array as input parameters.
* Inside DFS_Traversal function the source vertex is marked as visited in visited array. 
* Now for every neighbouring vertex of the source , DFS_Traversal will be called recursively.
* At the end of the recursion all vertices will get printed one by one.
<br>
<br>
You are done with the basics of DFS! Happy Learning! ❤️
