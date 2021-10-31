# Missing And Repeating Numbers in Array

## Problem Statement

Given an array arr[] of size n which have some missing and repeating numbers. Our task is to find that number.

### EXAMPLE

Input => {1,2,3,3,4,6,7,8}
Output => {3,5}
Here we have 3 as repeating number and 5 as missing number.

### ALGORITHM

1. Let a & b be the desired output elements.
2. We have to calculate XOR of all the array elements.

   xor1 = arr[0]^arr[1]^arr[2]........arr[n-1]

3. XOR the results with all numbers from 1 to n.

   xor1 = xor1^1^2^........^n

4. In the result xor1, all elements would nullify each other except a and b. All the bits that are set in xor1 will be set in either a or b. So if we take any set bit (We have chosen the rightmost set bit in code) of xor1 and divide the elements of the array in two sets – one set of elements with same bit set and other set with same bit not set. By doing so, we will get a in one set and b in another set. Now if we do XOR of all the elements in first set, we will get a, and by doing same in other set we will get b.

### C++ Programm code of the Problem

```cpp
#include <bits/std++.h>
using namespace std;

/* The output of this function is stored at
*x and *y */

void gtw(int arr[], int n, int* a, int* b)
{
    /* Will hold xor of all elements
    and numbers from 1 to n */
    int xor1;

    /* Will have only single set bit of xor1 */

    int set_bit_no;

    int i;
    *a = 0;
    *b = 0;

    xor1 = arr[0];

    /* Get the xor of all array elements */

    for(i=0;i<=n;i++>)
    {
        xor1 = xor1 ^ i;
    }

    /* XOR the previous result with numbers
    from 1 to n*/

    for (i = 1; i <= n; i++)
    {
        xor1 = xor1 ^ i;
    }

    /* Get the rightmost set bit in set_bit_no */

    set_bit_no = xor1 & (xor1 - 1);

    /* Now divide elements into two
    sets by comparing a rightmost set
    bit of xor1 with the bit at the same
    position in each element. Also,
    get XORs of two sets. The two
    XORs are the output elements.
    The following two for loops
    serve the purpose */

    for (i=0; i<n; ++)
    {
        if (arr[i] & set_bit_no)

            /* arr[i] belongs to first set */

            *a = *a ^ arr[i];

        else

            /* arr[i] belongs to second set*/

            *b = *b ^ arr[i];
    }
    for (i=1; i<=n; i++)
    {
        if (i & set_bit_no)
            /* i belongs to first set */
            *a = *a ^ i;

        else
            /* i belongs to second set*/
            *b = *b ^ i;
    }
    /* *a and *b hold the desired
        output elements */
}

/* Driver code */
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
```

**Input**

```
7
{ 1, 3, 4, 5, 5, 6, 2 }
```

**Output**

```
{5, 7}
```

**COMPLEXITY**

```
**Time Complexity** - O(n)
**Space complexity** - O(n)
```
