# Two sorted Arrays without extra space

## Problem Statement

Given two sorted arrays, we need to merge them in O((n+m)\*log(n+m)) time with O(1) extra space into a sorted array, when n is the size of the first array, and m is the size of the second array.

### EXAMPLE

Input: ar1[] = {25};
ar2[] = {20, 34};
Output: ar1[] = {20}
ar2[] = {25, 34}

Input: ar1[] = {1, 5, 9, 10, 15, 20};
ar2[] = {2, 3, 8, 13};
Output: ar1[] = {1, 2, 3, 5, 8, 9}
ar2[] = {10, 13, 15, 20}

### ALGORITHM

We start comparing elements that are far from each other rather than adjacent.
For every pass, we calculate the gap and compare the elements towards the right of the gap. Every pass, the gap reduces to the ceiling value of dividing by 2.

### C++ Programm code of the Problem

```cpp
// Merging two sorted arrays with O(1) extra space
#include <bits/stdc++.h>
using namespace std;

// Function to find next gap.
int findGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

void ans(int* a1, int* a2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = findGap(gap);
         gap > 0; gap = findGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (a1[i] > a1[i + gap])
                swap(a1[i], a1[i + gap]);

        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (a1[i] > a2[j])
                swap(a1[i], a2[j]);

        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (a2[j] > a2[j + gap])
                    swap(a2[j], a2[j + gap]);
        }
    }
}

// Driver code
int main()
{
    int arr1[] = { 10, 27, 38, 43, 82 };
    int arr2[] = { 3, 9 };
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    // Function Call
    ans(arr1, arr2, n, m);

    printf("First Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\nSecond Array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}
```

**Input**

```
First Array - { 10, 27, 38, 43, 82 }
Second Array - { 3, 9 }
```

**Output**

```
First Array - { 3, 9, 10, 27, 28 }
Second Array - { 43, 82 }
```

**COMPLEXITY**

```
Time Complexity - O(n log n)
Space complexity - O(1)
```
