# Floyd Warshall Algorithm

Floyd-Warshall Algorithm is used for finding the shortest path between all the pairs of vertices in a weighted graph. This algorithm works for both the directed and undirected weighted graphs. But, it does not work for the graphs with negative cycles (where the sum of the edges in a cycle is negative).

This Algorithm uses Dynamic Programming approach to find the shortest path.

## How the algorithm works?
Following steps are used to find the shortest path between all the pairs of vertices.

- Create a matrix A0 of dimension n*n where n is the number of vertices. The row and the column are indexed as i and j respectively. i and j are the vertices of the graph.
Each cell A[i][j] is filled with the distance from the ith vertex to the jth vertex. If there is no path from ith vertex to jth vertex, the cell is left as infinity.

- Now, create a matrix A1 using matrix A0. The elements in the first column and the first row are left as they are. The remaining cells are filled in the following way.
<div align ="center">
A[i][j] is filled with (A[i][k] + A[k][j]),  &nbsp;  <strong>if (A[i][j] > A[i][k] + A[k][j]).</strong>
</div>

- In a similar way, A2 is created using A3. The elements in the second column and the second row are left as they are.

- Similarly, A3 and A4 is also created. A4 gives the shortest path between each pair of vertices.

## Implementation of the algorithm in C++
Let us look at the implementation of Floyd Warshall algorithm on a 4x4 matrix:

```
    0      5      INF    10
    INF    0      3      INF
    INF    INF    0      1
    INF    INF    INF    0

```

</br>

``` C++
#include<iostream>
using namespace std;

// defining Infinity = 999999
#define INF 999999

// Flyod Warshall function to find all pair shortest path for 4x4 matrix

void FlyodWarshall(int Graph[4][4], int n)
{
    int Distance[n][n];  // Declaring Distance matrix
    int i, j, k;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            Distance[i][j] = Graph[i][j]; // equating Distange to Graph distance
        }
    }
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                // if city K is shortest path from i to j
                // update Distance Matrix
                if(Distance[i][j] > (Distance[i][k] + Distance[k][j])
                && (Distance[k][j] != INF && Distance[i][k] != INF))
                    {
                        Distance[i][j] = Distance[i][k] + Distance[k][j];
                    }
            }
        }
    }
    // printing the shortest distance matrix
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(Distance[i][j] == INF)
            {
               cout << "INF"
                     << "     ";
            }
            else
            {
                cout << Distance[i][j] << "     ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n =4;
    int Graph[4][4] = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
 
    // Print the solution
    FlyodWarshall(Graph,n);
    return 0;
}

```
### Output

```
    0      5      8      9
    INF    0      3      4
    INF    INF    0      1
    INF    INF    INF    0

```

### Time Complexity 
There are three loops. So, the time complexity of the Floyd-Warshall algorithm is ```O(n^3)```.

### Space Complexity
The space complexity of the Floyd-Warshall algorithm is ```O(n^2)```.