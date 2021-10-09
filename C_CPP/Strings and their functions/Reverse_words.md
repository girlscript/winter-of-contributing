# Program to reverse words in a given string in C++

## Problem Statement
Given a string 'str' reverse the string such that the last word becomes first word and so on.

Example:
```
Input: GirlScript Winter of Contributing

Output: Contributing of Winter GirlScript
```

# Algorithm:

1. First reverse each word present int the input text.

2. Then finally reverse the whole text to get the desired output.


# Implementation of code in C++
```C++
#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str)
{
    // str[low…high] forms a word
    int low = 0, high = 0;
 
    
    for (int i = 0; i < str.length(); i++)
    {
        // if space is found, we found a word
        if (str[i] == ' ')
        {
            // reverse the found word
            reverse(str.begin() + low, str.begin() + high + 1);
 
            // reset low and high for the next word
            low = high = i + 1;
        }
        else {
            high = i;
        }
    }
 
    // reverse the last word
    reverse(str.begin() + low, str.begin() + high + 1);
 
    // reverse the whole text
    reverse(str.begin(), str.end());
}
 
int main()
{
    string str ;
    getline(cin, str);
    reverseString(str);
    cout << str; 
    return 0;
}

```
# Output:
```
Input: GirlScript Winter of Contributing

Output: Contributing of Winter GirlScript
```
# Working of the above code
```
    Input: GirlScript Winter of Contributing

    a. The program first reversed each word of the string
         tpircSlriG retniW fo gnitubirtnoC

    b. Then it reversed the whole text
         Contributing of Winter GirlScript

```

# Time and Space Complexity

The time complexity of this solution would be O(n) and doesn't require any extra space.
