# Jump Search
- Jump search is applied on sorted array.
- In jump search we do not traverse through the whole array
- Traversal goes in block fashion.
- Blocks are formed and only that block is searched where the element is present.  
### **Let's understand with an example**   
 Suppose **start** is at starting of that block and **end** at last of that block then   
  a block where arr[**start**]<target<arr[**end**] is searched and when found linear search is performed in that block.  
  ![alt text](https://static.studytonight.com/data-structures/images/comparing-a[12]-2.PNG)  
  **For example**,   
  Suppose we have an array **arr[]** of size **n** and block (to be jumped) size **m**. Then we search at the indexes arr[**0**], arr[**m**], arr[**2m**]…..arr[**km**] and so on.  
   Once we find the interval (**arr[km] < target < arr[(k+1)m]**), we perform a linear search operation from the index km to find the element target.  
   
Let’s consider the following array: **(1,2,3,5,7,8,9,10,12)**. Length of the array is **9**.  
Jump search will find the value of **10** with the following steps assuming that the block size to be jumped is **3**. 

- STEP 1: Jump from index 0 to index 3
- STEP 2: Jump from index 3 to index 6
- STEP 3: Jump from index 6 to index 9
- STEP 4: Since 8 is the last index and the element at index 8 is greater than 10 thus linear search is performed from 6 to 8 index
### What is the optimal block size to be skipped?   
In the **worst case**, we have to do **n/m** jumps and if the last checked value is greater than the element to be searched for,    
 we perform **m-1** comparisons more for linear search. Therefore the total number of comparisons in the worst case will be    
  ((n/m) + m-1). The value of the function ((n/m) + m-1) will be minimum when m = √n. Therefore, the best step size is **m = √n.** 
  

```c++
// C++ program to implement Jump Search

#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[], int target, int n)
{
	// Finding block size to be jumped
	int step = sqrt(n);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;
	while (arr[min(step, n)-1] < target)
	{
		prev = step;
		step += sqrt(n);
		if (prev >= n)
			return -1;
	}

	// Doing a linear search for target in block
	// beginning with prev.
	while (arr[prev] < target)
	{
		prev++;

		// If we reached next block or end of
		// array, element is not present.
		if (prev == min(step, n))
			return -1;
	}
	// If element is found
	if (arr[prev] == target)
		return prev;

	return -1;
}

int main()
{
	int arr[] = { 1,2,3,5,7,8,9,10,12 };
	int target = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Find the index of 'target' using Jump Search
	int index = jumpSearch(arr, target, n);

	// Print the index where 'target' is located
	cout << "\nNumber " << target << " is at index " << index;
	return 0;
}

```
### Output
> Number 10 is at index 7  
   
**Time Complexity : O(√n)**  
**Space Complexity: O(1)**
