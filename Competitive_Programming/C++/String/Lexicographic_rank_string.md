# Lexicographic rank of a string

## Problem Statement
Given a string, find its rank among all its permutations sorted lexicographically.

# What is Lexicographic rank of a string ?

The rank of string in the lexicographically sorted permutations.

Example:
```
Input : CBA
Output: 6
Explanation: The rank of string CBA in the lexicographically sorted permutations [ABC, ACB, BAC, BCA, CAB, CBA] is 6.
 
Input : AABA
Output: 2
Explanation: The rank of string AABA in the lexicographically sorted permutations [AAAB, AABA, ABAA, BAAA] is 2.
```
# Understanding the problem

This problem can be solved manually using permutations and combinations.

Let us take an example string to understand the concept: “word”

When this string is sorted in alphabetical order, it starts with “dorw , “dowr” etc. We need to find how many such strings exist before we get the actual string.

We start with the first letter and see if it matches with the first letter of the actual string. If it doesn’t then we count all the strings possible with that letter in the first position. That is, we keep that letter fixed and find the possible permutations of the rest of the letters. We then change the first letter to the next one in alphabetical order and repeat the same procedure until the first letter matches. Then we leave the first letter and repeat the procedure with the remaining letter. We need to keep adding the number of all possible combinations to get the lexicographic rank of the string.

Let us apply this algorithm for the example :
``` 
string : “word”

dorw does not have w in the first position, so we take all the permutations and we will do this thrice until we get w in the first place

no. of permutations with d as first letter = 3! = 6

no. of strings before we get w in the first place = 6 x 3 = 18

Now, consider the second letters keeping the first letters fixed

“word” and  “wdor”

no. of permutations with d as second letter = 2! = 2

total no. of strings before getting wo in the first places = 2+18 = 20

Now the third letters

“word” and “wodr”

no.of permutations = 1! =1

now the total number of permutations to get the string “word” = 20 +1=21

Since the above computations find count of smaller strings.Therefore rank of given string is count of smaller strings plus 1.
Therefore, we can say that the lexicographic rank of the string “word” is 21+1=22 .
```

# Algorithm: 

a. Initialize rank = 1.

b. Traverse in the string, for every char find the characters less than it.

c. Add all possible permutations with smaller characters to the rank and return the final rank.

  For step c:

        1. Create an auxiliary count array, and store the count of smaller characters in the whole string.

        2. For every character count number of characters smaller than string[i] from string[i+1] to string[len-1]

        3. After adding it to rank.

        4. Reduce count of characters greater than string[i], by removing the current character.

d. Return the final rank.

# Implementation of the code in C++:
```C++
#include <bits/stdc++.h>
using namespace std;
#define ASCII_VALUES 256
 
//recursive function to find factorial function
int fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
//function to store the count of chatcters which are smaller i n the whole string
//stores in count array
void CreateCountArray(int* count, string str)
{
    int i;
    for(i = 0; str[i]; ++i )
    {
        ++count[ str[i] ];
    }
 
    for( i = 1; i < 256; ++i )
        count[i] += count[i-1];
}
//count array by removing the character ch
void UpdateCountArray(int* count, char ch)
{
    for(int i = ch; i < ASCII_VALUES; ++i )
    {
        count[i] = count[i] - 1;
    }
}
 
int LexicographicRank(string str)
{
    int len = strlen(str);
    int per = fact(len);
    //Initialize rank = 1 and countarray with zeroes
    int rank = 1;
    int count[ASCII_VALUES] = {0};
    //createcount array
    CreateCountArray(count, str);
    for (int i = 0; i < len; ++i)
    {
        per = per/(len - i);
        rank = rank + (count[ str[i] - 1] * per);
        //update count array by removing the current character
        UpdateCountArray (count, str[i]);
    }
    //return final rank
    return rank;
}
 
//Main function
int main()
{
    string str;
    cin>>str;
    cout<<LexicographicRank(str);
    return 0;
}
```
# Output:
```
Input: string
Output: 598
``` 
**Complexity:**

Time complexity : O(n)
