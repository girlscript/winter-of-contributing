## Problem Statement
<hr>

```

Given an array arr of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

```

## Example

```

Input: 
N = 4, arr[] = [1 3 2 4]
Output:
3 4 4 -1
Explanation:
In the array, the next larger element 
to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? 
since it doesn't exist, it is -1.

```
## 1.Brute Force
<hr>

## Algorithm/Insights
<p>Use two loops: The outer loop picks all the elements one by one. The inner loop looks for the first greater element for the element picked by the outer loop. If a greater element is found then that element is printed as next, otherwise, -1 is printed.</p>

## Implementation

```

#include<iostream>
using namespace std;
 
/* prints element and NGE pair
for all elements of arr[] of size n */
void printNGE(int arr[], int n)
{
    int next, i, j;
    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " -- "
             << next << endl;
    }
}
 
// Driver Code
int main()
{
    int arr[] = { 11, 14, 17, 2, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    printNGE(arr, n);
    return 0;
}

```

## Output

```

11 ---> 14
14 ---> 17
17 ---> -1
2---> 5
5---> -1

```

## Time and Space Complexity for Brute force approach
<p> Time Complexity ----> O(N^2) <p/>
<p> space Complexity ----> O(1) <p/>

<hr>

## 2. Using Stack
<hr>

## Algorithm/Insights
<p> This problem can be solved by using a stack.
We traverse the array once.</p>
<ol>
 <li>  If the stack is empty or the current element is smaller than top element of the stack, then push the current element on the stack.</li>
 <li>  If the current element is greater than top element of the stack, then this is the next greater element of the top element. Keep poping elements from the stack till a larger element than the current element is found on the stack or till the stack becomes empty. </li>
 Push the current element on the stack.
 <li> Repeat steps 1 and 2 till the end of array is reached.</li>
 <li> Finally pop remaining elements from the stack and print null for them.
Please note that at any instance, the stack will always be in sorted order having least element at the top and largest element at the bottom.
 </li>
</ol>
 <h5>The algorithm is explained with the help of an example below:</h5>
 <img src="https://user-images.githubusercontent.com/69414725/134755423-895b9d52-22b3-487c-8331-2b7dac40e3a1.png" >
  <img src="https://user-images.githubusercontent.com/69414725/134755464-00eae767-e70e-4d2e-aabe-ec1004ef2447.gif">
  <img src="https://user-images.githubusercontent.com/69414725/134755545-172d1b05-2168-4c4b-8e00-cd4b74bd3df4.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755546-63fafbdd-9826-4332-97f6-ecbd6f25e7c4.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755547-33f8d340-51a3-40c1-a1cf-a8a25c83394a.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755549-f975942a-a5cb-4c52-b0af-3d1e4a2a9f0e.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755555-a0b88cec-c6d3-4c5b-8e48-981d3291e24f.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755560-7048d045-56a1-4e5c-ba98-ec93002b7fb9.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755563-063833a7-d707-4992-9437-2d9e4cba85fc.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755565-44c55de1-12b8-4076-a4e3-cb46ef83e63f.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755568-d2b0a921-af24-430e-9fd6-36baad0b5811.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755573-8aab81e0-b592-41b7-9c36-fc1e33b89ef9.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755577-0d435da6-a6f7-4b34-afb9-a8c981dea88c.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755581-cbc6b019-be15-4a05-b024-65c326c1013a.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755585-9441e241-2abb-42fc-86c3-7ccdcef6312b.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755596-21b29d59-f310-4007-aa97-c383fc48bce9.gif">
 <img src="https://user-images.githubusercontent.com/69414725/134755601-7e3da6ba-1aac-4820-8072-bd546285950a.gif">




## Implementation

```

#include <bits/stdc++.h>
using namespace std;

/* prints element and NGE pair for all
elements of arr[] of size n */
void printNGE(int arr[], int n)
{
	stack<int> s;

	/* push the first element to stack */
	s.push(arr[0]);

	// iterate for rest of the elements
	for (int i = 1; i < n; i++)
	{

		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}

		/* if stack is not empty, then
		pop an element from stack.
		If the popped element is smaller
		than next, then
		a) print the pair
		b) keep popping while elements are
		smaller and stack is not empty */
		while (s.empty() == false
			&& s.top() < arr[i])
		{
			cout << s.top()
				<< " --> " << arr[i] << endl;
			s.pop();
		}

		/* push next to stack so that we can find
		next greater for it */
		s.push(arr[i]);
	}

	/* After iterating over the loop, the remaining
	elements in stack do not have the next greater
	element, so print -1 for them */
	while (s.empty() == false) {
		cout << s.top() << " --> " << -1 << endl;
		s.pop();
	}
}

/* Driver code */
int main()
{
  int arr[] = { 11, 14, 17, 2, 5 };
   int n = sizeof(arr) / sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}

```

## Output

```

11 ---> 14
14 ---> 17
17 ---> -1
2---> 5
5---> -1

```
## Time and space complexity
<p> Time Complexity ----> O(N) <p/>
<p> space Complexity ----> O(N) <p/>
<p> The worst case occurs when all elements are sorted in decreasing order. If elements are sorted in decreasing order, then every element is processed at most 4 times.  </p>
<ol><li>Initially pushed to the stack.</li>
 <li>Popped from the stack when next element is being processed.</li> 
 <li>Pushed back to the stack because the next element is smaller.</li> 
 <li>Popped from the stack in step 3 of the algorithm.</li> 
</ol>
