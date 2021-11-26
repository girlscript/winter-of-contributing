# Equilibrium Index
It is associate degree index into the sequence such the add of parts at lower indices is adequate the add of parts at higher indices.

## Statement:

For associate degree array A containing n parts, index i is associate degree equilibrium index if the add of the weather of the subarray A[0…i-1] is adequate the add of the weather of the subarray A[i+1…n-1] . In different words

`(A[0] + A[1] + … + A[i-1]) = (A[i+1] + A[i+2] + … + A[n-1]), wherever 0 < i < n-1`

Here,
zero is associate degree equilibrium index if A[1] + A[2] + … + A[n-1] sums to zero associate degreed n-1 is an equilibrium index if A[0] + A[1] + … + A[n-2] sums to zero.
For example, think about the array . . The equilibrium index is found at index zero, 3, and 7

In different words, the equilibrium index of associate degree array is outlined as associate degree index i that|during which|within which} the add of the weather at indices but i is adequate the add of the weather at indices which is bigger than i.

Element at index i isn't enclosed in either half as we all know that and it's expressed that if quite one equilibrium index is gift, we'd like to come back the primary one. Also, come back -1 if no equilibrium index is gift

### Linear-time Solution

We will solve this drawback in linear time by victimization further house.
The basic plan is to make associate degree auxiliary array left[], wherever left[i] stores a add of parts of the subarray A[0…i-1]. once left[] is crammed, traverse the array from right to left and update them right subarray add for every part encountered. Now, if the add of parts of the left subarray A[0…i-1] is adequate the add of parts of the proper subarray A[i+1…n) for part A[i], we've got found the equilibrium index at i.

### Implementation of the on top of approach 


```cpp

#include <stdio.h>

// operate to search out the equilibrium index of associate degree array void find Equilibrium Index(int A[], int n) 
    can stores the add of parts of subarray `A[0…i-1]`

{

int left[n];
 
left[0] = 0;

// Here now we are traverseing the array from left to right
for (int i = 1; i < n; i++) {
     left[i] = left[i - 1] + A[i - 1];
}

// here `right` stores the add of parts of subarray `A[i+1…n)`
int right = 0;

//Now we will do traverseing the array from right to left
for (int i = n - 1; i >= 0; i--)
 {
       
        
     /* If the sum of elements of subarray `A[0…i-1]` is equal to
        the sum of elements of the subarray `A[i+1…n)` i.e.
        `(A[0] + A[1] + … + A[i-1])` = `(A[i+1] + A[i+2] + … + A[n-1])`
     */

 if (left[i] == right) {
            printf("Equilibrium Index found at %d\n", i);
        }

// currently we've got the new right that is `A[i] + (A[i+1] + A[i+2] + … + A[n-1])`
right += A[i];
  }
}

int main(void)
{
    int A[] = { 0, -3, 5, -4, -2, 3, 1, 0 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findEquilibriumIndex(A, n);
 
    return 0;
}

```

### Output:

```
Equilibrium Index found at 7
Equilibrium Index found at 3
Equilibrium Index found at 0
```

**time complexity:** O(n) and it'll needs O(n) further house.

Thanks for reading
