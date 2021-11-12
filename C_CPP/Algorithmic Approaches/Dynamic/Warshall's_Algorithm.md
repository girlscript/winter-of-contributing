# Warshall's Algorithm<br>
---
---
Warshall's is an algorithm for finding shortest paths in a directed weighted graph with positive or negative edge weights (but with no negative cycles).In all pair shortest path problem, we need to find out all the shortest paths from each vertex to all other vertices in the graph.<br><br>
### Code:
```c

# include <stdio.h>
# include <conio.h>
int n,a[10][10],p[10][10];
void path()
{
int i,j,k;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
p[i][j]=a[i][j];
//algo
for(k=0;k<n;k++)
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(p[i][k]==1&&p[k][j]==1) p[i][j]=1;
}
void main()
{
int i,j;
//no.of nodes in network
printf("Enter the number of nodes:");
scanf("%d",&n);
//matrix
printf("\nEnter the adjacency matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
path();
//after applying warshalls'algorithm
printf("\nThe path matrix is showm below\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d ",p[i][j]);
printf("\n");
}
getch();
}

```
### Output-
<br>
<br>
Enter the number of nodes:<br>
4<br>
Enter the adjacency matrix:<br>
0 1 0 0<br>
0 0 0 1<br>
0 0 0 0<br>
1 0 1 0<br>

<br>
The path matrix is shown below:<br>
1 1 1 1<br>
1 1 1 1<br>
0 0 0 0<br>
1 1 1 1 <br><br>
**Time Complexity**-O(n^3)<br>
