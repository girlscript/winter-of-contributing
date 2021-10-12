## LONGEST PALINDROMIC SUBSTRING

## Problem Statement
Given a string , find the longest substring which is a palindrome. 

## Example
```
Input : Given string :"papaypa", 
Output: "apapa".

Input : "apple",
Output: "pp"
```
We can solve this problem using two approches:<br>
 1. Brute force<br>
 2. Dynamic Programming

## Method 1 : Brute Force
 
The first approach that came to my mind was the brute force solution. <br>
   + Loop over the string for the starting index of each substring.<br>
   + Loop over the string again and get ending indexes for all the possible substrings.<br>
   + Check if each substring is a palindrome or not.<br>
   + Store the longest palindrome. lets code it.<br>
 
## Code 
```
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
              {
                int l1=0, h1=s.size()-1;
                  while(l1<=h1)
               {
                  if(s[l1] != s[h1]) 
                  return false;
                  l1++;
                  h1--;
               }
              return true;

             }
         int main(){
           string s = "babad";
           int maxCount = INT_MIN;
          string res;
        for(int i = 0; i < s.size(); i++) 
        {
               for(int j = i; j < s.size(); j++)
               {
                string temp = s.substr(i, j-i+1);
                   if(isPalindrome(temp) && temp.size() > maxCount)
                   {
                    maxCount = temp.size();
                    res=temp;
                   }
               }
        }
         cout<<res;
         return 0;
    }

 
```
## Output 
 ```
 Longest palindromic substring is: bab
 length of string : 3
 
 ```
## Complexity Analysis: 
```
 Time complexity: O(n^3)
we have to run a loop for the starting index of every substring and looping again for the ending index 
for each starting index,We also need to implement an algorithm to check if a substring is a palindrome,
 which will have the time complexity of O(n) making the time complexity of the entire algorithm o(n³).
 
 Space complexity: O(1). 
As no extra space is needed.

```
## Explaination:
 we have a maxCount that stores the length of the longest substring. If a given string is palindrome and this length <br>
is greater than maxCount we update the values of maxCount and make res, which is the longest palindromic substring, to temp.<br>
O(n^3) is a bad time complexity. we need to optimise our code.

## Method 2 :Dynamic Programming

Instead of going through all the previous Palindromes again and again, 
how about we save them somewhere and calculate the new ones based on them, Lets see it below.

## Concept

+ To check a Palindrome of length l, we will have to check if <br>
1) s[first character]==s[last character] <br>
2) s[first character+1, last charcter -1] is a Palindrome.

+ lets make a table dp containing if the string from left to right is a Pallindrome or not, and to do that, fill in the table with 1 or 0.

+ Lets look at an example of how the table looks like for s:"geeks"
<div align="center">
    <img width="45%" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190626130630/Longest-Palindromic-substring.png">
</div>
 

## Code
C++
```
#include <bits/stdc++.h>
using namespace std;
void printSr(
  string str, int l1, int h1) //
{
  for (int i = l1; i <= h1; ++i)
    cout << str[i];
}
string longestPalindrome(string s) {

     //get length of input string
        int n = s.size();

    //All substrings of length 1
    // are palindromes
        if (n < 2) {
            return s;
        }
        vector<vector<bool> > dp(n, vector<bool>(n, false));
        //Every Single character is palindrome
        for (int i = 0; i < n; ++i) {
            dp[i][i] = true; .
        }
        string res = s.substr(0,1);

        // dp[x][y] will be 'true' if the string from index i to j is a palindrome.
        for (int x = n-1; x >= 0; --x) {
            for (int y = x + 1; y < n; ++y) {

                 //check if both strings are equal
                if (s[x] == s[y]) {

                     //If it is of two character OR if its susbtring is palindrome.
                    if (y-x == 1 || dp[x+1][y-1]) {

                    //Then it will also a palindrome substring
                        dp[x][y] = true;

                       //Check for Longest Palindrome substring
                        int len = y - x + 1;
                        if (res.size() < len) {
                            res = s.substr(x, len);
                        }
                    }
                }
            }
        }
        // return length of LPS
        return res;
    }

// Driver Code
int main()
{
  string str = "acbbcda";
  cout << "\nLength of substring is: "
    << longestPalindrome(str);
  return 0;
}

}
```
## Output
```
Longest palindrome substring is:cbbc 
Length of substring is: 4

Input :geeks
Longest palindrome substring is:ee
Length of substring is: 2

```
 ## Complexity Analysis: 
``` 
 Time complexity: O(n^2) <br>
  we are running for loop from 0-n twice. 

 Auxiliary Space: O(1). <br>
  No extra space is needed.
```  
  
 We can see  by using Dynamic Programming optimal solution can be constructed from optimal solutions of sub-problems.
 Here Time complexity is better than the previous one!!
 
 
## References

* [geeks for geeks](https://www.geeksforgeeks.org/longest-palindrome-substring-set-1/)
* [leetcode](https://leetcode.com/problems/longest-palindromic-substring/)

* [Dp tutorials](https://www.youtube.com/watch?v=wuOOOATz_IA&t=455s)
* [strings in cpp](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)
