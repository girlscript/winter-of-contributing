# Max Flow Problem

It is one of the famous problems. Given a directed graph that represents a flow network involving source(S) vertex and Sink (T) vertex.  Each edge in the graph has an individual capacity which is the maximum flow that edge allows.


## Problem Statement:

- Maximum flow problems find a feasible flow through a single-source, single-sink flow network that is maximum.

- This problem is useful for solving complex network flow problems such as the circulation problem.

- The maximum value of the flow (say the source is s and sink is t) is equal to the minimum capacity of an s-t cut in the network (stated in max-flow min-cut theorem).

- In maximum flow graph, Incoming flow on the vertex is equal to outgoing flow on that vertex (except for source and sink vertex).


## Points to Remember:

- Input flow must match to output flow for each node in the graph, except the source and sink node.

- Flow out from source node must match with the flow in to sink node.

- Flow from each edge should not exceed the capacity of that node.


## Example:


![ex1](https://user-images.githubusercontent.com/70436834/143923833-459461b0-6333-4460-9023-5670b2b0a240.png)

- Given the graph, each edge has a capacity (the maximum unit can be transferred between two vertices). 
- We have to find out the maximum flow which can be transferred from source vertex (S) to sink vertex (T).

![ex2](https://user-images.githubusercontent.com/70436834/143923866-c0e8967c-bfc8-4387-a3af-b1779ce8e0ca.png)


## **Approach 1:** Greedy


This approach may not produce the correct result but we will modify the approach later.

![algo](https://user-images.githubusercontent.com/70436834/143923904-8e30945c-1061-4f7d-b844-732e10bab4d0.png)


Let’s understand it better by an example



**Choose path S-1-2-t first**


![path1](https://user-images.githubusercontent.com/70436834/143923939-d808017f-ab87-49f9-931a-0de5bad8d3ec.png)

Now let’s take the same graph but the order in which we will add flow will be different.

**Choose path S-1-2-t later**


![path2-1](https://user-images.githubusercontent.com/70436834/143923967-7db80566-a597-4dcd-9e57-c31cad66aa6b.png)

![path2-2](https://user-images.githubusercontent.com/70436834/143923995-922f4688-499f-4ff0-963e-26f381793ec9.png)

![path2-3](https://user-images.githubusercontent.com/70436834/143924014-06011b3a-db86-42ba-8009-48ff8fabc310.png)

<div align="center">
<img src="images\path2-4.png">
</div>
![path2-4](https://user-images.githubusercontent.com/70436834/143924053-d9ed2f98-7fc0-46a8-9d5f-b181dcb49d7c.png)

![path2-5](https://user-images.githubusercontent.com/70436834/143924065-1d917201-120b-440c-aac0-87a554f29e4b.png)

![path2-6](https://user-images.githubusercontent.com/70436834/143924078-5b821c0b-4b5b-4a35-ac12-2bd92dccf289.png)

Now as you can clearly see just by changing the order the max flow result will change. The correct max flow is 5 but if we process the path **s-1-2-t** before then max flow is **3** which is wrong but greedy might pick **s-1-2-t**. That is why greedy approach will not produce the correct result every time.


## **Approach 2:** Residual Graph [Solution]

The second idea is to extend the naive greedy algorithm by allowing “undo” operations. For example, from the point where this algorithm gets stuck (Choose path s-1-2-t first, our first approach), we’d like to route two more units of flow along the edge (s, 2), then backward along the edge (1, 2), undoing 2 of the 3 units we routed the previous iteration, and finally along the edge (1, t). This would yield the maximum flow, same as (Choose path s-1-2-t later, our second approach)

See the approach below with a residual graph:

![algo2](https://user-images.githubusercontent.com/70436834/143924127-616ca2ba-bfa8-47e6-9e03-137da5670f95.png)

We need a way of formally specifying the allowable “undo” operations. This motivates the following simple but important definition, of a residual network. The idea is that, given a graph G and a flow f in it, we form a new flow network Gf that has the same vertex set of G and that has two edges for each edge of G. An edge e = (v, w) of G that carries flow fe and has capacity ue (Image below) spawns a “forward edge” (u, v) of Gf with capacity ue −fe (the room remaining)and a “backward edge” (w, v) of Gf with capacity fe (the amount of previously routed flow that can be undone)


![algo2-1](https://user-images.githubusercontent.com/70436834/143924144-e17dd8c6-4e4f-409f-8e69-9cc928662550.png)


##
#### References:
https://algorithms.tutorialhorizon.com/max-flow-problem-ford-fulkerson-algorithm/
https://algorithms.tutorialhorizon.com/max-flow-problem-introduction/
