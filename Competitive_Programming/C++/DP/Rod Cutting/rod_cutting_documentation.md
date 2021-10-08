# Rod Cutting Problem (Recursive + Iterative Approach) 🪓

<!-- ## Definition -->

Given a rod of length n and an array of prices that includes prices of all pieces of size smaller than and equal to n. 
Determine the maximum value obtainable by cutting up the rod and selling the pieces.

Example: 
``` 
Input: n=5
length   | 1   2   3   4   5
-------------------------------
price    | 2   5   7   8   6

Output: 12
Explanation: Maximum Value can be obtained by taking pieces of length 1, 2, 2 i.e, 2 + 5 + 5 = 12 or 2 and 3 i.e, 5 + 7 = 12 

Input: n = 8
length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 1   5   8   9  10  17  17  20

Output: 22
Explanation: Maximum Value can be obtained by taking pieces of length 2 and 6 i.e, 5 + 17 = 22
```

## Naive Approach 🧠

The naive brute force approach would be to generate all the possible combinations of different pieces and take the maximum-priced configuration. 
So, we have to choose between two option for a total of n-1 times and thus the total possible number of solutions are 2x2x2x2x2.... = 2<sup>n-1</sup>


#### 💡 Implementation of Naive Approach: 

Recursively, cut the rod at all different pieces using the given price array and return the maximum cost among all. 
Therefore, We can have a recursive function = `cutRod(n) = max(price[i] + cutRod(n-i-1)) for all i in {0, 1 .. n-1}`

```c++
int cutRod(int price[], int n)
{
   // Base Case
   if(n <= 0) return 0;
   int max_cost = INT_MIN;
   // Recursively cut the rod in different pieces and compare different configurations
   for (int i = 0; i < n; i++)
         max_cost = max(max_cost, price[i] + cutRod(price, n - i -1));
 
   return max_cost;
}
```

#### ⏰ Time Complexity for Naive Approach 

__Time Complexity for the Naive Approach is Exponential__. Since for every cut we have two options either to perform or not. Hence, Time Complexity for the naive approach would be **O(2<sup>n</sup>)**.

![image](https://user-images.githubusercontent.com/58984074/135901814-5985dea6-bc84-4e73-960e-517737e8e4fc.png)
<h6>Image Credits: <a href="https://iq.opengenus.org/rod-cutting-problem/">Open Genus</a></h6> 

It can be concluded that there are lots of overlapping subproblems that are solved again and again. Example f(1) is calculated many times. Hence we can store the intermediate results of computations and use them further if required. 
Hence a **_Dynamic Programming_** Recursion + Memoization approach can be used here.  


## 💡 Implementation of Recursion + Memoization (Top Down Approach):

The above Naive Recursive approach can be optimized using memoization. Since the problem is just a variation of the Unbounded Knapsack Problem since the same cuts can be made more than once while the max_weight = max_length of rod. 
Therefore, a 2-D vector can be used to store the intermediate results and for every state f(n, max_length) it can be checked whether it has been calculated before. 
If it has been calculated before then return the result of computation else, compute the answer of the state, and store its value.  

#### Code 💻 

```c++
// Recursive DP with Memoization (Top Down Approach) 

vector<vector<int>> dp(2005,vector<int>(2005,-1));
int cutRod(int price[], int length[], int max_len, int n) {

    // Base Case, i.e, maximum price will be zero, when either the length of the rod is zero or price is zero.
    if (n==0 or max_len==0)
        return 0;
    
    // If result of the state is calculated before return 
    if(dp[n][max_len]!=-1) return dp[n][max_len];

    // We have 2 Choices if current length is less than max_len then either take it or not
    if (length[n-1]<=max_len) {
        dp[n][max_len]=max(price[n-1]+cutRod(price,length,max_len-length[n-1],n),cutRod(price,length, max_len,n-1));
    }
 
    // Else  Move to other index
    else {
        dp[n][max_len]=cutRod(price,length,max_len,n-1);
    }
    return dp[n][max_len];
}
int32_t main()
{
    int n; cin>>n;
    int price[n];
    for(int i=0; i<n; ++i) cin>>price[i];
    int length[n];
    for (int i=0; i<n; i++) {
        length[i]=i+1;
    }
    int max_len=n;
    cout<<cutRod(price,length,max_len,n);
}
```

**⏰ Time Complexity: O(n<sup>2</sup>)**

**Space Complexity: O(n<sup>2</sup>)**

## 💡 Implementation of Iterative DP (Bottom-up Approach):

The above top-down approach can further be optimized using a Bottom-Up Dynamic Programming Approach, which can be written by maintaining an array storing the result of every state using two loops.

We can initialize dp[i] to be the maximum cost obtained when rod of length i is cut into pieces of size<=i

Therefore, `dp[i]=max(dp[i],price[j]+dp[i-j-1]) ∀  j ∈ {0,i}`

####  Code 💻

```c++
// Iterative DP (Bottom Up Approach) 
int cutRod(int price[], int n)
{
   int dp[n+1]={0};
 
   // dp[i] is the maximum cost obtained when rod of length i is cut into pieces of size <=i 
   for(int i=1; i<=n; i++) {
       int max_val=INT_MIN;
       for(int j=0; j<i; j++){
            max_val=max(max_val,price[j]+dp[i-j-1]);
       }
       dp[i]=max_val;
   }
   return dp[n];
}
```

**⏰ Time Complexity: O(n<sup>2</sup>)**

**Space Complexity: O(n)**

## References 📙

- [Geeks for Geeks](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/)
- [Educative](https://www.educative.io/edpresso/the-rod-cutting-problem)
- [Medium - Rod Cutting Problem](https://medium.com/@pratikone/dynamic-programming-for-the-confused-rod-cutting-problem-588892796840)
