# WinesProblemUsingDynamicProgramming

In this small docuementation i will be trying to help you understand the concept behind the Wine Problem on Spoj the problem statement is as follows : 

## GERGOVIA - Wine trading in Gergovia
Gergovia consists of one street, and every inhabitant of the city is a wine salesman. Everyone buys wine from other inhabitants of the city. Every day each inhabitant decides how much wine he wants to buy or sell. Interestingly, demand and supply is always the same, so that each inhabitant gets what he wants.

There is one problem, however: Transporting wine from one house to another results in work. Since all wines are equally good, the inhabitants of Gergovia don't care which persons they are doing trade with, they are only interested in selling or buying a specific amount of wine.

In this problem you are asked to reconstruct the trading during one day in Gergovia. For simplicity we will assume that the houses are built along a straight line with equal distance between adjacent houses. Transporting one bottle of wine from one house to an adjacent house results in one unit of work.

Input
The input consists of several test cases.

Each test case starts with the number of inhabitants N (2 ≤ N ≤ 100000).

The following line contains n integers ai (-1000 ≤ ai ≤ 1000).

If ai ≥ 0, it means that the inhabitant living in the ith house wants to buy ai bottles of wine. If ai < 0, he wants to sell -ai bottles of wine.

You may assume that the numbers ai sum up to 0.

The last test case is followed by a line containing 0.

Output
For each test case print the minimum amount of work units needed so that every inhabitant has his demand fulfilled.

Example
Input:
5
5 -4 1 -3 1
6
-1000 -1000 -1000 1000 1000 1000
0

Output:
9
9000

## Approach 

### Greedy Strategy 
Since we are bound to selecting a wine bottle once per year and that too from the end or the start of the list only, this means that whatever bottle we select for this particular year will be affecting our output for upcoming selections, it might seems like selecting the bottles with smaller values during the initial years and saving the bottles with higher value for the upcoming years will fetch us the best profit but it will not, have a look at the following example :

Test Case # 1 : 

Number of bottles = 5 
Wines : 5 -4 1 -3 1

1st year : we select bottle with price 1 --> profit : 1x1 = 1

Number of bottles = 4
Wines : 5 -4 1 -3

2nd year : we select bottle with price -3 --> profit : -3x2 = -6

Number of bottles = 3
Wines : 5 -4 1

3rd year : we select bottle with price 1 --> profit : 1x3 = 3

Number of bottles = 2
Wines : 5 -4 

4th year : we select bottle with price -4 --> profit : -4x4 = -16

Number of bottles = 1
Wines : 5

5th year we are left with bottle with price 5 --> profit : 5x5 = 25

Hence our total profit adds to : 1 + (-6) + 3 + (-16) + 25 = 7 
However this answer is wrong, this implies that greedy approach fails here.
This is because we just tried to optimize the current selection instead of exploring all the possiblities and this led to failure of this approach for this case because in this problem our order of selection affects the total profit we are going to make

### Dynamic Programming Strategy 
Here in this approach we will explore all the possible outcomes for the given problem, we will aim for global optimum instead of local optimum, in this approach we will be using the concept of recursion + memoisation, we will be implementing the solution using a top - down DP approach, we will be using 2 pointers i and j, i will start from the left end j will start from the right end of the bottles array, if we select a bottle from right end we will decrement the value of j by one and if we select a bottle from the left end we will increment the value of i by one.

function definition : int profit(vector <int> wines, int i, int j, int year)

We will be building a 2D DP vector 
Idea here is to check out both the choices :
if we select a bottle from left end : profitLeft=wines[i] + profit(wines, +1, j, year)
if we select a bottle from right end : profitRight=wines[j] + profit(wines, i, j-1, year)

and our final answer will be : max(profitLeft, profitRight)

Number of bottles = 5 
Wines : 5 -4 1 -3 1

1st year : i=0, j=4
profitLeft = 5x1 + profit(wines, i=0+1, j=4, year=1+1)
profitRight = 1x1 + profit(wines, i=0, j=4-1, year=1+1)

as we can see, both of the profits are subject to profits of the rest of the array hence we would need to compute the values of other states before we can finalize the values for year 1 

-->profit(wines, i=1, j=4, year=2) : 
   Number of bottles = 4 
   Wines : -4 1 -3 1

   this will make a call on profit(wines, 2, 4, 3) and profit(wines, 1, 3, 3)

-->profit(wines, i=0, j=3, year=2) : 
   Number of bottles = 4 
   Wines : 5 -4 1 -3 

   this will make a call on profit(wines, 1, 3, 3) and profit(wines, 0, 2, 3)

-->Notice that profit(wines, 1, 3, 3) has been called twice and thus we will make some optimization : we will store the solutions for each 	  call in a DP array for every possible value of i and j, this will help us reduce our time complexity from O(2^N)(int the case of plain 	recursive appraoch) to O(N^2)(using dyanmic programming).

-->if we just use recursion then our algorithm will be very inefficient because there are many subproblems in this problem which are required to be evaluated again and again and thus wasting the computional time

-->our base case will be : i>j that is if there are no bottles left in the array 