#include<bits/stdc++.h>
using namespace std;
vector<int>bfs;                               //bfs vector is created to store nodes in the traversed order
void BFS(int node,vector<int> adj[]){
    
    vector<int>vis(node+1,0);                //vis vector to keep track of visited nodes
    queue<int>q;                            //Queue data structure follows First in First out rule
    q.push(1);
    vis[1]=1; 
    while(!q.empty()){
        int index=q.front();
        q.pop();                                          
        bfs.push_back(index);

        for(auto it:adj[index]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }
}


int main(){                                                //Time Complexity:O(node+edge)
    int node,edge;                                           
    cin>>node>>edge;                                       //Space Complexity:O(node)
    vector<int>adj[node+1];
    int u,v;
    for(int i=1;i<=edge;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);                               //remove this line for a directed graph
    }
    BFS(node,adj);
    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<" ";
    }
    return 0;
}
