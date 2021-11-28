# Problem Statement

Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

# INPUT/OUTPUT EXAMPLE 

        Example 1:

        Input:
        N = 8
        A[] = {15,-2,2,-8,1,7,10,23}
        Output: 5
        Explanation: The largest subarray with
        sum 0 will be -2 2 -8 1 7.

## APPROACHES

# Simple Approach

The first approach is using Brute Force method, by using  2 for loops for checking the sum of each and every subarray.

The outer loop for the starting position of the arrays, and iunner loop for the ending position of each subarray.

        Time Complexity-O(N^2)
        Space Complexity-O(1)


# Optimal Approach

Logic-
Consider the sum of an array from position 1 to n=S, and the sum of the subarray from position 3 to N =S, which definitely means that the sum of elements from 3 to N=0, and that is teh subarray we are looking for.

1)We will be using a hashmap which will store a key-value pair of the sum of elements upta an index, and the index itself.

2)Update the hashmap with sum ou till each index, until the current sum is already in that hashmap.

3)In this case, we will update a variable storing the max length like this.

        max_len=max(max,len,(index in hask map-current index)).

4)Print the maximum length.
