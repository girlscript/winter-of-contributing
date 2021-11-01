# Bellman Ford Algorithm


This *Algorithm* solves problem, called as **Single Source Shortest Path** Problem using *DP approach*.

## How Bellman Ford Algorithm works for Single Source Shortest Path Problem:

* This algorithm uses *dynamic programming approach* to solve the problem.
* As we know by this time that, in dp we search for all the possible path and choose the optimized one so same case exist here too. We try to *update* the *distance* with *minimum (if possible) value* for *all* the nodes so that we get minimum distanced path/shortest path to every node from the source node.
* Here we get a *directed weighted* **(** edges can have negative weight **)** graph with *n nodes* and *a source node*. 
* The *idea* of *Bellman Ford Algorithm* is we need to do *relaxation* for **(** n - 1 **)** *times*. 

> *Relaxation:*
>
> => This is the most *important* step while solving the problem. Relaxation means *updation* of the number which signifies the distance of the particular node from the source node and we need to relax all the nodes of the given graph except the source node. 
>
> Q. Why particularly (n - 1) times? 
>
> => The reason is any particular node can have maximum (n - 1) edges in between that node and the source node, so if we relax the graph for (n - 1) times, we can check all the possible path. And this makes our process more efficient.

* One *Advantage* of *Bellman Ford Algorithm* is it can solve the graphs which have *negative* weight, which is a more realistic one since in our real life, there can be such situation which can be related by negative weighted graph.

---

*Pattern of such Problems:*
* *input:*
   
   A weighted directed graph(there can also be negative weight) with n nodes and a source node will be given.

* *output :*

   We need to find the shortest path of all the nodes from the source node.

