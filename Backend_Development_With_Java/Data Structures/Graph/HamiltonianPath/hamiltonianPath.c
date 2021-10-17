#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void sol(int V, int *path);
 
bool check(int v,int V, bool graph[V][V], int *path, int pos) //Fn to check adjacency and repetition of nodes
{
    if (graph [ path[pos-1] ][ v ] == 0) // if nodes are not adjacent
        return false;
 
    for (int i = 0; i < pos; i++)       // if nodes are repeated 
        if (path[i] == v)
            return false;
 
    return true;
}
 
bool hamilPath(int V, bool graph[V][V], int *path, int pos) //Constructs Hamiltonian path by adding the nodes, satisfying the required conditions, to the Path array 
{
    if (pos == V)
    {
        if ( graph[ path[pos-1] ][ path[0] ] == 1 )  // nodes are adjacent
           return true;
        else
          return false;
    }
 
    for (int v = 1; v < V; v++) // no checking for node 0 as it is already included
    {
        if (check(v, V, graph, path, pos)) // if true, we add the node to the path array
        {
            path[pos] = v;
 
            if (hamilPath (V,graph, path, pos+1) == true) // use recursion to construct rest of the path
                return true;
 
            path[pos] = -1; // if solution not obtained by adding node, remove it
        }
    }
 
    return false;
}
 
bool checkCycle(int V, bool graph[V][V]) //Utilizes HamilPath() Fn to check whether we have a complete path or not
{
    int *path = malloc(V*sizeof(int)); //path array initialization
    
    for (int i = 0; i < V; i++)
        path[i] = -1;
 
    path[0] = 0;  //adding 0th node (assuming it as start and end point)

    if ( hamilPath(V, graph, path, 1) == false )
    {
        printf("\nSolution doesn't exist");
        return false;
    }
 
    sol(V, path);
    return true;
}
 
void sol(int V, int *path) //Prints Hamiltonian Path if it exists
{
    printf ("\nSolution Exists - Hamiltonian Path is :  \n");
    for (int i = 0; i < V; i++)
        printf("%d ", path[i]);
 
    printf(" %d ", path[0]); //completes cycle after printing full path
    printf("\n");
}
 
int main()
{
    int V, choice = 0;
    
    /*
        This code does not create the adjacecncy matrix of the graph.
        It operates on the adjacency matrix given to it.
    */

    do //Loop for re-running the program without closing
    {
        printf("\nEnter no. of vertices : ");
        scanf("%d",&V);
    
        bool graph[V][V];

        printf("Enter adjacecncy matrix of graph :\n");
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                scanf("%d",&graph[i][j]);
            }
        }

        checkCycle(V, graph);

        printf("\nRepeat-->(1)\nExit  -->(0)\n\n");
        scanf("%d",&choice);

    }while(choice!=0);
 
    return 0;
}
