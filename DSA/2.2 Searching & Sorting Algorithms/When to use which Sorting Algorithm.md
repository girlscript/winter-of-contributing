# When to use which Sorting Algorithm



Here in this documentation I will be discussing about various scenarios in which we should use different sorting algorithms. I have tried to discuss the few important points of use case of different sorting algorithms in a nutshell. For detailed study of the mentioned points and comparisons between different sorting algorithms I have included references alongside. I have assumed that you have a basic knowledge of how these algorithms work.

So without any more talk let's get started :-)



### Selection Sort

- When the memory writing is an expensive operation.
- When there is constraint on memory usage.
- When the array size is relatively small.
- When the time constraint is not an issue.
- When the array is unsorted fully (not partially sorted).

*References :* 
*[Selection sort - Wikipedia](https://en.wikipedia.org/wiki/Selection_sort#Comparison_to_other_sorting_algorithms)*
*[Selection Sort: Algorithm explained with Python Code Example (guru99.com)](https://www.guru99.com/selection-sort-algorithm.html#:~:text=The selection sort is best used when you,the values in the list have been checked.)*





### Bubble Sort

- When a very simple and easy to implement sorting algorithm is desired.
- When we need stable sorting (maintaining relative order) is desired.
- When array size is relatively small.
- When the array is partially sorted (semi sorted).
- When time constraint is not a big issue

*References:*
*[Bubble Sort - InterviewBit](https://www.interviewbit.com/tutorial/bubble-sort/#:~:text=1 Application. Bubble sort is mainly used in,occurs when the array is already sorted. )*
*[Selection Sort VS Bubble Sort - GeeksforGeeks](https://www.geeksforgeeks.org/selection-sort-vs-bubble-sort/)*





### Insertion Sort

- When data is already sorted (or nearly sorted).
- When space efficiency is preferred over time.
- When stable sorting is required (relative order is important).
- When the dataset to be operated is of small size.
- When in-place algorithm is needed.

*References :*
*[Insertion Sort - GeeksforGeeks](https://www.geeksforgeeks.org/insertion-sort/)*
*[algorithm - Is there ever a good reason to use Insertion Sort? - Stack Overflow](https://stackoverflow.com/questions/736920/is-there-ever-a-good-reason-to-use-insertion-sort)*





### Merge Sort

- When the dataset to be sorted is large (also useful in Linked List sorting).
- When we need a faster algorithm (time is a major constraint).
- When memory overhead is not a big issue.
- When stability of data is needed with faster implementation.
- When External Sorting method with poor locality of reference is not an issue.

*References :*
*[Merge sort - Wikipedia](https://en.wikipedia.org/wiki/Merge_sort)*
*[Microsoft Word - Merge_Sort_Full_Paper.doc (fit.edu)](https://cs.fit.edu/~pkc/classes/writing/hw13/luis.pdf)*

  

  

### Quick Sort

- When we need good locality of reference.
- When Internal sorting method is preferred.
- When extra memory is a constraint.
- When the dataset size is not very big.
- When stability is not an issue (relative order not important).

*References :*
*[Difference Between Quick Sort and Merge Sort (with Comparison Chart) - Tech Differences](https://techdifferences.com/difference-between-quick-sort-and-merge-sort.html#:~:text=Comparison Chart    Basis for comparison,data set ...  3 more rows )*
*[Quick Sort - javatpoint](https://www.javatpoint.com/quick-sort)*





### Heap Sort

- When we need extreme elements very fast.
- When we need a partially sorted array (if execution stopped abruptly).
- When we need to avoid quicksort worst case.
- When stability is not an issue (relative order not important).
- When memory complexity (extra space) is an issue.

*References :*
*[(11) What are some real life uses of merge sort, insertion sort, quick sort and heap sort algorithms? - Quora](https://www.quora.com/What-are-some-real-life-uses-of-merge-sort-insertion-sort-quick-sort-and-heap-sort-algorithms)*
*[c - In which cases do we use heapsort? - Stack Overflow](https://stackoverflow.com/questions/18163414/in-which-cases-do-we-use-heapsort)*





### Count Sort

- When  the difference between various keys are not very big (less than total items).
- When a very fast sorting algorithm is need (linear running time).
- When overhead space is not an big issue.
- When the keys are relatively small numbers.
- When stability of data is needed with faster implementation.

*References :*
*[The Magic of Counting Sort. And where you should use it! | by Wyatt Happ | Medium](https://medium.com/@wyatt.happ_61481/the-magic-of-counting-sort-5db93adc254b)*
*[When is each sorting algorithm used? - Stack Overflow](https://stackoverflow.com/questions/1933759/when-is-each-sorting-algorithm-used)*





### Radix Sort

- When the biggest integer is shorter than array size.
- When we have fixed range of integers.
- When numbers are not much repeated but their length have same range.
- When stability of data is needed with faster implementation.
- When in comparison predicates are needed for sorting.

*References :*
*[Is radix sort the fastest? – QuickAdviser (quick-adviser.com)](https://quick-adviser.com/is-radix-sort-the-fastest/)*
*[Time and Space complexity of Radix Sort (opengenus.org)](https://iq.opengenus.org/time-and-space-complexity-of-radix-sort/)*





### Bucket Sort

- When the range is much distributed and instead of limited range we have discrete elements .
- When faster implementation is not the top most priority.
- When space overhead is an issue.
- When the elements have a very little variation.
- When we need a stable sorting algorithm.

*References :*
*[(11) When should we use radix sort Counting sort and bucket sort for sorting purpose? - Quora](https://www.quora.com/When-should-we-use-radix-sort-Counting-sort-and-bucket-sort-for-sorting-purpose)*
*[Bucket Sort Algorithm - LearnersBucket](https://learnersbucket.com/tutorials/algorithms/bucket-sort-algorithm/)*





### Table showing Comparison b/w Time Complexities of Various Sorting Algorithms

![image-20211002215306523](C:\Users\kaust\AppData\Roaming\Typora\typora-user-images\image-20211002215306523.png)

*Reference*:  [*sorting_section_solutions.pdf (washington.edu)*](https://courses.cs.washington.edu/courses/cse373/15wi/lectures/sorting_section_solutions.pdf)

