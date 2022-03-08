# <p align="center">Disjoint Set Union or Union Find Data Structure </p>
### In computer science, a disjoint-set data structure, also called a union–find data structure or merge–find set, is a data structure that stores a collection of disjoint sets 
**Example :- &nbsp; Given n friends and their friendship relations, find the total number of groups that exist and the number of student in each group.If no relation is given for any person then that person has no group and singularly forms a group. If a is a friend of b and b is a friend of c, then a b and c form a group.**
### ALgorithm  :- 
Step 1. Create an array parent[] of size n+1 which is initialized with 1 to n , which means initially each student singularly forms a group .

Step 2. Create another array size[] of size n+1 which is initialized with 1 , which means intially  each student only is its own friend . 

Step 3. We will create a function Find(a,b) , which will take two arguments a and b . By this function we came to know  whether the a and b belongs to same group or not. 
if a and b belongs to the same group continue else  follow the cases in step 4.

Step 4. We will create another function Union(a,b) , which will take two arguments a and b . By this function we will connect a and b by making parent one student of other student .

 &nbsp;&nbsp;&nbsp;Case 1 &nbsp;  if size[a]<=size[b] then,  
 &nbsp;&nbsp;&nbsp;&nbsp; we will update the parent[a] as parent[a]=b  and hence we have made the b as parent of a that's why the size of a update to zero and size of b update to (size of a + size of b).
    
 &nbsp;&nbsp;&nbsp;Case 2  &nbsp;if size[a]>size[b] then,  
 we will update the parent[b] as parent[b]=a  parent[b]=a and hence we have made the a as parent of b that's why the size of b update to zero and size of a update to (size of a + size of b).
 

Step 5 . Now on iterating the array size[] , if there is at any index i size[i]>0 then it means it is a group whose size is size[i].  
 
 ## Implementation of the Algorithm 
 ```c++
   #include<bits/stdc++.h>
using namespace std;

int find( int x, int parent[])
{
      while(x!=parent[x])
      {
           parent[x]=parent[parent[x]];
           x=parent[x];
      }
      return x;
}

void unione (int parent_a,int parent_b,int parent[],int size[])
{    
               if(size[parent_a]>=size[parent_b])       
                {
                    parent[parent_b]=parent[parent_a];
                    size[parent_a]+=size[parent_b];
                    size[parent_b]=0;
                }
                if(size[parent_a]<size[parent_b])
                {
                    parent[parent_a]=parent[parent_b];
                    size[parent_b]+=size[parent_a];
                    size[parent_a]=0;
                }
           
}

int main()
{
      int n,m ,a,b; cin>>n>>m;  // n is the number of total students 
                                // m is the total number of friendship.
      int parent[n+1] ,size[n+1];
  for( int i=1; i<=n;i++)
  {
        parent[i]=i;           // initialize both arrays.
        size[i]=1;
  }

  while(m--)              
  {
           cin>>a>>b;                      // a and b are friends ;
           int parent_a = find(a,parent);   // find the parent of a;
           int parent_b = find(b,parent);   // find the parent of b;
           if( parent_a==parent_b)          // if a and b is in the same group
           continue;
           else{
           unione(parent_a,parent_b,parent,size);   // if they are in the different group connect them in a single group
           }
  }
  int c=0;
  for( int i=1 ;i<=n;i++)
   {
         if(size[i]>0)
         c++;
    }
    cout<<"the total no of groups are " <<c<<endl;
    
     for( int i=1 ;i<=n;i++)
         cout<<size[i]<<" ";             // print the size of each group;
 
}
```
 ### Time Complexity :-  O(m*log(n))
 
 ### Applications :- 
 **1.This data structure is quite important, because nearly the same problem appears in Kruskal's algorithm for finding a minimum spanning tree.**  
 
 **2. This data structure also helps in  detect the cycle in undirected graph.**  
 
 **3. This data structure also helps to solve Job Sequencing Problem.**
 

