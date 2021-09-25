# Edit Distance Problem (Recursive + Iterative Approach) 

<!-- ## Definition -->

Given two strings str1 and str2. You can perform 3 operations on str1. i.e, 
1. Insert a character 
2. Remove a character
3. Replace a character

The cost of all the above operations is the same. Find the minimum number of operations that are required to convert ‘str1’ into ‘str2’.  
Example: 
``` 
Input: str1="sitting",  str2="kitten"
Output: 3
Explanation: 2 Replace and 1 Remove operation can be performed, i.e, replace character 's' with 'k' and character 'i' with 'e' and remove last character 'g'. 

Input: str1="girl",  str2="girlscript"
Output: 6
Explanation: insert 6 characters after str1 i.e 's', 'c', 'r', 'i', 'p', 't'
```

## Naive Approach 🧠

A naive brute force idea is to traverse the strings and process each character one by one. Lets traverse both the strings from right to left. 
m = Length of String 1 
n = Lenght of String 2
There can be two possiblity 

**Case 1**: Last Characters of both the Strings are the same. Nothing to do, so cost=0 move to next index, i.e, Recur for (n-1,m-1)

**Case 2**: Last Characters of both the Strings are different. Now we have 3 Operations that we can perform either, 
 1. Insert the same character at that index i.e, recur for (n,m-1)
 2. Remove that character at that index, i.e recur for (n-1,m)
 3. Replace with same character at that index i.e recur for (n-1,m-1)
 and add cost 1 to the answer. 
Take the minimum of all the operations. 

## 💡 Implementation of Naive Approach: 
```c++
int edit_distance_recursive(string str1, string str2, int n, int m)
{
    // If string 2 is empty then remove all character of string 1
    if(m==0) return n;  
    // If string 1 is empty then insert all character of string 2
    if(n==0) return m;  

    // If at ith index both are same no operations needed to be performed 
    if(str1[n-1]==str2[m-1])  {
        return edit_distance_recursive(str1,str2,n-1,m-1); 
    }
    // Consider all possible Operations 
    int insert = edit_distance_recursive(str1,str2,n,m-1); 
    int remove = edit_distance_recursive(str1,str2,n-1,m);
    int replace = edit_distance_recursive(str1,str2,n-1,m-1); 

    // Return minimum of all operations 
    return 1+min({insert,remove,replace});         
}
```

#### ⏰ Time Complexity for Naive Approach 

__Time Complexity for the Naive Approach is Exponential__. Since we are performing 3 Recursion Calls so in worst Case we may end up with **O(3<sup>n</sup>)** operations. 

![image](https://user-images.githubusercontent.com/58984074/134164390-56828bac-3a4f-4fbd-9b9b-3211fdf02dd1.png)

It can be concluded that there are lots of overlapping subproblems that are solved again and again. Example f(2,2) is calculated many times. Hence we can store the intermediate results of computations and use them further if required. 
Hence a **_Dynamic Programming_** Recursion + Memoization approach can be used here.  


## 💡 Implementation of Recursion + Memoization (Top Down Approach):

The above Naive Recursive approach above can be optimized using memoization. A 2-D vector can be used to store the intermediate results and for every state f(n,m) it can be checked whether it has been calculated before. 
If it has been calculated before then return the result of computation else, compute the answer of the state, and store its value.  

#### Code 💻 

```c++
// Recursive DP with Memoization (Top Down Approach) 

vector<vector<int>> dp(2005,vector<int>(2005,-1));
int edit_distance_recursive(string str1, string str2, int n, int m)
{
    // If string 2 is empty then remove all character of string 1
    if(m==0) return n;  
    // If string 1 is empty then insert all character of string 2
    if(n==0) return m;  

    int &ans=dp[n][m];
    // If dp[i][j] is already computed before then return result else store 
    if(ans!=-1) return ans;    

    //If at ith index both are same no operations needed to be performed 
    if(str1[n-1]==str2[m-1]) {
        return ans=edit_distance_recursive(str1,str2,n-1,m-1); 
    }
    // Consider all possible Operations 
    int insert = edit_distance_recursive(str1,str2,n,m-1); 
    int remove = edit_distance_recursive(str1,str2,n-1,m);
    int replace = edit_distance_recursive(str1,str2,n-1,m-1); 

    return ans=1+min({insert,remove,replace});
}
```

**⏰ Time Complexity: O(n x m)**

**Space Complexity: O(n x m)**

## 💡 Implementation of Iterative DP (Bottom-up Approach):

The above top-down approach can further be optimized using a Bottom-Up Dynamic Programming Approach, which can be written by maintaining  a 2-D Array storing the result of every state using two loops.

Possible Cases for state F(n,m)

1. If i=0, i.e, string 1 is empty then insert all the characters of string 2
2. If j=0, i.e, string 2 is empty then remove all the characters of string 1
3. If at ith index both characters are same no operations needed to be performed 
4. Else Consider all possible Operations Insert, Remove, Replace and take the minimum 
5. Final Answer is stored at dp[n][m] 

####  Code 💻

```c++
// Iterative DP (Bottom Up Approach) 
int edit_distance_iterative(string str1, string str2, int n, int m)
{
    //For Storing Results 
    int dp[n+1][m+1];    
    for(int i=0; i<=n; i++)
     {
        for(int j=0; j<=m; j++) 
        {
            // If string 1 is empty then insert all the characters of string 2
            if(i==0) dp[i][j]=j; 
 
            // If string 2 is empty then remove all the characters of string 1
            else if(j==0) dp[i][j] = i; // Min. operations = i
 
            //If at ith index both are same no operations needed to be performed 
            else if(str1[i-1]==str2[j-1]) dp[i][j]=dp[i-1][j-1];
 
            // Consider all possible Operations Insert, Remove, Replace
            else dp[i][j]= 1+ min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]}); 
        }
    }
    return dp[n][m];
}
```