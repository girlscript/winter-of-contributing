# Heap Sort

Heap sort in a comparision based sorting algorithm to sort an array.  In this technique we use a heap, either max-heap or min-heap, depending upon whether we want the array to be in increasing order or decreasing order. 

## Working
### Position of left child,right child and Parent in a array:
Consider that the array begins from 0<sup>`th`</sup> position
- Node is at index : `i`
- First child of node is at: `2*i+1` position in array
- Second child of node is at: `2*i + 2` position in array
- Parent of node is at : `⌊i/2⌋`
### We follow the following two steps:
1. Put all the elements in a complete binary tree.
2. Make the complete binary tree into a heap, which means that each node would have a larger value than it's leaves (for a max-heap). Similarly for a min-heap each node should have smaller value than it's leaves.
3. Delete the elements one-by-one from the root node onwards reflecting the changes back in the array.
4.  You will get the sorted array

### Step 1 : Heapify

To implement step 2 above we follow the heapify procedure. This involves swapping the value of nodes in the complete binary tree so that each node holds a greater value than the value of it's leaves ( for a max-heap).




<p align="center"><img src="https://user-images.githubusercontent.com/77008381/135722913-382a1aec-1ef4-48a4-a3e8-aaefedb85159.png"></p>

### Step 2: Deletion of the Heap

1. Delete the value of root node and insert it in the end of the array.
2. Balance the tree to form a complete binary tree.
3. Convert the complete binary tree to a heap.
4. Proceed recursively for each node until whole heap is deleted and array is sorted.


<p align="center"><img src="https://user-images.githubusercontent.com/77008381/135723862-64d96816-0eb0-496e-badd-8cc759464be4.png"></p>
<hr>

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/135724230-f25e84b2-9b42-405d-a5d7-d237026ef0a1.png"></p>

<hr>

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/135724436-0d69fc51-0baf-4ec4-9391-35c6d6175820.png"></p>

<hr>

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/135724629-e86a70e4-c10b-46b1-b7e4-bb29083abedc.png"></p>

<hr>

<p align="center"><img src="https://user-images.githubusercontent.com/77008381/135724815-daa4ac4d-a71d-4af1-a546-e5c83f9b649e.png"></p>

### Code in C++

```c++
#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest element as root node
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	// When left child is larger than root node
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// When right child is larger than root node
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest element is not root node
	if (largest != i) {
		swap(arr[i], arr[largest]);

		//  Heapify recursively
		heapify(arr, n, largest);
	}
}


void heapSort(int arr[], int n)
{
	// Rearrange array as heap
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// Deletion of the heap
	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);

		// make the binary tree into a heap again
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver code
int main()
{
	int arr[] = { 95, 2, 66, 13, 52, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is:";
	printArray(arr, n);
}

```

```
Sorted array is: 2 7 13 52 66 95

```

### Time Complexity 
For Heapify: O (n)
For Deletion: O (nlogn)
Total Time Complexity: O (n) + O (nlogn) = O (nlogn)

### Space Complexity
Since the heap is built inside the array to be sorted, the space complexity : O (1)

### References
- [Abdul Bari](https://www.youtube.com/watch?v=HqPJF2L5h9U)
- [GeeksForGeeks](https://www.geeksforgeeks.org/heap-sort/)
