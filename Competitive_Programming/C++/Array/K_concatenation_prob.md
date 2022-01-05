# K - Concatenation 

## Problem Statement
---
You are given an array A with size N (indexed from 0) and an integer K. Let's define another array B with size N · K as the array that's formed by concatenating K copies of array A.

## Example Case 1
If A = {1, 2} and K = 3, then B = {1, 2, 1, 2, 1, 2}.

## Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains two space-separated integers N and K.
- The second line contains N space-separated integers

## Output
For each test case, print a single line containing the maximum subarray sum of B.

## Approach
Firstly, finding kadane's sum through a function for a single array, for the sum to be maximum negative sum/numbers are required to be ignored. Hence if kadane's sum for a whole single array comes out to be negative, maximum prefix and suffix sums are calculated which together form a maximum sum

## Code
```C++
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll kadane(int arr[], int n){
    ll curr_sum=0;
    ll max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum = curr_sum + arr[i];
        if(max_sum<curr_sum){
            max_sum = curr_sum;
        }
        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return max_sum;
}

ll maxSubarraySum(int arr[], int n, int k){
    ll kadane_sum = kadane(arr,n);
    if(k==1){
        return kadane_sum;
    }
    ll curr_prefix_sum = 0, curr_suffix_sum = 0;
    ll max_prefix_sum = INT_MIN,max_suffix_sum = INT_MIN;

    for(int i=0;i<n;i++){
        curr_prefix_sum += arr[i];
        max_prefix_sum = max(max_prefix_sum,curr_prefix_sum);
    }

    ll total_sum = curr_prefix_sum;

    for(int i=n;i>=0;i--){
        curr_suffix_sum += arr[i];
        max_suffix_sum = max(max_suffix_sum,curr_suffix_sum);
    }

    ll ans;
    if(total_sum<0){
        ans = max(max_prefix_sum + max_suffix_sum, kadane_sum);
    }
    else{
        ans = max(max_prefix_sum + max_suffix_sum + (total_sum*(k-2)),kadane_sum);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr(n);
        for(int i=9;i<n;i++){
            cin>>arr[i];
        }
        cout<<maxSubarraySum(arr,n,k);
    }
    return 0;
}
```
## Input 1
2

2 3

1 2

3 2

1 -2 1

## Output 1
9

2

## Explanation
Example case 1: B = {1, 2, 1, 2, 1, 2} and the subarray with maximum sum is the whole {1, 2, 1, 2, 1, 2}. Hence, the answer is 9.

## Input 2
1

3 3

1 3 -2 

## Output 2
6

## Complexity
Time complexity - O(n)
Space complexity - O(1)
