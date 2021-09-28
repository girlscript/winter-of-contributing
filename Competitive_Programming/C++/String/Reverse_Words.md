# Program to reverse words in a given string in C++

### Problem Statement
Given a sentence in the form of string str, the task is to reverse each word of the given sentence in C++. 

Examples: 
``` 
Input: str = “the sky is blue” 

Output: blue is sky the

Input: str = “I love programming” 

Output: programming love I 
``` 
 
### Method 1: Using STL functions  

Reverse the given string str using STL function reverse().

Iterate the reversed string and whenever a space is found reverse 
the word before that space using the STL function reverse().

Below is the implementation of the above approach:

``` C++
// C++ program for the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to reverse the given string
string reverseString(string str)
{
 
    // Reverse str using inbuilt function
    reverse(str.begin(), str.end());
 
    // Add space at the end so that the
    // last word is also reversed
    str.insert(str.end(), ' ');
 
    int n = str.length();
 
    int j = 0;
 
    // Find spaces and reverse all words
    // before that
    for (int i = 0; i < n; i++) {
 
        // If a space is encountered
        if (str[i] == ' ') {
            reverse(str.begin() + j,
                    str.begin() + i);
 
            // Update the starting index
            // for next word to reverse
            j = i + 1;
        }
    }
 
    // Remove spaces from the end of the
    // word that we appended
    str.pop_back();
 
    // Return the reversed string
    return str;
}
 
// Driver code
int main()
{
    string str;
	cin>>str;
 
    // Function call
    string rev = reverseString(str);
 
    // Print the reversed string
    cout << rev;
    return 0;
}
``` 
# Output
``` 
Input: I like this code

Output: code this like I
```

### Method 2: Without using the inbuilt function:

 We can create the reverse() function which is used to reverse the given string. Below are the steps:  

Initially reverse each word of the given string str.

Now reverse the whole string to get the resultant string in desired order.

Below is the implementation of the above approach:
 
``` C++
// C++ program for the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function used to reverse a string
// from index l to r
void reversed(string& s, int l, int r)
{
 
    while (l < r) {
 
        // Swap characters at l and r
        swap(s[l], s[r]);
        l++;
        r--;
    }
}
 
// Function to reverse the given string
string reverseString(string str)
{
 
    // Add space at the end so that the
    // last word is also reversed
    str.insert(str.end(), ' ');
 
    int n = str.length();
 
    int j = 0;
 
    // Find spaces and reverse all words
    // before that
    for (int i = 0; i < n; i++) {
 
        // If a space is encountered
        if (str[i] == ' ') {
 
            // Function call to our custom
            // reverse function()
            reversed(str, j, i - 1);
 
            // Update the starting index
            // for next word to reverse
            j = i + 1;
        }
    }
 
    // Remove spaces from the end of the
    // word that we appended
    str.pop_back();
 
    // Reverse the whole string
    reversed(str, 0, str.length() - 1);
 
    // Return the reversed string
    return str;
}
 
// Driver code
int main()
{
    string str;
	cin>>str;
 
    // Function call
    string rev = reverseString(str);
 
    // Print the reversed string
    cout << rev;
    return 0;
}
``` 
# Output
```
Input: I like this code

Output: code this like I
``` 

***Time Complexity: O(N)***

***Auxiliary Space: O(1)***