
# Longest Common Subsequence (Recursive + Iterative Approach)

<!-- ## Definition -->

The longest common subsequence (LCS) is defined as the longest subsequence that is common to all the given sequences, provided that the elements
of the subsequence are not required to occupy consecutive positions within the original sequences.

If str1 and str2 are the two given sequences then, Z is the common subsequence of str1 and str2 if Z is a subsequence of both str1 and str2. Furthermore, Z must be a **strictly increasing sequence** of the indices of both str1 and str2.
```cpp
Input: str1="bcdaacd",  str2="acdbac"
Output: "cdac"
Explanation: Some of the common subsequences of str1 and str2 are: "bc", "cdac",
"dac", "aac", "ac", "cd", etc. But of all the subsequences "cdac" is the
longest subsequence with length = 4.
```

## Naive Approach 🧠

A naive brute force idea is to traverse the strings and process each character one by one from the right to left.
x = Length of String 1
y = Lenght of String 2
There can be two possiblity

**Case 1**: Last Characters of both the Strings are the same. Add that character to the return string from the recursive call for (x-1, y-1) and return it.

**Case 2**: Last Characters of both the Strings are different. Now we have 2 recursive calls left,
 1. Skip the character at the end of first string by calling the function for (x-1, y) and then store it in a variable.
 2. Skip the character at the end of second string by calling the function for (x, y-1) and then store it in a variable.
Take the string with the maximum length and then return it.


## 💡 Implementation of Naive Approach:
#### Code 💻
```cpp
string findLCS(int x, int y, string &s1, string &s2, string ans = "")  // LCS of strings 's1' and 's2' is to be found.
{
	if(x == 0 || y == 0) // traversal of one of the string ends here
	{
		return ans;
	}
	if(s1[x-1] == s2[y-1]) // if last character of both strings match
	{
		ans = findLCS(x-1, y-1, s1, s2, ans); // excluding the last characters and then evaluating the LCS for the rest of the strings.
		ans.push_back(s1[x-1]);
	}
	else // if last character of both strings does not match
	{
		string ans1 = findLCS(x-1, y, s1, s2, ans); // excluding the last character of first string.
		string ans2 = findLCS(x, y-1, s1, s2, ans); // excluding the last character of second string.
		if(ans1.size() > ans2.size()) // LCS found by first case is bigger
		{
			ans = ans1;
		}
		else // LCS found by second case is bigger
		{
			ans = ans2;
		}
	}
	return ans;
}
```

#### ⏰ Time Complexity for Naive Approach

__Time Complexity for the Naive Approach is Exponential__. Since we are performing 2 Recursion Calls so in worst Case we may end up with **O(2<sup>n</sup>)** recursive calls.

It can be concluded that there are lots of overlapping subproblems that are solved again and again. Hence we can store the intermediate results of computations and use them further if required.
Hence a **_Dynamic Programming_** Recursion + Memoization approach can be used here.


## 💡 Implementation of Recursion + Memoization (Top Down Approach):

The above Naive Recursive approach above can be optimized using memoization. A 2-D Array can be used to store the intermediate results and for every state f(n,m) it can be checked whether it has been calculated before.
If it has been calculated before then return the result of computation else, compute the answer of the state, and store its value.

#### Code 💻

