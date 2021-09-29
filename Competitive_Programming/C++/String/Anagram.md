# Check whether two strings are anagram of each other

## Problem Statement
Write a function to check whether two given strings are anagram of each other or not. 

# Introduction
An anagram of a string is another string that contains the same characters, 
only the order of characters can be different. 
```
For example, “abcd” and “dabc” are an anagram of each other.
``` 
## Method 1 (Use Sorting)  

Sort both strings

Compare the sorted strings

Below is the implementation of the above idea:
```C++
// C++ program to check whether two strings are anagrams
// of each other
#include <bits/stdc++.h>
using namespace std;
 
/* function to check whether two strings are anagram of
each other */
bool areAnagram(string str1, string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;
 
    // Sort both the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}
 
// Driver code
int main()
{
    string str1 ;
    string str2 ;
    cin>>str1>>str2;
 
    // Function Call
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0;
}

```
# Output
```
Input:

test

ttew
    
Output: 

The two strings are not anagram of each other
```

***Time Complexity: O(nLogn)***

## Method 2 (Count characters) 

This method assumes that the set of possible characters in both strings is small. In the following implementation, it is assumed that the characters are stored using 8 bit and there can be 256 possible characters. 

Create count arrays of size 256 for both strings. Initialize all values in count arrays as 0.

Iterate through every character of both strings and increment the count of character in the corresponding count arrays.

Compare count arrays. If both count arrays are same, then return true.

Below is the implementation of the above idea:
```C++
// C++ program to check if two strings
// are anagrams of each other
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
 
/* function to check whether two strings are anagram of
each other */
bool areAnagram(char* str1, char* str2)
{
    // Create 2 count arrays and initialize all values as 0
    int count1[NO_OF_CHARS] = { 0 };
    int count2[NO_OF_CHARS] = { 0 };
    int i;
 
    // For each character in input strings, increment count
    // in the corresponding count array
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
 
    // If both strings are of different length. Removing
    // this condition will make the program fail for strings
    // like "aaca" and "aca"
    if (str1[i] || str2[i])
        return false;
 
    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return false;
 
    return true;
}
 
/* Driver code*/
int main()
{
    char str1 ;
    char str2 ;
    cin>>str1>>str2;
   
    // Function Call
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0;
}
```
# Output
```
Input: 

listen

silent

Output: 

The two strings are anagram of each other
```

## Method 3 (count characters using one array) 

The above implementation can be further to use only one count array instead of two. We can increment the value in count array for characters in str1 and decrement for characters in str2. Finally, if all count values are 0, then the two strings are anagram of each other. 
```C++
// C++ program to check if two strings
// are anagrams of each other
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
 
bool areAnagram(char* str1, char* str2)
{
    // Create a count array and initialize all values as 0
    int count[NO_OF_CHARS] = { 0 };
    int i;
 
    // For each character in input strings, increment count
    // in the corresponding count array
    for (i = 0; str1[i] && str2[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
 
    // If both strings are of different length. Removing
    // this condition will make the program fail for strings
    // like "aaca" and "aca"
    if (str1[i] || str2[i])
        return false;
 
    // See if there is any non-zero value in count array
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return false;
    return true;
}
 
// Driver code
int main()
{
    char str1;
    char str2;
    cin>>str1>>str2;
   
    // Function call
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0;
}
```
# Output
```
Input: 

listen

silent

Output: 

The two strings are anagram of each other
```

***Time Complexity: O(n)***
