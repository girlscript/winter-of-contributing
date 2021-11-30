# Prim's Algorithm

- Prims algorithm is a greedy algorithm that is applied to find the minimum spanning tree of a graph. 
- Graph are to be weighted, connected, and undirected. 
- A set of edges that connects two set of vertices in a graph is called cut in graph theory. Essentially, at each step of Prim’s algorithm, we've to seek out a cut (of two sets, one contains the vertices already included in MST and other contains remainder of the vertices), pick the minimum weight edge from the cut and include this vertex to MST Set (the set that contains already included vertices). 
- The working behind Prim’s algorithm is straightforward , a spanning tree means all vertices must be connected. 
- So both the disjoint subsets (discussed above) of vertices must be connected to form a Spanning Tree. 
- In turn they must be connected with the minimum weight edge to make it a Minimum Spanning Tree.


#### Code

```cpp
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>

using namespace std;
const int MAX = 1e4 + 5;
typedef pair<long long, int> PII;
bool marked[MAX];
vector <PII> adj[MAX];

long long prim(int x)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    long long minimumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty())
    {
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        x = p.second;
        // Checking for cycle
        if(marked[x] == true)
            continue;
        minimumCost += p.first;
        marked[x] = true;
        for(int i = 0;i < adj[x].size();++i)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return minimumCost;
}

int main()
{
    int nodes, edges, x, y;
    long long weight, minimumCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }
    // Selecting 1 as the starting node
    minimumCost = prim(1);
    cout << minimumCost << endl;
    return 0;
}
```
#### Output
```
 4 5
 1 2 7
 1 4 6
 4 2 9
 4 3 8
 2 3 6
```
#### Input
```
19
```

## Happy Coding !!
