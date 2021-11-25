# Introduction to Minimum Spanning Tree

A Tree is a graph with following properties:

- The graph is connected (can go from anywhere to anywhere)
- There are no cyclic (Acyclic)


<div align="center">
<img src="images\tree.png">
</div>

<div align="center">
<img src="images\not-trees.png">
</div>

## Spanning Tree:

Given a connected undirected graph, a spanning tree of that graph is a subgraph that is a tree and joined all vertices. A single graph can have many spanning trees.

For Example:

<div align="center">
<img src="images\connected-undirected-graph.png">
</div>

For the above-connected graph. There can be multiple spanning Trees like 

<div align="center">
<img src="images\spanning-tree.png">
</div>


## Properties of Spanning Tree:

- There may be several minimum spanning trees of the same weight having the minimum number of edges.
- If all the edge weights of a given graph are the same, then every spanning tree of that graph is minimum.
- If each edge has a distinct weight, then there will be only one, unique minimum spanning tree.
- A connected graph G can have more than one spanning trees.
- A disconnected graph can't have to span the tree, or it can't span all the vertices.
- Spanning Tree doesn't contain cycles.
- Spanning Tree has (n-1) edges where n is the number of vertices.



## Minimum Spanning Tree:

Minimum Spanning Tree is a Spanning Tree which has minimum total cost. If we have a linked undirected graph with a weight (or cost) combine with each edge. Then the cost of spanning tree would be the sum of the cost of its edges.

<div align="center">
<img src="images\nomst-graph.png">
</div>


<div align="center">
<img src="images\mst-graph.png">
</div>


## MST Applications:

- To find paths in the map
- To design networks like telecommunication networks, water supply networks, and electrical grids.


##
#### References:
https://www.programiz.com/dsa/spanning-tree-and-minimum-spanning-tree
