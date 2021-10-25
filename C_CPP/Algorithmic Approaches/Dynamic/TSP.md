#  Traveling Salesman Problem(TSP)

It is also known as **Traveling Salesperson Problem**.

*Pattern of such problems:*
- input: 

In this problem, we have a *traveler* and a *list of cities*. The traveler needs to visit *each* of the cities *exactly once* and *go back* to the *origin/starting* city. Any city can be the starting/origin city. Path between any two cities have a  *distance* associated with them in terms of weight.

*(Starting/origin city is a city where the traveler visits first)*.

- output:

We need to find a path which must include all the cities *exactly once* and which have the *minimum* amount of distance associated with the particular path.

*(This problem can get solved either by brute force method or greedy method or dynamic programming method, but dynamic programming method gives the most optimized solution to this problem.)*

- formula:
>g( i , s ) = min( Cik + g( k , s - { k } ) )

*where,*

i **-->** starting vertex **/** node **/** city

k **-->** ending vertex **/** node **/** city

C **ik** **-->** cost to travel from node **i** to node **k**

g( para1 **,** para2 ) **:** 

para1 **-->** first parameter which indicates the starting vertex **/** node **/** city

para2 **-->** second parameter which indicates the set of remaining nodes **/** cities **/** vertices to visit

---


**Question:**

**Q .** A *graph* is given where the *nodes* represent *cities* and *edges* represent the *path* between any two nodes which have *weight* associated with them. The traveler needs to visit each nodes *exactly once* and *return to* the *starting city/ node* and also the path must have *minimum weight* associated with it.

*Graph:*

>                   <--(5)
>       (  1 ) <--------------> ( 2 )
>  
>           !\ \   -->(10)    / /!
>        !/\  \ \            / /  /\!
>        ! !   \ \          / /   ! !
>        ! !  8 \ \        / / 13 ! !
>        ! !     \ \      / /     ! !
>        ! !      \ \    / /      ! !
>        ! !       \ \  / /       ! !
>     15 ! ! 6      \ \/ /      8 ! ! 10
>        ! !        / /\ \        ! !
>        ! !       / /  \ \       ! !
>        ! !      / /    \ \      ! !
>        ! !   9 / /      \ \ 20  ! !
>        ! !    / /        \ \    ! !
>        ! !   / /          \ \   ! !
>       \/ !  / /            \ \  ! \/
>           \/ /    -->(12)   \ \/
>       (  3 ) <--------------> ( 4 )  
>                   (9)<--

 **Solution:**

*We can draw an adjacent matrix from the given graph where we'll store the cost of every edges present in the graph.*

 --> Ad. Matrix: 

|C\C  | 1 | 2 | 3 | 4 |
|:---: | :---: | :---: | :---: | :---: |
| 1 | 0 | 10 | 15 | 20 |
| 2 | 5 | 0 | 9 | 10 |
| 3 | 6 | 13 | 0 | 12 |
| 4 | 8 | 8 | 9 | 0 |

**C -->** Cities **(** in the ad. matrix **)** .

*We can observe that all the values of right side diagonal line are 0s, this is because traveler will cost 0 for residing in the same node/ city.*

*--> Now for solving the problem, we need to draw a tree like structure which makes things easier.*

| | | | 1 | | | | <------- Fourth |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| | | // | // | \\\ | | |
| | 2 | | 3 | | 4 | | <------- Third |
| // | \\\ | // | | \\\ | // | \\\ |
| 3 | 4 | 2 | | 4 | 2 | 3 | <------- Second |
| ll | ll | ll | | ll | ll | ll |
| 4 | 3 | 4 | | 2 | 3 | 2 | <------- First |
| ll | ll | ll | | ll | ll | ll |
| 1 | 1 | 1 | | 1 | 1 | 1 |

*--> All the cost of the path/ distance will be noted from the adjacent matrix that we derived from the graph.*

*For First stage :*

>g( 4 , ~~O~~ ) = C41       
>  
>           = 8  ----- (i)
>
>g( 3 , ~~O~~ ) = C31
>
>           = 6  ----- (ii)
>
>g( 2 , ~~O~~ ) = C21
>
>           = 5  ----- (iii)


*For Second stage :*

>g( 3 , 4 ) = C34 + g( 4 , ~~O~~ )
>
>          = 12 + 8  ----- { from (i)}
>          = 20  ------ (iv)
>
>g( 4 , 3 ) = C43 + g( 3 , ~~O~~ )
>
>          = 9 + 6  ----- { from (ii)}
>          = 15  ------ (v)
>
>g( 2 , 4 ) = C24 + g( 4 , ~~O~~ )
>
>          = 10 + 8  ----- { from (i)}
>          = 18  ------ (vi)
>
>g( 4 , 2 ) = C42 + g( 2 , ~~O~~ )
>
>          = 8 + 5  ----- { from(iii)}
>          = 13  ------ (vii)
>
>g( 2 , 3 ) = C23 + g( 3 , ~~O~~ )
>
>          = 9 + 6  ----- { from (ii)}
>          = 15  ------ (viii)
>
>g( 3 , 2 ) = C32 + g( 2 , ~~O~~ )
>
>          = 13 + 5  ----- { from (iii)}
>          = 18  ----- (ix)

*For Third stage :*

>g( 2 , { 3 , 4 } ) = min( C23 + g( 3 , 4 ) , C24 + g( 4 , 3 ) )
>            
>               = min( 9 + 20 , 10 + 15 )  ----- { from(iv) , (v)}
>               = min( 29, 25 )
>               = 25  ----- (x)
>
>g( 3 , { 2 , 4 } ) = min( C32 + g( 2 , 4 ) , C34 + g( 4 , 2 ) )
>             
>               = min( 13 + 18 , 12 + 13 )  ----- { from(vi) , (vii)}
>               = min( 31 , 25 )
>               = 25  ----- (xi)
>
>g( 4 , { 2 , 3 } ) = min( C42 + g( 2 , 3 ) , C43 + g( 3 , 2 ) )
>
>               = min( 8 + 15 , 9 + 18 )  ----- { from(viii) , (ix)}
>               = min( 23 , 27 )
>               = 23  ----- (xii)

*For Fourth stage :*

>g( 1 , { 2 , 3 , 4 } ) = min( C12 + g( 2, { 3 , 4 }) , C13 + g( 3 , { 2 , 4 }) , C14 + g( 4 , { 2 , 3 }) )
>
>                 = min( 10 + 25 , 15 + 25 , 20 + 23 ) ----- { from(x) , (xi) , (xii)}
>                 = min( 35 , 40 , 43 )
>                 = 35


*Therefore,* the **Minimum Cost** for *traveling* is **35**.

*And,* the **Sequence** of *cities* to *visit* is **:** *1* **-->** *2* **-->** *4* **-->** *3* **-->** *1*.

This is how we solve any **Traveling Salesman Problem** using **Dynamic Programming method.**