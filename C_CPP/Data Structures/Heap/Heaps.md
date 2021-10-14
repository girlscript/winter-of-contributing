# Introduction:

A heap is a binary tree with two characteristics:
1) They must be complete binary tree.
2) The nodes must be ordered according to the Heap order property


# Types of Heaps:

1) Min Heap: In this type of heap, the minimum-value element at
the root i.e. the value of parent node will always be less than or equal to the value of child node across the tree. 
If Node A has a child node B, then:	
				key(A) <= key(B)
 
2) Max Heap: In this type of heap, the maximum-value element at the root i.e. the value of parent node will always be more than or equal to the value of child node across the tree.
If Node A has a child node B, then:
				key(A) >= key(B)
 

## Implementation of a heap:

A heap can be represented in the form of array.
The root is the second item in the array. We skip the index zero cell of the array for the convenience of implementation. Consider i-th element of the array, 

	-its left child is located at 2*i index
	-its right child is located at 2*i+1. index
	-its parent is located at i/2 index

## Insertion in a heap:

## Steps to follow:
	1) To insert any new node we need to find the first empty leaf in the array.
	2) We move the first data to the first empty leaf and reheap up.

## Algorithm:

InsertHeap(ref Heap<arrayOfDatatype>, ref Last<indedx>, ref Data<datatype> )
	
	if(heap full)
		return 1
	last=last+1
	heap[last]=data
	reHeapUp(heap, last)
	return true
end insertHeap


## Code:

```c++
#include<iostream>
using namespace std;

void heapify(int a[],int n,int i)
{
	int parent;
	parent = (i-1)/2; //for finding the parent of child
	if(parent>=0)     //Check until index < 0
	{
		if(a[parent]<a[i])
		{
			swap(a[parent],a[i]);
			heapify(a,n,parent); 	//recursively calling function to heapify the heap
		}
	}
}


void insert(int a[],int &n,int val)
{
	
	n=n+1;		//Increase the Size of the Array by 1
	a[n-1]=val;	//Insert the new element at the end 
	heapify(a,n,n-1);	//Heapify function called
}


void print(int a[],int n)
{
	cout<<"\n The Array Representation of Heap is\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}


int main()   //main function
{
	
	int a[100]={10,5,3,2,4};   //Initial Max Heap 
	int n = 5;
	int val = 15;		//The Element to be insert is 15
	print(a,n);	 	//Printing the Array
	insert(a,n,val); 	// insert function for new element
	print(a,n);		//Printing the Array
	return 0;
}

```

## Complexity Analysis:
Time complexity of above code is : O(logn)
Since the heap is a complete binary tree structure, its height is log n (where n = no of elements). 
Each swapping happens in 1 operation. In the worst case, element inserted at the bottom has to be swapped from bottom to the top, upto the root node to maintain the heap property. Therefore, the maximum no of times swap can be performed is log n. Hence, insertion in a heap takes O(log n) time.


