# What is Binary Search?
Binary Search Algorithm is one of the widely used searching techniques. It can be used to sort arrays. This searching technique follows the divide and conquer strategy. The search space always reduces to half in every iteration.

Binary Search Algorithm is a very efficient technique for searching but it needs some order on which partition of the array will occur.


## Binary Search Pseudocode
<p>
1) We are given an input array that is supposed to be sorted in ascending order.

2)We take two variables which will act as a pointer i.e, beg, and end.

3)Beg will be assigned with 0 and the end will be assigned to the last index of the array.

4)5)Now we will introduce another variable mid which will mark the middle of the current array. That will be computed as (low+high)/2.

5)If the element present at the mid index is equal to the element to be searched, then just return the mid index.

6)If the element to be searched is smaller than the element present at the mid index, move end to mid-1, and all RHS will get discarded.

7)If the element to be searched is greater than the element present at the mid index, move beg to mid+1, and all LHS will get discarded.
</p>
