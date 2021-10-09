# ScanLine Algorithm

 _You are given an array of N integers and given Q queires, and in each queries you are given three values L, R, X such that from L to R indices in the array you are required to increment the elements of the array by the value of X._

##### Example:
##
```
arr[] = {6, 1, 1, 7, 6}
```
Queires:
```

L    R    X
1    3    2
2    4    3
2    5    4
```
After queries the output array will be
```
output[] = {8, 10, 10, 14, 10}
```
The naive approach to this problem is to solve for each query and increment the elements by respective values of X.
The time complexity for this approach is _O(Q*N)_.
### Algorithm
This algorithm is based upon the prefix sum and precomputation of the array.
Let us take an array _prefix[N+1]_ and initialized all elements to zero. 
For above example:
```
prefix[N+1] = {0,0,0,0,0,0};
```
Now do the following operations:
```
prefix[L] += X;
prefix[R+1] -= X;
```
After these operations, prefix array wil be
```
prefix[] = {2, 7, 0, -2, -3, -4};
```
Now perform prefix sum of the array, 
```
for (i from 1 to N)
prefix[i] = prefix[i] + prefix[i-1];
```
So the array will be:

```
prefix[] = {2, 9, 9, 7, 4, 0};
```

Now take first N elements from the prefix array and add the respective elements to original array to get the required output.
```
arr[]  = {6, 1, 1, 7, 6};
prefix[] = {2, 9, 9, 7, 4};
```
##### Output array
```
output[] = {8, 10, 10, 14, 10};
```

#### Time Complexity
The time complexity after implementing scanline algorithm will boil down to _O(Q+N)_.
