# Kadane's Algorithm 

## What is Kadane's Algorithm
> Kadane's Algorithm is an algorithm to solve the "Maximum Subarray Sum" problem in the most efficient way. This algorithm is based on Dynamic Programming. 

## Problem Statement
> Write a program to find the largest sum of contiguous array in efficient approach.


> Expected time complexity:- O(n)

> Expected Auxiliary Complexity:- O(1) 

<details>
    <summary> What is a contiguous Array? </summary>
    A contiguous array is just an array stored in an unbroken block of memory: to access the next value in the array, we just move to the next memory address
</details>

## Explanation of Kadane's Algorithm
> Kadane's Algorithm, like other algorithms of Dynamic Programming works on the ideology of breaking the complex problem in smaller easily parts so that sub-problem appears and we can solve it easily.

> *Approach*:- The simple approach of Kadane’s algorithm is start looking for all positive elements of array and sum up them to store in a variable(let's say max_ending_here). Now, keep maintaining the track of maximum sum contiguous segment in another variable(max_so_far). Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far. 


## Algorithm
```
    // Initialization
    max_so_far = INT_MIN
    max_ending_here = 0

    // Loop for each element of the array
    for(i=0 to arraySize()-1)
        max_ending_here = max_ending_here + a[i]
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
        if(max_ending_here < 0)
            max_ending_here = 0
    return max_so_far

```


## Implementation

### Implemtation in C++
```

#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}


int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int max_sum = maxSubArraySum(arr,n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
```

### Implementation in Java

```
import java.util.*;

class Kadane
{
	public static void main (String[] args)
	{
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
		int [] a = new int[n];
	    for(int i=0; i<n; i++){
	        a[i]= sc.nextInt();
	    }
		System.out.println("Maximum contiguous sum is " +
									maxSubArraySum(a));
	}

	static int maxSubArraySum(int a[])
	{
		int size = a.length;
		int max_so_far = a[0], max_ending_here = 0;

		for (int i = 0; i < size; i++)
		{
			max_ending_here += a[i];
			if (max_so_far < max_ending_here)
				max_so_far = max_ending_here;
			if (max_ending_here < 0)
				max_ending_here = 0;
		}
		return max_so_far;
	}
}

```

### Implementation in C
```
#include <stdio.h>

int maxSubArraySum(int a[], int size)
{
	int max_so_far = a[0], max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}


int main(void)
{
	int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int max_sum = maxSubArraySum(arr,n);
	printf("Maximum contiguous sum is %d", max_sum);
	return 0;
}

```