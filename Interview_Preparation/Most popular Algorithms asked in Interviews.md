# List of Algorithms asked frequently in Interviews

## Contents:

- [Binary Search](#BinarySearch)
- [Graphs](#Graphs)
  - [BFS](#BFS)
  - [DFS](#DFS)
- [Kruskal's Algorithms](#Kruskals)
- [Dijkstra’s Algorithm](#Dijkstra)
- [Bellman–Ford Algorithm](#Bellman–Ford)
- [Floyd Warshall Algorithm](#Floyd-Warshall)
- [Kadane’s Algorithm](#Kadanes)
- [Tree Traversal](#TreeTraversals)
  - [Inorder Tree Traversal](#Inorder)
  - [Preorder Tree Traversal](#Preorder)
  - [Postorder Tree Traversal](#Postorder)
- [Sorting Algorithms](#Sorting)
  - [Insertion Sort](#Insertion-Sort)
  - [Selection Sort](#Selection-Sort)
  - [Merge Sort](#Merge-Sort)
  - [Quick Sort](#Quick-Sort)
  - [Counting Sort](#Counting-Sort)
- [Flood Fill Algorithm](#Flood-Fill)
- [Floyd’s Cycle Detection Algorithm](#Floyds-Cycle-Detection)
- [Topological Sort](#Topological-Sort)
- [Backtracking](#Backtracking)
- [Dynamic Programming](#Dynamic-Programming)
- [Divide and Conquer](#Divide-and-Conquer)
- [Greedy Algorithm](#Greedy-Algorithm)
- [P](#P)
- [NP](#NP)
- [NP Complete](#NP-Complete)
- [NP Hard](#NP-Hard)



   <a name="BinarySearch"></a>
1. ### Binary Search Algorithm

   **Problem Statement** : Given a sorted array of 'n' integers and a target value, determine if the target exists in the array in Logarithmic time. If target exists, then print the index of it.
   
   Binary search is a **Divide and Conquer** algorithm. Like all divide-and-conquer algorithms,
   binary search first divides a large array into **two** smaller subarrays and then recursively (or iteratively) operate the
   subarrays. But instead of working on both subarrays, it discards one subarray and continues on the second
   subarray. This decision of discarding one subarray is made in just one comparison.
   
   
   So binary search reduces the search space to **half** at each step. By search space, we mean a subarray of the given
   array where the target value is located (if present in the array). Initially, the search space is the entire array, and
   binary search redefines the search space at every step of the algorithm by using the property of the array that it is
   sorted. It does so by comparing the mid-value in the search space to the target value. If the target value matches
   the middle element, its position in the array is returned; otherwise, it discards half of the search space based on the
   comparison result.
   
   
   Let’s track the search space by using two indexes – start and end . Initially, start = 0 and end = n-1 (as
   initially, the whole array is our search space). At each step, find the mid-value in the search space and compares it
   with the target. There are three possible cases:
   
   1. If target = nums[mid] , return **mid** .
   2. If target < nums[mid] , discard all elements in the right search space, including the middle element, i.e.,
   nums[mid…high]. Now our new high would be **mid-1** .
   3. If target > nums[mid] , discard all elements in the left search space, including the middle element, i.e.,
   nums[low…mid]. Now our new low would be **mid+1** .
   
   Repeat the process until the target is found, or our search space is exhausted.
   
   ## Binary Search can be implemented either Recursively or Iteratively
   
   ### Iterative Implementation:
   
   ~~~ python
   def binarySearch(nums, target):

        # search space is nums[left…right]
        (left, right) = (0, len(nums) - 1)

        # loop till the search space is exhausted
        while left <= right:

            # find the mid-value in the search space and
            # compares it with the target
            
            # overflow can happen
            # mid = (left + right) // 2

            #Therfore for calculating mid, we use this:
            mid = left + (right - left) / 2

            # target is found
            if target == nums[mid]:
                return mid

            # discard all elements in the right search space,
            # including the middle element
            elif target < nums[mid]:
                right = mid - 1

            # discard all elements in the left search space,
            # including the middle element
            else:
                left = mid + 1

        # `target` doesn't exist in the list
        return -1
   ~~~
   
   ### Recursive Implementation:
   
   ~~~ python
   def binarySearch(nums, left, right, target):
 
    # Base condition (search space is exhausted)
    if left > right:
        return -1
 
    # find the mid-value in the search space and
    # compares it with the target
    
    # overflow can happen.
    # mid = (left + right) // 2
 
    #Therfore for calculating mid, we use this:
    mid = left + (right - left) / 2
 
    # Base condition (a target is found)
    if target == nums[mid]:
        return mid
 
    # discard all elements in the right search space,
    # including the middle element
    elif target < nums[mid]:
        return binarySearch(nums, left, mid - 1, target)
 
    # discard all elements in the left search space,
    # including the middle element
    else:
        return binarySearch(nums, mid + 1, right, target)
   ~~~
   
   **Time Complexity**  : **O(log(n))**, where n is the total number of integers in the array.  
   **Space Complexity** : **O(1)** , i.e. no extra space
   
   ---
  
   <a name="Graphs"></a>
   ## Graphs

   <a name="BFS"></a>
2. ### Breadth-First Search (BFS)
   
   **Breadth-first Search** is a graph traversal algorithm that explores vertices in the order of their distance from the
   source vertex, where distance is the minimum length of a path from the source vertex to the node.
   
   **Applications of BFS** :  
   - Copying garbage collection, Cheney’s algorithm.
   - Finding the shortest path between two nodes u and v , with path length measured by the total number of
     edges (an advantage over depth–first search).
   - Testing a graph for bipartiteness.
   - Minimum Spanning Tree for an unweighted graph.
   - Web crawler.
   - Finding nodes in any connected component of a Graph
   - Ford–Fulkerson method for computing the maximum flow in a flow network.
   - Serialization/Deserialization of a binary tree vs. serialization in sorted order allows the tree to be reconstructed
     efficiently.
     
   ## BFS can be implemented either Recursively or Iteratively
   
   **Iterative Implementation of BFS**
   
   ~~~ python
   def BFS(graph, v, discovered):
 
    # create a queue for doing BFS
    q = deque()
 
    # mark the source vertex as discovered
    discovered[v] = True
 
    # enqueue source vertex
    q.append(v)
 
    # loop till queue is empty
    while q:
 
        # dequeue front node and print it
        v = q.popleft()
        print(v, end=' ')
 
        # do for every edge `v —> u`
        for u in graph.adjList[v]:
            if not discovered[u]:
                # mark it as discovered and enqueue it
                discovered[u] = True
                q.append(u)
   ~~~
   
   **Recursive Implementation of BFS**
   
   ~~~ python
   def recursiveBFS(graph, q, discovered):
 
    if not q:
        return
 
    # dequeue front node and print it
    v = q.popleft()
    print(v, end=' ')
 
    # do for every edge `v —> u`
    for u in graph.adjList[v]:
        if not discovered[u]:
            # mark it as discovered and enqueue it
            discovered[u] = True
            q.append(u)
 
    recursiveBFS(graph, q, discovered)
    ~~~
    
    **Time Complexity** of BFS traversal is **O(V + E)**, where V and E are the total number of vertices and edges in
    the graph, respectively.  
    **Space Complexity** : **O(V)** , where V is the total number of vertices in the Graph
    
    ---
   
   <a name="DFS"></a>
3. ### Depth First Search (DFS):

   **Depth-first Search** is an algorithm for traversing or searching tree or graph data structures. One
   starts at the root (selecting some arbitrary node as the root for a graph) and explore as far as possible
   along each branch before backtracking.

   
   **Applications of DFS** :   
    - Finding connected components in a graph.
    - Topological sorting in a DAG(Directed Acyclic Graph).
    - Finding 2/3–(edge or vertex)–connected components.
    - Finding the bridges of a graph.
    - Finding strongly connected components.
    - Solving puzzles with only one solution, such as mazes.
    - Finding biconnectivity in graphs and many more…

     
   ## DFS can be implemented either Recursively or Iteratively
   
      **Iterative Implementation of DFS**
   
     ~~~ python
     def iterativeDFS(graph, v, discovered):

      # create a stack used to do iterative DFS
      stack = deque()

      # push the source node into the stack
      stack.append(v)

      # loop till stack is empty
      while stack:

          # Pop a vertex from the stack
          v = stack.pop()

          # if the vertex is already discovered yet, ignore it
          if discovered[v]:
              continue

          # we will reach here if the popped vertex `v`
          # is not discovered yet; print it and process
          # its undiscovered adjacent nodes into the stack
          discovered[v] = True
          print(v, end=' ')

          # do for every edge `v —> u`
          adj = graph.adjList[v]
          for i in reversed(range(len(adj))):
              u = adj[i]
              if not discovered[u]:
                  stack.append(u)
     ~~~
   
     **Recursive Implementation of DFS**

     ~~~ python
     def DFS(graph, v, discovered):
      discovered[v] = True            # mark the current node as discovered
      print(v, end=' ')               # print the current node

      # do for every edge `v —> u`
      for u in graph.adjList[v]:
          if not discovered[u]:       # if `u` is not yet discovered
              DFS(graph, u, discovered)
     ~~~

      **Time Complexity** of DFS traversal is **O(V + E)**, where V and E are the total number of vertices and edges in
      the graph, respectively.  
      **Space Complexity** : **O(H)** where H is the maximum height of the tree (graph)
      
      ---
   
   <a name="Kruskals"></a>
4. ### Kruskal’s Algorithm for finding Minimum Spanning Tree

   **Problem Statement** : Given an undirected, connected and weighted graph, construct a minimum spanning tree out of it
   using Kruskal’s Algorithm.
   
   A **Minimum Spanning Tree** is a spanning tree of a connected, undirected graph. It connects all the vertices with
   minimal total weighting for its edges.
   
   We can use Kruskal’s Minimum Spanning Tree algorithm, a **greedy algorithm** to find a minimum spanning tree for
   a connected weighted graph. Kruskal’s Algorithm works by finding a subset of the edges from the given graph
   covering every vertex present in the graph such that they form a tree (called MST), and the sum of weights of edges
   is as minimum as possible.
   
   Let G = (V, E) be the given graph. Initially, our MST contains only vertices of the given graph with no edges. In
   other words, initially, MST has V **connected components**, with each vertex acting as one connected component.
   The goal is to add minimum weight edges to our MST such that we are left with a single connected component that
   comprises all the graph's vertices.
   
   **Algorithm**:
   
   ~~~
   sort all edges in graph G in order of their increasing weights;
   repeat V-1 times // as MST contains V-1 edges
   {
    select the next edge with minimum weight from graph G ;
    if (no cycle is formed by adding the edge in MST, i.e., the edge connects two
    different connected components in MST)
    add the edge to MST;
   }

   ~~~
   
   **Code** :
   
   ~~~ python
   def kruskalAlgo(edges, N):
 
    # stores the edges present in MST
    MST = []
 
    # Initialize `DisjointSet` class.
    # Create a singleton set for each element of the universe.
    ds = DisjointSet()
    ds.makeSet(N)
 
    index = 0
 
    # sort edges by increasing weight
    edges.sort(key=lambda x: x[2])
 
    # MST contains exactly `V-1` edges
    while len(MST) != N - 1:
 
        # consider the next edge with minimum weight from the graph
        (src, dest, weight) = edges[index]
        index = index + 1
 
        # find the root of the sets to which two endpoints
        # vertices of the next edge belongs
        x = ds.Find(src)
        y = ds.Find(dest)
 
        # if both endpoints have different parents, they belong to
        # different connected components and can be included in MST
        if x != y:
            MST.append((src, dest, weight))
            ds.Union(x, y)
 
    return MST
   ~~~
  
   **Time complexity** of the above solution is **O(N<sup>2</sup>)**, where N is the total number of vertices in the graph.  
   **Space Complexity** : **O(E + V)**, since Disjoint Set Data Structure takes **O(V)** space to keep track of the roots of all the vertices and another **O(E)** space to          store all edges in sorted manner.
   
   ---
   
   <a name="Dijkstra"></a>
5. ### Dijkstra’s Algorithm (Single-Source Shortest Paths)

   **Problem Statement** : Given a source vertex s from a set of vertices V in a weighted graph where all its edge weights
   w(u, v) are non-negative, find the shortest path weights d(s, v) from source s for all vertices
   v present in the graph.
   
   **Dijkstra’s Algorithm** is an algorithm for finding the **shortest paths** between nodes in a graph. For a given source
   node in the graph, the algorithm finds the shortest path between that node and every other node. It can also be
   used for finding the shortest paths from a single node to a single destination node by stopping the algorithm once
   the fastest route to the destination node has been determined.
   
   Dijkstra’s Algorithm is based on the principle of **relaxation**, in which more accurate values gradually replace an
   approximation to the correct distance until the shortest distance is reached. The approximate distance to each
   vertex is always an overestimate of the true distance and is replaced by the minimum of its old value with the
   length of a newly found path. It uses a **priority queue** to greedily select the closest vertex that has not yet been
   processed and performs this relaxation process on all of its outgoing edges.
   
   **Algorithm** :
   
   ~~~
   function Dijkstra(Graph, source)
 
    dist[source] = 0    // Initialization
    create vertex set Q
 
    for each vertex v in Graph
    {
        if v != source
        {
            dist[v] = INFINITY        // Unknown distance from source to v
            prev[v] = UNDEFINED       // Predecessor of v
        }
        Q.add_with_priority(v, dist[v])
    }
    while Q is not empty
    {
        u = Q.extract_min()           // Remove minimum
        for each neighbor v of u that is still in Q
        {
            alt = dist[u] + length(u, v)
            if alt < dist[v]
            {
                dist[v] = alt
                prev[v] = u
                Q.decrease_priority(v, alt)
            }
        }
    }
    return dist[], prev[]
   ~~~
   
   **Code** :
   
   ~~~ python
   def findShortestPaths(graph, source, N):
 
    # create a min-heap and push source node having distance 0
    pq = []
    heappush(pq, Node(source, 0))
 
    # set initial distance from the source to `v` as INFINITY
    dist = [sys.maxsize] * N
 
    # distance from the source to itself is zero
    dist[source] = 0
 
    # list to track vertices for which minimum cost is already found
    done = [False] * N
    done[source] = True
 
    # stores predecessor of a vertex (to a print path)
    prev = [-1] * N
    route = []
 
    # run till min-heap is empty
    while pq:
 
        node = heappop(pq)      # Remove and return the best vertex
        u = node.vertex         # get the vertex number
 
        # do for each neighbor `v` of `u`
        for edge in graph.adj[u]:
            v = edge.dest
            weight = edge.weight
 
            # Relaxation step
            if not done[v] and (dist[u] + weight) < dist[v]:
                dist[v] = dist[u] + weight
                prev[v] = u
                heappush(pq, Node(v, dist[v]))
 
        # mark vertex `u` as done so it will not get picked up again
        done[u] = True
 
    for i in range(1, N):
        if i != source and dist[i] != sys.maxsize:
            get_route(prev, i, route)
            print(f"Path ({source} —> {i}): Minimum cost = {dist[i]}, Route = {route}")
            route.clear()
   ~~~

   **Time Complexity** : Dijkstra’s algorithm runs in **O(E.log(V))** time. Here, E is the total number of edges, and V
     is the graph’s number of vertices.  
   **Space Complexity** of Dijkstra's algorithm is **O(V<sup>2</sup>)** where V denotes the number of vertices (or nodes) in the graph.
     
     ---
   
   <a name="Bellman–Ford"></a>
6. ### Bellman–Ford Algorithm (Single-Source Shortest Paths with negative weights)

   **Problem Statement** : Given a source vertex s from a set of vertices V in a weighted graph where its edge weights w(u,v) 
   can be negative, find the shortest path weights d(s, v) from source s for all vertices v
   present in the graph. If the graph contains a negative-weight cycle, report it.
   
   If a graph contains a **“negative cycle”** (i.e., a cycle whose edges sum to a negative value) that is reachable from the
   source, then there is no shortest path. Any path that has a point on the negative cycle can be made cheaper by one
   more walk around the negative cycle. Bellman–Ford algorithm can easily detect any negative cycles in the graph.
   
   The algorithm initializes the distance to the source to 0 and all other nodes to **INFINITY** . Then for all edges, if
   the distance to the destination can be shortened by taking the edge, the distance is updated to the new lower
   value. At each iteration i that the edges are scanned, the algorithm finds all shortest paths of at most length i
   edges. Since the longest possible path without a cycle can be V-1 edges, the edges must be scanned V-1 times
   to ensure that the shortest path has been found for all nodes. A final scan of all the edges is performed, and if any
   distance is updated, then a path of length |V| edges have been found, which can only occur if at least one
   negative cycle exists in the graph.
   
   **Algorithm** :
   
   ~~~
   function BellmanFord(list vertices, list edges, vertex source, distance[], parent[])
 
    // Step 1 – initialize the graph. In the beginning, all vertices weight of
    // INFINITY and a null parent, except for the source, where the weight is 0

    for each vertex v in vertices
        distance[v] = INFINITY
        parent[v] = NULL

    distance[source] = 0
    // Step 2 – relax edges repeatedly
        for i = 1 to V-1    // V – number of vertices
            for each edge (u, v) with weight w
                if (distance[u] + w) is less than distance[v]
                    distance[v] = distance[u] + w
                    parent[v] = u

    // Step 3 – check for negative-weight cycles
    for each edge (u, v) with weight w
        if (distance[u] + w) is less than distance[v]
            return “Graph contains a negative-weight cycle”

    return distance[], parent[]
   ~~~
   
   **Code** :
   
   ~~~ python
   def bellmanFord(edges, source, N):
 
    # `distance[]` and `parent[]` stores the shortest path (least cost/path) info
    distance = [sys.maxsize] * N
    parent = [-1] * N
 
    # Initially, all vertices except source vertex weight INFINITY and no parent
    distance[source] = 0
 
    # relaxation step (run `V-1` times)
    for k in range(N - 1):
 
        # edge from `u` to `v` having weight `w`
        for (u, v, w) in edges:
 
            # if the distance to destination `v` can be
            # shortened by taking edge `u —> v`
            if distance[u] + w < distance[v]:
 
                # update distance to the new lower value
                distance[v] = distance[u] + w
 
                # set v's parent as `u`
                parent[v] = u
 
    # run relaxation step once more for N'th time to
    # check for negative-weight cycles
    for (u, v, w) in edges:     # edge from `u` to `v` having weight `w`
 
        # if the distance to destination `u` can be
        # shortened by taking edge `u —> v`
        if distance[u] + w < distance[v]:
            print("Negative-weight cycle is found!!")
            return
 
    for i in range(N):
        print("The distance of vertex", i, "from the source is", distance[i], end='.')
        print(" Its path is [ ", end='')
        printPath(parent, i)
        print("]")
   ~~~

   **Time complexity**  of the Bellman–Ford algorithm is O(V × E), where V and E are the total number of vertices
     and edges in the graph, respectively.  
   **Space Compexity** : **O(V)**, where V denotes the number of vertices (or nodes) in the graph.
     
     ---
   
   <a name="Floyd-Warshall"></a>
7. ### Floyd Warshall Algorithm (All-Pairs Shortest Paths)

   **Problem Statement** : Given a set of vertices V in a weighted graph where its edge weights w(u, v) can be negative, find
    the shortest path weights d(s, v) from every source s for all vertices v present in the graph. If
    the graph contains a negative-weight cycle, report it.
    
    **Floyd–Warshall algorithm** is an algorithm for finding the shortest paths in a weighted graph with positive or
    negative edge weights (but with no negative cycles). It does so by comparing all possible paths through the graph
    between each pair of vertices and that too with **O(V<sup>3</sup>)** comparisons in a graph.
    
    Following is the pseudocode for Floyd Warshall. The implementation takes a graph,
    represented by an adjacency matrix, and fills dist[] with shortest path (the least-cost) information:
    
    **Algorithm** :
    
    ~~~
    let dist be V × V matrix of minimum distances initialized to INFINITY
    for each vertex v
      dist[v][v] = 0
    for each edge (u, v)
      dist[u][v] = weight(u, v)

    for k from 0 to |V| – 1
      for i from 0 to |V| – 1
        for j from 0 to |V| – 1
          if (dist[i][k] + dist[k][j]) is less than dist[i][j] then
            dist[i][j] = dist[i][k] + dist[k][j]
    ~~~
    
    **Code** :
    
    ~~~ python
    def floydWarshall(adjMatrix, N):
 
    # cost and parent matrix stores shortest path
    # (shortest-cost/shortest route) information
 
    # initially, cost would be the same as the weight of an edge
    cost = adjMatrix.copy()
    path = [[None for x in range(N)] for y in range(N)]
 
    # initialize cost and parent
    for v in range(N):
        for u in range(N):
            if v == u:
                path[v][u] = 0
            elif cost[v][u] != float('inf'):
                path[v][u] = v
            else:
                path[v][u] = -1
 
    # run Floyd–Warshall
    for k in range(N):
        for v in range(N):
            for u in range(N):
                # If vertex `k` is on the shortest path from `v` to `u`,
                # then update the value of `cost[v][u]` and `path[v][u]`
                if cost[v][k] != float('inf') and cost[k][u] != float('inf') \
                        and (cost[v][k] + cost[k][u] < cost[v][u]):
                    cost[v][u] = cost[v][k] + cost[k][u]
                    path[v][u] = path[k][u]
 
            # if diagonal elements become negative, the
            # graph contains a negative-weight cycle
            if cost[v][v] < 0:
                print("Negative-weight cycle found")
                return
       
    ~~~
    
    **Time complexity** of the Floyd–Warshall algorithm is **O(V<sup>3</sup>)**, where V is the total number of vertices in the
      graph.  
    **Space Complexity** : **O(V<sup>2</sup>)**, where V denotes the number of vertices (or nodes) in the graph.
      
      ---
      
   <a name="Kadanes"></a>
8. ### Kadane’s Algorithm (Maximum Sum Subarray Problem) 

   **Problem Statement** : Given an integer array, find a contiguous subarray within it that has the largest sum.
   
   We can easily solve this problem in **linear time** using Kadane’s algorithm. The idea is to maintain a maximum
   (positive-sum) subarray “ending” at each index of the given array. This subarray is either empty (in which case its
   sum is zero) or consists of one more element than the maximum subarray ending at the previous index.
   
   **Code** :
   
   ~~~ python
   def kadane(A):
 
    # find the maximum element present in a given list
    maximum = max(A)
 
    # if the list contains all negative values, return the maximum element
    if maximum < 0:
        return maximum
 
    # stores the maximum sum sublist found so far
    max_so_far = 0
 
    # stores the maximum sum of sublist ending at the current position
    max_ending_here = 0
 
    # do for each element of a given list
    for i in A:
 
        # update the maximum sum of sublist "ending" at index `i` (by adding the
        # current element to maximum sum ending at previous index `i-1`)
        max_ending_here = max_ending_here + i
 
        # if the maximum sum is negative, set it to 0 (which represents
        # an empty sublist)
        max_ending_here = max(max_ending_here, 0)
 
        # update the result if the current sublist sum is found to be greater
        max_so_far = max(max_so_far, max_ending_here)
 
    return max_so_far
   ~~~
   
   **Time Complexity** : **O(n)**, where n is the size of the array  
   **Space Complexity** : **O(1)** , i.e. no extra space
   
   ---
   
   <a name="TreeTraversals"></a>
9. ### Tree Traversals

   <a name="Inorder"></a>
   **Inorder Tree Traversal**
   
   **Problem Statement** : Given a binary tree, write solution to traverse the tree using inorder traversal
   
   For traversing a (non-empty) binary tree in an inorder fashion, we must do these three things for every node n
   starting from the tree’s root:
   
   **(L)** Recursively traverse its left subtree. When this step is finished, we are back at n again.
   
   **(N)** Process n itself.
   
   **(R)** Recursively traverse its right subtree. When this step is finished, we are back at n again.
   
    ## Inorder Tree Traversal can be implemented either Recursively or Iteratively
    
    **Recursive Implementation**
    
    As we can see, before processing any node, the **left subtree** is processed first, followed by the **node**, and the **right
    subtree** is processed at last. These operations can be defined recursively for each node. The recursive
    implementation is referred to as a Depth–first search (DFS), as the search tree is deepened as much as possible on
    each child before going to the next sibling.
    
    **Code** :
    
    ~~~ python
    def inorder(root):
 
      # return if the current node is empty
      if root is None:
          return

      # Traverse the left subtree
      inorder(root.left)

      # Display the data part of the root (or current node)
      print(root.data, end=' ')

      # Traverse the right subtree
      inorder(root.right)
    ~~~
    
    **Iterative Implementation**
    
    To convert the above recursive procedure into an iterative one, we need an explicit **stack**.
    
    **Algorithm** :
    
    ~~~
    s —> empty stack
    while (not s.isEmpty() or node != null)
      if (node != null)
        s.push(node)
        node —> node.left
      else
        node —> s.pop()
        visit(node)
        node —> node.right
    ~~~
    
    **Code** :
    
    ~~~ python
    def inorderIterative(root):
 
      # create an empty stack
      stack = deque()

      # start from the root node (set current node to the root node)
      curr = root

      # if the current node is None and the stack is also empty, we are done
      while stack or curr:

          # if the current node exists, push it into the stack (defer it)
          # and move to its left child
          if curr:
              stack.append(curr)
              curr = curr.left
          else:
              # otherwise, if the current node is None, pop an element from the stack,
              # print it, and finally set the current node to its right child
              curr = stack.pop()
              print(curr.data, end=' ')

              curr = curr.right
    ~~~
    
    **Time Complexity** of the above solutions is **O(n)**, where n is the total number of nodes in the binary tree.
    
    **Space complexity** of the program is **O(n)** as the space required is proportional to the height of the tree, which can
      be equal to the total number of nodes in the tree in worst-case for skewed trees.
      
      ---
    
   <a name="Preorder"></a>
   **Preorder Tree Traversal**
   
   **Problem Statement** : Given a binary tree, write solution to traverse the tree using preorder traversal
   
   For traversing a (non-empty) binary tree in an inorder fashion, we must do these three things for every node n
   starting from the tree’s root:
   
   **(N)** Process n itself.
   
   **(L)** Recursively traverse its left subtree. When this step is finished, we are back at n again.
   
   **(R)** Recursively traverse its right subtree. When this step is finished, we are back at n again.   
    
    ## Preorder Tree Traversal can be implemented either Recursively or Iteratively
    
    **Recursive Implementation**
    
    As we can see, only after processing any **node**, the **left subtree** is processed, followed by the **right subtree**. These
    operations can be defined recursively for each node. The recursive implementation is referred to as a Depth–first
    search (DFS), as the search tree is deepened as much as possible on each child before going to the next sibling.
    
    **Code** :
    
    ~~~ python
    def preorder(root):
 
      # return if the current node is empty
      if root is None:
          return

      # Display the data part of the root (or current node)
      print(root.data, end=' ')

      # Traverse the left subtree
      preorder(root.left)

      # Traverse the right subtree
      preorder(root.right)
    ~~~
    
    **Iterative Implementation**
    
    To convert the above recursive procedure into an iterative one, we need an explicit **stack**.
    
    **Algorithm** :
    
    ~~~
    if (node = null)
      return
    s —> empty stack
    s.push(node)
    while (not s.isEmpty())
      node —> s.pop()
      visit(node)
      if (node.right != null)
        s.push(node.right)
      if (node.left != null)
        s.push(node.left)
    ~~~
    
    **Code** :
    
    ~~~ python
    def preorderIterative(root):
 
      # return if the tree is empty
      if root is None:
          return

      # create an empty stack and push the root node
      stack = deque()
      stack.append(root)

      # loop till stack is empty
      while stack:

          # pop a node from the stack and print it
          curr = stack.pop()

          print(curr.data, end=' ')

          # push the right child of the popped node into the stack
          if curr.right:
              stack.append(curr.right)

          # push the left child of the popped node into the stack
          if curr.left:
              stack.append(curr.left)
    ~~~
    
    **Time Complexity** of the above solutions is **O(n)**, where n is the total number of nodes in the binary tree.
    
    **Space complexity** of the program is **O(n)** as the space required is proportional to the height of the tree, which can
      be equal to the total number of nodes in the tree in worst-case for skewed trees.
      
      ---
   
   <a name="Postorder"></a>
   **Postorder Tree Traversal**
   
   **Problem Statement** : Given a binary tree, write solution to traverse the tree using postorder traversal
   
   For traversing a (non-empty) binary tree in an inorder fashion, we must do these three things for every node n
   starting from the tree’s root:

   **(L)** Recursively traverse its left subtree. When this step is finished, we are back at n again.
   
   **(R)** Recursively traverse its right subtree. When this step is finished, we are back at n again.   
   
   **(N)** Process n itself.
    
    ## Postorder Tree Traversal can be implemented either Recursively or Iteratively
    
    **Recursive Implementation**
    
    As we can see, before processing any node, the **left subtree** is processed first, followed by the **right subtree**, and the
    **node** is processed at last. These operations can be defined recursively for each node. The recursive implementation
    is referred to as a Depth–first search (DFS), as the search tree is deepened as much as possible on each child before
    going to the next sibling.
    
    **Code** :
    
    ~~~ python
    def postorder(root):
 
    # return if the current node is empty
      if root is None:
          return

      # Traverse the left subtree
      postorder(root.left)

      # Traverse the right subtree
      postorder(root.right)

      # Display the data part of the root (or current node)
      print(root.data, end=' ')
    ~~~
    
    **Iterative Implementation**
    
    To convert the above recursive procedure into an iterative one, we need an explicit **stack**.
    
    **Algorithm** :
    
    ~~~
    s —> empty stack
    t —> output stack
    while (not s.isEmpty())
      node —> s.pop()
      t.push(node)

      if (node.left <> null)
        s.push(node.left)

      if (node.right <> null)
        s.push(node.right)

    while (not t.isEmpty())
      node —> t.pop()
      visit(node)
    ~~~
    
    **Code** :
    
    ~~~ python
    def postorderIterative(root):
 
      # create an empty stack and push the root node
      stack = deque()
      stack.append(root)

      # create another stack to store postorder traversal
      out = deque()

      # loop till stack is empty
      while stack:

          # pop a node from the stack and push the data into the output stack
          curr = stack.pop()
          out.append(curr.data)

          # push the left and right child of the popped node into the stack
          if curr.left:
              stack.append(curr.left)

          if curr.right:
              stack.append(curr.right)

      # print postorder traversal
      while out:
          print(out.pop(), end=' ')
    ~~~
    
    **Time Complexity** of the above solutions is **O(n)**, where n is the total number of nodes in the binary tree.
    
    **Space complexity** of the program is **O(n)** as the space required is proportional to the height of the tree, which can
      be equal to the total number of nodes in the tree in worst-case for skewed trees.
      
    <a name="Sorting"></a>
10. ### Sorting Algorithms

    <a name="Insertion-Sort"></a>
    **Insertion Sort**
    
    **Problem Statement** : Given an integer array, sort it using the insertion sort algorithm.
    
    The idea is to divide the array into two subsets – **sorted subset** and **unsorted subset**. Initially, a sorted subset
    consists of only one first element at index 0 . Then for each iteration, insertion sort removes the next element from
    the unsorted subset, finds the location it belongs within the sorted subset and inserts it there. It repeats until no
    input elements remain.
    
    ## Insertion Sort can be implemented either Recursively or Iteratively
    
    **Iterative Implementation**
    
    ~~~ python
    def insertionSort(A):
 
      # Start from the second element
      # (the element at index 0 is already sorted)
      for i in range(1, len(A)):

          value = A[i]
          j = i

          # find index `j` within the sorted subset `A[0…i-1]`
          # where element `A[i]` belongs
          while j > 0 and A[j - 1] > value:
              A[j] = A[j - 1]
              j = j - 1

          # Note that sublist `A[j…i-1]`is shifted to
          # the right by one position, i.e., `A[j+1…i]`

          A[j] = value
    ~~~
    
    **Recursive Implementation**
    
    ~~~ python
    def insertionSort(A, i, n):
 
      value = A[i]
      j = i

      # find index `j` within the sorted subset `A[0…i-1]`
      # where element `A[i]` belongs
      while j > 0 and A[j - 1] > value:
          A[j] = A[j - 1]
          j = j - 1

      A[j] = value

      # Note that sublist `A[j…i-1]`is shifted to
      # the right by one position, i.e., `A[j+1…i]`

      if i + 1 <= n:
          insertionSort(A, i + 1, n)
    ~~~
    
    **Time Complexity** : The worst-case time complexity of insertion sort is **O(n<sup>2</sup>)**, where n is the size of the input. The worst case happens
      when the array is reverse sorted. The best-case time complexity of insertion sort is **O(n)**. The best case happens
      when the array is already sorted.
      
      The **auxiliary space** used by the iterative version is **O(1)** and **O(n)** by the recursive version for the call stack.
      
      ---
    
    <a name="Selection-Sort"></a>
    **Selection Sort**
    
    **Problem Statement** : Given an integer array, sort it using the selection sort algorithm.
    
    The idea is to divide the array into two subsets – **sorted subset** and **unsorted subset**. Initially, the sorted subset is
    empty, and the unsorted subset is the entire input list. The algorithm proceeds by finding the smallest (or largest,
    depending on sorting order) element in the unsorted subset, swapping it with the leftmost unsorted element
    (putting it in sorted order), and moving the subset boundaries one element to the right
    
    ## Selection Sort can be implemented either Recursively or Iteratively
    
    **Iterative Implementation**
    
    ~~~ python
    def selectionSort(A):
 
      for i in range(len(A) - 1):

          # find the minimum element in the unsorted sublist `A[i…n-1]`
          # and swap it with `A[i]`
          min = i

          for j in range(i + 1, len(A)):
              # if the `A[j]` element is less, then it is the new minimum
              if A[j] < A[min]:
                  min = j        # update the index of minimum element

          # swap the minimum element in sublist `A[i…n-1]` with `A[i]`
          swap(A, min, i)
    ~~~
    
    **Recursive Implementation**
    
    ~~~ python
    def selectionSort(A, i, n):
 
      # find the minimum element in the unsorted sublist `A[i…n-1]`
      # and swap it with `A[i]`
      min = i
      for j in range(i + 1, n):

          # if the `A[j]` element is less, then it is the new minimum
          if A[j] < A[min]:
              min = j            # update the index of minimum element

      # swap the minimum element in sublist `A[i…n-1]` with `A[i]`
      swap(A, min, i)

      if i + 1 < n:
          selectionSort(A, i + 1, n)
    ~~~
    
    **Time Complexity** : The worst-case time complexity of insertion sort is **O(n<sup>2</sup>)**, where n is the size of the input. The worst case happens
      when the array is reverse sorted. The best-case time complexity of insertion sort is **O(n)**. The best case happens
      when the array is already sorted.
      
      The **auxiliary space** used by the iterative version is **O(1)** and **O(n)** by the recursive version for the call stack.
      
      ---
    
    <a name="Merge-Sort"></a>
    **Merge Sort**
    
    **Problem Statement** : Given an integer array, sort it using the merge sort algorithm.
    
    Merge Sort is an **Divide and Conquer Algorithm**. Like all Divide and Conquer algorithms, merge sort divides a large array into two smaller subarrays and then recursively     sort the subarrays. Basically two steps are involved in the whole process:
    
    1. Divide the unsorted array into n subarrays, each of size 1 (an array of size 1 is considered sorted).
    2. Repeatedly merge subarrays to produce new sorted subarrays until only 1 subarray is left, which would be our sorted array
    
    **Code** :
    
    ~~~ python
    # Merge two sorted sublists `A[low … mid]` and `A[mid+1 … high]`
    def merge(A, aux, low, mid, high):

        k = low
        i = low
        j = mid + 1

        # While there are elements in the left and right runs
        while i <= mid and j <= high:

            if A[i] <= A[j]:
                aux[k] = A[i]
                k = k + 1
                i = i + 1
            else:
                aux[k] = A[j]
                k = k + 1
                j = j + 1

        # Copy remaining elements
        while i <= mid:
            aux[k] = A[i]
            k = k + 1
            i = i + 1

        # No need to copy the second half (since the remaining items
        # are already in their correct position in the auxiliary array)

        # copy back to the original list to reflect sorted order
        for i in range(low, high + 1):
            A[i] = aux[i]


    # Sort list `A[low…high]` using auxiliary list aux
    def mergesort(A, aux, low, high):

        # Base case
        if high == low:                     # if run size == 1
            return

        # find midpoint
        mid = (low + ((high - low) >> 1))

        # recursively split runs into two halves until run size == 1,
        # then merge them and return up the call chain

        mergesort(A, aux, low, mid)         # split/merge left half
        mergesort(A, aux, mid + 1, high)    # split/merge right half

        merge(A, aux, low, mid, high)       # merge the two half runs

    ~~~
    
    The worst-case **Time Complexity** of merge sort is O(n.log(n)), where n is the size of the input.
    
    The recurrence relation is:
    **T(n) = 2T(n/2) + cn = O(n.log(n))**
    
    The recurrence basically summarizes the merge sort algorithm – Sort two lists of half the original list’s size and add
    the n steps taken to merge the resulting two lists.
    
    The **auxiliary space** required by the merge sort algorithm is **O(n)** for the call stack.

       ---
    
    <a name="Quick-Sort"></a>
    **Quick Sort**
    
    **Problem Statement** : Given an integer array, sort it using the quick sort algorithm.
    
    Merge Sort is an **Divide and Conquer Algorithm**. Like all Divide and Conquer algorithms, merge sort divides a large array into two smaller subarrays and then recursively     sort the subarrays. Basically three steps are involved in the whole process:
    
    - Pivot selection: Pick an element, called a pivot, from the array (usually the leftmost or the rightmost element of
    the partition).
    
    - Partitioning: Reorder the array such that all elements with values less than the pivot come before the pivot. In
    contrast, all elements with values greater than the pivot come after it. The equal values can go either way. After
    this partitioning, the pivot is in its final position.
    
    - Recur: Recursively apply the above steps to the subarray of elements with smaller values than the pivot and
    separately to the subarray of elements with greater values than the pivot
    
    **Code** :
    
    ~~~ python
    def partition(a, start, end):
 
      # Pick the rightmost element as a pivot from the list
      pivot = a[end]

      # elements less than the pivot will be pushed to the left of `pIndex`
      # elements more than the pivot will be pushed to the right of `pIndex`
      # equal elements can go either way
      pIndex = start

      # each time we find an element less than or equal to the pivot,
      # `pIndex` is incremented, and that element would be placed
      # before the pivot.
      for i in range(start, end):
          if a[i] <= pivot:
              swap(a, i, pIndex)
              pIndex = pIndex + 1

      # swap `pIndex` with pivot
      swap(a, end, pIndex)

      # return `pIndex` (index of the pivot element)
      return pIndex
 
 
    # Quicksort routine
    def quicksort(a, start, end):

        # base condition
        if start >= end:
            return

        # rearrange elements across pivot
        pivot = partition(a, start, end)

        # recur on sublist containing elements less than the pivot
        quicksort(a, start, pivot - 1)

        # recur on sublist containing elements more than the pivot
        quicksort(a, pivot + 1, end)

    ~~~
    
    The worst-case **Time Complexity** of Quicksort is **O(n<sup>2</sup>)**, where n is the size of the input. The worst case happens
    when the pivot happens to be the smallest or largest element in the list or when all the array elements are equal.
    This will result in the most unbalanced partition as the pivot divides the array into two subarrays of sizes **0** and **n-1** . 
    If this repeatedly happens in every partition (say, we have sorted array), then each recursive call processes a list of size one less than the previous list,                   resulting in O(n ) time.
    
    **T(n) = T(n-1) + cn = O(n²)**
    
    (Note – partition takes **O(n)** time that accounts for cn )
    
    The best-case **Time Complexity** of Quicksort is **O(n.log(n))**. The best case happens when the pivot divides the
    array into two nearly equal pieces. Now each recursive call processes a list of half the size.
    
    **T(n) = 2 T(n/2) + cn = O(n.log(n))**
    
    The **auxiliary space** required by the Quicksort algorithm is **O(n)** for the call stack.
    
       ---   
       
    <a name="Counting-Sort"></a>
    **Counting Sort**
    
    **Problem Statement** : Given a collection of n items, each of which has a non-negative integer key whose maximum value is
      at most k , effectively sort it using the counting sort algorithm
    
    The algorithm loops over the items, computing a histogram of each key’s number of times within the input
    collection. It then performs a **prefix sum** computation to determine, for each key, the starting position in the output
    array of the items having that key. Finally, it loops over the items again, moving each item into its sorted position in
    the output array.
    
    **Algorithm**
    
    1. After the first for-loop, freq[i] stores the total number of items with a key equal to i .
  
    2. After the second for-loop, it instead stores the total number of items with a key less than i , which is the same
    as the first index at which an item with key i should be stored in the output array.
    
    3. Throughout the third loop, freq[i] always stores the next position in the output array into which an item with
    key i should be stored, so each item is moved to its correct position in the output array
    
    **Code** :
    
    ~~~ python
    
    def countsort(A, k):
 
      # create an integer list of size `n` to store the sorted list
      output = [0] * len(A)

      # create an integer list of size `k + 1`, initialized by all zero
      freq = [0] * (k + 1)

      # using the value of each item in the input list as an index,
      # store each integer's count in `freq[]`
      for i in A:
          freq[i] = freq[i] + 1

      # calculate the starting index for each integer
      total = 0
      for i in range(k + 1):
          oldCount = freq[i]
          freq[i] = total
          total += oldCount

      # copy to the output list, preserving the order of inputs with equal keys
      for i in A:
          output[freq[i]] = i
          freq[i] = freq[i] + 1

      # copy the output list back to the input list
      for i in range(len(A)):
          A[i] = output[i]

    ~~~
    
    **Time Complexity** of the counting sort is **O(n + k)**, where n is the size of the input and k is the input range.
    Since it uses arrays of length k+1 and n.
    
    **Total space** used by the algorithm is also **O(n + k)**.
    
       --- 
    
    <a name="Flood-Fill"></a>
11. ### Flood Fill Algorithm

    **Problem Statement** : Flood fill (also known as seed fill) is an algorithm that determines the area connected to a given node
    in a multi-dimensional array.
    
    It is used in the **“bucket” fill tool** of a paint program to fill connected, similarly colored areas with a different color
    and in games such as Go and Minesweeper for determining which pieces are cleared. When applied on an image to
    fill a particular bounded area with color, it is also known as boundary fill.
    
    The flood fill algorithm takes three parameters: a **start node**, a **target color**, and a **replacement color**.
    Consider the following matrix to the left – if the start node is (3, 9) , target color is “BLACK” and replacement
    color is “GREY”, the algorithm looks for all nodes in the matrix that are connected to the start node by a path of
    the target color and changes them to the replacement color.
    
    
    ## Flood Fill Algorithm can be implemented either using BFS or DFS
    
    **Approach 1: (Using BFS)**
    
    A queue-based implementation using Breadth–first search (BFS).
    
    **Algorithm** 
    
    ~~~
    BFS (starting-pixel, replacement-color):

    1. Create an empty queue.
 
    2. Enqueue starting pixel and mark it as processed.
   
    3. Loop till queue is empty
 
      1. Dequeue the front node and process it.
      2. Replace the color of the current pixel (popped node) with that of the
      replacement.
      3. Process all eight adjacent pixels of the current pixel and enqueue
      each valid pixel that has the same color as that of the current
      pixel.
    ~~~
    
    **Code** :
    
    ~~~ python
    def floodfill(mat, x, y, replacement):
 
      # base case
      if not mat or not len(mat):
          return

      # create a queue and enqueue starting pixel
      q = deque()
      q.append((x, y))

      # get the target color
      target = mat[x][y]

      # target color is same as replacement
      if target == replacement:
          return

      # break when the queue becomes empty
      while q:

          # dequeue front node and process it
          x, y = q.popleft()

          # replace the current pixel color with that of replacement
          mat[x][y] = replacement

          # process all eight adjacent pixels of the current pixel and
          # enqueue each valid pixel
          for k in range(len(row)):
              # if the adjacent pixel at position (x + row[k], y + col[k]) is
              # is valid and has the same color as the current pixel
              if isSafe(mat, x + row[k], y + col[k], target):
                  # enqueue adjacent pixel
                  q.append((x + row[k], y + col[k]))
                  
    def isSafe(mat, x, y, target):
      return 0 <= x < len(mat) and 0 <= y < len(mat[0]) and mat[x][y] == target
    ~~~
    
    **Approach 2: (Using DFS)**
    
    We can use Depth–first search (DFS) to solve this problem. The idea is to start from the source node in the matrix,
    replace its color with the replacement color and recursively explore all its valid eight adjacent pixels, and replace
    their color. Note that we don’t need a visited array here as we are replacing the color of every processed node, and
    it won’t be considered again next time as it will have a different color.
    
    **Code** :
    
    ~~~ python
    def floodfill(mat, x, y, replacement):
 
      # base case
      if not mat or not len(mat):
          return

      # get the target color
      target = mat[x][y]

      # target color is same as replacement
      if target == replacement:
          return

      # replace the current pixel color with that of replacement
      mat[x][y] = replacement

      # process all eight adjacent pixels of the current pixel and
      # recur for each valid pixel
      for k in range(len(row)):

          # if the adjacent pixel at position (x + row[k], y + col[k]) is
          # a valid pixel and has the same color as that of the current pixel
          if isSafe(mat, x + row[k], y + col[k], target):
              floodfill(mat, x + row[k], y + col[k], replacement)
              
    def isSafe(mat, x, y, target):
      return 0 <= x < len(mat) and 0 <= y < len(mat[0]) and mat[x][y] == target
    ~~~

    **Time Complexity** of the proposed solution is **O(M × N)**  
    
    **Space Compexity** : It requires **O(M × N) extra space**, where M and N are dimensions of the matrix  
    
    ---
    
    <a name="Floyds-Cycle-Detection"></a>
12. ### Floyd’s Cycle Detection Algorithm (Detect cycle in a linked list)

    **Problem Statement** : Detect cycles in a linked list using Floyd’s cycle detection algorithm.
    
    Floyd’s cycle detection algorithm is a **pointer algorithm** that uses only **two pointers**, which move through the
    sequence at different speeds. The idea is to move the **fast pointer** twice as quickly as the **slow pointer**, and the
    distance between them increases by one at each step. If we both meet at some point, we have found a cycle in the
    list; otherwise, no cycle is present if the end of the list is reached. It is also called the **“tortoise and the hare
    algorithm”**.
    
    **Code** :
    
    ~~~ python
    def detectCycle(head):
 
      # take two references – `slow` and `fast`
      slow = fast = head

      while fast and fast.next:

          # move slow by one
          slow = slow.next

          # move fast by two
          fast = fast.next.next

          # if they meet any node, the linked list contains a cycle
          if slow == fast:
              return True

      # we reach here if slow and fast do not meet
      return False
    ~~~

    **Time Complexity** of the above solution is **O(n)**, where n is the total number of nodes in the linked list.  
    **Space Complexity** : **O(1)** , i.e. no extra space
    
    ---
    
    <a name="Topological-Sort"></a>
13. ### Topological Sort Algorithm for DAG

    **Problem Statement** : Given a Directed Acyclic Graph (DAG), print it in topological order using topological sort algorithm. If
    the DAG has more than one topological ordering, output any of them
    
    A **Topological sort** or Topological ordering of a directed graph is a linear ordering of its vertices such that for every
    directed edge uv from vertex u to vertex v , u comes before v in the ordering. A topological ordering is
    possible if and only if the graph has **no directed cycles**, i.e. if the graph is DAG.
    
    We can use **Depth–first search (DFS)** to implement topological sort algorithm. The idea is to order the vertices in
    order of their decreasing departure time of vertices in DFS, and we will get our desired topological sort.
    
    **Code** :
    
    ~~~ python
    # Perform DFS on the graph and set the departure time of all
    # vertices of the graph
    def DFS(graph, v, discovered, departure, time):
 
      # mark the current node as discovered
      discovered[v] = True

      # set the arrival time of vertex `v`
      time = time + 1

      # do for every edge `v —> u`
      for u in graph.adjList[v]:
          # if `u` is not yet discovered
          if not discovered[u]:
              time = DFS(graph, u, discovered, departure, time)

      # ready to backtrack
      # set departure time of vertex `v`
      departure[time] = v
      time = time + 1

      return time
     
    # Function to perform a topological sort on a given DAG 
    def doTopologicalSort(graph, N):
 
      # `departure` stores the vertex number using departure time as an index
      departure = [-1] * 2 * N

      ''' If we had done it the other way around, i.e., fill the array
          with departure time using vertex number as an index, we would
          need to sort it later '''

      # to keep track of whether a vertex is discovered or not
      discovered = [False] * N
      time = 0

      # perform DFS on all undiscovered vertices
      for i in range(N):
          if not discovered[i]:
              time = DFS(graph, i, discovered, departure, time)

      # Print the vertices in order of their decreasing
      # departure time in DFS, i.e., in topological order
      for i in reversed(range(2*N)):
          if departure[i] != -1:
              print(departure[i], end=' ')
    ~~~

    **Time Complexity** of the above implementation is **O(V + E)**, where V and E are the total number of vertices
    and edges in the graph, respectively.  
    **Space Complexity** : **O(V)**, where V is total number of vertices in the graph
    
    ---
    
    <a name="Backtracking"></a>
14. ### Backtracking

    **Backtracking** is a general algorithm for finding all (or some) solutions to some computational problems, notably constraint satisfaction problems, that incrementally         build candidates to the solutions, and abandons each partial candidate c **(“backtracks”)** as soon as it determines that c cannot possibly be completed to a valid             solution.
    
    Backtracking can be applied only for problems that admit the concept of a **partial candidate solution** and a relatively quick test of whether it can be completed to a       valid solution. Backtracking is often much faster than brute force enumeration of all candidates since it can eliminate a large number of candidates with a single test. 
    
    ---
    
    <a name="Dynamic-Programming"></a>
15. ### Dynamic Programming

    **Dynamic programming** is a method for solving a complex problem by breaking it down into a collection of **simpler subproblems**, solving each of those subproblems just       once, and storing their solutions using a **memory-based data structure (array, map, etc)**. Each of the subproblem solutions is indexed in some way, typically based on       the values of its input parameters, so as to facilitate its lookup. So, the next time the same subproblem occurs, instead of recomputing its solution, one simply looks         up the previously computed solution, thereby saving computation time. This technique of storing solutions to subproblems instead of recomputing them is called                 memoization.
    
    ---

    <a name="Divide-and-Conquer"></a>
16. ### Divide and Conquer

    **Divide and Conquer (D&C)** is an algorithm design paradigm based on multi-branched recursion. A divide and conquer algorithm works by recursively breaking down a problem     into two or more **subproblems** of the same or related type until these become simple enough to be solved directly. The solutions to the subproblems are then combined to     give a solution to the original problem.
    
    ---

    <a name="Greedy-Algorithm"></a>
17. ### Greedy Algorithm

    A **greedy algorithm** is an algorithmic paradigm that follows the problem-solving heuristic of making the locally optimal choice at each stage with the hope of finding a     **global optimum**.
    
    ---
   
    <a name="P"></a>
18. ### P

    **P** is a **complexity class** that represents the set of all decision problems that can be solved in **polynomial time**. That is, given an instance of the problem, the     answer yes or no can be decided in polynomial time.
    
    Given a graph connected G, can its vertices be coloured using two colours so that no edge is monochromatic?
    
    **Algorithm** : start with an arbitrary vertex, color it red and all of its neighbours blue and continue. Stop when you run out of vertices or you are forced to make an       edge have both of its endpoints be the same color.
    
    ---
    
    <a name="NP"></a>
19. ### NP

    **NP** is a **complexity class** that represents the set of all decision problems for which the instances where the answer is "yes" have proofs that can be verified in         polynomial time.
    This means that if someone gives us an instance of the problem and a certificate to the answer being yes, we can check that it is correct in **polynomial time**.
    
    ---
    
    <a name="NP-Complete"></a>
20. ### NP Complete

    **NP-Complete** is a **complexity class** which represents the set of all problems X in NP for which it is possible to reduce any other NP problem Y to X in polynomial         time.

    Intuitively this means that we can solve Y quickly if we know how to solve X quickly. Precisely, Y is reducible to X, if there is a polynomial time algorithm f to             transform instances y of Y to instances x = f(y) of X in polynomial time, with the property that the answer to y is yes, if and only if the answer to f(y) is yes.
    It can be shown that every NP problem can be reduced to 3-SAT. The proof of this is technical and requires use of the technical definition of NP (based on non-                 deterministic Turing machines). This is known as Cook's theorem.
    What makes NP-complete problems important is that if a deterministic polynomial time algorithm can be found to solve one of them, every NP problem is solvable in               polynomial time.
    
    ---
    
    <a name="NP-Hard"></a>
21. ### NP-Hard

    Intuitively, these are the problems that are at least as hard as the NP-complete problems. Note that NP-hard problems do not have to be in NP, and they do not have to be       decision problems.
    The precise definition here is that a problem X is NP-hard, if there is an NP-complete problem Y, such that Y is reducible to X in polynomial time.
    But since any NP-complete problem can be reduced to any other NP-complete problem in polynomial time, all NP-complete problems can be reduced to any NP-hard problem in         polynomial time. Then, if there is a solution to one NP-hard problem in polynomial time, there is a solution to all NP problems in polynomial time.
    The halting problem is an NP-hard problem. This is the problem that given a program P and input I, will it halt? This is a decision problem but it is not in NP. It is         clear that any NP-complete problem can be reduced to this one. As another example, any NP-complete problem is NP-hard.
    
    ---
    
    
    ### References :
    
    https://www.geeksforgeeks.org/
    
    https://www.tutorialspoint.com/
    
    https://www.techiedelight.com/
