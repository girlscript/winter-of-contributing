# Acyclic Graph

- In mathematics, especially graph theory, and computer science, a direct acyclic graph (DAG) is a target graph 
with no target cycles. That is, it consists of vertices and edges (also called arcs), with each edge directed 
from one vertex to another, so that following those directions will never form a closed loop. 
- The target graph is DAG if and only if it can be sorted by weather, by arranging the vertices as a line sequence corresponding 
to all directions. DAGs have a wide range of scientific and mathematical applications, from biology (evolution, family medicine, epidemiology) 
to citation networks to arithmetic. 
- The graph is made up of vertices and edges that connect pairs of vertices, where the vertices can be of 
any type of object connected by pairs with edges. In the case of a target graph, each edge has a shape, from one vertex to another vertex. 
- The path to the target graph is the sequence of ends with a point where the last vertex of each edge in sequence corresponds to the first 
vertex of the next edge in sequence; the method forms a cycle when the first vertex of the first edge is equal to the last vertex of its last edge.
Direct acyclic graph is a straightforward graph with no cycles.

```c
#include<iostream>
#include<stdlib.h>

// The maximum number of the vertex for the sample random graph.
#define NOV 20

using namespace std;

// A function to check for the cycle, on addition of a new edge in the random graph.
bool CheckAcyclic(int edge[][2], int ed, bool check[], int v)
{
    int i;
    bool value;
    // If the current vertex is visited already, then the graph contains cycle.
    if(check[v] == true)
    {
        return false;
    }
    else
    {
        check[v] = true;
        // For each vertex, go for all the vertex connected to it.
        for(i = ed; i >= 0; i--)
        {
            if(edge[i][0] == v)
            {
                return CheckAcyclic(edge, ed, check, edge[i][1]);
            }
        }
    }
    // In case, if the path ends then reassign the vertexes visited in that path to false again.
    check[v] = false;

    if(i == 0)
        return true;
}

// A function to generate random graph.
void GenerateRandGraphs(int e)
{
    int i, j, edge[e][2], count;

    bool check[21];

    // Build a connection between two random vertex.
    i = 0;
    while(i < e)
    {
        edge[i][0] = rand()%NOV+1;
        edge[i][1] = rand()%NOV+1;

        for(j = 1; j <= 20; j++)check[j] = false;

        if(CheckAcyclic(edge, i, check, edge[i][0]) == true)
            i++;
    }

    // Print the random graph.
    cout<<"\nThe generated random random graph is: ";
    for(i = 0; i < NOV; i++)
    {
        count = 0;
        cout<<"\n\t"<<i+1<<"-> { ";
        for(j = 0; j < e; j++)
        {
            if(edge[j][0] == i+1)
            {
                cout<<edge[j][1]<<"  ";
                count++;
            }
            else if(edge[j][1] == i+1)
            {
                count++;
            }
            else if(j == e-1 && count == 0)
                cout<<"Isolated Vertex!";
        }
        cout<<" }";
    }   
}


int main()
{
    int e;

    cout<<"Enter the number of edges for the random graphs: ";
    cin>>e;

    // A function to generate a random undirected graph with e edges.
    GenerateRandGraphs(e);
}
```
#### Input & Output
```
Enter the number of edges for the random graphs: 4
The generated random random graph is:
1-> { }
2-> { 8 }
3-> { 5 }
4-> { Isolated Vertex! }
5-> { 1 }
6-> { Isolated Vertex! }
7-> { Isolated Vertex! }
8-> { }
9-> { Isolated Vertex! }
10-> { 5 }
```

#### Happy Coding !!
