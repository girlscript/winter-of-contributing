**Distribution Problems** or **Resource Allocation Problems** demand the optimal distribution of an entity among a variety of independent activities. 

The formulation and computational solution of a simplified model is considered and then generalized to a more complex model. Numerical results are attained for the second model by use of the Lagrange multiplier approach.

## Lagrange Multiplier Approach 
Refers to a classical method belonging to the *Theory of Dynamic Programming* whereby optimization of a strategy is carried out for finding the local maxima and minima of a function subject to equality constraints, such as the ones we shall encounter in the presented problems ahead.

## Method Used
We shall be following the iterative method for building our DP tables that enable us to utlize pre computed values of *Overlapping Sub-problems*. The problems will be solved along the same lines as Knapsack, thus it is preffered to familiarize with below given standard knapsack peoblem before moving on to the actual problems we intend to deal with in this article.

## Knapsack Problem

**Problem Statament:** 
Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. 

**Description:** 
Given two integer arrays *val[0..n-1]* and *wt[0..n-1]* representing values and weights associated with *n* items respectively and an integer *W* representing capacity of the sack, calculate the maximum valued subset of *val[]* wherein sum of the weights of items corresponding to this subset is no more than W.

**Input Format:** 
First line contains the number of objects.
Second line has the capacity of the knapsack.
Third line contains *n* space seperated integers denoting values of objects.
Last line contains *n* space seperated integers denoting weights of objects.

**Output Format:** 
Single line of output contains the maximum sum of object values that can be accomodated in the knapsack.

**Example Input and Output:** 
```
3
50
60 100 120
10 20 30
```

```
220
```

**Code:**
```

#include<bits/stdc++.h>
using namespace std;

#define _z ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long int
#define endl "\n"
#define mod 1000000007
#define pb_ push_back
#define mp_ make_pair

int knapSack(int W, int wt[], int val[], int n) {
    
	int i, w;
	int K[n+1][w+1];

	for(i = 0; i <= n; i++) {
		for(w = 0; w <= W; w++) {
			if (i == 0 || w == 0) {
                K[i][w] = 0;
            }

			else if (wt[i - 1] <= w) {
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]],
								K[i - 1][w]);
            }

			else {
				K[i][w] = K[i - 1][w];
            }
		}
	}

	return K[n][W];
}

int main()
{
    int n;
    cin >> n;
	int val[n], wt[n], W;
    cin >> W;

	for(int i=0; i<n; i++) cin >> val[i];
	for(int i=0; i<n; i++) cin >> wt[i];

	cout << knapSack(W, wt, val, n) << endl;
}

```

**Explanation:**
Here we are essentially finding out the maximum value that can be obtained if we consider the total weights of objects to be no more than *w*, considering the first *i* objects (where *i* ranges from *0* to *n*, *n* being the total number of objects with us and *w* ranges from *0* to *W*, *W* being the capacity of the knapsack).

We observe that the maximum value obtainable with first *i* obejects having weight &le;*w* is the maximum of 2 values:
1. Maximum value obtainable with first *i-1* objects and &le;*w* weight.
2. Sum of: 
    1. Maximum value obtainable with first *i-1* objects and &le; *w-wt[i]* weight
    2. Weight of *i*<sub>th</sub> object, *wt[i]*.

For this purpose it is evident that we can reuse pre calculated value of first *i* objects resulting in &le;*w* weight, for calculating maximum corresponding to objects upto *i+1*. Thus we store these values in a table for enabling the same.

## Problem 1 (BottomUp): 

This problem will depict a bottom up manner of constructing the DP table as we will fill the values at the current position of the table by using those of the previous position.

**Problem Statement:**
There are *N* people in a shop having *C* candies. The *i*<sub>th</sub> person will but *C*<sub>i</sub> candies and will pay *R*<sub>i</sub> money for it to the shopkeeper. You are also given *M* pairs of friends where a pair *(x,y)* means *x* and *y* are friends. The friends have a rule that if the person *Q* buys candies then none of *Q*'s friends (direct or indirect) can buy candies. Maximize the amount of money the shopkeeper can earn.

**Input Format:** 
First line contains the number of candies and number of friends seperated by a space.
Next line contains *n* space seperated integers denoting candies that can be bought by each person.
Following line contains *n* space seperated integers denoting price that will be paid by each person.
Fourth line contains an integer *m* denoting the number of pairs of friends.

Then follow *m* lines containing 2 space seperated integers *x* and *y* each denoting that *x* and *y* are friends.

**Output Format:** 
Single line of output contains the maximum amount the shopkeeper can earn.

**Example Input and Output:** 
```
3 4
1 2 3
2 3 4
1
1 2
```

```
6
```

**Approach Explanation:**
As direct and indirect friends of an individual can't buy candies if the individual has already bought them, we need to find out such friend circles from which only a single person will be able to purchase candies. For estabilishing this we find the number of connected componentsin the graph resulting from the given pair of friends before applying the knapsack approach.

Relating to the knapsack:
1.  The number of candies in the shop - *C* can be viewed as our capacity of knapsack, as we can't buy more candies than there are in the shop.
2. Number of candies each person buys are seen as the objects to be put into the knapsack.
3. Weight of each of the objects can be related with number of candies each person buys.
4. Values of the objects in the knapsack can be related with price of the candies paid by each buyer.

Now in addition to running the 2 loops for *w* and *i* (in this case *i* ranges from 0 to the number of connected components in teh graph), we also run one loop within these two to pick the best value from each connected component. Where best value refers to the entity that can maximize the seller's earnings so far.

## Problem 2 (TopDown): 

This problem will depict a top down manner of constructing the DP table, as we will fill the values ahead of the current position by using that of the current position.

**Problem Statement:**
There are two friends and there are *n* packets where the *i*<sub>th</sub> packet contains *A*<sub>i</sub> amount of chocolates. Each packet should be given to exactly one of the friends. Find the minimum difference between the number of chocolates of the two friends.

**Input Format:** 
First line contains the number of packets.
Second line has *n* space seperated integers denoting number of chocolates in each packet.

**Output Format:** 
Single line of output contains the minimum difference between number of chocolates possessed by each friend.

**Example Input and Output:** 
```
3
10 19 30
```

```
1
```

**Approach Explanation:**
We assign the packets to only one of the friends. Because once we know which packets the first friend has, those with the second friend are known without needing to be found out seperately. 

Number of packets from 0 to *n* will be our first parameter of the DP table and sum of chocolates (which is analogous to weights in knapsack) will be the second. Here on finding a number of chocolates that is attainable within the first *i* packets, we consider two possibilities for the *i+1*<sub>th</sub> packet as follows:
1. Give it to the first friend i.e. indicate on the table that state *(i+1)(w+A*<sub>i+1</sub>*)* is feasible.
2. Give it to the second friend i.e. indicating on the table that state *(i+1)(w)* is feasible.

Finally, we find which of these feasible scenarios results in the minimum difference between number of chocolates with each friend.
