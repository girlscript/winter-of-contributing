# PRIM'S ALGORITHM FOR MINIMUM SPANNING TREE
  
  *WHAT IS A MINIMUM SPANNING TREE?* <br/>
  A MST is a collection of edges in a graph such that all the edges are connected in it
  without any cycles and having the minimum possible weight.
  
  
  *IDEA OF THE ALGORITHM* <br/>
  1. Select any source vertex (As we have to include all the vertices in the MST so it doesn't matter much from which vertex you start.
  2. Out of all the  active edges (edges connected with the parent vertex and not included in MST) choose the one with the smallest weight .
  3. Repeat the steps and you will get the mst 
  
  
  ## Code:
  ```js
  #include<bits/stdc++.h>
  using namespace std;
  #define pii pair<int,int>
  #define vi vector<int>
  
  
  
  
       int main()
    {     
      int n,m; // n: total number of nodes   and     m: total number of edges 
      cin>>n>>m;
      vector<pii>adj[n+1];  // vector of pair of integers to store the node and the edge weight
      while(m--)
     {
         int x,y,w;
         cin>>x>>y>>w;
         adj[x].push_back({w,y});    // Since it is a directed graph so both nodes adjacency list will include each other's weight
         adj[y].push_back({w,x});
     }
     // priority queue consists of pair of integers and it is minimum heap
       priority_queue<pii,vector<pii>,greater<pii>>q;    
       vi vis(n+1,0);   // visited array for nodes
       
       // In the  priority queue  pair.first = edge weight and pair.second = node
        q.push({0,1});   // We are starting by taking 1 as the source node and it's corresponding weight as 0
        
         long long mst=0;
         
           while(!q.empty())
           {
            pii best =q.top();   // taking out the edge with the least weight  
            q.pop();             // removing it
            int weight=best.first;    // Weight of that edge
            int dest=best.second;      // Taking out the connected node  
             // if not an active edge
             if(vis[dest]==1)   // already included in mst
                continue;
                
            mst+=weight;   // else it is included in mst
            vis[dest]=1;   // marked as visited
            for(auto child:adj[dest])     // traversing through all it's child nodes
            {
                if(vis[child.second]==0)      
                {
                    q.push({child.first,child.second});
                }
            }
           }
           cout<<mst<<"\n";
           
           
           
        
  ```
     
     
     
 ## TIME COMPLEXITY
 O(V+E)log(V)
     
 ## INPUT
 ```
 4 5
 1 2 7
 1 4 6
 4 2 9
 4 3 8
 2 3 6
```

## OUTPUT
```
19

```
 
   
   
   
   
     
     
     
     
     
     
     
     
     
     
     
     
  



  

