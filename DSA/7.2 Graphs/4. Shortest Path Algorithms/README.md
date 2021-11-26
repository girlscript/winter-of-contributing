# Shortest Path Algorithms

The shortest path problem is about finding a path between 2 vertices in a graph such that the total sum of the edges weights is minimum.

This problem could be solved easily using (BFS) if all edge weights were (1), but here weights can take any value. Different algorithms are discussed below depending on the use-case. 


## Dijkstra’s Algorithm:

Dijkstra’s algorithm solves the single-source shortest-paths problem on a directed weighted graph G = (V, E), where all the edges are non-negative (i.e., w(u, v) ≥ 0 for each edge (u, v) Є E).

In the following algorithm, we will use one function **Extract-Min()**, which extracts the node with the smallest key.


<div align="center">
<img src="images\dijkstras-algo.png">
</div>


### Analysis:

The complexity of this algorithm is fully dependent on the implementation of Extract-Min function. If extract min function is implemented using linear search, the complexity of this algorithm is **O(V^2 + E)**.

In this algorithm, if we use min-heap on which **Extract-Min()** function works to return the node from **Q** with the smallest key, the complexity of this algorithm can be reduced further.

### Example:

Let us consider vertex **1** and **9** as the start and destination vertex respectively. Initially, all the vertices except the start vertex are marked by ∞ and the start vertex is marked by **0**.

In this algorithm, if we use min-heap on which **Extract-Min()** function works to return the node from **Q** with the smallest key, the complexity of this algorithm can be reduced further.

<div align="center">
<img src="images\dijkstras-ex.png">
</div>

This path is determined based on predecessor information.

<div align="center">
<img src="images\dijkstras-ex2.png">
</div>


## Bellman Ford Algorithm:

This algorithm solves the single source shortest path problem of a directed graph **G = (V, E)** in which the edge weights may be negative. Moreover, this algorithm can be applied to find the shortest path, if there does not exist any negative weighted cycle.

Given below is the algorithm:


<div align="center">
<img src="images\bellmanford-algo.png">
</div>


### Analysis:

The first for loop is used for initialization, which runs in **O(V)** times. The next for loop runs **|V - 1|** passes over the edges, which takes **O(E)** times.

Hence, Bellman-Ford algorithm runs in **O(V, E)** time.

### Example:

The following example shows how Bellman-Ford algorithm works step by step. This graph has a negative edge but does not have any negative cycle, hence the problem can be solved using this technique.

- At the time of initialization, all the vertices except the source are marked by **∞** and the source is marked by **0**.

<div align="center">
<img src="images\bellmanford-ex1.png">
</div>

- In the first step, all the vertices which are reachable from the source are updated by minimum cost. Hence, vertices **a** and **h** are updated.

<div align="center">
<img src="images\bellmanford-ex2.png">
</div>

- In the next step, vertices **a**, **b**, **f** and **e** are updated.

<div align="center">
<img src="images\bellmanford-ex3.png">
</div>

- Following the same logic, in this step vertices **b**, **f**, **c** and **g** are updated.

<div align="center">
<img src="images\bellmanford-ex4.png">
</div>

- Here, vertices **c** and **d** are updated.

<div align="center">
<img src="images\bellmanford-ex5.png">
</div>

Hence, the minimum distance between vertex **s** and vertex **d** is **20**.
Based on the predecessor information, the path is s→ h→ e→ g→ c→ d



##
#### References:
https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/tutorial/
