# When to use which Sorting Algorithm



Here in this documentation I will be discussing about various scenarios in which we should use different sorting algorithms. Let's get started !



### Selection Sort

- When the memory writing is an expensive operation.
- When there is constraint on memory usage.
- When the array size is relatively small.
- When the time constraint is not an issue.
- When the array is unsorted fully (not partially sorted).



### Bubble Sort

- When a very simple and easy to implement sorting algorithm is desired.
- When we need stable sorting (maintaining relative order) is desired.
- When array size is relatively small.
- When the array is partially sorted (semi sorted).
- When time constraint is not a big issue.



### Insertion Sort

- When data is already sorted (or nearly sorted).
- When space efficiency is preferred over time.
- When stable sorting is required (relative order is important).
- When the dataset to be operated is of small size.
- When in-place algorithm is needed.



### Merge Sort

- When the dataset to be sorted is large.
- When we need a faster algorithm (time is a major constraint).
- When memory overhead is not a big issue.
- When stability of data is needed with faster implementation.
- When External Sorting method with poor locality of reference is not an issue.

  

### Quick Sort

- When we need good locality of reference.
- When Internal sorting method is preferred.
- When extra memory is a constraint.
- When the dataset size is not very big.
- When stability is not an issue (relative order not important).



### Heap Sort

- When we need extreme elements very fast.
- When we need a partially sorted array (if execution stopped abruptly).
- When we need to avoid quicksort worst case.
- When stability is not an issue (relative order not important).
- When memory complexity (extra space) is an issue.



### Count Sort

- When  the difference between various keys are not very big (less than total items).
- When a very fast sorting algorithm is need (linear running time).
- When overhead space is not an big issue.
- When the keys are relatively small numbers.
- When stability of data is needed with faster implementation.



### Radix Sort

- When the biggest integer is shorter than array size.
- When we have fixed range of integers.
- When numbers are not much repeated but their length have same range.
- When stability of data is needed with faster implementation.
- When in comparison predicates are needed for sorting.



### Bucket Sort

- When the range is much distributed and instead of limited range we have discrete elements .
- When faster implementation is not the top most priority.
- When space overhead is an issue.
- When the elements have a very little variation.
- When we need a stable sorting algorithm.



