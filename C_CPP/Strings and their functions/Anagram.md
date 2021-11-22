# Check whether two strings are anagram of each other

## Problem Statement
Two strings are given as input and those strings have to be checked if they are anagrams or not. 

# What is Anagram ?
Any word that exactly reproduces the letters in another order is an anagram. In other words, X and Y are anagrams if by rearranging the letters of X, we can get Y using all the original letters of X exactly once.
```
Example 1: Let s1 = "creative" and s2 = "reactive".

Since the second string can be formed by rearranging the letters of the first string and vice-versa, thus the two strings are anagrams of each other.

Example 2: Let s1 = "Peter Piper picked a peck of pickled peppers" and s2 = "A peck of pickled peppers Peter Piper picked".

Since the second string can't be formed by rearranging the letters of the first string and vice-versa, thus the two strings aren't anagrams of each other.
```

# Algorithm:
1. Input the two strings.

2. Create an array for both the strings.

3. Traverse both the strings and store the count of the alphabets of both the strings in respective arrays.

4. Check if both the arrays are equal.

5. If both the arrays are equal, return true. Else, return false.

Implementation of code in C++:
```C++
// C++ program to check if the two strings are anagrams or not
#include <bits/stdc++.h>
using namespace std;
int check_anagram(string s1, string s2);
int main()
{
	int n;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	if(check_anagram(s1,s2))
		printf("\nYes\n");
	else
		printf("\nNo\n");
	return 0;
}

int check_anagram(string s1,string s2)
{
	int a1[26]={0}, a2[26]={0};

	//if string lengths are different then they are not anagrams
	if(s1.length()!=s2.length())
		return 0;

	// count the frequency of char in both strings

	//for string1 – storing frequency for each letter in the string
	for(int i=0; s1[i]!='\0'; i++)
	{	
		a1[s1[i]-'a']++;
	}

	//storing frequency for each letter in the string
	for(int i=0; s2[i]!='\0'; i++)
	{
		a2[s2[i]-'a']++;
	}

	//Anagram check – comparison step the frequencies of each char in both strings
	for(int i=0; i<26; i++)
	{
		if(a1[i] != a2[i])
		return 0;
	}
	return 1;
}
```
# Output
```
Input: 
  creative
  reactive
Output:
    Yes
```
**Time complexity: O(n)**

