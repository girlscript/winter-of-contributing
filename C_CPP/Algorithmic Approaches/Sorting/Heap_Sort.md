# Heap Sort

Heap sort in a comparision based sorting algorithm to sort an array either in increasing or decreasing order. In this technique we use a heap(either max-heap or min-heap depending upon whether we want the array to be in increasing order or decreasing order) to sort the array.

## Working
### Position of left child,right child and Parent in a array:
- Node is at index : i
- First child of node is at: `2*i+1` position in array
- Second child of node is at: `2*i + 2` position in array
- Parent of node is at : `⌊i/2⌋`
### We follow the following two steps:
1. Put all the elements in the heap one by one and make the required changes in the array.
2. Delete the elements from the heap reflecting the changes back in the array.

### Step 1 : Insertion

We could 