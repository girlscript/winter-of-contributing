# Introduction to Heap Data Structure

## What is Heap Data Structure?

Heap is a very useful data structure that every programmer should know well. The heap data structure is used in Heap Sort, Priority Queues. The understanding of heaps helps us to know about memory management.
Heap is a complete binary tree with some property. There are two types of a heap on the basis of the property :
* Max-Heap: The key present at any node must be greater than the keys present at both of its children. The largest key is at the root node.

<img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/introduction-to-heaps-max-heap-b49f1b147177a014.png" height="400px" width="400px">

* Min-Heap: The key present at any node must be smaller than the keys present at both of its children. The smallest key is at the root node.

<img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/introduction-to-heaps-min-heap-3837ac4d8b664f7f.png" height="400px" width="400px">

A binary heap is represented as an array. The representation follows some property.
* The root of the tree will be at Arr[0].
* For any node at Arr[i], its left and right children will be at Arr[2*i + 1] and Arr[2*i+2] respectively.
* For any node at Arr[i], its parent node will be at Arr[(i-1)/2].

## Applications of Heap:

* Heap Sort: Heap Sort uses Binary Heap to sort an array in O(nlogn).
* Priority Queue: It uses binary heap to efficient implement operations insert(), delete(), extract_max(), update() in O(logn) time.
* Graph Algorithms: Some of the Graph Algorithms also use heaps to reduce its time complexity like Dijkstra’s Algorithm and Minimum Spanning Tree.
* K-way merge: A heap data structure is useful to merge many already-sorted input streams into a single sorted output stream.
* Order statistics: The Heap data structure can be used to efficiently find the kth smallest (or largest) element in an array.
