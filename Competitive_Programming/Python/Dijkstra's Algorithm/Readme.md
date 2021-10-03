
# Dijkstra's Algorithm

Dijkstra’s algorithm finds a shortest path tree from a single source node, by building a set of nodes that have minimum distance from the source.

The graph has the following:

vertices, or nodes, denoted in the algorithm by vv or uu; 

weighted edges that connect two nodes: (u,vu,v) denotes an edge, and w(u,v)w(u,v) denotes its weight. In the diagram on the right, the weight for each edge is written in gray.

The algorithm proceeds as follows:

1. While QQ is not empty, pop the node vv, that is not already in SS, from QQ with the smallest distdist (vv). In the first run, source node ss will be chosen because distdist(ss) was initialized to 0. In the next run, the next node with the smallest distdist value is chosen.


2. Add node vv to SS, to indicate that vv has been visited

3. Update distdist values of adjacent nodes of the current node vv as follows: for each new adjacent node uu,

if distdist (vv) + weight(u,v)weight(u,v) < distdist (uu), there is a new minimal distance found for uu, so update distdist (uu) to the new minimal distance value;

otherwise, no updates are made to distdist (uu).

# Implementation

This is pseudocode for Dijkstra's algorithm, mirroring Python syntax. It can be used in order to implement the algorithm in any language.

function Dijkstra(Graph, source):
       dist[source]  := 0                     // Distance from source to source is set to 0
       for each vertex v in Graph:            // Initializations
           if v ≠ source
               dist[v]  := infinity           // Unknown distance function from source to each node set to infinity
           add v to Q                         // All nodes initially in Q

      while Q is not empty:                  // The main loop
          v := vertex in Q with min dist[v]  // In the first run-through, this vertex is the source node
          remove v from Q 

          for each neighbor u of v:           // where neighbor u has not yet been removed from Q.
              alt := dist[v] + length(v, u)
              if alt < dist[u]:               // A shorter path to u has been found
                  dist[u]  := alt            // Update distance of u 

      return dist[]
    end function