
# Binary Search Time Complexity
<p>

1)In each iteration, the search space is getting divided by 2. That means that in the current iteration you have to deal with half of the previous iteration array.

2)And the above steps continue till beg<end.
3)Best case could be the case where the first mid-value get matched to the element to be searched.
4)Best Time Complexity: O(1)
5)Average Time Complexity: O(logn)
6)Worst Time Complexity: O(logn)
</p>

# Binary Search Space Complexity
<p>
No auxiliary space is required in Binary Search implementation

The binary search algorithm’s space complexity depends on the way the algorithm has been implemented. Two ways in which it can be implemented are:

## Iterative method: 
In this method, the iterations are controlled through looping conditions. The space complexity of binary search in the iterative method is O(1).

## Recursive method: 
In this method, there is no loop, and the new values are passed to the next recursion of the loop. Here, the max and min values are used as the boundary condition. The space complexity of binary search in the recursive method is O(log n).

</p>
