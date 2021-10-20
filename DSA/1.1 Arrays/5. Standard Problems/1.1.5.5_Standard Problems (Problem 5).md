## Problem Name

Find the least average subarray in a given array.

## Problem Statement

You have given an integer array and a number k. The problem statement asks to find the subarray with least average, which is to find out the sub-array of k elements, which has the minimum average.

## Examples
### Input
```
arr[] = {12, 34, 20, 30, 24, 45}
k = 3
```

### Output
```
Sub-Array of [0, 2] has a minimum average.
```

### Explanation
```
12,34,20 is the subarray of size k(=3) which has least average among all possible sub-arrays.
```

### Input
```
arr[] = {42, 20, 15, 26, 10, 33}; k = 3
```

### Output
```
Sub-Array of [2, 4] has a minimum average.
```

### Explanation
```
15,26,10 is the subarray of size k(=3) which has least average among all possible sub-arrays.
```

## Naive Approach
Consider every element as the starting element of the subarray and calculate sum till next k element from that element. The subaaray with least sum is the required subarray.Time complexity of this method will be O(nk).

## Efficient Approach
A better approach is to use sliding window. First traverse and calculate sum till kth index. Then starting from k, traverse the rest of the array and keep subtracting the first element of the subarray from the sum and add current element in it. Keep udating the leastsum and after traversing the array, we have the least sverage subarray.

## Algorithm
1. Set begin and sum to 0.
2. Traverse the array up to the k, and keep storing the sum of all array elements into the sum.
3. Set leastSum to sum.
4. Traverse the array starting from i=k till i<n.
    1. Get the addition of arr[i] - arr[i-k] and update the value of sum and update it into the sum.
    2. Check if the sum is less than leastSum, if true then update the leastSum to sum and update begin to i-k+1.
5. Print begin and begin+k-1.

## Java Code
```
class MinimumAverageSubArray {
    public static void getMinimumAvgSubarray(int arr[], int n, int k) {
        if (n < k) {
            // If size of subarray is larger than the array size.
            return;
        }

        int begin = 0;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            // Sum of the first k elements
            sum += arr[i];
        }
        int leastSum = sum;
        for (int i = k; i < n; i++) {
            // updating sum of the subarray
            sum += arr[i] - arr[i - k];
            if (sum < leastSum) {
                // Updating leastsum and begin variable when subarray with less sum is found
                leastSum = sum;
                begin = (i - k + 1);
            }
        }
        // Printing out the result
        System.out.println("Subarray between [" + begin + ", " + (begin + k - 1) + "] has minimum average");
    }

    public static void main(String[] args) {
        //Driver Code
        int arr[] = { 12, 34, 20, 30, 24, 45 };
        int k = 3;
        getMinimumAvgSubarray(arr, arr.length, k);
    }
}
```
## Time Complexity
Time coplexity of the efficient approach will be **O(n)** because we are traversing the whole array once to find the subarray with least average.
### Sources
[Geeksforgeeks](https://www.geeksforgeeks.org/find-subarray-least-average/)
[TutorialCup](https://www.tutorialcup.com/interview/array/find-the-subarray-with-least-average.htm)

### Contributed by Rahul Jaiswal
