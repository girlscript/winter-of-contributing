## What is Binary Search?

Binary Search Algorithm is one of the widely used searching techniques. It can be used to sort arrays. This searching technique follows the divide and conquer strategy. The search space always reduces to half in every iteration.

Binary Search Algorithm is a very efficient technique for searching but it needs some order on which partition of the array will occur.

## Binary Search Pseudocode

1) We are given an input array that is supposed to be sorted in ascending order.
2) We take two variables which will act as a pointer i.e, beg, and end.
3) Beg will be assigned with 0 and the end will be assigned to the last index of the array.
4) Now we will introduce another variable mid which will mark the middle of the current array. That will be computed as (low+high)/2.
5)If the element present at the mid index is equal to the element to be searched, then 6) just return the mid index.
7) If the element to be searched is smaller than the element present at the mid index, move end to mid-1, and all RHS will get discarded.
8) If the element to be searched is greater than the element present at the mid index, move beg to mid+1, and all LHS will get discarded.

## Binary Search Time Complexity

1)In each iteration, the search space is getting divided by 2. That means that in the current iteration you have to deal with half of the previous iteration array.
2)And the above steps continue till beg<end.
3) Best case could be the case where the first mid-value get matched to the element to be searched.
4) Best Time Complexity: O(1)
5) Average Time Complexity: O(logn)
6) Worst Time Complexity: O(logn)

## Binary Search Space Complexity

The binary search algorithm’s space complexity depends on the way the algorithm has been implemented. Two ways in which it can be implemented are:

### Iterative method: 
In this method, the iterations are controlled through looping conditions. The space complexity of binary search in the iterative method is O(1).
### Recursive method:
 In this method, there is no loop, and the new values are passed to the next recursion of the loop. Here, the max and min values are used as the boundary condition. The space complexity of binary search in the recursive method is O(log n).

 ## Applications of Binary Search
1) This algorithm is used to search element in a given sorted array with more efficiency.
2) It could also be used for few other additional operations like- to find the smallest element in the array or to find the largest element in the array.

