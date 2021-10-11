# Majority Element


## Table of Contents
- [Overview](#overview)
- [Example](#example)
- [Solution](#solution)
    - [Naive or Brute Force Approach](#naive-or-brute-force-approach)
        - [Approach](#approach-naive)
        - [Implementaion](#implementation-naive)
        - [Complexity Analysis](#complexity-analysis-naive)
    - [Efficient Approach](#efficient-approach)
        - [Approach](#approach-efficient)
        - [Implementation](#implementation-efficient)
        - [Complexity Analysis](#complexity-analysis-efficient)


## Overview
    Given an array A of N elements. Find the majority element in the array. A majority element in an array A 
    of size N is an element that appears more than N/2 times in the array.

## Example
    Input:
            N = 5
            arr[] = {3,1,3,3,2}
    Output:
            3


## Solution
### Naive-or-Brute-Force-Approach
#### Approach-(Naive)
    Using Two Loops and calculating for each element, which one is occuring more than N/2 times.

#### Implementation-(Naive)
        int majorityElement(int arr[], int n)
        {
            for (int i = 0; i < n; i++)
            {
                int count = 0;
                for (int j = 0; j < n; j++)
                {
                    if (arr[i] == arr[j])
                        count++;
                }
                if (count > n / 2)
                    return arr[i];
            }
            return -1;
        }

#### Complexity-Analysis-(Naive)
    Time Complexity : O(n*n)
        - Using two loops
    Space Complexity : O(1)
        - No auxillary space needed

### Efficient-Approach
#### Approach-(Efficient)
    Using Boyer - Moore's Voting Algorithm:
        - It works in two phases:
            The first phase garantees that if there is a majority element in the array, then this candidate 
            that first phase finds out is going to be majority element.
            The second phase checks whether the candidate found out by the first phase is actually a majority 
            element or not. The need of the second phase is when there is not majority element in the array.

#### Implementation-(Efficient)
        int majorityElement(int arr[], int n)
        {
            int res = 0, count = 1;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] == arr[res])
                    count++;
                else
                    count--;
                if (count == 0)
                {
                    res = i;
                    count = 1;
                }
            }
            count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == arr[res])
                    count++;
            }
            if (count <= n / 2)
                return -1;
            return arr[res];
        }

#### Complexity-Analysis-(Efficient)
    Time Complexity : O(n)
        - Using two traversals
    Space Complexity : O(1)
        - No auxillary space needed