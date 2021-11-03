# Length of Longest Increasing Subsequence in a String

**Problem Statement:** Given a String of lowercase characters, find the length of Longest increasing subsequence in the given String. 

```
Input 1: String = "girlscript"
Output 1: 5
Explanation: Longest Increasing Subsequence = "gilpt"

Input 2: String = "aaabac"
Output 2: 3
Explanation: Longest Increasing Subsequence = "abc"
```

## What is Longest Increasing Subsequence ? 🤔

Longest Increasing Subsequence of a given sequence is defined as the longest possible subsequence which can be formed such that all elements of that subsequence are sorted in strictly increasing order. 
A Subsequence is defined as a sequence of characters of the given set which may or may not be continuous but should be in same order or original set. 

## Naive Approach 🧠

The Brute Force Naive idea would be to simply recurse on the string, now for every ith character if the last character taken was strictly less than the ith character we have two cases either consider the character or not. Else simple move further.

Thus `max_length = max(1+recurse(i+1,taken+str[i],recurse(i+1,taken));`

#### Naive Approach Code 💻

```c++
int lis(string str, int i, string taken) {
    // Base Case
    if(i>=str.size()) return 0;
    // If no character has been taken till now 
    if(!taken.size()) return max(1+lis(str,i+1,taken+str[i]),lis(str,i+1,taken));
    // If last character taken was strictly less than current 
    if(taken[taken.size()-1]<str[i]) return max(1+lis(str,i+1,taken+str[i]),lis(str,i+1,taken));
    // Else 
    return lis(str,i+1,taken);
}
```

Since the Naive Approach considers all possible combinations, i.e, for every ith character we are calling two recursions hence the time complexity of the approach is Exponential. Therefore, 

**Time Complexity: O(2<sup>n</sup>)**

**Space Complexty: O(1)**

## Optimized Approach Using Dynamic Programming 💡 

As we can observe that from the Brute Force approach that there are lots of states that are calculated again and again. So, we can form a Dynamic Programming Approach. Since the characters of given strings are lower case so we can have only 26 characters at most.
Therefore, 
- We can initialize dp[ ] array of 26 characters, where dp[j] signifies length of the longest increasing subsequence ending at character (j+'a') 
- So, we can traverse on the string, and at every index, we can update dp[j] ∀ j ∈ [0,26] with the Longest Subsequence length.
- `dp[j]=max(dp[j],1+{ max(dp[k] ∀ k ∈ (0,j-1)} )`
- Now, the maximum of all such states is the required answer. 

#### Optimised Approach Code 💻 

```c++
int lis(string str) {
    int N=str.size();
    int ans=0, dp[26]={0};
    for(int len=0; len<N; ++len) {
        // Current Character
        int j=str[len]-'a';
        int max_len=0;
        // Taking maximum length of all characters less than current one
        for(int k=0; k<j; ++k) {
            max_len=max(max_len,dp[k]);
        }
        // Including current character
        max_len++;
        // Updating length of longest increasing sequence 
        dp[j]=max(dp[j],max_len);
        // Taking maximum of all such states
        ans=max(ans,dp[j]);
    }
    return ans;
}
```
Now, here we are traversing the string using the first loop and updating the LIS for every character using the second loop so we are performing O(26 x N) operations, since there are at most 26 lowercase english characters. Therefore, 

**Time Complexity: O(N)**

**Space Complexty: O(1)**


## References 📙

- https://en.wikipedia.org/wiki/Longest_increasing_subsequence
- https://www.geeksforgeeks.org/length-of-longest-increasing-subsequence-in-a-string/
