# Dijkstra's algorithm
Dijkstra's Algorithm is used to find shortest path between nodes in a given graph. For a given  source node Dijkstra's algorithm finds the shortest path from source node to all other nodes of the graph. This algorithm can be implemented in case of directed as well as undirected graph.What we do in this algorithm is to store a weighted graph(directed or undirected), then initialize a `minimum priority queue` that will store elements in the form `{distance,node}`. This way the minimum distance will always be at the top in priority queue, since it is a minimum priority queue. Also, we defin a `dist` vector of which every element should be initialized to `INT_MAX` to store distance of respective node from the source. We start by marking the distance of source node as 0, and pushing `{0,source}` into the priority queue. Now we iterate over every element of the priority queue and extract the top element and for every adjacent node of the extracted node if we find the added distnace of extracted node and current adjacent node to be less than the pre-stored distance for that node in the `dist` vector, then we update that distance with the minimum one because our aim is to find shortest distance of a node from source node.
Thus, for a particular node we may have multiple path form the source node but we will choose the minimum path.
## Pseudo Code:
``` cpp
function(adj[],source){
    define a minimum priority queue pq;
    define a vector dist(number of nodes +1,INT_MAX);

    dist[src]=0;
    push ({0,src}) into the priority queue;

    while(pq is not empty){
        extract the top element as "prevdist" and "prevnode";
        pop the top element;

        for(all adjacent node of prevnode){
            it.first as "currnode";
            it.second as "currdist";
            if(dist[currnode]>currdist+prevdist){
                dist[currnode]=currdist+prevdist;
                push ({currdist,currnode}) into the priority queue;
            }
        }
    }
}
```
## Source Code:
```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int node,edge,src;
    cin>>node>>edge;
    vector<pair<int,int>>adj[node+1];   

    int u,v,wt;
    for(int i=1;i<=node;i++){
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v,wt));                         //storing a weighted graph
        adj[v].push_back(make_pair(u,wt));
    }

    cin>>src;

    //dijkstra's algorithm begins
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;        //minimum heap
    vector<int>dist(node+1,INT_MAX);

    dist[src]=0;
    pq.push(make_pair(0,src)); //{value,node}

   

    while(!pq.empty()){
        int prevdist=pq.top().first;
        int prevnode=pq.top().second;
        pq.pop();

        vector<pair<int,int>>::iterator it;

        for(auto it:adj[prevnode]){
            int currnode=it.first;
            int currdist=it.second;
            if(dist[currnode] > prevdist + currdist){
                dist[currnode]=prevdist+currdist;
                pq.push(make_pair(currdist,currnode));
            }
        }
    }

    cout<<"The distance from source"<< src <<"are"<<"\n";
    for(int i=1;i<=node;i++){
        cout<<dist[i]<<" ";
    }

    return 0;
}
```
>**Time Complexity: O(node + edge*log(node))**                    
>**Space Complexity: O(node + edge)**                                

![example](https://s3.amazonaws.com/vasir-assets/archive/shortest_path1.png)
>image credit: https://s3.amazonaws.com/vasir-assets/archive/shortest_path1.png

### Input
>4 4                             
>1 2 1                            
>1 3 2                                
>2 4 10                        
>3 4 5                       
>1

### Output
>The distance from source node 1  are                                                   
>0 1 2 7 
