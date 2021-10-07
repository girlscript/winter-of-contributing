**Binary Search**
-Binary Search comes under the Divide & Conquer Algorithm approaches

# Whats is Binary Search?
- Binary search, also called half-interval search, logarithmic search,or binary chop, could be a search algorithm that finds the position of a target value within a sorted array ( means array which is in ascending order ). Binary search compares the target value to the center element of the array. If they're not equal, the half during which the target cannot lie is eliminated and also the search continues on the remaining half, again taking the center element to match to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target isn't within the array.


# Time & Space Complexity of Binary Search 
- In the worst case it's time complexity will be O(logn).
- We are not defining any extra array so the space complexity will remain same as O(1).

1. Firt we compare the key element with the middle element in array.
2. If it is smaller than mid element than we shift right pointer to left of middle element.
3. else we shift the left pointer to right of middle element.
4. Than we take average of left & right index of array, & assigned it to the middle index.
    mid = (left+right)/2.
5. If the middle element is equal to the key element we stop the search.
6. Else the the loop will continue till we traverse the whole array.

# Let's see through example.

<img src="https://github.com/jiteshjitsun/winter-of-contributing/blob/C_CPP/C_CPP/Algorithmic%20Approaches/Divide%20&%20Conquer/binary_search/example_binary.png?raw=true" alt="some text"  width="4200" height="750">

# flow chart 

<img src="https://github.com/jiteshjitsun/winter-of-contributing/blob/C_CPP/C_CPP/Algorithmic%20Approaches/Divide%20&%20Conquer/binary_search/BINARY_SEARCH_FLOWCHART.png?raw=true" alt="some text">


# C++ code for finding element using Binary Search:

- Here r = right, l = left , m = mid.
```cpp

// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
	return 0;
}
```