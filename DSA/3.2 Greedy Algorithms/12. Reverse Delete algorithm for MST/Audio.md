# Reverse Delete Algorithm for MST

[Reverse Delete Algorithm audio](https://drive.google.com/file/d/1WBjM_L7max3JALnd6f5V7-edqLMKlH3u/view?usp=sharing)

### Summary of audio

A spanning tree is a subset of a graph that connects all the vertices together. There can be multiple spanning trees for a single graph. However, the spanning tree that has the minimum cumulative cost of it’s edges is called the minimum spanning tree. 

The reverse delete algorithm is a method for obtaining a minimum spanning tree from a connected and weighted graph, using a greedy approach. 

---
### Algorithm
1. Sort all the edges in decreasing order of their weights.
2. Initialize the MST as the original graph.
3. Select the edge with the maximum weight
4. If removing the edge disconnects the graph, the keep the edge as it is
    Else remove the edge
5. Move on to the next edge with the maximum weight
---
### Time and Space Complexity
The time complexity for the reverse deletion algorithm can be derived as O(E log V(log log V)3 ), where E is the number of edges and V is the number of vertices in the graph. Whereas the space complexity remains O(V+E).

---

### Example

![alt text](https://i.ibb.co/zQ09djJ/1.jpg)

![alt text](https://i.ibb.co/yV00vPm/2.jpg)

---

### Implementation
```
void Graph::reverseDeleteMST()
{
    // Sort edges in increasing order on basis of cost
    sort(edges.begin(), edges.end());
  
    int mst_wt = 0;  // Initialize weight of MST
  
    cout << "Edges in MST\n";
  
    // Iterate through all sorted edges in
    // decreasing order of weights
    for (int i=edges.size()-1; i>=0; i--)
    {
        int u = edges[i].second.first;
        int v = edges[i].second.second;
  
        // Remove edge from undirected graph
        adj[u].remove(v);
        adj[v].remove(u);
  
        // Adding the edge back if removing it
        // causes disconnection. In this case this 
        // edge becomes part of MST.
        if (isConnected() == false)
        {
            adj[u].push_back(v);
            adj[v].push_back(u);
  
            // This edge is part of MST
            cout << "(" << u << ", " << v << ") \n";
            mst_wt += edges[i].first;
        }
    }
  
    cout << "Total weight of MST is " << mst_wt;
}
```
