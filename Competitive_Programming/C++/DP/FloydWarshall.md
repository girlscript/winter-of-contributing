# Floyd Warshall Algorithm

Floyd-Warshall Algorithm is used for finding the shortest path between all the pairs of vertices in a weighted graph. This algorithm works for both the directed and undirected weighted graphs. But, it does not work for the graphs with negative cycles (where the sum of the edges in a cycle is negative).

This Algorithm uses Dynamic Programming approach to find the shortest path.

## How the algorithm works?
Following steps are used to find the shortest path between all the pairs of vertices.

- Create a matrix A0 of dimension n*n where n is the number of vertices. The row and the column are indexed as i and j respectively. i and j are the vertices of the graph.
Each cell A[i][j] is filled with the distance from the ith vertex to the jth vertex. If there is no path from ith vertex to jth vertex, the cell is left as infinity.

- 