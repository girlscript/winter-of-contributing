# Shortest Path Algorithms

The shortest path problem is about finding a path between 2 vertices in a graph such that the total sum of the edges weights is minimum.

This problem could be solved easily using (BFS) if all edge weights were (1), but here weights can take any value. Different algorithms are discussed below depending on the use-case. 


## Dijkstra’s Algorithm:

Dijkstra’s algorithm solves the single-source shortest-paths problem on a directed weighted graph G = (V, E), where all the edges are non-negative (i.e., w(u, v) ≥ 0 for each edge (u, v) Є E).

In the following algorithm, we will use one function **Extract-Min()**, which extracts the node with the smallest key.

![dijkstras-algo](https://user-images.githubusercontent.com/70436834/143532789-6c6ee596-ad2c-46ad-bd0b-5fc547ae091c.png)


### Analysis:

The complexity of this algorithm is fully dependent on the implementation of Extract-Min function. If extract min function is implemented using linear search, the complexity of this algorithm is **O(V^2 + E)**.

In this algorithm, if we use min-heap on which **Extract-Min()** function works to return the node from **Q** with the smallest key, the complexity of this algorithm can be reduced further.

### Example:

Let us consider vertex **1** and **9** as the start and destination vertex respectively. Initially, all the vertices except the start vertex are marked by ∞ and the start vertex is marked by **0**.

In this algorithm, if we use min-heap on which **Extract-Min()** function works to return the node from **Q** with the smallest key, the complexity of this algorithm can be reduced further.

![dijkstras-ex](https://user-images.githubusercontent.com/70436834/143532807-705f4ce4-f3ca-4587-b13f-2d17bfa8bfdd.png)

This path is determined based on predecessor information.

![dijkstras-ex2](https://user-images.githubusercontent.com/70436834/143532822-bec919ba-74f1-43de-b13e-1f35576a84d9.png)


## Bellman Ford Algorithm:

This algorithm solves the single source shortest path problem of a directed graph **G = (V, E)** in which the edge weights may be negative. Moreover, this algorithm can be applied to find the shortest path, if there does not exist any negative weighted cycle.

Given below is the algorithm:

![bellmanford-algo](https://user-images.githubusercontent.com/70436834/143532842-1d412064-b945-44d0-a26d-b3e7b743f39e.png)


### Analysis:

The first for loop is used for initialization, which runs in **O(V)** times. The next for loop runs **|V - 1|** passes over the edges, which takes **O(E)** times.

Hence, Bellman-Ford algorithm runs in **O(V, E)** time.

### Example:

The following example shows how Bellman-Ford algorithm works step by step. This graph has a negative edge but does not have any negative cycle, hence the problem can be solved using this technique.

- At the time of initialization, all the vertices except the source are marked by **∞** and the source is marked by **0**.

![bellmanford-ex1](https://user-images.githubusercontent.com/70436834/143532862-4ecc5b0a-7eda-4176-a21e-b6c152c1f018.png)

- In the first step, all the vertices which are reachable from the source are updated by minimum cost. Hence, vertices **a** and **h** are updated.

![bellmanford-ex2](https://user-images.githubusercontent.com/70436834/143532871-1ecd3724-58b4-4728-9467-61869840470f.png)

- In the next step, vertices **a**, **b**, **f** and **e** are updated.

![bellmanford-ex3](https://user-images.githubusercontent.com/70436834/143532886-0a9a5cfa-d714-4cb6-8e02-65fd2a188422.png)


- Following the same logic, in this step vertices **b**, **f**, **c** and **g** are updated.

![bellmanford-ex4](https://user-images.githubusercontent.com/70436834/143532904-7633c0cf-1425-48d0-95e1-1e7cf94f561f.png)


- Here, vertices **c** and **d** are updated.

![bellmanford-ex5](https://user-images.githubusercontent.com/70436834/143532920-7c37b4e1-4246-4f19-84d4-0976563d6eb0.png)


Hence, the minimum distance between vertex **s** and vertex **d** is **20**.
Based on the predecessor information, the path is s→ h→ e→ g→ c→ d



##
#### References:
https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/tutorial/
