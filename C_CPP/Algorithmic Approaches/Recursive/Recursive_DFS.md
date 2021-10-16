# Recursive 
 
The C/C++ language allows a programmer to write subroutines and functions that call themselves. These routines are called recursive. We can also say the process of defining something in terms of itself is recursive.

For example:    
    
    int factorial(int x)
    {
    int a,b;
    if(n==0)
    return(1);
    a=x-1;
    b=factorial(a);
    return(x*b);
    }

In the statement b=factorial(a); the function factorial calls itself.

A recursive function need not call itself directly. It may call itself indirectly as below in example:-

    a(formal parameters)
    {
    .
    .
    b(arguments);
    .
    }
  
    
    b(formal parameters)
    {
    .
    .
    a(arguments);
    .
    }

In this example function, a calls b, which may, in turn, call a, which may again call b. Thus both a and b are recursive since they are indirectly calling themselves.

One of the most important notes for a recursive algorithm to be correct is that it does not generate an infinite sequence of calls on itself. As any algorithm that does generate such a sequence can never terminate. For at least one argument or group of arguments, a recursive function f must be defined in terms that don't involve f. 
There are few examples below of the non-recursive portions of the definitions:- 
- Factorial: 0!=1
- Multiplications: a*1=a
- Fibonacci series: fib(0)=0; fib(1)=1
- Binary search: 
    
      if (low>high)
      return(-1);
      if (x==a[mid])
      return(mid);

Without such nonrecursive exist, no recursive function can ever be computed.

Now below is an example of recursive algorithm, to search a sorted array *a* for an element x between a[low] and a[high]. The algorithm returns an index of *a* such that a[index] equals x if such an index exists between low and high. If x is not found in that portion of the array, the binary search returns -1.(in C, no element a[-1] can exist)
    
    if (low>high)
    returns(-1);
    mid=(low+high)/2;
    if(x==a[mid])
    return(mid);
    if(x<a[mid])
    search for x in a[low] to a[mid-1];
    else
    search for x in a[mid + 1] to a[high];
    
### Common problems in Recursion

1. Tower of Hanoi
2. Tree Traversal
3. DFS of graphs
4. Factorial and much more

## DSF

The DFS (depth-first search) or DFT (depth-first traverse) algorithm is used to traverse or search data structures such as graphs. Before retracing, the algorithm starts at the root node and investigates each branch as far as possible. So the basic idea is to start at the root or any arbitrary node and mark it, then advance to the next unmarked node and repeat until there are no more unmarked nodes. Then go back and check for any more unmarked nodes to cross. Finally, print the path's nodes.
	
Hence the algorithm for DFS:-

- Make a recursive function that takes the node's index and a visited array as input.
- Mark the current node as visited, then print it.
- Call the recursive function with the index of the adjacent node after traversing all nearby and unmarked nodes.

### Example

    // C++ program to print DFT traversal from
    //a specific vertex in a graph
    #include <bits/stdc++.h>
    using namespace std;
  
    class Graph 

    {

    public:
    
    map<int, bool> visited;
    map<int, list<int>> adj;
  
    // addEdge function to add an edge to graph
    void addEdge(int v, int w);
  
    void DFS(int v);
    };
  
    void Graph::addEdge(int v, int w)
    {
    adj[v].push_back(w); // This will add w to v’s list.
    }
  
    void Graph::DFS(int v)
    {
    // Now the current node marked as visited 
    visited[v] = true;
    cout << v << " ";
  
    // Recursion for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
    }
  
    int main()
    {
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

Output

		Following is Depth First Search (starting from vertex 2)
		2 0 1 3

### Advantages and Disadvantages of Recursion

Advantages 

- It simplifies and shortens our code.
- In situations involving data structures and complex algorithms, such as Graph and Tree Traversal, recursion is necessary.

Disadvantages 

- As compared to an iterative code, it takes up a lot of stack space.
- It takes additional processing time.
- When compared to an equivalent iterative program, it can be more difficult to debug.
