# Documentation on Linear and Binary Search

<br>

## Problem: 
Given an array arr[] of n elements, write a function to search a given element 'x' in arr[] by 2 mechanisms :
1. Linear Search
2. Binary Search

<br>

## Approach:

* **Linear Search** 

   1. Start from the leftmost element of arr[].

   2. Compare x with each element of arr[].

   3. If x matches with an element, return the index.

   4. If x doesn’t match with any of elements, return -1.

    ```C++
    #include <iostream>
    using namespace std;
 
    int search(int arr[], int n, int x){
        int i;
        for (i = 0; i < n; i++)
            if (arr[i] == x)
                return i;
        return -1;
    }
 
    int main(){
        int arr[] = { 2, 3, 6, 20, 11 };
        int x = 10;
        int n = 5;
        int result = search(arr, n, x);
        if(result == -1)
            cout << "Element is not present in array";
        else
             cout << "Element is present at index " << result;
        return 0;
    }
    ```

    <br>

* **Binary Search**

   Condition : Only applicable to sorted arrays.

    1. Compare x with the middle element.

    2. If x matches with the middle element, return the mid index.

    3. Else If x > mid element, search in the right half.

    4. Else  search in the left half.

    ```C++
    #include <bits/stdc++.h>
    using namespace std;
  
    int binarySearch(int arr[], int l, int r, int x){
        while (l <= r) {
            int m = l + (r - l) / 2;

            if (arr[m] == x)
                return m;      //middle element

            if (arr[m] < x)
                l = m + 1;     //left half

            else
                r = m - 1;     //right half
        }

        return -1;  //element not prsent  
    }
  
    int main(){
        
        int arr[] = { 9, 3, 4, 22, 7 };
        int x = 10;
        int n = 5;
        int result = binarySearch(arr, 0, n - 1, x);
        if(result == -1) 
            cout << "Element is not present in array"
        else
            cout << "Element is present at index " << result;
        return 0;
    }
    ```

<br>

## Complexity Analysis

1.  Linear Search

    Time Complexity: O(n)

    Space complexity: O(1)

2. Binary Search

   Time Complexity: O(log n)

   Space complexity: O(1)

<br>

## Major Differences

* Input data must be in sorted order for Binary Search and not in Linear Search.

* Linear search attempts a sequential access whereas Binary search access data randomly.

* Time complexity of binary search is better than that of linear search as it cuts down on the number of comparisons.

* Linear search performs equality comparisons and Binary search performs ordering comparisons

<br>

## References

* https://www.geeksforgeeks.org/linear-search-vs-binary-search/