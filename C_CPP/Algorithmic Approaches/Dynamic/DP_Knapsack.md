# Problem1 which uses Dynamic Programming Algorithm
---
---

## Brief of Dynamic Programming:
- This is one of the *optimization algorithm*.
- This uses *brute force approach*, it means this algorithm checks for all the possible solutions which will be feasible and then choose one among these as a optimized one but in a manner such that it takes less time comparatively while using simply brute force.
- In this algorithm, we divide the given problem into various sub-problems and our optimal solution for given problems depends on the optimal solution of sub-problems.
- We can say, in this algorithm, the *sub-problems* are *overlapping*.

---
**Now we can look into one among few problems and how we use DP while solving those problem.**

## 1. Knapsack Problem (0/1 Knapsack Problem)

*Pattern of the such problems:*
- input: 

We are given a problem, where we have a bag/knapsack with a fixed capacity which we need to fill with items which are associated with their weights and profits. Now we have two options: 

a.  either to pick the item and get the profit or else

b.  to leave the item and also the profit

- output:

To list the items which we put to the knapsack and also to find the maximum profit from the picked items.


*The formula:*

>K(i,c) = max(Pi + K(i-1, c-wi), K(i-1, c))

*where*,

>P**i** **->** Profit of the *ith* item
>
>c **->** given capacity of knapsack
>
>w**i** **->** weight of the *ith* item
>
>K( **,** ) **->** the first part indicates no. of items remaining for being traversed **&** second part indicates remaining capacity of the knapsack
>
>max( **,** ) **->** this returns the value which is maximum among the two parameters
>
>the first part of formula **->** when the item is picked up *(Since, an item is traversed and also picked so remaining items will get reduced by 1, and the capacity of knapsack will too get reduced by weight if item)*
>
>the second part of formula **->** when the item is not picked _(Since, if a item is not picked up but still it got traversed and so the remaning items will get reduced by 1 in this case too but the capacity of knapsack won't get affected as the item is not picked up)_

***

**Question:**

Q . Knapsack *capacity = 6*, find the items that can be selected. 

|   items | 1  |  2  |  3  |
| :-------: | :------: | :-------: | :-------: |
| Profit (P**i**) | 10 | 12 | 28 |
| Weight (w**i**) | 1 | 2 | 4 |


**Solution:**

Step - 1 : Create a table with *no. of columns* = given *capacity* of knapsack & *no. of rows* = no. of *items* or vice versa.

Lets here put capacity (c) in the columns & items no. (i) in the rows.

*Initially the knapsack will be empty.*

i \ c |  0  |  1  |  2  |  3  |  4  |  5  |  6  |
| :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :------: |
|  0  |  
|  1  |
|  2  |
|  3  |


>
>There are *three* cases for using the formula:
>
>**a )** if *i = 0* or *c = 0*, then 
>>K( i , c ) = 0
>
>**b )** if w**i** > c, then 
>>K( i , c ) = K( i - 1 , c )
>
>**c )** for other cases
>>K( i , c ) = max( Pi + K( i - 1 , c - wi), K( i - 1 , c))

Step - 2 : 
Now all the values of first row & first column will be 0 according to case **a )**.

We will also keep record of the profit & weight of items alongside of table.

Pi  |  wi  |i \ c |  0  |  1  |  2  |  3  |  4  |  5  |  6  |
| :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :------: | :-----: | :------: |
|  |  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |
| 10 |  1  |  1  |  0  |
| 12  |  2  |  2  |  0  |
|  28  |  4  |  3  |  0  |

Step - 3 : Start filling remaining rows & columns.

    K( 1 , 1 ) = max( P1 + K( 1 - 1 , c - w1), K( 1 - 1 , c ) )
               = max( 10 + K( 1 - 1 , 1 - 1 ), K( 1 - 1 , 1 ) )
               = max( 10 + K( 0 , 0 ), K( 0 , 1) )
               = max( 10 + 0 , 0 )
               = max( 10 , 0 )
               = 10


