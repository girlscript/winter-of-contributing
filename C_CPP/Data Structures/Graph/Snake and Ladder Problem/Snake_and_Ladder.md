# Snake and Ladder Problem Using Graph
Graph is a data structure which is non linear in shape . It consists of edges , node and vertices and Two or more nodes are connected by edges and nodes also known as vertices.
## Problem Statement
We have given a snake board which 1 to 100 numbered boxes or squares . We have to find the minimum number of moves we have to make to reach at 100th box or square . Whenever we encountered ladder we have to go up and in case of snake we have get down to it's tail.

## Algorithm For Above Problem
1. We likely to consider directed graph and ue map to store ladder and snakes to decrease our time for traversing.
2. We use BFS (Breadth First Search) Algorithm for traversing the nodes.
3. As dice have 6 faces we have allowed that the number we wish it will come so we try to reach using ladder to minimise our steps and avoiding snakes.
4. We maintain a visited array in which we put that nodes which we visited so that we don't time in traversing again and again 

```cpp
#include<iostream>
#include<queue>
#include<vector>
#include<map>
 
using namespace std;
 
 
int main(){
 int ladders,snakes;
 cin>>ladders;
 map<int,int>ladd; // using map for decreasing the time complexity for search
 map<int,int>snak;
 for(int i=0;i<ladders;i++){ // inputting ladders
     int u,v; cin>>u>>v;
     ladd[u]=v;
 }
 cin>>snakes;
 for(int i=0;i<snakes;i++){ // inputting snakes;
     int u,v; cin>>u>>v;
     snak[u]=v;
 }
 int moves=0;
 queue<int>q;
 q.push(1);
 vector<int>vis(101,0); // maintaning visited vector
 vis[1]=true;
 bool hundredth_box=false; // Making check for that we have reached 100 box or not
 while(!q.empty() and !hundredth_box){
     int siz=q.size();
     while(siz--){
         int f=q.front();
         q.pop();
      for(int dice=1;dice<=6;dice++){
          if(f+dice==100) // checking for 100 reached or not.
          hundredth_box=true;

          if(f+dice<=100 and ladd[f+dice] and !vis[ladd[f+dice]]){ // Checking if ladder we have to marked visited and push to queue.
              vis[ladd[f+dice]]=true;
              if(ladd[f+dice]==100){
                  hundredth_box=true;
              }
              q.push(ladd[f+dice]);
          }
          else if(f+dice<=100 and snak[f+dice] and !vis[snak[f+dice]]){ // Checking if snake present or not
              vis[snak[f+dice]]=true;
              if(snak[f+dice]==100){
                  hundredth_box=true;
              }
              q.push(snak[f+dice]);
          }
          else if(f+dice<=100 and !vis[f+dice] and !snak[f+dice] and !ladd[f+dice]){ // For simple box with no snake and ladder
              vis[f+dice]=true;
              q.push(f+dice);
          }
      }
     }
     moves++; // Then we increase our moves.
 }
 if(hundredth_box)
 cout<<"Number of minimum moves : "<<moves<<" ";

 else
 cout<<"-1"<<" ";

 return 0 ;
 }  
```
Input :
```
2
3 90
56 76
3
99 10
30 20
20 5
```
Output :
```
Number of minimum moves : 3
```
### Time Complexity
*O(n)* here n is the nodes of the graphs.

### Space Complexity
*O(n)* here n is the nodes of the graphs.
 
