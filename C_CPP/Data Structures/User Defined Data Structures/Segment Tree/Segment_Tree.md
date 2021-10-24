# Segment Tree

Segment Tree is a User Defined Data Structure. It is basically a special implementation of binary trees used for storing the intervals or segments.

Need:

- It provides a better time complexity of the order of O(log(N)).
- Used in cases having multiple range queries and updates performed on the same array.

Terminology:

- Query:Operation performed on an interval or segment.For example minimum or maximum or summation in a particular segment.
- Update:To update a particular element in the array and reflect the corresponding change in the segment tree.

## Algorithm:

- It follows a Divide and Conquer mechanism very similar to binary trees.
- We recursively construct the values of the two child vertices.
- Then merge the computed values of these children to form the segment tree.
- Updating an element in the segment tree is very similar to binary search.
  - We find out mid, and compare our index with mid and two conditions arise
  - Idx <= mid, then we recursively call the left child of the tree’s node.
  - Idx > mid, then we recursively call the right child of the tree’s node.

## Sample Test case:

Let us take an example of returning and updating the sum of the subarray a[i to j] of an array of size n.
Question: Take an input array arr from the user.
Query: Output the sum from i=1 to i=5.
Update: Update the element at ith index. Example: put arr[4] = 13.


![Segment Trees](https://user-images.githubusercontent.com/72400676/138603900-12964778-942f-4597-8e0a-4fbec3cdbb4a.png)