*Similarly, if we calculate, we can see all the values of 1st item row (i.e., for i = 1) will have 10 for this question.*

And the table looks like:

Pi  |  wi  |i \ c |  0  |  1  |  2  |  3  |  4  |  5  |  6  |
| :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :------: | :-----: | :------: |
|  |  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |
| 10 |  1  |  1  |  0  |  10  |  10  |  10  |  10  |  10  |  10  |
| 12  |  2  |  2  |  0  |
|  28  |  4  |  3  |  0  |
           

    K( 2 , 1 ) = max( P2 + K( 2 - 1 , c - w2), K( 2 - 1 , c ) )
               = max( K( i - 1 , c ) )    . . . { Since here, c < w2 }
               = max( K( 2 - 1 , 1 ))
               = max( K( 1 , 1 ))
               = max(10)
               = 10         

    K( 2 , 2 ) = max( P2 + K( 2 - 1, c - w2), K( 2 - 1 , c) )
               = max( 12 + K( 1 , 2 - 2 ), K( 1 , 2) )
               = max( 12 + K( 1, 0), K( 1, 2) )
               = max( 12 + 0, 10)
               = max( 12, 10 )
               = 12


    K( 2 , 3 ) = max( P2 + K( 2 - 1, c - w2), K( 2 - 1 , c) )
               = max( 12 + K( 1 , 3 - 2 ), K( 1 , 3) )
               = max( 12 + K( 1, 1), K( 1, 3) )
               = max( 12 + 10, 10)
               = max( 22, 10 )
               = 22

    K( 2 , 4 ) = max( P2 + K( 2 - 1, c - w2), K( 2 - 1 , c) )
               = max( 12 + K( 1 , 4 - 2 ), K( 1 , 4) )
               = max( 12 + K( 1, 2), K( 1, 4) )
               = max( 12 + 10, 10)
               = max( 22, 10 )
               = 22

    K( 2 , 5 ) = max( P2 + K( 2 - 1, c - w2), K( 2 - 1 , c) )
               = max( 12 + K( 1 , 5 - 2 ), K( 1 , 5) )
               = max( 12 + K( 1, 3), K( 1, 5) )
               = max( 12 + 10, 10)
               = max( 22, 10 )
               = 22

    K( 2 , 6 ) = max( P2 + K( 2 - 1, c - w2), K( 2 - 1 , c) )
               = max( 12 + K( 1 , 6 - 2 ), K( 1 , 6) )
               = max( 12 + K( 1, 4), K( 1, 6) )
               = max( 12 + 10, 10)
               = max( 22, 10 )
               = 22


And now the table looks like:

Pi  |  wi  |i \ c |  0  |  1  |  2  |  3  |  4  |  5  |  6  |
| :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :------: | :-----: | :------: |
|  |  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |
| 10 |  1  |  1  |  0  |  10  |  10  |  10  |  10  |  10  |  10  |
| 12  |  2  |  2  |  0  |  10  |  12  |  22  |  22  |  22  |  22  |
|  28  |  4  |  3  |  0  |


    K( 3 , 1 ) = max( P3 + K( 3 - 1 , c - w3) , K( 3 - 1 , c) )
               = max( K( 3 - 1 , c))  . . . { Since here c < w3 }
               = max( K( 2 , 1 ) )
               = max(10)
               = 10

    K( 3 , 2 ) = max( P3 + K( 3 - 1 , c - w3) , K( 3 - 1 , c) )
               = max( K( 3 - 1 , c))  . . . { Since here c < w3 }
               = max( K( 2 , 2 ) )
               = max(12)
               = 12

    K( 3 , 3 ) = max( P3 + K( 3 - 1 , c - w3) , K( 3 - 1 , c) )
               = max( K( 3 - 1 , c))  . . . { Since here c < w3 }
               = max( K( 2 , 3 ) )
               = max(22)
               = 22

    K( 3 , 4 ) = max( P3 + K( 3 - 1, c - w3), K( 3 - 1 , c) )
               = max( 28 + K( 2 , 4 - 4 ), K( 2 , 4) )
               = max( 28 + K( 2, 0), K( 2, 4) )
               = max( 28 + 0, 22)
               = max( 28, 22 )
               = 28

    K( 3 , 5 ) = max( P3 + K( 3 - 1, c - w3), K( 3 - 1 , c) )
               = max( 28 + K( 2 , 5 - 4 ), K( 2 , 5) )
               = max( 28 + K( 2, 1), K( 2, 5) )
               = max( 28 + 10, 22)
               = max( 38, 22 )
               = 38

    K( 3 , 6 ) = max( P3 + K( 3 - 1, c - w3), K( 3 - 1 , c) )
               = max( 28 + K( 2 , 6 - 4 ), K( 2 , 6) )
               = max( 28 + K( 2, 2), K( 2, 6) )
               = max( 28 + 12, 22)
               = max( 40, 22 )
               = 40


