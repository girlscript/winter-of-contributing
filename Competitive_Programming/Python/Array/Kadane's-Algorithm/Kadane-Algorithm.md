# <p align='center'> Kadane' Algorithm </p>

# What is Kadane's Algorithm?

- Kadane's algorithm is an iterative dynamic programming algorithm in which we search for a maximum sum contiguous subarray within a one-dimensional numeric array.
- Maximum Sum Continuous Subarray is a recursive approach problem of finding the maximum sum from the subarray, from the given array of integers( include both negative & positive number).
- Kadane's Algorithm is a efficeint approach to solve such problem in competitive programming.
- Time Complexity: <strong>O(N)</strong>, where N is length of the array.
- Space Complexity: <strong>O(1)</strong>, No extra space is needed.

# Kadane's Algorithm
<pre>
- Initialize:
    max_so_far = INT_MIN,  max_so_far hold the maximum sum, it is intialisez with minimum negative value by INIT_MIN.
    max_end_here = 0,   max_end_here will add the values from the array.

- Loop for each element of the array
  (i)   max_end_here = max_end_here + array[i], Here max_end_here keep add the array[i] value.
  (ii)  if(max_so_far < max_end_here),       After adding the value max_end_here need to update the max_so_far, which means till ith index the maximum sum obtained is stored in max_end_here and if max_so_far is less than max_end_here then we got our new maximum.
            max_so_far = max_end_here,       Transfer the value to max_so_far, Why?
  (ii)  if(max_end_here < 0),                Because if in any case max_end_here < 0 then max_end_here = 0, we do not need negative sum.
            max_end_here = 0
- return max_so_far,                         And Return the maximum sum obtained. 
</pre>

# Explanation
<pre>
    Lets take the example:
    {-2, -3, 4, -1, -2, 1, 5, -3}

    max_so_far = max_end_here = 0

    for i=0,  a[0] =  -2
    max_end_here = max_end_here + (-2)
    Set max_end_here = 0 because max_end_here < 0

    for i=1,  a[1] =  -3
    max_end_here = max_end_here + (-3)
    Set max_end_here = 0 because max_end_here < 0

    for i=2,  a[2] =  4
    max_end_here = max_end_here + (4)
    max_end_here = 4
    max_so_far is updated to 4 because max_end_here greater 
    than max_so_far which was 0 till now

    for i=3,  a[3] =  -1
    max_end_here = max_end_here + (-1)
    max_end_here = 3

    for i=4,  a[4] =  -2
    max_end_here = max_end_here + (-2)
    max_end_here = 1

    for i=5,  a[5] =  1
    max_end_here = max_end_here + (1)
    max_end_here = 2

    for i=6,  a[6] =  5
    max_end_here = max_end_here + (5)
    max_end_here = 7
    max_so_far is updated to 7 because max_end_here is 
    greater than max_so_far

    for i=7,  a[7] =  -3
    max_end_here = max_end_here + (-3)
    max_end_here = 4
</pre>
