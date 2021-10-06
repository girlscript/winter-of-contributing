# Longest Common Subsequence using DP

This is a well illustrated code for computing the LCS of given two strings.
 ```cpp
 #include <bits/stdc++.h>
using namespace std;

/*
LCS Problem Statement: Given two sequences, find the length of longest subsequence present in both of them.
A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.
For example, "abc", "abg", "bdf", "aeg", "acefg", .. etc are subsequences of "abcdefg".
*/

const int MAX_STR_LENGTH = 500;    // Maximum String Length is set to be of 500 characters long.

int dp[MAX_STR_LENGTH+1][MAX_STR_LENGTH+1];  // DP matrix of (501 x 501) dimension.

// findLCS() is a function which finds the Largest Common Subsequence.
// This function first computes the Length of the LCS and then by using DP matrix
// figures out the LCS itself. It returns the LCS of two given strings.
string findLCS(string s1, string s2) // LCS of strings 's1' and 's2' is to be found.
{
    string ans;  // string 'ans' is going to store the LCS of two input strings 's1' and 's2' but in the reverse order.
    int x = s1.length(), y = s2.length();  // 'x' and 'y' are the lengths of the string 's1' and 's2'.

    // 'i' and 'j' are representing the lengths of the substring of 's1' and 's2' respectively starting from the index 0 for the strings.
    for(int i = 1; i <= x; i++)  // 'i' ranges from 1 to 'x'.
    {
        for(int j = 1; j <= y; j++)  // 'j' ranges from 1 to 'y'.
        {
            if(s1[i-1] == s2[j-1])  // Checking whether the last character of the two substrings are equal.
            {
                dp[i][j] = 1 + dp[i-1][j-1];  // Adding that character to the count of length of LCS until this point.
            }
            else  // If last character of the two substrings are not equal then,
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);  // Maintaining the maximum LCS length leaving last character of either of the two substrings.
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
            ans.push_back(s1[n-1]);  // Including the matching last character of the substring of length 'n' and 'm'.
            n--; // decreasing the length
            m--; // of both the substrings.
        }
        else
        {
            if(dp[n-1][m] > dp[n][m-1])  // Choosing the path which ensures the length of LCS of the substrings is maximum possible.
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
        memset(dp, 0, (MAX_STR_LENGTH + 1)*(MAX_STR_LENGTH + 1)*sizeof(int));  // Initiating the DP matrix with 0(zero) everywhere.
        cout << "LCS of " << str1 << " and " << str2 << " is: " << findLCS(str1, str2) << "\n";  // Calling the findLCS() function to display the LCS of 'str1' and 'str2'.
    }
    return 0;
}
```