* *pre-requisites :*

   * **relaxation**/*updation* **formula** :
     
    > if ( d[ u ] + c( u , v ) < d[ v ]), then d[ v ] = d[ u ] + c( u , v )

    *where ,*

    **(** u **,** v **)** **-->** pair of any two nodes
    
    d **[** u **]** **-->** distance of node "u" from the source node

    d **[** v **]** **-->** distance of node "v" from the source node
    
    c **(** u **,** v **)** **-->** cost to travel from node "u" to node "v"

   * *edgelist :* 
   
       We need to list all the edges present in the given graph.


---

**Question :**

A weighted & directed graph with 6 nodes is given where node (1) will be the source node. Find the shortest path for all the nodes from the source node.

>                                     {-1}  
>                                    ------>  
>                          ( 2 )-------------------( 5 )
>                           /|                       |
>                      /\  / | /\                    |
>                { 6 } /  /  | | {-2}                |
>                     /  /   | |                     |  
>                       /    |                       |  | { 3 }
>                      /     |                       |  |    
>                     /      |                       |  \/
>              ==>  ( 1 )   ( 3 )                    |
>                     \      |                       | 
>                      \     |                       |
>                       \    |                       |
>                    /\  \   | /\                    |
>                { 2 } \  \  | | { 4 }               |
>                       \  \ | |                     |
>                           \|                       |
>                          ( 4 )-------------------( 6 )  
>                                    <------
>                                      {-5}     

where , 

**"** ==> **"** *indicates source node.*

**Solution :**

--> *first Step* **:** To find the number of times we will need to relax the graph.

=> No.of times we need to do relaxation = **|** V **|** **-** 1  

                                    = 6 - 1
                                    = 5
where ,

  V **-->** Total no. of nodes in the given graph                                 

--> *Second Step* **:** To find the edgelist *(we can mention the edges in any order we want)*.

**=>** edgelist **-->** **(** 2 **,** 5 **)** **,** **(** 5 **,** 6 **)** **,** **(** 6 **,** 4 **)** **,** **(** 4 **,** 3 **)** **,** **(** 3 **,** 2 **)** **,** **(** 4 **,** 1 **)** **,** **(** 1 **,** 2 **)**.

*Our Graph :*

>                                     -1  
>                           oo       ------>        oo
>                          ( 2 )-------------------( 5 )
>                           /|                       |
>                      /\  / | /\                    |
>                    6 /  /  | | -2                  |
>                     /  /   | |                     |  
>                       /    |                       |  | 3 
>                      /     |                       |  |    
>                  0  /      |                       |  \/
>              ==>  ( 1 )   ( 3 ) oo                 |
>                     \      |                       | 
>                      \     |                       |
>                       \    |                       |
>                    /\  \   | /\                    |
>                    2 \  \  | | 4                   |
>                       \  \ | |                     |
>                           \|                       |
>                          ( 4 )-------------------( 6 )  
>                           oo      <------         oo 
>                                      -5     

* We have assigned the default distances to all the nodes of the graph. 
* The distance of node (1) is 0, since *the distance of any node from itself is 0*.
* All other nodes are having *distance = oo* from node (1) by default.

*First relaxation :*

* By referring the edgelist we created, we will check the Relaxation condition and perform relaxation on every pair. 

>                                     -1  
>                         6 <- oo       ------>     oo
>                          ( 2 )-------------------( 5 )
>                           /|                       |
>                      /\  / | /\                    |
>                    6 /  /  | | -2                  |
>                     /  /   | |                     |  
>                       /    |                       |  | 3 
>                      /     |                       |  |    
>                  0  /      |                       |  \/
>              ==>  ( 1 )   ( 3 ) oo                 |
>                     \      |                       | 
>                      \     |                       |
>                       \    |                       |
>                    /\  \   | /\                    |
>                    2 \  \  | | 4                   |
>                       \  \ | |                     |
>                           \|                       |
>                          ( 4 )-------------------( 6 )  
>                           oo      <------         oo 
>                                      -5     

*6 **<-** oo  **-->**  oo has been relaxed to 6.*

>
>for **(** 2 **,** 5 **)** ,
>   
>      is ( d[ 2 ] + c( 2 , 5 )  <  d[ 5 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 5 **,** 6 **)** ,
>
>      is ( d[ 5 ] + c( 5 , 6 )  <  d[ 6 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 6 **,** 4 **)** ,
>
>      is ( d[ 6 ] + c( 6 , 4 )  <  d[ 4 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 4 **,** 3 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 3 )  <  d[ 3 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 3 **,** 2 **)** ,
>
>      is ( d[ 3 ] + c( 3 , 2 )  <  d[ 2 ]) ?
>      -> No. Therefore, there will no change.
>
>for **(** 4 **,** 1 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 1 )  <  d[ 1 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 1 **,** 2 **)**,
>
>      is ( d[ 1 ] + c( 1 , 2 )  <  d[ 2 ]) ?
>      ->  Yes. So now, d[ 2 ] = d[ 1 ] + c( 1 , 2 ) = 0 + 6 = 6.

*Second Relaxation :*

>                                     -1  
>                         5 <- 6       ------>    5 <- oo
>                          ( 2 )-------------------( 5 )
>                           /|                       |
>                      /\  / | /\                    |
>                    6 /  /  | | -2                  |
>                     /  /   | |                     |  
>                       /    |                       |  | 3 
>                      /     |                       |  |    
>                  0  /      |                       |  \/
>              ==>  ( 1 )   ( 3 ) 7 <- oo            |
>                     \      |                       | 
>                      \     |                       |
>                       \    |                       |
>                    /\  \   | /\                    |
>                    2 \  \  | | 4                   |
>                       \  \ | |                     |
>                           \|                       |
>                          ( 4 )-------------------( 6 )  
>                         3 <- oo      <------     8 <- oo
>                                      -5     

*5 **<-** oo  **-->**  oo has been relaxed to 5.*

*8 **<-** oo  **-->**  oo has been relaxed to 8.*

*3 **<-** oo  **-->**  oo has been relaxed to 3.*

*7 **<-** oo  **-->**  oo has been relaxed to 7.*

*5 **<-** 6  **-->**  6 has been relaxed to 5.*

>
>for **(** 2 **,** 5 **)** ,
>   
>      is ( d[ 2 ] + c( 2 , 5 )  <  d[ 5 ]) ?
>      -> Yes. So now, d[ 5 ] = d[ 2 ] + c( 2 , 5 ) = 6 + (-1) = 5
>
>for **(** 5 **,** 6 **)**,
>
>      is ( d[ 5 ] + c( 5 , 6 )  <  d[ 6 ]) ?
>      -> Yes. So now, d[ 6 ] = d[ 5 ] + c( 5 , 6 ) = 5 + 3 = 8.
>
>for **(** 6 **,** 4 **)**,
>
>      is ( d[ 6 ] + c( 6 , 4 )  <  d[ 4 ]) ?
>      -> Yes. So now, d[ 4 ] = d[ 6 ] + c( 6 , 4 ) = 8 + (-5) = 3.
>
>for **(** 4 **,** 3 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 3 )  <  d[ 3 ]) ?
>      -> Yes. So now, d[ 3 ] = d[ 4 ] + c( 4 , 3 ) = 3 + 4 = 7.
>
>for **(** 3 **,** 2 **)**,
>
>      is ( d[ 3 ] + c( 3 , 2 )  <  d[ 2 ]) ?
>      -> Yes. So now, d[ 2 ] = d[ 3 ] + c( 3 , 2 ) = 7 + (-2) = 5.
>
>for **(** 4 **,** 1 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 1 )  <  d[ 1 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 1 **,** 2 **)** ,
>
>      is ( d[ 1 ] + c( 1 , 2 )  <  d[ 2 ]) ?
>      ->  No. Therefore, there will be no change.

*Third Relaxation :*

>                                     -1  
>                            5       ------>      4 <- 5
>                          ( 2 )-------------------( 5 )
>                           /|                       |
>                      /\  / | /\                    |
>                    6 /  /  | | -2                  |
>                     /  /   | |                     |  /\
>                       /    |                       |  | 3 
>                      /     |                       |  |    
>                  0  /      |                       | 
>              ==>  ( 1 )   ( 3 ) 7                  |
>                     \      |                       | 
>                      \     |                       |
>                       \    |                       |
>                    /\  \   | /\                    |
>                    2 \  \  | | 4                   |
>                       \  \ | |                     |
>                           \|                       |
>                          ( 4 )-------------------( 6 )  
>                            3      <------          8 
>                                      -5    

*4 **<-** 5  **-->**  5 has been relaxed to 4.*

>
>for **(** 2 **,** 5 **)** ,
>   
>      is ( d[ 2 ] + c( 2 , 5 )  <  d[ 5 ]) ?
>      -> Yes. So now, d[ 5 ] = d[ 2 ] + c( 2 , 5 ) = 5 + (-1) = 4.
>
>for **(** 6 **,** 5 **)** , 
>
>      is ( d[ 6 ] + c( 6 , 5 )  <  d[ 5 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 6 **,** 4 **)**,
>
>      is ( d[ 6 ] + c( 6 , 4 )  <  d[ 4 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 4 **,** 3 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 3 )  <  d[ 3 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 3 **,** 2 **)** ,
>
>      is ( d[ 3 ] + c( 3 , 2 )  <  d[ 2 ]) ?
>      -> No. Therefore, there will no change.
>
>for **(** 4 **,** 1 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 1 )  <  d[ 1 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 1 **,** 2 **)** ,
>
>      is ( d[ 1 ] + c( 1 , 2 )  <  d[ 2 ]) ?
>      ->  No. Therefore, there will be no change.

*Fourth Relaxation :*

>                                     -1  
>                            5       ------>         4
>                          ( 2 )-------------------( 5 )
>                           /|                       |
>                      /\  / | /\                    |
>                    6 /  /  | | -2                  |
>                     /  /   | |                     |  /\
>                       /    |                       |  | 3 
>                      /     |                       |  |    
>                  0  /      |                       | 
>              ==>  ( 1 )   ( 3 ) 7                  |
>                     \      |                       | 
>                      \     |                       |
>                       \    |                       |
>                    /\  \   | /\                    |
>                    2 \  \  | | 4                   |
>                       \  \ | |                     |
>                           \|                       |
>                          ( 4 )-------------------( 6 )  
>                            3      <------          8 
>                                      -5    



>for **(** 2 **,** 5 **)** ,
>   
>      is ( d[ 2 ] + c( 2 , 5 )  <  d[ 5 ]) ?
>      -> No. Therefore, there will be no change. 
>
>for **(** 6 **,** 5 **)** ,
>
>      is ( d[ 6 ] + c( 6 , 5 )  <  d[ 5 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 6 **,** 4 **)** ,
>
>      is ( d[ 6 ] + c( 6 , 4 )  <  d[ 4 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 4 **,** 3 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 3 )  <  d[ 3 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 3 **,** 2 **)** ,
>
>      is ( d[ 3 ] + c( 3 , 2 )  <  d[ 2 ]) ?
>      -> No. Therefore, there will no change.
>
>for **(** 4 **,** 1 **)**,
>
>      is ( d[ 4 ] + c( 4 , 1 )  <  d[ 1 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 1 **,** 2 **)**,
>
>      is ( d[ 1 ] + c( 1 , 2 )  <  d[ 2 ]) ?
>      ->  No. Therefore, there will be no change.

*As there is no change in this relaxation step so we can either stop here or we can continue till fifth relaxation.*

*Fifth Relaxation :*

>                                     -1  
>                            5       ------>         4
>                          ( 2 )-------------------( 5 )
>                           /|                       |
>                      /\  / | /\                    |
>                    6 /  /  | | -2                  |
>                     /  /   | |                     |  /\
>                       /    |                       |  | 3 
>                      /     |                       |  |    
>                  0  /      |                       | 
>              ==>  ( 1 )   ( 3 ) 7                  |
>                     \      |                       | 
>                      \     |                       |
>                       \    |                       |
>                    /\  \   | /\                    |
>                    2 \  \  | | 4                   |
>                       \  \ | |                     |
>                           \|                       |
>                          ( 4 )-------------------( 6 )  
>                            3      <------          8 
>                                      -5    



>for **(** 2 **,** 5 **)** ,
>   
>      is ( d[ 2 ] + c( 2 , 5 )  <  d[ 5 ]) ?
>      -> No. Therefore, there will be no change. 
>
>for **(** 6 **,** 5 **)** ,
>
>      is ( d[ 6 ] + c( 6 , 5 )  <  d[ 5 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 6 **,** 4 **)** ,
>
>      is ( d[ 6 ] + c( 6 , 4 )  <  d[ 4 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 4 **,** 3 **)**,
>
>      is ( d[ 4 ] + c( 4 , 3 )  <  d[ 3 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 3 **,** 2 **)** ,
>
>      is ( d[ 3 ] + c( 3 , 2 )  <  d[ 2 ]) ?
>      -> No. Therefore, there will no change.
>
>for **(** 4 **,** 1 **)** ,
>
>      is ( d[ 4 ] + c( 4 , 1 )  <  d[ 1 ]) ?
>      -> No. Therefore, there will be no change.
>
>for **(** 1 **,** 2 **)** ,
>
>      is ( d[ 1 ] + c( 1 , 2 )  <  d[ 2 ]) ?
>      ->  No. Therefore, there will be no change.

Hence, we are done with all the five relaxation step and we got the shortest path for every node from the source node.

*Therefore* **,** we got the below table showing the *Shortest Path*.

|    Node    |     Shortest Path from Source Node     |
| :---:      |      :---:                             |
|    (2)     |                5|
|   (3)      |                7|
|    (4)     |                3|
|     (5)    |                4|
|     (6)    |                8|

*Thus, this is how we solve **Single Source Shortest Path Problem** using **Bellman Ford Algorithm**.*

*With the advantage, Bellman Ford Algorithm also have a disadvantage.*

*Disadvantage :*  If there exist any cycle in the graph, whose total weight is negative then for such graph, the algorithm will not work. 

e.g.:  for below graph: 

>
>                            ( 2 )
>                             /|
>                            / |
>                        /| /  | |
>                    -8 /  /   | | 1
>                         /    | \/
>                        /     |
>                    ( 1 )-----( 3 )         
>                         <---
>                          5

here, since there are 3 nodes so we need to do relaxation for ( 3 - 1 ) = 2 times.

-> edgelist: ( 1 , 2 ), ( 2 , 3 ), ( 3 , 1 ).

*First relaxation:*

>                          -8 <- oo
>                           ( 2 )
>                            /|
>                           / | 
>                       /| /  | |
>                   -8 /  /   | | 1
>                        /    | \/
>                       /     |
>              ==>  ( 1 )-----( 3 ) 
>              -2 <- 0   <---  -7 <- oo
>                           5     

*-8 <- oo  --> oo has been relaxed to -8.*

*-7 <- oo  --> oo has been relaxed to -7.*

*-2 <- 0  --> 0 has been relaxed to -2.*

>for ( 1 , 2 ),
>
>      is ( d[ 1 ] + c( 1 , 2 )  <  d[ 2 ]) ?
>      -> Yes. So now, d[ 2 ] = d[ 1 ] + c( 1 , 2 ) = 0 + (-8) = -8.
>
>for ( 2 , 3 ),
>
>     is ( d[ 2 ] + c( 2 , 3 )  <  d[ 3 ]) ?
>     -> Yes. So now, d[ 3 ] = d[ 2 ] + c( 2 , 3 ) = (-8) + 1 = -7.
>
>for ( 3 , 1 ),
>
>     is ( d[ 3 ] + c( 3 , 1 )  <  d[ 1 ]) ?
>     -> Yes. So now, d[ 1 ] = d[ 3 ] + c( 3 , 1 ) = (-7) + 5 = -2.

*Second relaxation:*

>                        -10 <- -8 
>                           ( 2 )
>                            /|
>                           / | 
>                       /| /  | |
>                   -8 /  /   | | 1
>                        /    | \/
>                       /     |
>              ==>  ( 1 )-----( 3 ) 
>              -4 <- -2  <---  -9 <- -7 
>                           5     

*-10 <- -8  --> -8 has been relaxed to -10.*

*-9 <- -7  --> -7 has been relaxed to -9.*

*-4 <- -2  --> -2 has been relaxed to -4.*

>for ( 1 , 2 ),
>
>      is ( d[ 1 ] + c( 1 , 2 )  <  d[ 2 ]) ?
>      -> Yes. So now, d[ 2 ] = d[ 1 ] + c( 1 , 2 ) = (-2) + (-8) = -10.
>
>for ( 2 , 3 ),
>
>     is ( d[ 2 ] + c( 2 , 3 )  <  d[ 3 ]) ?
>     -> Yes. So now, d[ 3 ] = d[ 2 ] + c( 2 , 3 ) = (-10) + 1 = -9.
>
>for ( 3 , 1 ),
>
>     is ( d[ 3 ] + c( 3 , 1 )  <  d[ 1 ]) ?
>     -> Yes. So now, d[ 1 ] = d[ 3 ] + c( 3 , 1 ) = (-9) + 5 = -4.

Now, according to *Bellman Ford Algorithm*, if we now perform another relaxation, then the graph must remain same but in this case even in the *nth* time, the graph is getting relaxed and this repeats.

*Hence*, **Bellman Ford Algorithm** *doesn't* work for those graphs which consist of cycle having a total of *negative* weight. We can even say that **Bellman Ford Algorithm** *detects* in a way those graphs.  
