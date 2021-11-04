# Floyd Warshall Algorithm

Floyd-Warshall Algorithm is used for finding the shortest path between all the pairs of vertices in a weighted graph. This algorithm works for both the directed and undirected weighted graphs. But, it does not work for the graphs with negative cycles (where the sum of the edges in a cycle is negative).

This Algorithm uses Dynamic Programming approach to find the shortest path.

## How the algorithm works?
Following steps are used to find the shortest path between all the pairs of vertices.

- Create a matrix A0 of dimension n*n where n is the number of vertices. The row and the column are indexed as i and j respectively. i and j are the vertices of the graph.
Each cell A[i][j] is filled with the distance from the ith vertex to the jth vertex. If there is no path from ith vertex to jth vertex, the cell is left as infinity.

- Now, create a matrix A1 using matrix A0. The elements in the first column and the first row are left as they are. The remaining cells are filled in the following way.
<div align ="center">
A[i][j] is filled with (A[i][k] + A[k][j]) if (A[i][j] > A[i][k] + A[k][j]).
</div>

- In a similar way, A2 is created using A3. The elements in the second column and the second row are left as they are.

- Similarly, A3 and A4 is also created. A4 gives the shortest path between each pair of vertices.