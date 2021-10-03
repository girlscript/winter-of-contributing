//Topological Sorting of directed and acyclic graph.
//It is done by BFS and using in_degree array. 
//It has one property that it returns the sorting in lexographical order.
#include<bits/stdc++.h>
using namespace std;

int vertices,edges;
vector<int>adjcency_list[100001];

vector<int> topological_sort(){
    vector<int> topo;
    int in_degree[vertices+1];
    bool visited[vertices+1];
    priority_queue<int,vector<int>,greater<int>> q;

    for(int i=1;i<=vertices;i++){
        visited[i]=false;
        in_degree[i]=0;
    }

    for(int i=1;i<=vertices;i++){
        for(int j:adjcency_list[i]){
            in_degree[j]=in_degree[j]+1;
        }
    }

    for(int i=1;i<=vertices;i++){
        if(in_degree[i]==0){
            visited[i]=true;
            q.push(i);
        }
    }
    int k=0;
    while(!q.empty()){
        int v=q.top();
        q.pop();
        topo.push_back(v);
        for(int i:adjcency_list[v]){
            if(visited[i]==false){
                in_degree[i]=in_degree[i]-1;
                if(in_degree[i]==0){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
    }
    return topo;
}

int main(){
    cout<<"Enter number of vertices and edges:\n";
    cin>>vertices>>edges;

    vector<int> topological_sorted;
    
    cout<<"Enter the edges directed from X (first number) to Y (second number):\n";
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjcency_list[u].push_back(v);
    }

    topological_sorted=topological_sort();

    cout<<"Topological Sort of the given graph: ";
    for(int i=0;i<topological_sorted.size();i++){
        cout<<topological_sorted[i]<<" ";
    }
    cout<<"\n";
    return 0;
}