<hr>

## Problem Statement

```

Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 

```
<hr>

 ## Algorithm Approach
  
 Kadane’s Algorithm can be viewed both as a greedy and DP. As we can see that we are keeping a running sum of integers and when it becomes less than 0, we reset it to 0 (Greedy Part). This is because continuing with a negative sum is way more worse than restarting with a new range. Now it can also be viewed as a DP, at each stage we have 2 choices: Either take the current element and continue with previous sum OR restart a new range. These both choices are being taken care of in the implementation. 
  
  <hr>
  
  ## Intution 
  
   The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this). And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this). Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far 
  
  <hr>

## Code

```
// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0,
	start =0, end = 0, s=0;

	for (int i=0; i< size; i++ )
	{
		max_ending_here += a[i];

		if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}

		if (max_ending_here < 0)
		{
			max_ending_here = 0;
			s = i + 1;
		}
	}
	cout << "Maximum contiguous sum is "
		<< max_so_far << endl;
	cout << "Starting index "<< start
		<< endl << "Ending index "<< end << endl;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	return 0;
}


```
<hr>

## Complexity

<ul>
  <li>Time complexity - O(n)</li>
   <li>Space complexity - O(1)</li>
  </ul>
  
  <hr>
  
 
  
