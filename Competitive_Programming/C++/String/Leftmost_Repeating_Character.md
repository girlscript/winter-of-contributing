# Repeated Character Whose First Appearance is Leftmost (Strings)

### Problem Statement
Given a string, find the repeated character present first in the string.

Examples:  

```
Input  : geeksaregood
Output : g
(mind that it will be g, not e as g is written before e. As a result we check if character g 
is repeated as we want to find the leftmost repeating character)

Input  : abcdabcd
Output : a

Input  : abcd
Output : -1
No character repeats

```


How to solve this problem using one traversal of input string? 

### Method 1
Method 1 (Traversing from Left to Right) We traverse the string from left to right. We keep track of the leftmost index of every character. If a character repeats, we compare its leftmsot index with current result and update the result if result is greater 

## Implementation of Code in C++
``` C++
// CPP program to find first repeating
// character

#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

/* The function returns index of the first
repeating character in a string. If
all characters are repeating then
returns -1 */
int firstRepeating(string& str)
{
	// Initialize leftmost index of every
	// character as -1.
	int firstIndex[NO_OF_CHARS];
	for (int i = 0; i < NO_OF_CHARS; i++)
		firstIndex[i] = -1;

	// Traverse from left and update result
	// if we see a repeating character whose
	// first index is smaller than current
	// result.
	int res = INT_MAX;
	for (int i = 0; i < str.length(); i++) {
		if (firstIndex[str[i]] == -1)
		firstIndex[str[i]] = i;
		else
		res = min(res, firstIndex[str[i]]);
	}

	return (res == INT_MAX) ? -1 : res;
}

/* Driver program to test above function */
int main()
{
	string str ;
	cin>>str;
	int index = firstRepeating(str);
	if (index == -1)
		printf("Either all characters are "
			"distinct or string is empty");
	else
		printf("First Repeating character"
			" is %c",
			str[index]);
	return 0;
}
``` 
### Output
```
Input: abcdabcd
Output: 
First Repeating character is a
``` 
 
### Complexity analysis

Time Complexity : O(n).        (It does only one traversal of input string.)

Auxiliary Space : O(1)


### Method 2
Method 2 (Traversing Right to Left) We traverse the string from right to left. We keep track of the visited characters. If a character repeats, we update the result. 

## Implementation of Code in C++
``` C++
// CPP program to find first repeating
// character

#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

/* The function returns index of the first
repeating character in a string. If
all characters are repeating then
returns -1 */
int firstRepeating(string& str)
{
	// Mark all characters as not visited
	bool visited[NO_OF_CHARS];
	for (int i = 0; i < NO_OF_CHARS; i++)
		visited[i] = false;

	// Traverse from right and update res as soon
	// as we see a visited character.
	int res = -1;
	for (int i = str.length() - 1; i >= 0; i--) {
		if (visited[str[i]] == false)
			visited[str[i]] = true;
		else
			res = i;
	}

	return res;
}

/* Driver program to test above function */
int main()
{
	string str ;
	cin>>str;
	int index = firstRepeating(str);
	if (index == -1)
		printf("Either all characters are "
			"distinct or string is empty");
	else
		printf("First Repeating character"
			" is %c",
			str[index]);
	return 0;
}
```

### Output
```
Input: abcdabcd
Output: 
First Repeating character is a
 ```
### Complexity analysis

Time Complexity : O(n).       (It does only one traversal of input string.)

Auxiliary Space : O(1)


***The method 2 is better than method 1 as it does fewer comparisons.***


