# Fractional Knapsack problem

## Problem 📚

Given are N objects that need to be put in a knapsack (i.e. a bag). Associated with each object is its weight and profit gained from putting in it. If the knapsack has certain limit of weight that it can carry W and items need not be put as whole (i.e. fraction of items can be put in the bag), then what items should be put in the knapsack to maximize the profit.

## Approach 💡

This is an optimization problem with  
objective : maximize overall profits from items in bag, and  
constraints : knapsack has a weight capacity

Therfore, this problem can be solved by greedy approach. 

#### Approach 1  💭
Greedy about profit : so pick the items which gives max profit.  
Example :-
``` 
Input :
N = no of items = 3, W = capacity of bag = 20  
p[] = (25, 24, 15)  
w[] = (18, 15, 10)  

Answer obtained : 
X[] = (1, 2/15, 0) with profit = 25 + 3.2 = 28.2
```

Explaination : item 1 gives maximum profit (25 > 24 and 15) so we put it in bag and gives us profit 25 and takes up 18/20 of space in knapsack.  
Now remaining weight is 20-18 = 2. Next highest profit giving item is item 2 (24>15) so it is put in knapsack, but since it cannot be put as whole, we only put 2/15 part of it. It gives profit (2/15)*24 = 3.2.  
Now the knapsack is filled so we stop.

#### Approach 2 💭
Greedy about weight : so pick the items which take up least space (Weight) first.  
Example :-
``` 
Input :
N = no of items = 3, W = capacity of bag = 20  
p[] = (25, 24, 15)  
w[] = (18, 15, 10)  

Answer obtained : 
X[] = (0, 10/15, 1) with profit = 15 + 16 = 31
```

Explaination : item 3 has least weight (10 < 15,18) so we put it in bag and gives us profit 15 and takes up 10/20 of space in knapsack.  
Now remaining weight is 20-10 = 10. Next least weight item is item 2 (15<18) so it is put in knapsack, but since it cannot be put as whole, we only put 10/15 part of it. It gives profit (10/15)*24 = 16.  
Now the knapsack is filled so we stop.

#### Approach 3 💭

The above two approaches are feasible solutions but not the optimal solution. The optimal solution is obtained by being greedy about the profit/weight ratio of the items.

Greedy about profit/weight : so pick the items which have maximum profit/weight ratio first.  

Example :-
``` 
Input :
N = no of items = 3, W = capacity of bag = 20  
p[] = (25, 24, 15)  
w[] = (18, 15, 10)  

p/w[] = (25/18, 24/15, 15/10) = (1.3, 1.6, 1.5)

Answer obtained : 
X[] = (0, 1, 5/10) with profit = 24 + 7.5 = 31.5
```

Explaination : item 2 has highest p/w ratio (1.6 > 1.5,1.3) so we put it in bag and gives us profit 24 and takes up 15/20 of space in knapsack.  
Now remaining weight is 20-15 = 5. Next highest p/w ratio item is item 3 (1.5 > 1.3) so it is put in knapsack, but since it cannot be put as whole, we only put 5/10 part of it. It gives profit (5/10)*15 = 7.5.  
Now the knapsack is filled so we stop.




## Algorithm for optimal solution

```
N = no of objects		
M = capacity of bag  
P = arr of profits of [N]  
W = arr of wts of [N]

For i = 1 to n :
	Calculate profit/width	   

Sort objects in decreasing order of p/w ratio	

For i = 1 to n :
	If M > 0 and Wi < M:
		M = M – Wi
		Profit = Profit + Pi
    X[i] = 1
	Else break
	If M > 0
		Profit = profit + Pi * (M/Wi)
    X[i] = (M/Wi)

```

## Analysis ⏱️

> The array to calculate profit to weight ratio for all N items take O(N) time. Sorting of the p/w array can be achieved efficiently using a proper algorithm and implementation in O(NlogN) time. Following the greedy approach to pick items takes O(N) time. So **Total time complexity = O(N logN)** for N items.

> **Space complexity = O(N)** as an extra array needs to be defined to store p/w values.

## Implementaion 👨‍💻

```
// FRACTIONAL KNAPSACK PROBLEM - GREEDY APPROACH
// C++

/*
INPUT FORMAT :-
First line : single integer N denoting no of items
Second line: single integer W denoting capacity of knapsack
N lines following : containing 2 space separated integers p[i] and w[i]
the profit and weight of ith item
*/

#include <bits/stdc++.h>
using namespace std;

struct Item {
    int w, p;
    float pw;
};

bool compareItems(Item a, Item b){
    return a.pw > b.pw;
}


float knapsack (int n, int W, Item items[]){
   for(int i=0; i<n; i++){                                        // n                                
       items[i].pw = 1.0*items[i].p/items[i].w;
   } 
   sort(items, items+n, compareItems);                         // nlogn
   
   int currWt=0;
   float currPr=0;
   for(int i=0; i<n; i++){                                      // n
       if(currWt + items[i].w < W){
           currWt += items[i].w;
           currPr += items[i].p;
       }
       else {
            float fraction = 1.0*(W-currWt)/items[i].w;
            currWt += (W-currWt);
            currPr += fraction*items[i].p;
            break;
       }
   } 
   return currPr;
    // Total complexity : O(nlogn)
}


int main()
{
   int n, W;
   cin>>n;
   Item items[n];
   cin>>W;
   for(int i=0; i<n; i++){                                  
       cin>>items[i].p>>items[i].w;
       items[i].pw = 1.0*items[i].p/items[i].w;
   }
   cout<<"\nTotal Profit : "<<knapsack(n,W,items);
   return 0;
}



``` 

## Applications 🛠️

Resource allocation and optimization problems which can be reduced to fractional knapsack problem like :
- Cutting stock problems
- portfolio optimization
- Finding the least wasteful way to cut raw materials
- financial modeling
- production and inventory management systems
- stratified sampling
- design of queuing network models in manufacturing
- control of traffic overload in telecommunication systems

## References 🔗

- https://www.youtube.com/watch?v=oTTzNMHM05I
- https://www.tutorialspoint.com/design_and_analysis_of_algorithms/design_and_analysis_of_algorithms_fractional_knapsack.htm
- https://www.geeksforgeeks.org/fractional-knapsack-problem/
- https://shareok.org/bitstream/handle/11244/320340/Badiru_ou_0169D_10210.pdf;jsessionid=26E94C9A72E64C44A52CCB2D8D08E031?sequence=1
- Book : Computer Algorithms - Ellis Horowitz, Sartaj Sahni

