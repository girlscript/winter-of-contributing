## Hamiltonian Path
<br>

<p>We use the hamiltonian path in undirected graphs, to find whether a path exists from the 1st to the last node (vertex) without travelling through the same node (vertex).
</p>

```
 For example : 

Hamiltonian path exists :               Hamiltonian path doesn't exist :
 
 (0)---(1)---(2)                            (0)---(1)---(2)                                
  |     |     |                              |  /  |  \  |
  |     |     |                              | /   |   \ |  
 (5)---(4)---(3)                            (5)   (4)   (3)

Path : {0 1 2 3 4 5 0}                  Path : No hamiltonian path exists.
```

## Terminologies : 

- **Undirected** : there is no direction of traversal, ad=nd traversal can be done in either direction.

- Branch : Each link is represented as a line segment, called as a branch. 
- Vertex / Nodes : End points of the branch, ( or the data part of struct ) is known as vertex.
- Path : A sequence of branches traversed while going from one vertex to another.

<br>

## Concept of Adjacency Matrix

In this problem, it is easier to solve the problem if we break it down. We realise that we do not have to worry about the values in the graph, we just have to see whether the nodes are ***adjacent*** to each other or not.


<p> We employ an adjacency matrix for it, which is basically a 2-D square matrix, with :</p>

```
 no. of rows = no. of columns = no. of nodes
```

<p> The matrix has :</p> 

```
if ( nodes i and j are not adjacent )

    adj[ i ][ j ] = 0 

else if ( nodes i and j are adjacent )

    adj[ i ][ j ] = 1
```

<p> where adj[ n ][ n ] is the square adjacency matrix.</p>

<p> For example :</p> 

```
                                                 {
      (0)--(1)--(2)                               {0, 1, 0, 1, 0}
       |   / \   |                                {1, 0, 1, 1, 1}
       |  /   \  |    has the adjacency matrix :  {0, 1, 0, 0, 1}
       | /     \ |                                {1, 1, 0, 0, 1}
      (3)-------(4)                               {0, 1, 1, 1, 0}
                                                 }
```
<br>

## Backtracking Algorithm

<p> Backtracking is a technique for solving problems recursively by trying to build a solution incrementally, one by one. We remove the solutions that fail to satisfy the conditions of the problem.</p>
<p> We use backtracking in this solution of hamiltonian path.</p>
<br>

## Procedure :

<p> We create an empty path array, and enter in it the first node, say node 0. After this we subsequently add the other nodes after checking that :</p> 
- they are adjacent to the previous node
- the node is not repeated
<p>
If we do not find such vertex we don't add it to the path vertex.
</p>

[Hamiltonian Path](hamiltonianPath.c)
