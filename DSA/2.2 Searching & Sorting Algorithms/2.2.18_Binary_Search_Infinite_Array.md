# Search an element in a sorted and infinite array

### **Description**
You are given a sorted and infinite array A[] and an element K. You need to search for the element K in the array. If found, return the index of the element, else return -1.



#### EXAMPLE 1:
Input: A[] = {1,2,4,8,11,13,15,17,19,28,39,103,123,140,2040,…}, K = 17

Output: 6

#### EXAMPLE 2:
Input: A[] = {1,3,5,8,10,20,25,30,67,93,159,192,350,1230,1341,4533,…}, K = 23

Output: -1

***
### Approches

* BRUTE FORCE 
* EFFICENT SOLUTION

### Brute Force approach : Using linear Search

* In the infinite array, we don’t know the upper bound to apply the binary search.
*  So simple solution we could think to start searching for K linearly from index 0  until you you find an element equal to K, then return the index.
*   If you find an element greater than K, then return -1. 

### Code

```cpp
// C++ program to demonstrate the algorithm
// an element in an array of infinite size
#include<bits/stdc++.h>
using namespace std;


int linearSearch(int arr[], int left, int right, int key)   // function to perform linear search
{
	for(int i=left;i<=right;i++){
	
	if(arr[i]==key)
	{
	  return i;
	}
	
	}
	
	return -1;
                                // searched and returns the position of target if found else -1.
}



int findPosition(int arr[], int target)   //function to find the new lower and upper bound 
{
	int left = 0, right= 1;
	int val = arr[0];

	
	while (val < target)
	{
		left= right;	 // store previous high
		right = 2*right;	 // double high index
		val = arr[right]; // update new val
	}


	return linearSearch(arr, left, right, target);
}


int main()
{
	int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170.....};                                  //Input Array
	int ans = findPosition(arr, 10);                                    
	if (ans==-1)
		cout << "Element not Present";
	else
		cout << "Element found at index " << ans;
	return 0;
}

```




### Complexity Analysis
The approach will be linear in the index of the element (**O(k)** where k is the index of the element). Actually, you are going to need  iterations to find the element which is greater than the searched element, which is **O(k)** and the Space complexity is **O(1)** as we do not need any extra space to perform this algorithm.

### Efficent Solution : Binary Search

* In this approach, we increase the interval size by an exponential order of 2.
* First set the index at position 2, then 4, then 8, then 16 and so on.
*  Again do the binary search from position LEFT to RIGHT where item is in between.
*   We call this approach exponential search which helps us to track the upper bound quickly in comparison to the previous approach.
```cpp
int search_infinite_Array( int Array[], int target ) 
{ 
    int left = 0 
    int right = 1
    while (Array[right] < target)
    { 
       left = right          // store previous right
       right = 2*(right)    //finding the new right
    }
   return binarySearch(Array, left, right, target)
}
```
***
### Complexity Analysis
Let k be the position of element to be searched. Number of steps for finding high index ‘high’ is **O(Log k)**. The value of ‘high’ must be less than (2*high). The number of elements between high/2 and h must be **O(k)**. Therefore, time complexity of Binary Search step is also O(Log k) and overall time complexity is **2O(Log k)** which is **O(Log k)**  and the Space complexity is **O(1)** as we do not need any extra space to perform this algorithm.


### Code

```cpp
// C++ program to demonstrate the algorithm
// an element in an array of infinite size
#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int left, int right, int key)
{
	if (right>=left)
	{
		int mid = left + (right - l)/2;
		if (arr[mid] == key)
			return mid;
		if (arr[mid] > key)
			return binarySearch(arr, left, mid-1, key);
		return binarySearch(arr, mid+1, right, key);
	}
	return -1;                            // searched and returns the position of target if found else -1.
}



int findPosition(int arr[], int target)   //function to find the new lower and upper bound 
{
	int left = 0, right= 1;
	int val = arr[0];

	
	while (val < key)
	{
		left= right;	 // store previous high
		right = 2*right;	 // double high index
		val = arr[right]; // update new val
	}


	return binarySearch(arr, left, right, target);
}


int main()
{
	int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170.....};                                  //Input Array
	int ans = findPosition(arr, 10);
	if (ans==-1)
		cout << "Element not Present";
	else
		cout << "Element found at index " << ans;
	return 0;
}

```
