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


<div align="center">
<img src="images\ex1.png">
</div>

- Given the graph, each edge has a capacity (the maximum unit can be transferred between two vertices). 
- We have to find out the maximum flow which can be transferred from source vertex (S) to sink vertex (T).

<div align="center">
<img src="images\ex2.png">
</div>

## **Approach 1:** Greedy


This approach may not produce the correct result but we will modify the approach later.

<div align="center">
<img src="images\algo.png">
</div>

Let’s understand it better by an example



**Choose path S-1-2-t first**

<div align="center">
<img src="images\path1.png">
</div>

Now let’s take the same graph but the order in which we will add flow will be different.

**Choose path S-1-2-t later**

<div align="center">
<img src="images\path2-1.png">
</div>

<div align="center">
<img src="images\path2-2.png">
</div>

<div align="center">
<img src="images\path2-3.png">
</div>

<div align="center">
<img src="images\path2-4.png">
</div>

<div align="center">
<img src="images\path2-5.png">
</div>

<div align="center">
<img src="images\path2-6.png">
</div>

Now as you can clearly see just by changing the order the max flow result will change. The correct max flow is 5 but if we process the path **s-1-2-t** before then max flow is **3** which is wrong but greedy might pick **s-1-2-t**. That is why greedy approach will not produce the correct result every time.


## **Approach 2:** Residual Graph [Solution]

The second idea is to extend the naive greedy algorithm by allowing “undo” operations. For example, from the point where this algorithm gets stuck (Choose path s-1-2-t first, our first approach), we’d like to route two more units of flow along the edge (s, 2), then backward along the edge (1, 2), undoing 2 of the 3 units we routed the previous iteration, and finally along the edge (1, t). This would yield the maximum flow, same as (Choose path s-1-2-t later, our second approach)

See the approach below with a residual graph:

<div align="center">
<img src="images\algo2.png">
</div>

We need a way of formally specifying the allowable “undo” operations. This motivates the following simple but important definition, of a residual network. The idea is that, given a graph G and a flow f in it, we form a new flow network Gf that has the same vertex set of G and that has two edges for each edge of G. An edge e = (v, w) of G that carries flow fe and has capacity ue (Image below) spawns a “forward edge” (u, v) of Gf with capacity ue −fe (the room remaining)and a “backward edge” (w, v) of Gf with capacity fe (the amount of previously routed flow that can be undone)

<div align="center">
<img src="images\algo2-1.png">
</div>


##
#### References:
https://algorithms.tutorialhorizon.com/max-flow-problem-ford-fulkerson-algorithm/
https://algorithms.tutorialhorizon.com/max-flow-problem-introduction/
