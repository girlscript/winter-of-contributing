# Finding the duplicate element in the array   

## Problem Statement 
Given an array of integers (ranging from 1 to n) of length n+1 present the task is to find the duplicate element efficiently!

#### Example
```
Input: [1,2,3,4,1]
Output: 1

Input: [2,3,4,5,6,3,1]
Output: 3
```

#### Algorithm
```
- Store the sum of all the elements of the array in some variable say, s.
- Since, the numbers are ranging from 1 to n then we can simply store the sum of numbers from 1 to n in some another variable say, t.
- Subtract t from s to get the desired result.
```
### Dry Run
```
Let's take n = 6 and array A[] = {4,2,1,4,5,6,3}.
    Now, s = 4 + 2 + 1 + 4 + 5 + 6 + 3 = 25.
    And, t = (n * (n + 1))/2 = (6 * 7)/2 = 21.
    So, our desired result is = s - t = 25 - 21 = 4.

Let's take n = 4 and array A[] = {4,2,1,2,3}.
    Now, s = 4 + 2 + 1 + 2 + 3 = 12.
    And, t = (n * (n + 1))/2 = (4 * 5)/2 = 10.
    So, our desired result is = s - t = 12 - 10 = 2.
```
#### C++ Implementation
```
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n+1];
    int s=0; // initializing sum as zero
    for(int i=0;i<n+1;i++)
    {
        cin>>A[i];
        s+=A[i];    // taking the sum of elements
    }
    int t=(n*(n+1))/2; // taking sum of integers from 1 to n
    int res = s-t;  // our desired result.
    cout<<"The Duplicate element in the given array is "<<res<<"\n";
    return 0;
}
```
**Input 1** \
 6 \
 4 2 1 4 5 6 3 \
**Output 1** \
The Duplicate element in the given array is 4.

**Input 2** \
4 \
4 2 1 2 3 \
**Output 2** \
The Duplicate element in the given array is 2
#### Complexity:
***Time Complexity:*** O(n) \
***Space Complexity:*** O(1)


