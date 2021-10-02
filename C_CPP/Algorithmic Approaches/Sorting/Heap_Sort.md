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



<p align="center"><img src="https://user-images.githubusercontent.com/77008381/135722851-80c8326d-8561-485a-8e17-0d60d7c80580.png"></p>
