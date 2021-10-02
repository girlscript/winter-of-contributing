# HEAP SORT
HEAP SORT: Heap sort is a sorting algorithm based on Binary Heap Data structure. In this type of algorithm we build a heap and sort with comparisons. We first find the minimum element and place it at the beginning and repeat it until the whole array is sorted.</br>

-  Heap sort is accomplished with binary heap, the value at parent node is always greater than the value in two child-node.
we make a max or min heap according to the requirement.


## ALGORITHM
Here we are sorting array in ascending order
1. Build a Max Heap from the array.
2. The largest element is at the root of the heap. Replace it with the last item of the heap.
3. Reduce the size of heap by 1
4. Call Heapify on the root of tree.
5. Repeat until whole array is sorted.

## HEAPIFY
Heapify is a function used to convert a complete binary tree into max heap.
-Heapify works in 3 steps
  1. Check if the parent-node value is greater than child-node.
  2. If the parent node has value lower than child node, Swap the parent node with child node.
  3. Check for second child node.
  
## CODE FOR HEAP SORT 
```
#include <iostream>
using namespace std;

void heaphelp(int arr[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i) {
		swap(arr[i], arr[largest]);
		heaphelp(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heaphelp(arr, n, i);
	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		heaphelp(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout <<"\n";
}

int main()
{
	int n; cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
	cout<<"Array before sorting is: \n";
	printArray(arr,n);
	heapSort(arr, n);
	cout << "Sorted array is \n";
	printArray(arr, n);
}
```
**Input** 
```
3 -9 5 43 2
```
**output**
```
-9 2 3 5 43
```


## COMPLEXITY OF HEAP SORT
- Heap Sort is an easy-to-implement,in-place algorithm.
Its is a not stable sorting algorithm,
Time complexity of Heapify O(Logn) and Time complexity of Buildheap() is O(n). The overall Time complexity of Heap sort is considered to be O(nLogn).
  In the average case the time complexity is x Θ(nLogn). In the best case and worst case Time complexity is O(nLogn) and Ω(nLogn).


- Heap sort is a memory efficient algorithm. Its minimal usage gives this algorithm a Space complexity of O(1).

