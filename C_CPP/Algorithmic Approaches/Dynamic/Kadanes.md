# Kadane's Algorithm
Kadanes Algorithm is used to find Largest sum contigous subarray in an array.

## What is sub-array?
An array is a contigous memory block. so sub array is just a contigous block/piece/slice of an array.

For example: arr = {1,2,3,4}

then, the sub arrays of this array are:

{1} , {1,2} , {1,2,3} , {1,2,3,4} , {2} , {2,3} , {2,3,4} , {3} , {3,4} , {4} 

Now, as we have all the sub arrays let's find the max sum sub-array by adding elements of each sub array

| Sub-array      | Sum|
| ----------- | ----------- |
| {1}     | 1       |
| {1,2}   | 3        |
| {1,2,3}   | 6        |
| {1,2,3,4}   | 10        |
| {2}   | 2        |
| {2,3}   | 5        |
| {2,3,4}   | 9        |
| {3}   | 3        |
| {3,4}   | 7        |
| {4}   | 4        |

so, as we can see the maximum constigous sub-array is {1,2,3,4} which is the array only.

<b>Conclusion</b> : Hence what we can conclude is when all the elements are greater than 0 then the maximum sum sub-array is the array only.

But , what if there are negative elements also :)

Let's take an example and see

Example: arr = {1,-2,3,4}

the, the sub arrays of this array are:

{1} , {1,-2} , {1,-2,3} , {1,-2,3,4} , {-2} , {-2,3} , {-2,3,4} , {3} , {3,4} , {4} 

Now, as we have all the sub arrays let's find the max sum sub-array by adding elements of each sub array

| Sub-array      | Sum|
| ----------- | ----------- |
| {1}     | 1       |
| {1,-2}   | -1        |
| {1,-2,3}   | 2        |
| {1,-2,3,4}   | 6        |
| {-2}   | -2        |
| {-2,3}   | 1        |
| {-2,3,4}   | 5        |
| {3}   | 3        |
| {3,4}   | 7        |
| {4}   | 4        |

so, as we can see the maximum constigous sub-array is {3,4}.

To, find this maximum sum contigous sub-array in an array **Kadane's Algorithm** is there.

## Approach of Kadane's Algorithm
The approach of the algorithm is as follows:

Let array be {1,-2,3,4}. Then,

We will sum the sub-array and whenever we will encounter a negative sum, we would leave that sub-array as it would just reduce our sum, hence we will continue with the next sub-array.

example in the above array starting with 0th element and adding 1st element in it, we get a negative sum ie -1. Hence, we will leave that sub-array there only as it would just reduce our sum if we take it further to add 3 & 4.

Next, sub-array is {-2,3,4} which gives us a sum of 5.
Therefore, till now the max sum that we have got is 5.

Let's look at the next sub-array ie {3,4}, which will give us a sum of 7, and is greater than the previous max sum . So now our max sum = 7.

## Code Pattern of Kadane's Algorithm

- First, we will consider two int variables ``current_sum`` and ``max_sum``and initialize then as 0.
- ``current_sum`` will store the current that we will be adding , whereas ``max_sum`` will have the maximum sum.
- Each time we will compare the ``current_sum`` with ``max_sum`` and if ``current_sum`` is greater than previous ``max_sum`` we will change the max_sum.

<b>Special Case:</b> If all the elements of an array is negative then the ``max_sum`` that we will get will be always 0. To solve this issue, we will be assigning ```max_sum = INT_MIN;```

## Code

```cpp
//KADANE'S ALGORITHM
//To find max-sum sub-array .

#include <iostream>
using namespace std;

int maxSumSubarray(int a[], int n){
    int maxSum = INT_MIN; //int_min is there to produce a sum even when all the elements are negative
    int curSum = 0;

    for(int i=0;i<n;i++){
        curSum = curSum + a[i];
        if(curSum>maxSum){
            maxSum = curSum;
        }
        if(curSum<0){
            curSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int arr[5] = {5, -4, -2, 6, -1};
    cout<<maxSumSubarray(arr, 5);
    return 0;
}
```


