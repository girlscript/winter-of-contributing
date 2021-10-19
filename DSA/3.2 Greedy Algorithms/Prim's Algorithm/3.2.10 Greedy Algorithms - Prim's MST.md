# Prim's Minimum Spanning Tree (MST)

The idea behind Prim’s algorithm is simple, a spanning tree means all vertices must be connected. So the two disjoint subsets (discussed above) of vertices must be connected to make a Spanning Tree. And they must be connected with the minimum weight edge to make it a Minimum Spanning Tree.

Prim’s algorithm is also a Greedy algorithm. It starts with an empty spanning tree. The idea is to maintain two sets of vertices. 
The first set contains the vertices already included in the MST, the other set contains the vertices not yet included. 
At every step, it considers all the edges that connect the two sets, and picks the minimum weight edge from these edges. 
After picking the edge, it moves the other endpoint of the edge to the set containing MST. 

# Algorithm

    Step 1: Select a starting vertex
    Step 2: Repeat Steps 3 and 4 until there are fringe vertices
    Step 3: Select an edge e connecting the tree vertex and fringe vertex that has minimum weight
    Step 4: Add the selected edge and the vertex to the minimum spanning tree T
            [END OF LOOP]
    Step 5: EXIT

# Example

Let's see with the example. Construct a minimum spanning tree of the graph given in the following figure by using prim's algorithm.

![image](https://user-images.githubusercontent.com/66105257/136989202-be80ff20-941a-4cef-a459-9c3fadf25f7c.png)

# Solution

    Step 1 : Choose a starting vertex B.
    Step 2: Add the vertices that are adjacent to A. the edges that connecting the vertices are shown by dotted lines.
    Step 3: Choose the edge with the minimum weight among all. i.e. BD and add it to MST. Add the adjacent vertices of D i.e. C and E.
    Step 3: Choose the edge with the minimum weight among all. In this case, the edges DE and CD are such edges. Add them to MST and explore the adjacent of C i.e. E and A.
    Step 4: Choose the edge with the minimum weight i.e. CA. We can't choose CE as it would cause cycle in the graph.
    The graph produces in the step 4 is the minimum spanning tree of the graph shown in the above figure.

The cost of MST will be calculated as:

cost(MST) = 4 + 2 + 1 + 3 = 10 units.

![image](https://user-images.githubusercontent.com/66105257/136989353-9497527d-c785-4c91-835c-f475e932812a.png)


    # A Python program for Prim's Minimum Spanning Tree (MST) algorithm.
    # The program is for adjacency matrix representation of the graph

    import sys # Library for INT_MAX

    class Graph():

      def __init__(self, vertices):
        self.V = vertices
        self.graph = [[0 for column in range(vertices)]
              for row in range(vertices)]

      # A utility function to print the constructed MST stored in parent[]
      def printMST(self, parent):
        print "Edge \tWeight"
        for i in range(1, self.V):
          print parent[i], "-", i, "\t", self.graph[i][ parent[i] ]

      # A utility function to find the vertex with
      # minimum distance value, from the set of vertices
      # not yet included in shortest path tree
      def minKey(self, key, mstSet):

        # Initialize min value
        min = sys.maxint

        for v in range(self.V):
          if key[v] < min and mstSet[v] == False:
            min = key[v]
            min_index = v

        return min_index

      # Function to construct and print MST for a graph
      # represented using adjacency matrix representation
      def primMST(self):

        # Key values used to pick minimum weight edge in cut
        key = [sys.maxint] * self.V
        parent = [None] * self.V # Array to store constructed MST
        # Make key 0 so that this vertex is picked as first vertex
        key[0] = 0
        mstSet = [False] * self.V

        parent[0] = -1 # First node is always the root of

        for cout in range(self.V):

          # Pick the minimum distance vertex from
          # the set of vertices not yet processed.
          # u is always equal to src in first iteration
          u = self.minKey(key, mstSet)

          # Put the minimum distance vertex in
          # the shortest path tree
          mstSet[u] = True

          # Update dist value of the adjacent vertices
          # of the picked vertex only if the current
          # distance is greater than new distance and
          # the vertex in not in the shortest path tree
          for v in range(self.V):

            # graph[u][v] is non zero only for adjacent vertices of m
            # mstSet[v] is false for vertices not yet included in MST
            # Update the key only if graph[u][v] is smaller than key[v]
            if self.graph[u][v] > 0 and mstSet[v] == False and key[v] > self.graph[u][v]:
                key[v] = self.graph[u][v]
                parent[v] = u

        self.printMST(parent)

    g = Graph(5)
    g.graph = [ [0, 2, 0, 6, 0],
          [2, 0, 3, 8, 5],
          [0, 3, 0, 0, 7],
          [6, 8, 0, 0, 9],
          [0, 5, 7, 9, 0]]

    g.primMST();
   Output:

    Edge   Weight
    0 - 1    2
    1 - 2    3
    0 - 3    6
    1 - 4    5

Time Complexity of the above program is <b>O(V^2)</b>. If the input graph is represented using adjacency list, then the time complexity of Prim’s algorithm can be reduced to O(E log V) with the help of binary heap.


# References

1. https://en.wikipedia.org/wiki/Prim%27s_algorithm

2. https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/
