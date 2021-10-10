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
   
   ~~~
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
   
   ~~~
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
   
   ~~~
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
   
   ~~~
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
    
    The time complexity of BFS traversal is O(V + E), where V and E are the total number of vertices and edges in
    the graph, respectively. Please note that O(E) may vary between O(1) and O(V ), depending on how dense the      
    graph is
