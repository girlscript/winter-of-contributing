# Kruskal's Algorithm

- Kruskal’s algorithm is applied to find the  minimum spanning tree for a connected weighted graph. - The algorithm follows a greedy approach that aids to finds an optimum solution at every point. 
- Among the numerous algorithms the most popular algorithms used with graphs is the ones for traversing the graph in the minimum time possible as well as the ones which produce a minimum spanning tree from it. Primarily we have the BFS and DFS algorithms for the graph traversal,while the equivalent minimum spanning tree can be generated with the help of Prim’s algorithm or Kruskal’s algorithm. 
- Minimum spanning trees help lessen the number of edges to a major extent so that only the minimal edges are shown. This, in turn, finds application in solving a variety of questions that can be solved using graphs.
- The main aim of using Kruskal’s algorithm is for getting the minimum cost spanning tree for a graph. Rather than the vertices, Kruskal’s algorithm is more concerned with the edges and deals with edges directly by adding their vertices to a common group. 
- There are two prime methods of implementing Kruskal’s algorithm in C++: disjoint sets or priority queues. The usage of disjoint sets is a bit better as it helps visualize the change in the groups at any point in time.


#### Code

```cpp
#include<iostream>
#include<string.h>
using namespace std;
class Graph
{
  char vertices[10][10];
  int cost[10][10],no;
  public:
  Graph();
  void creat_graph();
  void display();
  int Position(char[]);
  void kruskal_algo();
};
/* Initialzation of adj matrix with 999 */
Graph::Graph()
{
  no=0;
  for(int i=0;i<10;i++)
  for(int j=0;j<10;j++)
  {
     cost[i][j]=999;
   }
}
/* input for graph creation */
void Graph::creat_graph()
{
  char ans,Start[10],End[10];
  int wt,i,j;
  cout<<"Enter the number of vertices: ";
  cin>>no;
  cout<<"\nEnter the vertices: ";
  for(i=0;i<no;i++)
          cin>>vertices[i];
  do
  {
    cout<<"\nEnter Start and End vertex of the edge: ";
    cin>>Start>>End;
    cout<<"Enter weight: ";
    cin>>wt;
    i=Position(Start);
    j=Position(End);
    cost[i][j]=cost[j][i]=wt;
    cout<<"\nDo you want to add more edges (Y=YES/N=NO)? : ";  
    cin>>ans;
  }while(ans=='y' || ans=='Y');
}
/* Display thr cost matrix */
void Graph::display()
{
  int i,j;
  cout<<"\n\nCost matrix: ";
  for(i=0;i<no;i++)
  {
     cout<<"\n";
     for(j=0;j<no;j++)
     cout<<"\t"<<cost[i][j];
  }
}
int Graph::Position(char key[10])
{
  int i;
  for(i=0;i<10;i++)
  if(strcmp(vertices[i],key)==0)
    return i;
return -1;     
}
void Graph::kruskal_algo()
{
  int i,j,v[10]={0},x,y,Total_cost=0,min,gr=1,flag=0,temp,d;
  while(flag==0)
  {
    min=999;
     for(i=0;i<no;i++)
    {  
      for(j=0;j<no;j++)
         {
        if(cost[i][j]<min)
            {
          min=cost[i][j];
          x=i;
          y=j;
            }
         }
     }
     
    if(v[x]==0 && v[y]==0)
    {
      v[x]=v[y]=gr;
      gr++;
    }
    else if(v[x]!=0 && v[y]==0)
      v[y]=v[x];
    else if(v[x]==0 && v[y]!=0)
      v[x]=v[y];
    else
    {
      if(v[x]!=v[y])
      {
        d=v[x];
        for(i=0;i<no;i++)
        {
          if(v[i]==d)
          v[i]=v[y];
        }//end for
      }
    }
    
    cost[x][y]=cost[y][x]=999;
    Total_cost=Total_cost+min;     
    cout<<"\n\t"<<vertices[x]<<"\t\t"<<vertices[y]<<"\t\t"<<min;
  
       temp=v[0]; flag=1;
       for(i=0;i<no;i++)
       {
         if(temp!=v[i])
         {
         flag=0;
         break;
         }
       }
  }
cout<<"\nTotal cost of tree= "<<Total_cost;
}
int main()
{
  Graph g;
  g.creat_graph();
  g.display();
  cout<<"\n\n\nMinimum Spanning tree using kruskal algorithm=>";
  cout<<"\nSource vertex\tDestination vertex\tWeight\n";
  g.kruskal_algo();
return 0;
}
```
#### Input
```
Enter the number of vertices: 4

Enter the vertices: 0
1
2
3

Enter Start and End vertex of the edge: 0
1
Enter weight: 10

Do you want to add more edges (Y=YES/N=NO)? : Y

Enter Start and End vertex of the edge: 0
2
Enter weight: 6

Do you want to add more edges (Y=YES/N=NO)? : Y

Enter Start and End vertex of the edge: 0
3
Enter weight: 5

Do you want to add more edges (Y=YES/N=NO)? : Y

Enter Start and End vertex of the edge: 1
3
Enter weight: 15

Do you want to add more edges (Y=YES/N=NO)? : Y

Enter Start and End vertex of the edge: 2
3
Enter weight: 4

Do you want to add more edges (Y=YES/N=NO)? : N
```
#### Output
```
Cost matrix:
        999     10      6       5
        10      999     999     15
        6       999     999     4
        5       15      4       999


Minimum Spanning tree using kruskal algorithm=>
Source vertex   Destination vertex      Weight

        2               3               4
        0               3               5
        0               2               6
        0               1               10
Total cost of tree= 25
```

## Happy Coding !!
