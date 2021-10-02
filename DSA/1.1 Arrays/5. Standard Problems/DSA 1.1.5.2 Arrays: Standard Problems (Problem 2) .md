### Find largest sum contiguous subarray.
## Problem Statement

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 ## Example
 ## Input
```
9
-2 1 -3 4 -1 2 1 -5 4]
```
## Output
```
6
```
## Explanation
```
[4,-1,2,1] has the largest sum = 6.
```
## Algorithm
1. Make two variables max_sum which will store maximum sum and cur_sum which will store current sum while iterating.
2. Make another variable neg which will store the maximum of all array elements.
3. Now, Iterate over the array and keep adding elements to the cur_sum. If the cur_sum becomes negative assign zero to it.
4. Store maximum of max_sum and cur_sum in max_sum.
5. Also store maximum of all the elements in neg variable.
6. Return neg if max_sum is 0 because this means all array elements are negative else return max_sum.

## Below Code is the general case for any two sorted Array.


## Code
```C++
#include <bits/stdc++.h>
using namespace std;
#define ll long long  
int largest_subrarray_sum(vector<int> nums,int n)    //Function which calculate the Maximum Subarray
{
    if(n==1)
    {
        return nums[0];  //If the array contains only one element return that element
    }
    int max_sum=0,cur_sum=0;  //max_sum will store maximum sum and cur_sum will store current sum
    int neg=nums[0];          //neg will store maximum of the elements of the array
    for(int i=0;i<n;i++)
    {
        cur_sum+=nums[i];         //Keep Adding elements of the array to the cur_sum
        neg=max(neg,nums[i]);
        if(cur_sum<0)
        {
            cur_sum=0;             // If cur_sum becomes negative assign it to zero because negative is not needed
        }
        max_sum=max(max_sum,cur_sum);     //Taking Maximum of max_sum and cur_sum
    } 
    if(max_sum==0)
        return neg;              //If all the array elements are negative the return the maximum element
    return max_sum;
}

int main() {
    int n; 
    cin>>n;              //Taking input the size of the array
    vector<int> a(n);     //Declaring the vector which will store the elements
    for(int i=0;i<n;i++)
    {
        cin>>a[i];        //Taking input the elements of array
    }

    int ans=largest_subrarray_sum(a,n);       
    cout<<ans;  //ans is the required the Sum
    return 0;
}

```

## Time Complexity
```
Time complexity is the time taken by computer to run an algorithm.
Due to single iteration in the loop of array ,the above code time complexity is big-O-of (n).
  Time Complexity = O(n)
``` 
## Space Complexity 
```
Space Complexity is the space taken by computer to run an algorithm.
Above code have one array of size n and we have not created any extra array or space. Therefore, the space complexity of the given code is big-O-of (n)
  Space Complexity = O(n)
  ```
