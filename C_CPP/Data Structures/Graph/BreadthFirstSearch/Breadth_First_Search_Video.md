# Breadth First Search

### Video Link :- [Click Here](https://www.youtube.com/watch?v=8tlBFHMsZ9M)

## Code used in above video
```c
#include <stdio.h>

#define no_of_vertices 10
#define no_of_edges 15

int adj_matrix[no_of_vertices + 1][no_of_vertices + 1] = {0}; // 0 - no_of_vertices
int queue[no_of_vertices], front = 0, rear = 0;
int visited[no_of_vertices + 1] = {0};

void generateAdjMatrix(int edges[][2])
{
    for (int i = 0; i < no_of_edges; i++)
    {
        int vertex1 = edges[i][0];
        int vertex2 = edges[i][1];
        // if there is a link or edge between vertex1 and vertex2
        adj_matrix[vertex1][vertex2] = 1;
        adj_matrix[vertex2][vertex1] = 1;
    }

    // // printing the adjacency matrix
    // for(int i=1; i<=no_of_vertices; i++)
    // {
    //     for(int j=1; j<=no_of_vertices; j++)
    //     {
    //         printf("%d ",adj_matrix[i][j]);
    //     }
    //     printf("\n");
    // }
}

void BFS(int vertex)
{
    if(visited[vertex] == 0)
    {
        visited[vertex] = 1;
        queue[rear++] = vertex;
    }
    for(int i=1; i<=no_of_vertices; i++)
    {
        // adj_matrix checks for adjacency whether vertex and i are adjacent or not
        // visited[i] checks whether the i is visited or not if not then apply the condition
        if(adj_matrix[vertex][i] == 1 && visited[i] == 0)
        {
            // putting into queue
            queue[rear++] = i;

            // making node visited
            visited[i] = 1;
        }
    }

    // printing the vertex data and removing it from queue
    printf("%d ",queue[front++]);

    // checking if elements left in the queue or not if left then applying same function on that element
    if(front < rear)
    {
        BFS(queue[front]);
    }
}

int main()
{
    int edges[][2] = {{1, 2}, {1, 3}, {2, 3}, {2, 4}, {2, 5}, {3, 6}, {3, 7}, {5, 6}, {6, 7}, {4, 8}, {5, 8}, {6, 9}, {7, 9}, {8, 10}, {9, 10}};
    generateAdjMatrix(edges);
    BFS(1);

    return 0;
}
```

### Output from the above code
```c
1 2 3 4 5 6 7 8 9 10
```
