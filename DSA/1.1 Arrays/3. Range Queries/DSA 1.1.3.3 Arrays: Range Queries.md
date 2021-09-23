# Difference Arrays

As we can grab the definition from the name itself “difference array” which says this is a type of array which contains differnece of something.


So the next question arises ,whose difference?


The answer to this is that it consist the difference of the adjacent element present in the original array.So difference array is the array which contains the difference of the adjacentelements of the former array to which it belongs or from where it is extracted

It is the inverse of prefix sum array where we need to add the adjacent elements of the original array.

## Prefix Sum Array  Code structure:-

```
void prefix_sum_array(int c, int* A, int n, int* P)
{
    P[0] = c;
    for (int i = 0; i < n; i++)
        P[i+1] = P[i] + A[i];
}

```


