# List of Algorithms asked frequently in Interviews

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

            mid = (left + right) // 2

            # overflow can happen. Use:
            # mid = left + (right - left) / 2
            # mid = right - (right - left) // 2

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
 
    mid = (left + right) // 2
 
    # overflow can happen. Use below
    # mid = left + (right - left) / 2
 
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
   
   **Time Complexity** : **O(log(n))**, where N is the total number of integers in the array.
   
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
     and edges in the graph, respectively
     
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

   
