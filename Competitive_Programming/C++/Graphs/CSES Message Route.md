# CSES Message Route
<!-- ## Definition -->

Syrjälä's network has n computers and m connections. Your task is to find out if Uolevi can send a message to Maija, and if it is possible, what is the minimum number of computers on such a route.

### Input

The first input line has two integers n and m: the number of computers and connections. The computers are numbered 1,2,…,n. Uolevi's computer is 1 and Maija's computer is n.

Then, there are m lines describing the connections. Each line has two integers a and b: there is a connection between those computers.

Every connection is between two different computers, and there is at most one connection between any two computers.

### Output

If it is possible to send a message, first print k: the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.

If there are no routes, print "IMPOSSIBLE".

### Constraints
* 2 ≤ n ≤105 
* 1 ≤ m ≤2⋅105
* 1 ≤ a,b ≤n

### Example
```
Input:
5 5
1 2
1 3
1 4
2 3
5 4


Output:
3
1 4 5
```

# Prerequistes

### BFS
Breadth-first search is an algorithm for searching a tree data structure for a node that meets a predefined property. It begins at the tree's root and investigates all nodes at the current depth before moving on to nodes at the next depth level.

<p align="center">
  <img src="https://cdn.guru99.com/images/1/020820_0543_BreadthFirs1.png" width="550" title="bfs">
</p>

### Single Source Shortest Path (SSSP)
The Single-Source Shortest Path (SSSP) problem is concerned with determining the shortest paths between a given vertex v and all other vertices in a graph. This problem is solved by algorithms such as Breadth-First-Search (BFS) for unweighted graphs and Dijkstra.

<p align="center">
  <img src="https://static.javatpoint.com/tutorial/daa/images/single-source-shortest-path-in-a-directed-acyclic-graphs2.png" width="550" title="sssp">
</p>

## Basic Approach
We will use Breadth-First-Search (BFS) until we reach our target, keep a note of the parent node, and then print the following records in reverse order.

## Implementation
First, we will construct Breadth-First-Search (BFS), which will also maintain track of the parent nodes that have been visited.

### Template and Variables
```C++
#include <bits/stdc++.h>

int n, m; 
vector<vector<int>> g;
vector<int> parent; //vector to hold parent.
vector<bool> visited; //vector to hold if the nodes are visited or not.

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

```
### Step 1 : Apply BFS and maintain a visited record of parent node.
Create a queue, push the parent node, then iterate until the queue is empty. Iterate through the children of the node we placed into the queue and see if they have been visited; if not, mark them as visited and add them to the queue.
```
void bfs() {
	visited[1] = true;
	
  queue<int> q;
	q.push(1);
  
	while(!q.empty()) {
		int u = q.front();
		q.pop();
    // iterate through child of each vertices and check whether it is visited or not.
		for(auto v: g[u]) {
			if(!visited[v]) {
				visited[v] = true;
				parent[v] = u;
				q.push(v);
			}
		}
	} 
}
```
### Step 2 : Trace it back from the end node to the start node.
Using the stack, this method will print the data in reverse order till we reach the start node.

```C++
  int nOde = n;
	stack<int> st;
	while(nOde != -1) {
		st.push(nOde);
		nOde = parent[nOde];
	}
 
	cout << st.size() << endl;
 
	while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
```

### Code: 

```C++
int main() {
	  ios_base::sync_with_stdio(0);
    cin.tie(0);
  
	  cin >> n >> m;
	 
    g.resize(n+1);
	  visited.resize(n+1);
	  parent.resize(n+1);
	  
    for(int i = 0; i<=n; ++i) {
		  parent[i] = -1;
	  }
	  for(int i = 0; i < m; ++i) {
		  int u, v;
		  cin >> u >> v;
    
		  g[u].push_back(v);
		  g[v].push_back(u);
	  }
	  
    bfs();
 
	  if(parent[n] == -1) {
		  cout <<  "IMPOSSIBLE";
		  return 0;
	  }
 
 
	  int nOde = n;
	  stack<int> st;
	  while(nOde != -1) {
		  st.push(nOde);
		  nOde = parent[nOde];
	  }
 
	  cout << st.size() << endl;
 
	  while(!st.empty()) {
		  cout << st.top() << " ";
		  st.pop();
  	}
 }
```
### Time and Space Complexity
```
Time Complexity : O(V x E) // Where V is number of vertices and E is number of edges
```
```
Space Compexity : O(n x m)
```
### Problem Tag
* BFS
* SSSP
