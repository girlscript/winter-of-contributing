# Kadane's Algorithm
Efficient method to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 

![alt text](https://www.alphacodingskills.com/algo/img/kadane-algo.PNG)

### Algorithm:
The following steps will describe the brief overview of the Kadane's Algorithm

```
Initialize:
    max_so_far = A[0]
    max_ending_here = A[0]

Loop for each element of the array
  (a) max_ending_here = max_ending_here + A[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far
```
### Explaination:
The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this). And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this). Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far.

### Example:
Let's take an example to get a better idea!
```
Here A[]={-3,1,-8,12,0,-3,5,-9,4}
max_so_far = max_ending_here = A[0] = -3

for i = 1 , A[1] = 1
max_ending_here = max_ending_here + 1 = -3 + 1 = -2
Set max_so_far = -2 because max_ending_here greater 
Set max_ending_here = 0 because max_ending_here < 0

for i = 2 , A[2] = -8
max_ending_here = max_ending_here + 1 = 0 + (-8) = -8
Set max_ending_here = 0 because max_ending_here < 0

for i = 3 , A[3] = 12
max_ending_here = max_ending_here + 1 = 0 + 12 = 12
Set max_so_far = 12 because max_ending_here greater 

for i = 4 , A[4] = 0
max_ending_here = max_ending_here + 1 = 12 + 0 = 12

for i = 5 , A[5] = -3
max_ending_here = max_ending_here + 1 = 12 + (-3) = 9

for i = 6 , A[6] = 5
max_ending_here = max_ending_here + 1 = 9 + 5 = 14
Set max_so_far = 14 because max_ending_here greater

for i = 7 , A[7] = -9
max_ending_here = max_ending_here + 1 = 14 + (-9) = 5

for i = 8 , A[8] = 4
max_ending_here = max_ending_here + 1 = 5 + 4 = 9

So, max_so_far = 14, which is the desired result as depicted by the above figure also!
```
### C++ Implementation of Kadane's Algorithm
```
#include<iostream>
using namespace std;

int maxSubArraySum(int A[], int size)
{
    int max_so_far = A[0];
    int curr_max = A[0];
    
    for (int i = 1; i < size; i++)
    {
    	curr_max = max(A[i], curr_max+A[i]);
    	max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

/* Driver program to test maxSubArraySum */
int main()
{
    int A[]={-3,1,-8,12,0,-3,5,-9,4};
    int n = sizeof(A)/sizeof(A[0]);
    int max_sum = maxSubArraySum(A, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
```
**Output:**
14

**Time Complexity: O(n)**
**Auxiliary Space: O(1)**


