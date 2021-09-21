*Question statement: You are given an array of size n . You need to rotate the array by D places.
*For example: arr[]={1,2,3,4,,6,7}, D=2
*The output should be: {3,4,5,6,7,1,2}

*Approach for the question will be:
-Firstly we will reverse the first D elements then reverse the remaining elements ie (size-d). At last we will reverse the whole array.
-The base condition for this will be when D is either negative or greater than equal to size. In this case we will simply return the input array.

-For reversing the subarrays,
we will be swapping the values ie the first value will be at last and vice-versa.

Here I am presenting a code which will help to understand the algorithm in better and more efficient way.