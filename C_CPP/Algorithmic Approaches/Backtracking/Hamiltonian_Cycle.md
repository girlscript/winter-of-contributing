# Hamiltonian Cycle
Hamiltonian Path in an undirected graph is a path that visits each vertex exactly once. A Hamiltonian cycle (or Hamiltonian circuit) is a Hamiltonian Path such that there is an edge (in the graph) from the last vertex to the first vertex of the Hamiltonian Path. Determine whether a given graph contains Hamiltonian Cycle or not. If it contains, then prints the path. Following are the input and output of the required function.

_Input:_  
A 2D array graph[V][V] where V is the number of vertices in graph and graph[V][V] is adjacency matrix representation of the graph. A value graph[i][j] is 1 if there is a direct edge from i to j, otherwise graph[i][j] is 0.  
_Output:_  
An array path[V] that should contain the Hamiltonian Path. path[i] should represent the ith vertex in the Hamiltonian Path. The code should also return false if there is no Hamiltonian Cycle in the graph.  
For example, a Hamiltonian Cycle in the following graph is {0, 1, 2, 4, 3, 0}.

(0)--(1)--(2)
 |   / \   |
 |  /   \  | 
 | /     \ |
(3)-------(4)

**Backtracking Algorithm**  
Create an empty path array and add vertex 0 to it. Add other vertices, starting from the vertex 1. Before adding a vertex, check for whether it is adjacent to the previously added vertex and not already added. If we find such a vertex, we add the vertex as part of the solution. If we do not find a vertex then we return false.

  

      /* C++ program for solution of Hamiltonian
    Cycle problem using backtracking */
    #include <bits/stdc++.h>
    using namespace std;
    
    // Number of vertices in the graph
    #define V 5
    
    void printSolution(int path[]);
    
    /* A utility function to check if
    the vertex v can be added at index 'pos'
    in the Hamiltonian Cycle constructed
    so far (stored in 'path[]') */
    bool isSafe(int v, bool graph[V][V],
    			int path[], int pos)
    {
    	/* Check if this vertex is an adjacent
    	vertex of the previously added vertex. */
    	if (graph [path[pos - 1]][ v ] == 0)
    		return false;
    
    	/* Check if the vertex has already been included.
    	This step can be optimized by creating
    	an array of size V */
    	for (int i = 0; i < pos; i++)
    		if (path[i] == v)
    			return false;
    
    	return true;
    }
    
    /* A recursive utility function
    to solve hamiltonian cycle problem */
    bool hamCycleUtil(bool graph[V][V],
    				int path[], int pos)
    {
    	/* base case: If all vertices are
    	included in Hamiltonian Cycle */
    	if (pos == V)
    	{
    		// And if there is an edge from the
    		// last included vertex to the first vertex
    		if (graph[path[pos - 1]][path[0]] == 1)
    			return true;
    		else
    			return false;
    	}
    
    	// Try different vertices as a next candidate
    	// in Hamiltonian Cycle. We don't try for 0 as
    	// we included 0 as starting point in hamCycle()
    	for (int v = 1; v < V; v++)
    	{
    		/* Check if this vertex can be added
    		// to Hamiltonian Cycle */
    		if (isSafe(v, graph, path, pos))
    		{
    			path[pos] = v;
    
    			/* recur to construct rest of the path */
    			if (hamCycleUtil (graph, path, pos + 1) == true)
    				return true;
    
    			/* If adding vertex v doesn't lead to a solution,
    			then remove it */
    			path[pos] = -1;
    		}
    	}
    
    	/* If no vertex can be added to
    	Hamiltonian Cycle constructed so far,
    	then return false */
    	return false;
    }
    
    /* This function solves the Hamiltonian Cycle problem
    using Backtracking. It mainly uses hamCycleUtil() to
    solve the problem. It returns false if there is no
    Hamiltonian Cycle possible, otherwise return true
    and prints the path. Please note that there may be
    more than one solutions, this function prints one
    of the feasible solutions. */
    bool hamCycle(bool graph[V][V])
    {
    	int *path = new int[V];
    	for (int i = 0; i < V; i++)
    		path[i] = -1;
    
    	/* Let us put vertex 0 as the first vertex in the path.
    	If there is a Hamiltonian Cycle, then the path can be
    	started from any point of the cycle as the graph is undirected */
    	path[0] = 0;
    	if (hamCycleUtil(graph, path, 1) == false )
    	{
    		cout << "\nSolution does not exist";
    		return false;
    	}
    
    	printSolution(path);
    	return true;
    }
    
    /* A utility function to print solution */
    void printSolution(int path[])
    {
    	cout << "Solution Exists:"
    			" Following is one Hamiltonian Cycle \n";
    	for (int i = 0; i < V; i++)
    		cout << path[i] << " ";
    
    	// Let us print the first vertex again
    	// to show the complete cycle
    	cout << path[0] << " ";
    	cout << endl;
    }
    
    // Driver Code
    int main()
    {
    	/* Let us create the following graph
    		(0)--(1)--(2)
    		| / \ |
    		| / \ |
    		| / \ |
    		(3)-------(4) */
    	bool graph1[V][V] = {{0, 1, 0, 1, 0},
    						{1, 0, 1, 1, 1},
    						{0, 1, 0, 0, 1},
    						{1, 1, 0, 0, 1},
    						{0, 1, 1, 1, 0}};
    	
    	// Print the solution
    	hamCycle(graph1);
    	
    	/* Let us create the following graph
    	(0)--(1)--(2)
    	| / \ |
    	| / \ |
    	| / \ |
    	(3) (4) */
    	bool graph2[V][V] = {{0, 1, 0, 1, 0},
    						{1, 0, 1, 1, 1},
    						{0, 1, 0, 0, 1},
    						{1, 1, 0, 0, 0},
    						{0, 1, 1, 0, 0}};
    
    	// Print the solution
    	hamCycle(graph2);
    
    	return 0;
    }


**Output:**

Solution Exists: Following is one Hamiltonian Cycle
 0  1  2  4  3  0

Solution does not exist
<br>
#### Thank you for reading