# Equilibrium Index of a Array
Here we will see how to find a equilibrium index in a array.  
Equilibrium index means that index i such that the sum of all the lower indexes is same to the sum of the higher indexes.  
I have given a example to understand it better.

## Example
**Input**: Arr[] = {-7, 1, 5, 2, -4, 3, 0}  
**Output**: 3
*Explanation**  
3 is an equilibrium index, because:-  
Arr[0] + Arr[1] + Arr[2] = Arr[4] + Arr[5] + Arr[6]

## Logic
First we find the sum of the whole array.  
Then we define tempsum variable and subtract every element from sum and store in the tempsum.  
We continue this till the both sum and tempsum becomes equal else display -1.

## Solution

```cpp
#include<iostream.h>
#include <stdio.h>
int eq(int arr[], int n)
{
	int sum = 0; // sum of whole array
	int tempsum = 0; // initialize tempsum
	for (int i = 0; i < n; ++i) 	// Find sum of the whole array
     {
         sum += arr[i];
     }
	for (int i = 0; i < n; ++i) {
		sum -= arr[i]; // subtracting from whole sum
		if (tempsum == sum) // if both sum becomes equal return equilibrium index
			{return i;}
		tempsum += arr[i]; // add array elementin new variable
	}
	return -1; // if no equilibrium index is found return -1
}
int main()
{
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout<<"First Equilibrium index is: "<<eq(arr, arr_size));
	return 0;
}
```

### Time Complexity
O(n)

### Space Complexity
O(1)
