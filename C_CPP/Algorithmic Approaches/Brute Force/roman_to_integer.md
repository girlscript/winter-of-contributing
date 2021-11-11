# Roman To Integer Using Brute Force Approach

## Brute Force
A Brute Force Algorithm is a straight-forward approach to a problem i.e the first method or algorithm which come in our mind to solve a particular problem. In this we try every possibility rather than going for advance techniques to improve efficiency.

## Roman To Integer

Task: Given a roman numeral, convert it to an integer.

Approach: Roman numerals are represented by seven symbols: I, V, X, L, C, D and M.

![romanToInt](https://user-images.githubusercontent.com/73405757/140963448-360c6a7f-f391-4396-8fbd-68ab3c365c52.png)  
Source: [LeetCode](https://leetcode.com/problems/roman-to-integer/)

## Algorithm:  

Step 1) Split the string into characters.  
Step 2) Convert the characters into its integer value.  
Step 3) Take characters starting from index 0: 
* If current value of character is greater than or equal to the value of next character, add its value to the total.
* else subtract its value by adding the value of the next character to the total.
        
## Code of converting Roman numerals to integer in C++  
```c++
#include <bits/stdc++.h>
using namespace std;
 
// value function returns value of a Roman character
int romanToInt(char ch)
{
    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    if (ch == 'M')
        return 1000;
 
    return -1;
}
// Returns decimal value of roman numaral
int romanToDecimal(string& str)
{
    // Initialize result
    int res = 0;
 
    // Traverse given input
    for (int i = 0; i < str.length(); i++)
    {
        // Getting value of symbol s[i]
        int s1 = romanToInt(str[i]);
 
        if (i + 1 < str.length())
        {
            // Getting value of symbol s[i+1]
            int s2 = romanToInt(str[i + 1]);
 
            // Comparing both values
            if (s1 >= s2)
            {
                // Value of current symbol is greater or equal to the next symbol
                res = res + s1;
            }
            else
            {
                // Value of current symbol is less than the next symbol
                res = res + s2 - s1;
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
}
 
//Main Function
int main(){
     string str;
    //Take string from the user
    cout << "Enter string: ";
    cin >> str;
    cout << "The value of Roman Numeral is: " << romanToDecimal(str);
    return 0;
}
```  
## Input/Output Examples

#### Example 1:
Input: str = "LVIII"  
Output: 58

#### Example 2:
Input: str = "MCMXCIV"  
Output: 1994

## Time And Space Complexity

Time Complexity: O(n), where n is the length of the string.   
Space Complexity: O(1), as no extra space is required.
