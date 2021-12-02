# Length of the Longest Substring without Repeating Characters

Here we will see a program to find the length of Longest substring without repeating characters.  

## Explanation
In this program we are using the concept of Window sliding i.e. Whenever we see repetition, we remove the previous occurrence and slide the window.  
A loop is runniig from i=0 to n=sizeof(str).  
In side this loop one more loop is running from j=i till n.  
We define vector with all the value as false and keep it makin true for the characters that are visited once in the loop.

## Code
``` cpp
#include <bits/stdc++.h>
using namespace std;
 
int Substtr(string str)
{
    int n = str.size();
    int result = 0; 
 
    for (int i = 0; i < n; i++) {
         
        vector<bool> visited(256);  
 
        for (int j = i; j < n; j++) {

            if (visited[str[j]] == true)  // If current character is visited
                  break;                         // Break the loop
                       
            else {                          // Else update the result if
                res = max(res, j - i + 1);  // this window is larger, and mark
                visited[str[j]] = true;       // current character as visited.
            }
        }
        
        visited[str[i]] = false;  // Remove the first character of previous window
    }
    return result;
}
 
int main()
{
    string str = "girlscriptwinterofcontributing";
    cout << "The string used is " << str << endl;
    int length =Substtr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << length;
    return 0;
}

```
## Time and Space Complexity
**Time Complexity**: O(n^2)  
**Space Complexity**:O(n)

## Input/Output
**Input**: s = "abcabcbb"  
**Output**: 3  
**Explanation**: The answer is "abc", with the length of 3.
