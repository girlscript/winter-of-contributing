<hr>
<h1 align ="center"> KRUSKAL'S ALGORITHM</h1><br>

Kruskal’s Algorithm is a famous greedy algorithm which is used for finding the Minimum Spanning Tree (MST) of a given graph. To apply Kruskal’s algorithm, the graph must be <b> weighted</b>, <b>connected</b> and <b>undirected</b>.

## IMPLEMENTATION

- <b>STEP 1:</b> Sort all the edges from low weight to high weight.
- <b>STEP 2:</b> Take the edge with the lowest weight and use it to connect the vertices of graph. If adding an edge creates a cycle, then reject that edge and go for the next least weight edge.
- <b>STEP 3:</b> Keep adding edges until all the vertices are connected and a Minimum Spanning Tree (MST) is obtained.

## TIME COMPLEXITY

O(ElogE) or O(ElogV).
Sorting of edges takes O(ELogE) time. After sorting, we iterate through all edges and apply the find-union algorithm. 
The find and union operations can take at most O(LogV) time.
So overall complexity is O(ELogE + ELogV) time. The value of E can be at most O(V2), so O(LogV) is O(LogE) the same. 
Therefore, the overall time complexity is O(ElogE) or O(ElogV).



#### Analysis

- The edges are maintained as min heap.
- The next edge can be obtained in O(logE) time if graph has E edges.
- Reconstruction of heap takes O(E) time.
- So, Kruskal’s Algorithm takes O(ElogE) time.
- The value of E can be at most O(V2).
- So, O(logV) and O(logE) are same.

#### Exceptional Case

- If the edges are already sorted, then there is no need to construct minimum heap.
- So, deletion from minium heap time is saved.
- In this case, time complexity of Kruskal’s Algorithm = <b>O(E + V)</b>

## PROBLEM

Construct the minimum spanning tree (MST) for the given graph using Kruskal’s Algorithm:
![image](https://user-images.githubusercontent.com/66105257/139105484-16573e48-5332-4f80-a7dd-dbacd9e65849.png)


## SOLUTION

To construct MST using Kruskal’s Algorithm: <br>
<b>1. </b>Simply draw all the vertices on the paper.<br>
<b>2. </b>Connect these vertices using edges with minimum weights such that no cycle gets formed.<br>

### STEP 1: <br>
![image](https://user-images.githubusercontent.com/66105257/139105625-318dfac1-f342-4351-953d-bce74fe9cb40.png)


### STEP 2: <br>

![image](https://user-images.githubusercontent.com/66105257/139105652-05ad2ed6-5174-4759-9efb-055a7fa67275.png)


### STEP 3: <br>

![image](https://user-images.githubusercontent.com/66105257/139105698-17341647-6971-4efc-be0f-59f52616c27d.png)

### STEP 4: <br>

![image](https://user-images.githubusercontent.com/66105257/139105733-9bfa915c-eb38-4e41-a620-019416a5e3f6.png)

### STEP 5: <br>

![image](https://user-images.githubusercontent.com/66105257/139105764-09203bf9-bdc5-42a7-9adb-cba4086951b2.png)

### STEP 6: <br>

![image](https://user-images.githubusercontent.com/66105257/139105867-a9a3d0dd-137a-40ff-ad11-e73468d8473b.png)


### STEP 7: <br>

![image](https://user-images.githubusercontent.com/66105257/139105905-7cd56878-e753-49db-a50d-9faf129dafe6.png)

### STEP 8: <br>

![image](https://user-images.githubusercontent.com/66105257/139106025-af77fc16-5f3c-4843-9fe4-6c309ca66e9b.png)

Since all the vertices have been connected / included in the MST, so we stop.

### Weight of the MST:

```C
= Sum of all edge weights
= 1 + 2 + 2 + 4 + 4 + 7 + 8 + 9
= 37 units
```

## PROGRAM:


      from collections import defaultdict

      class Graph:

        def __init__(self, vertices):
          self.V = vertices # No. of vertices
          self.graph = [] # default dictionary
          # to store graph

        # function to add an edge to graph
        def addEdge(self, u, v, w):
          self.graph.append([u, v, w])
        def find(self, parent, i):
          if parent[i] == i:
            return i
          return self.find(parent, parent[i])

        def union(self, parent, rank, x, y):
          xroot = self.find(parent, x)
          yroot = self.find(parent, y)


          if rank[xroot] < rank[yroot]:
            parent[xroot] = yroot
          elif rank[xroot] > rank[yroot]:
            parent[yroot] = xroot

          else:
            parent[yroot] = xroot
            rank[xroot] += 1

        def KruskalMST(self):

          result = [] # This will store the resultant MST

          # An index variable, used for sorted edges
          i = 0

          # An index variable, used for result[]
          e = 0

          self.graph = sorted(self.graph,
                    key=lambda item: item[2])

          parent = []
          rank = []

          # Create V subsets with single elements
          for node in range(self.V):
            parent.append(node)
            rank.append(0)

          # Number of edges to be taken is equal to V-1
          while e < self.V - 1:

            # Step 2: Pick the smallest edge and increment
            # the index for next iteration
            u, v, w = self.graph[i]
            i = i + 1
            x = self.find(parent, u)
            y = self.find(parent, v)

            # If including this edge does't
            # cause cycle, include it in result
            # and increment the indexof result
            # for next edge
            if x != y:
              e = e + 1
              result.append([u, v, w])
              self.union(parent, rank, x, y)
            # Else discard the edge

          minimumCost = 0
          print ("Edges in the constructed MST")
          for u, v, weight in result:
            minimumCost += weight
            print("%d -- %d == %d" % (u, v, weight))
          print("Minimum Spanning Tree" , minimumCost)


      g = Graph(4)
      g.addEdge(0, 1, 10)
      g.addEdge(0, 2, 6)
      g.addEdge(0, 3, 5)
      g.addEdge(1, 3, 15)
      g.addEdge(2, 3, 4)

      g.KruskalMST()
      
      
      
      OUTPUT:
      Following are the edges in the constructed MST
      2 -- 3 == 4
      0 -- 3 == 5
      0 -- 1 == 10
      Minimum Cost Spanning Tree: 19





### References:

- https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/

- https://en.wikipedia.org/wiki/Kruskal%27s_algorithm
