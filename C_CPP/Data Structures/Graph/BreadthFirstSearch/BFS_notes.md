# GRAPH

1. Graph is non-linear data structure, that stores data in the form of nodes and edges. Graphs are used to represent networks or relationship 
2. Node: A finite set of vertices 
3. Edge: A finite set ordered pair (u,v) is called an edge.Pair (u,v) indicates that there is an edge between node u and node v.
         note that (u,v) is not same as (v,u) in case of a directed graph, and (u,v) is same as (v,u) in case of a undirected graph.
4. Breadth First Search: To traverse each node of the graph we use Breadth First Search Algorithm. BFS algorithm traverses every node breadth wise.
>                     Pseudo Code:
>                         function(){
>                               let vis be a visited vector 
>                               let Q be a queue
>                               push the start node into Q
>                               while(Q is not empty){
>                                    index=Q.front()
>                                    Q.pop()
>                                    store index in bfs vector
>                                    for(all adjacent nodes of index){
>                                        if(adjacent node is not visited){
>                                            mark it as visited
>                                            push the node into the queue
>                                        }
>                                    }
>                                }
>                            }
### Example:
![Graph](https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/introduction-to-graph-in-programming-graph-example-1a1208046b73e0e0.png)
#### Input:
> 5 6 \
> 1 2 \
> 1 3 \
> 1 4 \
> 2 5 \
> 3 5 \
> 3 4

#### Output:
> 1 2 3 4 5
                         
