> Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j if either j = i + 1 or j = 3 * i. The task is to find the minimum number of edges in a path in G from vertex 1 to vertex n.
---
I recommend trying the [problem](https://practice.geeksforgeeks.org/problems/shortest-path-from-1-to-n0156/1/?category[]=Graph&category[]=Graph&page=2&query=category[]Graphpage2category[]Graph) before reading further
```
class Solution{   
public:
    int minimumStep(int n){  
       if(n<3) 
       {
           return n-1;
       }
        
        if(n%3==0)
        {
            return 1+minimumStep(n/3);
        }
        return 1+minimumStep(n-1);
    }
};
```

*The simplest solution is simply doing a breadth-first search. Construct a graph with numbers as vertices and edges leading from one number to another if an operation can be made to change one number to the other.
There is, however, an even faster solution. The problem can be reversed as follows: we should get the number n starting from 1 using the operations "deduct 1 to the number" and "divide the number by 3 if it is divisible by 3".*
---
```
Type 1: subtract 1 from N
```
```
Type 2: Divide by 3
```
*It is obvious that the second operation leads closer to the number much faster than the first operation. That reasoning implies that in an optimal answer more than one consecutive operation of type 1 is possible only if no operations of type 2 follow, that is, the only situation where it makes sense is when n is smaller than 3 and we just need to make it 1. Under this constraint, there is the only correct sequence of moves: if n is smaller than 3, we just subtract 1 until it becomes equal to 1; else we divide n by 3 if it is multiple of 3, or subtract 1 until it becomes a multiple of three. The length of this sequence can be found in `O(log N)`*