And now the table looks like:

Pi  |  wi  |i \ c |  0  |  1  |  2  |  3  |  4  |  5  |  6  |
| :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :-----: | :------: | :-----: | :------: |
|  |  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |
| 10 |  1  |  1  |  0  |  10  |  10  |  10  |  10  |  10  |  10  |
| 12  |  2  |  2  |  0  |  10  |  12  |  22  |  22  |  22  |  22  |
|  28  |  4  |  3  |  0  |  10  |  12  |  22  |  28  |  38  |  40  |

Thus, this is the required table.


Therefore, we can see **Maximum Profit** is of **40**.

Now, 

            Max. profit = 40 for i = 3 so:
        40 - P3 --> 40 - 28 --> 12 . . . (It means i3 is selected)
            then since 12 >= P2 so:
        12 - P2 --> 12 - 12 --> 0  . . . (It means i2 is also selected)
            then since 0 < p1 so:
        we didn't selected i1 item


Therefore, **Maximum Profit** = **40** and **Items picked up** are **i2** & **i3**.

***Trick:***

As you saw correct, we have a trick too to fill the table as:
> 
> |  Pi  |  wi  |
> | :--- | :---  |
> |  10  |  1  |
> | 
For 1st row, since w1 < c so we put the item in knapsack and so for complete row, we have value(K) = 10.

> |  Pi  |  wi  |
> | :---:| :---:|
> |  10 |  1  | 
> |  12  |  2  |

Now, for 2nd row, since w2 = 2 & w1 = 1 ---> total weight = 3, it means we can put both these items into knapsack when c >= 3. So, for c = 3, 4, 5, 6, the value(K) = 22. And since w1 = 1 so for c = 1, the value(K) = 10. And since w2 = 2 , and so for c = 2 & < total weight(3), value(K) = 12.

> |  Pi  |  wi  |
> | :---:|:---: |
> |  10  |  1  |
> |  12  |  2  |
> |  28  |  4  |

Now, for 3rd row, for c = 1, value(K) = 10 ( since, c = w1). And, for c = 2, value(K) = 12 for same reason. And, for c = 3, value(K) = 10 + 12 => 22 { Since, w1 + w2 = 3 and c = 3, so value = P1 + P2 => 10 + 12 => 22 }. And, for c = 4, we have, w3 = 4 so value(K) = 28. And, for c = 5, ie., w3 + w1 => 4 + 1 => 5, so we can put value(K) = P3 + P1 => 38. And, for c = 6, c = w3 + w2 => 4 + 2 => 6, so value(K) = P3 + P2 => 28 + 12 => 40. Here, we can see, **Maximum Profit** = **40** & it came from profits *P3* & *P2* i.e., items **i3** & **i2**.

*In this way too, we get the same table.*

This is how we solve such problems with **Dynamic Programmming Algorithm**.


    
