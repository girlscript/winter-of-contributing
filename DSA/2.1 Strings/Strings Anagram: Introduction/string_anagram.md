# Strings Anagram

## Introduction:
An anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.
A common example is listen & silent

## Approach:
We will use a very simple approach. We will first sort the strings and then compare each character one by one.
We have also considered case sensitivity. If we want to avoid that, we can simply convert the entire string to lowercase characters.

## Code:
Now, let us see the code in C++:

```
#include <bits/stdc++.h>
using namespace std;

// In this method we first sort both the strings and then compare each character one by one.
bool anagram(string str1, string str2)
{
    // First we get length of the strings to operate on them
    int length1 = str1.length();
    int length2 = str2.length();

    // If length of both strings is not same, then they cannot be anagram of each other
    if (length1 != length2)
        return false;

    // Sort both the strings
    // We get a time complexity of O(N LogN) as we used the std::sort() function
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    for (int i = 0; i < length1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

int main()
{
    //we will use the 2 strings and check whether they are anagram of each other or not
    string str1, str2;
    cout << "Enter 2 strings \n"
         << "P.s. Strings are case sensitive" << endl;
    cin >> str1 >> str2;

    if (anagram(str1, str2))
    {
        cout << "Strings are anagram of each other";
    }
    else
        cout << "Not anagrams of each other";
}
```
