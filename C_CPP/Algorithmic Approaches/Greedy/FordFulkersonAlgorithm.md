# Fold Fulkerson Algorithm 

---

*This algorithm is also known as **Network Flow Algorithm***.

Now before we see its usage, we should know few terminologies regarding this algorithm and also the problems that we will solve.

### Terminologies :

* Source node **/** vertex **:** The vertex from where everytime we are gonna *start* our path.

* Sink node **/** vertex **:** The vertex where everytime we *stop* our path.

* Flow graph **/** Network graph **:** It is a *directed* graph where each edge is associated with some value which is the *fraction* of *flow* and *capacity*. We also have *two* specific nodes **/** vertices within the graph **/** network **:** *Source* & *Sink*.

>        source    8
>          (A)-------->(B)
>           |           |\
>           |           | \ 6
>           |           | _\
>        10 |         8 |  (C)  <---sink
>           |           |  /|
>           |           | / 10
>           \/         \|/ 
>          (D)<--------(E)  
>                 9           

* Residual Capacity **:** The value we get after subtracting the flow value from the capacity of the edges are known as *Residual Capacity*.

>
>  In above example, we can see for path: (A) --> (B) --> (C), the residual capacity at this point is 8 and 6 since here the flow is 0.

* Residual graph **:** The graphs where in the path, we can still add some flow, those are called *Residual Graph*.

>
>  since the above graph is having path where addition of flow is possible, hence we can say that the above graph is a residual graph.

* Augmenting path **:** It is a *simple path* from *source* to *sink* which *do not* include any *cycles* and also where the path passes only through the *positive* weighted edges.  

>
>  There are many such paths present in the above graph, as : (A) --> (B) --> (C), (A) --> (B) --> (E) --> (C).

* Minimal Cut **:** It is also known as *Bottle Neck Capacity*. It is the *maximum* possible value of flow that can pass through the path from the source to the sink.

>
>  suppose for the path **:** (A) --> (B) --> (C), 6 is the maximum value that can pass through the path and thus *minimal cut* = 6.

### Points to remember : 
* Initially the flow through each edges of the graph is assigned to be *0* and the capacity to be a *non-negative* value.
* The *total flow entering the vertex* = The *total flow leaving the vertex* . **(** This must be followed by *every* nodes *except* the *source* node and the *sink* node since source node is responsible for distributing the edges and sink node is responsible for collecting the edges **)**
* The flow *cannot* exceed the capacity.
* Augmenting path can have any of the *two edges* :
   * non **-** full *forward* edge
   * non **-** empty *backward* edge

### Algorithm :
1. Start the *initial* flow for all the edges of the graph to be *0*.
2. If there exist augmenting path in the graph, then keep on *adding* flow to the path. We need to keep doing this until no augmenting path is present in the graph.
3. *return* flow.

**Question :**
Given a graph, where the source and the sink nodes are already mentioned, you need to find the maximum flow that can pass through the path from source node to sink node.

>
>                             9
>                     ( A )--------->( B )
>                    /|  /\            \
>                   /    |              \ 11
>               10 /     |               \
>                 /      |                \|
>     source-->( S )     | 8              ( T ) <--sink
>                \       |                /|
>                 \      |               /
>              10  \     |              / 13
>                   \    |             /
>                   _\   |            /
>                     ( C )-------->( D )  
>                            8          

**Solution :**

**Step 1 :** Initializing the flow as 0 for all the edges.

>
>                             0/9
>                     ( A )--------->( B )
>                    /|  /\            \
>                   /    |              \ 0/11
>             0/10 /     |               \
>                 /      |                \|
>     source-->( S )     | 0/8              ( T ) <--sink
>                \       |                /|
>                 \      |               /
>        8<--0/10  \     |              / 8<--0/13
>                   \    |             /
>                   _\   |            /
>                     ( C )-------->( D )  
>                            8<--0/8          

*Flow :* 0

**Step 2 :** Considering first augmenting path to be **:** (S) --> (C) --> (D) --> (T), we can check the capacity of the edges of this path, maximum flow that can pass through this path is 8 **(** for CD edge **)**. So, *minimal cut* is 8. 

And the *flow value* is 8. So, *Flow :* 0 --> 8.

Now *updating* the graph, we get **:**

>
>                             2<--0/9
>                     ( A )--------->( B )
>                    /|  /\            \
>                   /    |              \ 2<--0/11
>             0/10 /     |               \
>                 /      |                \|
>     source-->( S )     | 2<--0/8       ( T ) <--sink
>                \       |                /|
>                 \      |               /
>       10<--8/10  \     |              / 8/13
>                   \    |             /
>                   _\   |            /
>                     ( C )-------->( D )  
>                            8/8          

*Flow :* 8

Considering another augmenting path to be : (S) --> (C) --> (A) --> (B) --> (T), we can check the capacity of the edges of this path, maximum flow that can pass this path is 2 **(** for SC edge **)**. So, *minimal cut* is 2. 

And the *flow value* is 8 **+** 2. So, *Flow :* 8 --> 10.

Now *updating* the graph, we get:


>
>                           9<--2/9
>                     ( A )--------->( B )
>                    /|  /\            \
>                   /    |              \ 9<--2/11
>         7<--0/10 /     |               \
>                 /      |                \|
>     source-->( S )     | 2/8              ( T ) <--sink
>                \       |                /|
>                 \      |               /
>           10/10  \     |              / 8/13
>                   \    |             /
>                   _\   |            /
>                     ( C )-------->( D )  
>                            8/8          

*Flow :* 10

Considering another augmenting path to be **:** (S) --> (A) --> (B) --> (T), we can check the capacity of the edges of this path, maximum flow that can pass this path is 7 **(** for AB edge **)**. So, *minimal cut* is 7. 

And the *flow value* is 10 **+** 7. So, *Flow :* 10 --> 17.

Now *updating* the graph, we get:


>
>                             9/9
>                     ( A )--------->( B )
>                    /|  /\            \
>                   /    |              \ 9/11
>             7/10 /     |               \
>                 /      |                \|
>     source-->( S )     | 2/8              ( T ) <--sink
>                \       |                /|
>                 \      |               /
>           10/10  \     |              / 8/13
>                   \    |             /
>                   _\   |            /
>                     ( C )-------->( D )  
>                            8/8          

*Flow :* 17

Now, we see that we *won't* get any augmenting path in the graph and also we check for every nodes except the source and sink node in the graph that is *Total flow entering the node = Total flow leaving the node*. And we see that this condition is *satisfied*. **Hence**, we can say, we got our *final Flow* value.

*Therefore,* **Maximum Flow** from the Network graph **/** Flow graph **=** 17.

*Thus*, in this manner we can solve such problem of **Network Graph** where we need to *find the maximum possible flow* using **Ford Fulkerson Algorithm**.