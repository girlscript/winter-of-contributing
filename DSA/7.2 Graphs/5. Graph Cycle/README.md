# Cycles in a Graph

Detection of cycles in Directed and Undirected graph are discussed below:


## Cycle in a Directed Graph:

In a directed graph, we will check whether the graph contains cycle or not. A directed graph is a set of vertices or nodes connected by edges, and each edge is associated with some direction.

Consider the below directed graph to detect the cycle.


<div align="center">
<img src="images\directed-cycle.png">
</div>

Now, we will use the DFS
technique to detect cycles in a directed graph. As we are using the DFS technique, so we will use the stack data structure for the implementation. 
Here, we will use the flag variable that contains three values, i.e., 0, 1, and -1. Here, 0 means that the node is visited and available in the stack, -1 means that the node is unvisited, and 1 means that the node is visited and has been popped out from the stack.

Initially, all the vertices are marked with -1 as they all are not visited.


- **Step 1**: First, we will visit vertex A and will be marked as 0. Since node A has been visited so it will be marked as 0, and node A is pushed into the stack shown as below:

<div align="center">
<img src="images\g-step1.png">
</div>

<div align="center">
<img src="images\s-step1.png">
</div>

The visited set contains the node A shown as below:

**Visited set**: A

The parent map table is given below:

<div align="center">
<img src="images\v-step1.png">
</div>

Since node A has been visited, A comes under the vertex column and the parent column is left blank as node A is a source vertex.


- **Step 2**: The next vertex is B. Now, we will visit vertex B and will be marked as 0. Since the node B has been visited so it will be marked as 0, and node B is pushed into the stack shown as below:

<div align="center">
<img src="images\g-step2.png">
</div>

<div align="center">
<img src="images\s-step2.png">
</div>

The visited set contains the node A and B shown as below:

**Visited set**: A, B

The parent map table is given below:

<div align="center">
<img src="images\v-step2.png">
</div>

Since node B has been visited, so B comes under the vertex column, and A comes under the parent column as B comes from node A.

- **Step 3**: The adjacent vertices of B are C and D means we can either visit C or D. Suppose we visit vertex C, so vertex C will be marked as 0 and node C is pushed into the stack shown as below:

<div align="center">
<img src="images\g-step3.png">
</div>

<div align="center">
<img src="images\s-step3.png">
</div>

The visited set contains the node A, B and C shown as below:

**Visited set**: A, B, C

The parent map table is given below:

<div align="center">
<img src="images\v-step3.png">
</div>

Since node C has been visited, so C comes under the vertex column, and B comes under the parent column.

- **Step 4**: There are no further vertices to be visited from C, so we will perform backtracking. In order to perform backtracking, we will pop the node. First, we will pop node C from the stack. Since node C has been popped out, so we will mark the node C as 1 shown as below:

<div align="center">
<img src="images\g-step4.png">
</div>

The next topmost node in the stack is B, so we will backtrack to the vertex B shown as below:

- **Step 5**: Now, we will see 'is there any adjacent vertex left to be visited'. We can observe in the above graph that the vertex D is left unvisited. So, now we will move from the vertex B to the vertex D. The flag value of vertex D is now changed to 0, and the vertex D is pushed into the stack shown as below:

<div align="center">
<img src="images\g-step5.png">
</div>

<div align="center">
<img src="images\s-step5.png">
</div>

The visited set contains the node A, B, C, D

The parent map table is given below:

<div align="center">
<img src="images\v-step5.png">
</div>

Since node D has been visited, it comes under the vertex column, and the node D has arrived from vertex B, so vertex B comes under the parent column.

- **Step 6**: The adjacent vertex of node D is node E which is left unvisited. Now we will visit the vertex E and will mark its flag value as 0. The node E is pushed into the stack shown as below:

<div align="center">
<img src="images\g-step6.png">
</div>

<div align="center">
<img src="images\s-step6.png">
</div>

The visited set contains the node A, B, C, D, E

The parent map table is given below:

<div align="center">
<img src="images\v-step6.png">
</div>

Since node E has been visited, it comes under the vertex column, and node E has arrived from the vertex D, so D comes under the parent column.


### Analysis:

- There is one condition that determines whether the graph contains a cycle or not. If the adjacent vertex of any vertex is having a 0 flag value means that the graph contains a cycle.

- In the above graph, the adjacent vertex of E is B, and its flag value is 0; therefore, the graph contains a cycle.

Now we will determine the nodes that create a cycle in a graph.

- The adjacent vertex of E is B;

**E->B**

- The parent of E is D so;

**D->E->B**

- The parent of D is B so,

**B->D->E->B** (creates a cycle)


## Cycle in an Undirected Graph:

In an undirected graph, we will check whether the graph contains cycle or not. An Undirected graph is a set of vertices or nodes connected by edges, and each edge is associated to some edge with both directions.

Consider the below undirected graph to detect the cycle.


<div align="center">
<img src="images\undirected-cycle.png">
</div>


### Approach:

- Run a DFS from every unvisited node. 
- Depth First Traversal can be used to detect a cycle in a Graph. 
- DFS for a connected graph produces a tree. 
- There is a cycle in a graph only if there is a back edge present in the graph. 
- A back edge is an edge that is joining a node to itself (self-loop) or one of its ancestor in the tree produced by DFS. 
- To find the back edge to any of its ancestors keep a visited array and if there is a back edge to any visited node then there is a loop and return true.


### Algorithm:

- Create the graph using the given number of edges and vertices.
- Create a recursive function that have current index or vertex, visited array and parent node.
- Mark the current node as visited .
- Find all the vertices which are not visited and are adjacent to the current node. Recursively call the function for those vertices, If the recursive function returns true return true.
- If the adjacent node is not parent and already visited then return true.
- Create a wrapper class, that calls the recursive function for all the vertices and if any function returns true, return true.
- Else if for all vertices the function returns false return false.

### Example:

The following diagram shows the dry run of above discussed algorithm:

<div align="center">
<img src="images\dry-run.png">
</div>



Hence, approaches to detect cycles in directed as well as in undirected graph have been discussed.


##
#### References:
https://www.baeldung.com/cs/detecting-cycles-in-directed-graph
https://www.baeldung.com/cs/detecting-cycles-in-undirected-graph
