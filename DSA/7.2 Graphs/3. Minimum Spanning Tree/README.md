# Introduction to Minimum Spanning Tree

A Tree is a graph with following properties:

- The graph is connected (can go from anywhere to anywhere)
- There are no cyclic (Acyclic)


![tree](https://user-images.githubusercontent.com/70436834/143482285-f587603e-068f-4ad1-a1fb-dfda20887842.png)
![not-trees](https://user-images.githubusercontent.com/70436834/143482427-e6b7d9a3-e73b-4185-90f3-a42fd2467cb4.png)


## Spanning Tree:

Given a connected undirected graph, a spanning tree of that graph is a subgraph that is a tree and joined all vertices. A single graph can have many spanning trees.

For Example:

![connected-undirected-graph](https://user-images.githubusercontent.com/70436834/143482455-0717e93b-b47c-4815-8bd6-a21a0d4fcfc0.png)

For the above-connected graph. There can be multiple spanning Trees like 

![spanning-tree](https://user-images.githubusercontent.com/70436834/143482481-932bc944-4e00-46d3-8c72-d9437a77f1a5.png)



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


![nomst-graph](https://user-images.githubusercontent.com/70436834/143482562-212f7609-0b6e-41d6-a6fe-692a1936da6b.png)

![mst-graph](https://user-images.githubusercontent.com/70436834/143482543-6897a71b-2002-4fb3-9856-5eaa246f3c00.png)




## MST Applications:

- To find paths in the map
- To design networks like telecommunication networks, water supply networks, and electrical grids.


##
#### References:
https://www.programiz.com/dsa/spanning-tree-and-minimum-spanning-tree