```c++
// Recursive DP with Memoization (Top Down Approach)

#include  <bits/stdc++.h>
using  namespace std;
/*
LCS Problem Statement: Given two sequences, find the longest subsequence present in both of them.
A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.
For example, "abc", "abg", "bdf", "aeg", "acefg", .. etc are subsequences of "abcdefg".
*/
const  int MAX_STR_LENGTH =  500;  // Maximum String Length is set to be of 500 characters long.
int dp[MAX_STR_LENGTH+1][MAX_STR_LENGTH+1];  // DP matrix of (501 x 501) dimension.

// helper() is a function which finds the Length of Largest Common Subsequence.
// This function first computes the Length of the LCS and then by using DP matrix
// figures out the LCS via findLCS() function. findLCS() returns the LCS of two given strings.
int helper(int x,  int y, string& s1, string& s2)  // LCS of strings 's1' and 's2' is to be found.
{
	if(x ==  0  || y ==  0)  // traversal of one of the string ends here
	{
		dp[x][y]  =  0;
		return  0;
	}
	if(dp[x][y]  !=  -1)  // checking if the solution for this call already exists.
	{
		return dp[x][y];  // if yes, then return the length.
	}
	if(s1[x-1]  == s2[y-1])  // if last character of both strings match
	{
		return dp[x][y]  =  1  + helper(x-1, y-1, s1, s2)  ;
	}
	else  // if last character of both strings does not match
	{
		int it1, it2;  // 'it1' and 'it2' will store the results of both the recursive calls.
		if(dp[x-1][y]  !=  -1)
		{
			it1 = dp[x-1][y];
		}
		else
		{
			it1 = helper(x-1, y, s1, s2);
			dp[x-1][y]  = it1;
		}
		if(dp[x][y-1]  !=  -1)
		{
			it2 = dp[x][y-1];
		}
		else
		{
			it2 = helper(x, y-1, s1, s2);
			dp[x][y-1]  = it2;
		}
		return dp[x][y]  =  (max(it1 ,it2));
	}
}

string findLCS(int n,  int m, string &s1, string &s2)
{
	helper(n, m, s1, s2);
	string ans =  "";
	// This while loop allows us to have the LCS as a string stored in 'ans' variable.
	// We will be traversing from (x, y) position of the matrix to either (0, <= y) or (<= x, 0) or (0, 0)
	// in such a way that ensures at any given (n, m), the length of LCS of the substrings of length 'n' and 'm' is maximum possible.
	while(n >  0  && m >  0)
	{
		if(s1[n-1]  == s2[m-1])
		{
			ans.push_back(s1[n-1]);  // Including the matching last character of the substring of length 'n' and 'm'.
			n--;  // decreasing the length
			m--;  // of both the substrings.
		}
		else
		{
			if(dp[n-1][m]  > dp[n][m-1])  // Choosing the path which ensures the length of LCS of the substrings is maximum possible.
			{
				n--;
			}
			else
			{
				m--;
			}
		}
	}
	// Now we have our LCS in string 'ans' but in reverse order.
	// This for loop is reversing the 'ans' string which will give us our LCS.
	for  (int i =  0; i < ans.length()  /  2; i++)
		swap(ans[i], ans[ans.length()  - i -  1]);
	return ans;  // returning the LCS of 's1' and 's2'.
}

int main()
{
	int T;
	cin >> T;  // Taking the number of cases that user wants to run.
	while(T--)
	{
		string str1, str2;
		cin >> str1 >> str2;  // Taking the two strings whose LCS is to be found.
		memset(dp,  -1,  (MAX_STR_LENGTH +  1)*(MAX_STR_LENGTH +  1)*sizeof(int));  // Initiating the DP matrix with 0(zero) everywhere.
		cout <<  "LCS of "  << str1 <<  " and "  << str2 <<  " is: "  << findLCS(str1.size(), str2.size(), str1, str2)  <<  "\n";  // Calling the findLCS() function to display the LCS of 'str1' and 'str2'.
	}
	return  0;
}
```

**Time Complexity: O(n x m) where n and m are lengths of two given strings**

**Space Complexity: O(n x m) where n and m are lengths of two given strings**

## 💡 Implementation of Iterative DP (Bottom-up Approach):

The above top-down approach can further be optimized using a Bottom-Up Dynamic Programming Approach, which can be written by maintaining  a 2-D Array storing the result of every state using two for loops.

Possible Cases for state F(n,m)

1. If i=0, i.e, string 1 is empty, then LCS is empty string.
2. If j=0, i.e, string 2 is empty, then LCS is empty string.
3. If at i<sup>th</sup> index of first string and j<sup>th</sup> index of second string, characters are same then we'll increment the count of LCS length.
4. Else Consider 2 possible cases and get the maximum LCS length.
5. Final Length of LCS is stored at dp[n][m].

