# An equilibrium index 
It is an index into the sequence such that the sum of elements at lower indices is equal to the sum of elements at higher indices.

## Statement: 
For an array A containing n elements, index i is an equilibrium index if the sum of the elements of the subarray A[0…i-1] is equal to the sum of the elements of the subarray A[i+1…n-1] . In other words

(A[0] + A[1] + … + A[i-1]) = (A[i+1] + A[i+2] + … + A[n-1]), where 0 < i < n-1

Similarly,
 0 is an equilibrium index if A[1] + A[2] + … + A[n-1] sums to 0 and n-1 is an equilibrium index if A[0] + A[1] + … + A[n-2] sums to 0.

 
For example, consider the array {0, -3, 5, -4, -2, 3, 1, 0}. . The equilibrium index is found at index 0, 3, and 7

In other words, the equilibrium index of an array is an index i such that the sum of the elements at indices less than i is equal to the sum of the elements at indices greater than i.
Element at index i is not included in either part as we know that and it is stated that if more than one equilibrium index is present, you need to return the first one. Also, return -1 if no equilibrium index is present

### Linear-time Solution
We will solve this problem in linear time by using extra space. 
The idea is to create an auxiliary array left[], where left[i] stores a sum of elements of the subarray A[0…i-1]. After left[] is filled, traverse the array from right to left and update them right subarray sum for each element encountered. Now, if the sum of elements of the left subarray A[0…i-1] is equal to the sum of elements of the right subarray A[i+1…n) for element A[i], we have found the equilibrium index at i.

### implementation of the above approach in C language

```

#include <stdio.h>
 
// Function to find the equilibrium index of an array
void findEquilibriumIndex(int A[], int n)
{
    // here `left[i]` stores the sum of elements of subarray `A[0…i-1]`
    int left[n];
 
    left[0] = 0;
 
    // traverseing the array from left to right
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] + A[i - 1];
    }
 
    // `right` stores the sum of elements of subarray `A[i+1…n)`
    int right = 0;
 
    // traverseing the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        /* If the sum of elements of subarray `A[0…i-1]` is equal to
           the sum of elements of the subarray `A[i+1…n)` i.e.
           `(A[0] + A[1] + … + A[i-1])` = `(A[i+1] + A[i+2] + … + A[n-1])`
        */
 
        if (left[i] == right) {
            printf("Equilibrium Index found at %d\n", i);
        }
 
        // new right is `A[i] + (A[i+1] + A[i+2] + … + A[n-1])`
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

Equilibrium Index found at 7
Equilibrium Index found at 3
Equilibrium Index found at 0

**time complexity:** O(n) and requires O(n) extra space.

Thanks for reading 