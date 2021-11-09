# Floyd-Warshall Algorithm

Floyd-Warshall Algorithm is an algorithm for finding the shortest path between all the pairs of vertices in a weighted graph. 

## Algorithm:

```
n = no of vertices
A = matrix of dimension n*n
for k = 1 to n
    for i = 1 to n
        for j = 1 to n
            Ak[i, j] = min (Ak-1[i, j], Ak-1[i, k] + Ak-1[k, j])
return A
```

## Python Code:

```python
nV = 4

INF = 999

def floyd_warshall(G):
    distance = list(map(lambda i: list(map(lambda j: j, i)), G))

    for k in range(nV):
        for i in range(nV):
            for j in range(nV):
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j])
    print_solution(distance)

def print_solution(distance):
    for i in range(nV):
        for j in range(nV):
            if(distance[i][j] == INF):
                print("INF", end=" ")
            else:
                print(distance[i][j], end="  ")
        print(" ")


G = [[0, 3, INF, 5],
         [2, 0, INF, 4],
         [INF, 1, 0, INF],
         [INF, INF, 2, 0]]
floyd_warshall(G)
```

## Output:

![output](output.png)

## Time Complexity:

There are three loops. Each loop has constant complexities. So, the time complexity of the Floyd-Warshall algorithm is O(n3).

## Space Complexity:

The space complexity of the Floyd-Warshall algorithm is O(n2).

## Floyd-Warshall Algorithm Applications:

1. To find the shortest path is a directed graph
2. To find the transitive closure of directed graphs
3. To find the Inversion of real matrices.
4. For testing whether an undirected graph is bipartite.

For more details refer:

https://www.programiz.com/dsa/floyd-warshall-algorithm