####  Code 💻

```c++
// Iterative DP (Bottom Up Approach)
#include <bits/stdc++.h>
using namespace std;
/*
LCS Problem Statement: Given two sequences, find the longest subsequence present in both of them.
A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.
For example, "abc", "abg", "bdf", "aeg", "acefg", .. etc are subsequences of "abcdefg".
*/
const int MAX_STR_LENGTH = 500; // Maximum String Length is set to be of 500 characters long.
int dp[MAX_STR_LENGTH+1][MAX_STR_LENGTH+1]; // DP matrix of (501 x 501) dimension.

// findLCS() is a function which finds the Largest Common Subsequence.
// This function first computes the Length of the LCS and then by using DP matrix
// figures out the LCS itself. It returns the LCS of two given strings.

string findLCS(string &s1, string &s2) // LCS of strings 's1' and 's2' is to be found.
{
	string ans; // string 'ans' is going to store the LCS of two input strings 's1' and 's2' but in the reverse order.
	int x = s1.length(), y = s2.length(); // 'x' and 'y' are the lengths of the string 's1' and 's2'.
	// 'i' and 'j' are representing the lengths of the substring of 's1' and 's2' respectively starting from the index 0 for the strings.
	for(int i = 1; i <= x; i++) // 'i' ranges from 1 to 'x'.
	{
		for(int j = 1; j <= y; j++) // 'j' ranges from 1 to 'y'.
		{
			if(s1[i-1] == s2[j-1]) // Checking whether the last character of the two substrings are equal.
			{
				dp[i][j] = 1 + dp[i-1][j-1]; // Adding that character to the count of length of LCS until this point.
			}
			else // If last character of the two substrings are not equal then,
			{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]); // Maintaining the maximum LCS length leaving last character of either of the two substrings.
			}
		}
	}

// On reaching the point 'i' = 'x' and 'j' = 'y', we'll have the LCS length of strings 's1' and 's2'.
// Here, length of LCS of 's1' and 's2' is dp[x][y].
int n = x, m = y;

// This while loop allows us to have the LCS as a string stored in 'ans' variable.
// We will be traversing from (x, y) position of the matrix to either (0, <= y) or (<= x, 0) or (0, 0)
// in such a way that ensures at any given (n, m), the length of LCS of the substrings of length 'n' and 'm' is maximum possible.
while(n > 0 && m > 0)
{
	if(s1[n-1] == s2[m-1])
	{
		ans.push_back(s1[n-1]); // Including the matching last character of the substring of length 'n' and 'm'.
		n--; // decreasing the length
		m--; // of both the substrings.
	}
	else
	{
		if(dp[n-1][m] > dp[n][m-1]) // Choosing the path which ensures the length of LCS of the substrings is maximum possible.
		{
			n--;
		}
		else
		{
			m--;
		}
	}
}
// Now we have our LCS in string 'ans' but in reverse order.
// This for loop is reversing the 'ans' string which will give us our LCS.
	for (int i = 0; i < ans.length() / 2; i++)
		swap(ans[i], ans[ans.length() - i - 1]);
	return ans; // returning the LCS of 's1' and 's2'.
}

int main()
{
	int T;cin >> T; // Taking the number of cases that user wants to run.
	while(T--)
	{
		string str1, str2;
		cin >> str1 >> str2; // Taking the two strings whose LCS is to be found.
		memset(dp, 0, (MAX_STR_LENGTH + 1)*(MAX_STR_LENGTH + 1)*sizeof(int)); // Initiating the DP matrix with 0(zero) everywhere.
		cout << "LCS of " << str1 << " and " << str2 << " is: " << findLCS(str1, str2) << "\n"; // Calling the findLCS() function to display the LCS of 'str1' and 'str2'.
	}
	return 0;
}
```
