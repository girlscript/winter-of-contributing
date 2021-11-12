# Searching And Sorting Algorithms

The searching algorithms are used to search or find one or more than one element from a dataset. These types of algorithms are used to find elements from specific data structures.

## Types of Searching Algorithms
1. [Linear Search](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2%20Linear%20Search%20and%20Binary%20Search.md#-linear-search-) -  In Linear Search, we perform searching Linearly in the data structure i.e one by one. It could also be performed on an unsorted data set. It is also known as Sequential Search.
Time  Complexity - O(N)
Space Complexity - O(1)

2. [Binary Search](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2%20Linear%20Search%20and%20Binary%20Search.md#binary-search-) - In binary search, the data set must be sorted otherwise it could not be applied. In this technique, we repeatedly divide the data set into subsets of equal length and if the target element is found at the middle it returns it without any need of dividing the data set any further(which is usually the best case for this technique) otherwise traverse to either left of the data set or right.
Time  Complexity - O(logN)
Space Complexity - O(1)


3. [Ternary Search](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.2.1_Ternary_search.md) - This procedure divides the list into three parts using two intermediate mid values. As the lists are divided into more subdivisions, so it reduces the time to search a key value. You can checkout this [Audio File](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/ternary_search.mp3) too
Time  Complexity - O(log3 N)
Space Complexity - O(1)

4. [Interpolation Search](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.6.4%20Interpolation%20search.md) - For the interpolation searching technique, the procedure will try to locate the exact position using the interpolation formula. After finding the estimated location, it can separate the list using that location. As it tries to find the exact location every time, so the searching time reduces. This technique can find items easily if the items are uniformly distributed.
Time  Complexity - O(N)
Space Complexity - O(1)

5. [Jump Search](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Jump_Search.md) - Jump search technique also works for ordered lists. It creates a block and tries to find the element in that block. If the item is not in the block, it shifts the entire block. The block size is based on the size of the list. If the size of the list is n then block size will be √n. 
Time  Complexity - O(√n)
Space Complexity - O(1)

6. [Fibonacci Search](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.6.2%20fibonacci%20search.md) - Fibonacci Search is a comparison-based technique that uses Fibonacci numbers to search an element in a sorted array.
Time  Complexity - O(log n)
Space Complexity - O(1)

## Some Problems Based On Searching Algorithms - 
1. [Binary Search In Infinite Array](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.18_Binary_Search_Infinite_Array.md) 
2. [Overview and Standard Problem On Binary Search](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2_Overview_and_Standard_Problem_On_Binary_Search.md)
3. [Searching In Rotated Array](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2_Searching_In_Rotated_Array.md)
4. [Search in sorted 2D matrix](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Search_in_sorted_2D_matrix.md) 
5. [KMP Algorithm for Searching Video](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/KMP_Algorithm_Video)

Sorting refers to arranging data in a particular format. The sorting algorithm specifies the way to arrange data in a particular order. Most common orders are in numerical or lexicographical order.

## Types of Sorting Algorithms -

1. [Pigeonhole Sort](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.5_Pigeonhole_Sort.md) - This is an example of the non-comparison sorting technique. It is used where the number of items and the range of possible key values are approximately the same.
Time Complexity: O(n+2^k)
Space Complexity: O(2^k)

2. [Insertion Sort](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.7_Insertion_Sort.md) - An element that is to be inserted in this sorted sub-list, has to find its appropriate place, and then it has to be inserted there. Hence the name, insertion sort. Checkout this [Video](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.7_Insertion_Sort_Video.md)
Time Complexity: O(n^2)
Space Complexity: O(1)

3. [Bubble Sort](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Bubble_Sort.md) - This sorting algorithm is a comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order.
Time Complexity: O(n^2)
Space Complexity: O(1)

4. [Merge Sort](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Merge_Sort.md) - Merge sort first divides the array into equal halves and then combines them in a sorted manner. It is based on the Divide And Conquer Technique. You can also check out this [Audio File](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.9_Merge_Sort_Audio.md) and for Video explanation [click here](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.9_Merge_Sort_Video.md).
Time Complexity: O(nlogn)
Space Complexity: O(1)

5. [Selection Sort](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Selection%20Sort%20%20An%20Overview.md) - This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end.
Time Complexity: O(N^2)
Space Complexity: O(1)

6. [Shell Sort](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.11%20Shell_sort.md) - Shell sort is a generalized version of the insertion sort algorithm. It first sorts elements that are far apart from each other and successively reduces the interval between the elements to be sorted.
Time Complexity: O(N^2)
Space Complexity: O(1)

7. [Odd Even Sort](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Odd_Even_Sort_Algorithm.md) - This is basically a variation of bubble-sort. This algorithm is divided into two phases- Odd and Even phases. The algorithm runs until the array elements are sorted and in each iteration, two phases occur- Odd and Even Phases.
Time Complexity: O(N^2)
Space Complexity: O(1)

## Some More content About Sorting Algorithms - 

1. [When To Use which Sorting Algorithm](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/When%20to%20use%20which%20Sorting%20Algorithm.md) - In this document, you can find which sorting Algorithm is best suited for which kind of problem. This will help you a lot while solving problems based on Sorting Algorithms and makes the implementation of concepts a lot easier.
2. [Stability In Sorting Algorithms](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Stability_In_Sorting_Algorithms.md) -  What is Stability, When it is Important, and Which sorting algorithms are Unstable? You can also check out this [Video](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2_Stability_in_Sorting_Algorithms_Video.md)
3. Difference Between Searching and Sorting Algorithms - 
- [Doc 1](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.1.2_Difference_Between_Searching_and_Sorting_Algorithm.md)
- [Doc 2](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/2.2.1.3_Difference_between_Searching_and_Sorting_Algorithms_Video.md)
4. [Pancake Sort Problem](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/Pancake_Sort.md)
5. [DNF Sort Problem](https://github.com/girlscript/winter-of-contributing/blob/DSA/DSA/2.2%20Searching%20%26%20Sorting%20Algorithms/DNF_Sort.md)
