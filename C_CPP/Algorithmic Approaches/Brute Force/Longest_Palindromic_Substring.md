# Longest Palindromic Substring Using Brute Force Approach
# Brute Force
- A Brute Force Algorithm is a straight-forward approach to a problem i.e the first method or algorithm which come in our mind to solve a particular problem. In this we try every possibility rather than going for advance techniques to improve efficiency.
# Longest Palindromic Substring
Task: Given a string, find the longest substring which is palindrome.

Approach: The simple/brute force approach will be to check for each substring whether the substring is a palindrome or not. To do this, we will run three loops, the outer two loops will pick up each substring one by one by modifying its start and end index (here i and j), the inner loop will check whether the selected substring is a palindrome or not. If yes and also the length of that substring is greater than the previous then we will update the values of start_index and length.

After coming out of all loops we will print the longest substring via using start index and length and then we will return length of the longest substring.

# Code of Longest Palindromic Substring in C++
```cpp
/*
Given a string, find the longest substring which is palindrome.
*/
#include<bits/stdc++.h>
using namespace std;

//Function to get length of longest palindromic substring and to print that substring
int Longest_Palindromic_substr(string str)
{
    //This will store maximum length so far
    int length=0;

    //Starting index of substring
    int start_index=0;

    //Loops to regulate size of substring
    for(int i=0;i<str.length();i++)
    {
        for(int j=i;j<str.length();j++)
        {
            int flag=1;

            //To check if it is a palindrome or not
            for(int k=0;k<(j-i+1)/2;k++)
                if(str[i+k]!=str[j-k])
                    flag=0;
            
            //If it is a palindrome and its length is greater than the current length then update the values
            if(flag && (j-i+1)>length)
            {
                start_index=i;
                length=j-i+1;
            }
        }
    }
    //Print the substring
    cout << "Longest palindromic substring is: ";
    for(int i=start_index;i<=start_index+length-1;i++)
        cout << str[i];

    return length;
}

//Main Function
int main()
{
    string str;

    //Take string from the user
    cout << "Enter string: ";
    cin >> str;

    cout << "\nLength of longest palindromic substring is: " << Longest_Palindromic(str);

    return 0;
}
```
# Input/Output Example
<b>Example 1-</b>

<b>Input:</b>

Enter string: babad

<b>Output:</b>

Longest palindromic substring is: bab
    
Length of longest palindromic substring is: 3

<b>Example 2-</b>

<b>Input:</b> 

Enter string: cbbd

<b>Output:</b>

Longest palindromic substring is: bb

Length of longest palindromic substring is: 2

# Time And Space Complexity
Time Complexity: O(n<sup>3</sup>)

Space Complexity: O(1)
