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

## Sample Test case:
