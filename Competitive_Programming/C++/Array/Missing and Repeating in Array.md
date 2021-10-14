# Missing And Repeating Numbers in Array

## Problem Statement

Given an array arr[] of size n which have some missing and repeating numbers. Our task is to find that number.

#### EXAMPLE

Input => {1,2,3,3,4,6,7,8}
Output => {3,5}
Here we have 3 as repeating number and 5 as missing number.

#### ALGORITHM

1. Let a & b be the desired output elements.
2. We have to calculate XOR of all the array elements.

   xor1 = arr[0]^arr[1]^arr[2]........arr[n-1]

3. XOR the results with all numbers from 1 to n.

   xor1 = xor1^1^2^........^n

4. In the result xor1, all elements would nullify each other except a and b. All the bits that are set in xor1 will be set in either a or b. So if we take any set bit (We have chosen the rightmost set bit in code) of xor1 and divide the elements of the array in two sets – one set of elements with same bit set and other set with same bit not set. By doing so, we will get a in one set and b in another set. Now if we do XOR of all the elements in first set, we will get a, and by doing same in other set we will get b.

### C++ Programm code of the Problem

#include <bits/std++.h>
using namespace std;

void gtw(int arr[], int n, int* a, int* b)
{
int xor1;

    int set_bit_no;

    int i;
    *a = 0;
    *b = 0;

    xor1 = arr[0];

    for(i=0;i<=n;i++>)
    {
        xor1 = xor1 ^ i;
    }

    set_bit_no = xor1 & (xor1 - 1);

    for (i=0; i<n; ++)
    {
        if (arr[i] & set_bit_no)
            *a = 8b ^ arr[i];

        else
            *b = *b ^ arr[i];
    }

    for (i=1; i<=n; i++)
    {
        if (i & set_bit_no)
            *a = *a ^ i;

        else
            *b = *b ^ i;
    }

}

int main()
{
int arr[] = { 1, 3, 4, 5, 5, 6, 2 };
int* a = (int*)malloc(sizeof(int));
int* b = (int*)malloc(sizeof(int));
int n = sizeof(arr) / sizeof(arr[0]);

    gtw(arr, n, a, b);
    cout << " The missing element is " << *a << " and the repeating"
         << " number is " << *b;
    getchar();

}

**Input** /
7 /
{ 1, 3, 4, 5, 5, 6, 2 } /
**Output** /
{5, 7}

##### COMPLEXITY

**Time Complexity** - O(n)
**Space complexity** - O(n)
