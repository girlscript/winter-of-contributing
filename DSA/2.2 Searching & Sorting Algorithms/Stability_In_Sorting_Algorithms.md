# Stability In Sorting Algorithms

<hr>

### What do you mean by stability in sorting algorithms? 

Sorting stability means that records with the same key retain their relative order before and after the sort.

The stability of a sorting algorithms is concerned with how the algorithm treats equal (or repeated) elements. A sorting algorithm is said to be stable if two objects with equal keys appear in the same order in sorted output as they appear in the input array to be sorted (unsorted array). 

These preserve the relative order of equal elements of the input set, meaning that stable sorting maintains the position of two equals elements relative to one another. One application for stable sorting algorithms is sorting a list using a primary and secondary key. 

Formal definition of stability of sorting algorithms :-  
Let A be a collection/array of elements and '<' be a strict weak ordering on the elements.  
Further, let B be the collection of elements in A in the sorted order.  
Let’s consider two equal elements in A at indices i and j, i.e, A[i] and A[j], that end up at indices m and n respectively in B. We can classify the sorting as stable if:

i < j and A[i] = A[j] and m < n

<hr>

### Examples

Example 1 :

![image](https://user-images.githubusercontent.com/54130460/136535280-15e0c01a-4e0a-4f5a-a698-f0ba0ec8c177.png)


Example 2 :

Original Array

    (Chun, B)  
    (Ro, A)  
    (Dave, A)  

If we sort by 2nd value  

Stable Sorting Algorithm

    (Ro, A)  
    (Dave, A)  
    (Chun, B)  

Unstable Sorting Algorithm

    (Dave, A)  
    (Ro, A)  
    (Chun, B)  

>Note : An unstable sorting algorithm may or may not produce the same collection as the stable sorting algorithm. In the given examples we have shown only 1 result for the understanding of the concept.
>In example two an unstable sorting algorithm may also produce following results in some cases or for some algorithms.  
>    (Ro, A)  
>    (Dave, A)  
>    (Chun, B)

### When stability is important ?

- In numeric collections where both the elements are exactly equal (as in example 1) or if all the keys are equal, the stability of the algorithm may not be important.   
- But in cases where we have different key value pairs, or tuples, or a collection as an item and we need to sort by a particular field (like with 2nd field in example2), in these cases the Stability of the sorting algorithm being used holds importance.


### Which sorting algorithms are unstable?

- Some Sorting Algorithms like Bubble Sort are by default stable based on their idea of sorting and working.
- Some algorithms like Merge Sort and Insertion Sort which are Comparison based algorithms maintain stability by ensuring that elements maintain order during implementation taking care for the equal elements and only placing A[i] before A[j] when A[i] is strictly less than A[j].
- Non comparison based algorithms like Counting sort are stable by ensuring that the Sorted Array is filled in a reverse order so that elements with equivalent keys have the same relative position.
- Unstable sorting algorithms include Heap sort, selection sort, quick sort are unstable. But unstable algorithms can be made stable as discussed in next section.

| Stable Sorting Algorithms | Unstable Sorting Algorithms
|---------------------------|---------------------------|
|Insertion Sort  | Heap sort |
|Merge Sort | Selection sort |
| Bubble Sort | Shell sort |
| Tim Sort | Quick sort |
| Counting Sort | Intro sort |
| Block Sort | Tree sort |
| Quadsort | Cycle sort |
| Library Sort | Smooth sort |
| Cocktail shaker Sort | Tournament sort |
| Gnome Sort |  
| Odd–even Sort | 

### How can you make them stable?

Unstable sorting algorithms can be specially implemented and modified to be stable while not compromising a lot on the performance and taking some extra space. The price of making an unstable algorithm to stable is atmost Θ(n) extra space, and moderately increased running time (less than doubled). 

There can be sorting algo specific ways to make it stable, but in general comparison based algorithms can be made stable by artificially extending the key comparison to also consider the current position of the elements and also remember their order. For example Quick Sort, Heap Sort etc. can be stabilized by also taking the position of the elements into consideration during the comparisons.

In programming languages there are implemented stable efficient sorting algorithms.
- The C++ standard library provides a choice between a stable sorting
template function stable_sort(), and a (presumably faster) nonstable sorting template function sort().
- The Java library (class java.util.Arrays) provides static
methods for sorting objects, that are guaranteed to be stable. 
- sort() function of Python language also garuntees stable sorting of the collection.

### References
https://www.geeksforgeeks.org/stability-in-sorting-algorithms/  
https://www.javatpoint.com/daa-stable-sorting  
https://stackoverflow.com/questions/1517793/what-is-stability-in-sorting-algorithms-and-why-is-it-important  
https://www.baeldung.com/cs/stable-sorting-algorithms  
https://en.wikipedia.org/wiki/Sorting_algorithm#Stability  
http://homepages.math.uic.edu/~leon/cs-mcs401-s08/handouts/stability.pdf  
https://docs.python.org/3/howto/sorting.html
