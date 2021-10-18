# When to use which Sorting Algorithm :octocat:
Here in this documentation I will be discussing about various scenarios in which we should use different sorting algorithms. I have tried to discuss the few important points of use case of different sorting algorithms in a nutshell. For detailed study of the mentioned points and comparisons between different sorting algorithms I have included  references alongside. I have assumed that you have a basic knowledge of how these algorithms work.
So without any more talk let's get started :-)

# Selection Sort
- When the memory writing is an expensive operation.
- When there is constraint on memory usage.
- When the array size is relatively small.
- When the time constraint is not an issue.
- When the array is unsorted fully (not partially sorted).
# PseudoCode:
```Java
procedure Selection_sort(int Arr):
     for i=0 to length(Arr):
     Minimum_element  = Arr[0]
           for each unsorted element:
                   if element < Minimum_element
           element = New_minimum
      swap (Minimum_element, first unsorted position)
end Selection_sort
```
**Reason :** <br> Lets see why is it so. first of all the main reason of the the above reasons is the time complexity of O(n^2) which makes it inefficient on large lists, and generally performs worse than the insertion sort.<br> So its is suitable for smaller size arrays.  Moreover the maximum number of swaps are n-1 which is useful when memory writing is costly.<br> It is better than insertion sort in terms of memory writing operations. Moreover as it is quadratic sorting algorithm and is greatly outperformed by Algorithms having less time complexities like merge sort or heaps sort.

**References :** <br>
*[Selection sort - Wikipedia](https://en.wikipedia.org/wiki/Selection_sort#Comparison_to_other_sorting_algorithms)* <br>
*[Selection Sort: Algorithm explained with Python Code Example (guru99.com)](https://www.guru99.com/selection-sort-algorithm.html#:~:text=The selection sort is best used when you,the values in the list have been checked.)*

# Bubble Sort

- When a very simple and easy to implement sorting algorithm is desired.
- When we need stable sorting (maintaining relative order) is desired.
- When array size is relatively small.
- When the array is partially sorted (semi sorted).
- When time constraint is not a big issue
# PseudoCode:
```Java
bubbleSort( Arr[], totat_elements)
   
   for i = 0 to total_elements - 1 do:
      swapped = false
		
      for j = 0 to total_elements - i - 2 do:
      
         /* compare the adjacent elements */   
         if Arr[j] > Arr[j+1] then
            /* swap them */
            swap(Arr[j], Arr[j+1])		 
            swapped = true
         end if
         
      end for
      
      /*if no number was swapped that means 
      array is sorted now, break the loop.*/
      
      if(not swapped) then
         break
      end if
      
   end for
   
end
```
**Reason :** <br> As it is also  a quadratic sorting algorithm, having time complexity of  O(n^2) so this is also implemented when time is not a big issue. Moreover as it checks and swaps adjacent elements always so the relative order of array elements is always preserved making it a stable algorithm as compared to the previous one like Selection sort. Also as it swaps adjacent pairs so maximum number of swaps are n*(n-1)/2 which is the reason why it works better in case of partially sorted arrays due to lesser number of swpas required/

**References:** <br>
*[Bubble Sort - InterviewBit](https://www.interviewbit.com/tutorial/bubble-sort/#:~:text=1 Application. Bubble sort is mainly used in,occurs when the array is already sorted. )* <br>
*[Selection Sort VS Bubble Sort - GeeksforGeeks](https://www.geeksforgeeks.org/selection-sort-vs-bubble-sort/)*
# Insertion Sort

- When data is already sorted (or nearly sorted).
- When space efficiency is preferred over time.
- When stable sorting is required (relative order is important).
- When the dataset to be operated is of small size.
- When in-place algorithm is needed.
# PseudoCode:
```Java
procedure insertionSort( A : array of items )
   int holePosition
   int valueToInsert
	
   for i = 1 to length(A) inclusive do:
	
      /* select value to be inserted */
      valueToInsert = A[i]
      holePosition = i
      
      /*locate hole position for the element to be inserted */
		
      while holePosition > 0 and A[holePosition-1] > valueToInsert do:
         A[holePosition] = A[holePosition-1]
         holePosition = holePosition -1
      end while
		
      /* insert the number at hole position */
      A[holePosition] = valueToInsert
      
   end for
	
end procedure
```

**Reason :** <br> This is the third sorting algorithm in the category of quadratic sorting algorithm, having time complexity of O(n^2). Insertion sort is the meither main choice when the data is nearly sorted (because it is more adaptive) or when the data/array size is small (because it has low overhead). For these reasons, and because moreover it is also stable, it is mostly used as the recursive base case (when the problem size is small) for higher overhead divide-and-conquer sorting algorithms, such as merge sort or quick sort.

**References :** <br>
*[Insertion Sort - GeeksforGeeks](https://www.geeksforgeeks.org/insertion-sort/)* <br>
*[algorithm - Is there ever a good reason to use Insertion Sort? - Stack Overflow](https://stackoverflow.com/questions/736920/is-there-ever-a-good-reason-to-use-insertion-sort)*
# Merge Sort

- When the dataset to be sorted is large (also useful in Linked List sorting).
- When we need a faster algorithm (time is a major constraint).
- When memory overhead is not a big issue.
- When stability of data is needed with faster implementation.
- When External Sorting method with poor locality of reference is not an issue.
# PseudoCode:
```Java
procedure mergesort( var a as array )
   if ( n == 1 ) return a

   var l1 as array = a[0] ... a[n/2]
   var l2 as array = a[n/2+1] ... a[n]

   l1 = mergesort( l1 )
   l2 = mergesort( l2 )

   return merge( l1, l2 )
end procedure

procedure merge( var a as array, var b as array )

   var c as array
   while ( a and b have elements )
      if ( a[0] > b[0] )
         add b[0] to the end of c
         remove b[0] from b
      else
         add a[0] to the end of c
         remove a[0] from a
      end if
   end while
   
   while ( a has elements )
      add a[0] to the end of c
      remove a[0] from a
   end while
   
   while ( b has elements )
      add b[0] to the end of c
      remove b[0] from b
   end while
   
   return c
	
end procedure
```

**Reason :** <br> One of the most famous sorting algorithm and my favorite. It has a time complexity of O(n log n) making it much faster then the above three sorting algorithms. It uses a divide and conquer strategy and hence therefore requires extra space to be implemented.  It also produces a stable algorithm. Due to divide and conquer strategy it is an optimum algorithm for sorting Linked List data structure. Due to its lower time complexity and simple divide and conquer algorithm its mostly applicable in all types of datasets.

**References :** <br>
*[Merge sort - Wikipedia](https://en.wikipedia.org/wiki/Merge_sort)* <br>
*[Microsoft Word - Merge_Sort_Full_Paper.doc (fit.edu)](https://cs.fit.edu/~pkc/classes/writing/hw13/luis.pdf)*
# Quick Sort

- When we need a faster sorting algorithm with good locality of reference.
- When Internal sorting method is preferred.
- When extra memory is a constraint.
- When the dataset size is not very big.
- When stability is not an issue (relative order not important).
# PseudoCode:
```Java
function partitionFunc(left, right, pivot)
   leftPointer = left
   rightPointer = right - 1

   while True do
      while A[++leftPointer] < pivot do
         //do-nothing            
      end while
		
      while rightPointer > 0 && A[--rightPointer] > pivot do
         //do-nothing         
      end while
		
      if leftPointer >= rightPointer
         break
      else                
         swap leftPointer,rightPointer
      end if
		
   end while 
	
   swap leftPointer,right
   return leftPointer
	
end function
```
**Reason :** <br>It is similar algorithm to Merge Sort having divide and conquer approach. When implemented well it can be even faster than Merge sort and a lot faster than Heap sort.  But in worst cast its time complexity becomes quadratic and it can perform worse than Merge Sort. That's why its not much frequently used. As it is in-place sorting algorithm like insertion sort but also with less time like Merge sort hence it is used along with merge sort in implementing Library Sorting functions of various languages. It has better locality of reference than its neighbors Merge sort and Heap sort.

**References :** <br>
*[Difference Between Quick Sort and Merge Sort (with Comparison Chart) - Tech Differences](https://techdifferences.com/difference-between-quick-sort-and-merge-sort.html#:~:text=Comparison Chart    Basis for comparison,data set ...  3 more rows )* <br>
*[Quick Sort - javatpoint](https://www.javatpoint.com/quick-sort)*

# Heap Sort

- When we need extreme elements very fast.
- When we need a partially sorted array (if execution stopped abruptly).
- When we need to avoid quicksort worst case.
- When stability is not an issue (relative order not important).
- When memory complexity (extra space) is an issue.
# PseudoCode:
```Java
Heapsort(A) {
   BuildHeap(A)
   for i <- length(A) downto 2 {
      exchange A[1] <-> A[i]
      heapsize <- heapsize -1
      Heapify(A, 1)
}



BuildHeap(A) {
   heapsize <- length(A)
   for i <- floor( length/2 ) downto 1
      Heapify(A, i)
}




Heapify(A, i) {
   le <- left(i)
   ri <- right(i)
   if (le<=heapsize) and (A[le]>A[i])
      largest <- le
   else
      largest <- i 
   if (ri<=heapsize) and (A[ri]>A[largest])
      largest <- ri
   if (largest != i) {
      exchange A[i] <-> A[largest]
      Heapify(A, largest)
   }
}
```

**Reason :** <br> Its main competitor is the quicksort algorithm discussed above. Heapsort's primary advantages are its simple, non-recursive code, minimal auxiliary storage requirement, and reliably good performance: its best and worst cases are within a small constant factor of each other. This algorithm  cannot do better than *O*(*n* log *n*) for pre-sorted inputs, but it does not suffer from quicksort's *O*(*n*2) worst case which makes its implementation a little tricky. Due its poor locality of reference not  much famous. As it use the property of heaps to sort elements so getting extreme elements is very easy.

**References :** <br>
*[(11) What are some real life uses of merge sort, insertion sort, quick sort and heap sort algorithms? - Quora](https://www.quora.com/What-are-some-real-life-uses-of-merge-sort-insertion-sort-quick-sort-and-heap-sort-algorithms)* <br>
*[c - In which cases do we use heapsort? - Stack Overflow](https://stackoverflow.com/questions/18163414/in-which-cases-do-we-use-heapsort)*

# Count Sort

- When  the difference between various keys are not very big (less than total items).
- When a very fast sorting algorithm is need (linear running time).
- When overhead space is not an big issue.
- When the keys are relatively small numbers.
- When stability of data is needed with faster implementation.
# PseudoCode:
```Java
CountingSort(A)
  //A[]-- Initial Array to Sort
  //Complexity: O(k)
  for i = 0 to k do
  c[i] = 0
  //Storing Count of each element
  //Complexity: O(n)
  for j = 0 to n do
  c[A[j]] = c[A[j]] + 1
  // Change C[i] such that it contains actual
  //position of these elements in output array
  ////Complexity: O(k)
  for i = 1 to k do
  c[i] = c[i] + c[i-1]
  //Build Output array from C[i]
  //Complexity: O(n)
  for j = n-1 downto 0 do
  B[ c[A[j]]-1 ] = A[j]
  c[A[j]] = c[A[j]] - 1
end func
```

**Reason :** <br> This sorting technique is based on key of specific range. Mainly it functions by counting the distinct number of objects like in maps. So if we use very big keys the space complexity can increase to large extent. The small keys help to count the numbers more efficiently which in turns help increase the sorting speed and reduce space complexity. Its time complexity is  of the order O(n+k) where n  number of elements and k is the range. So if the range is small with small keys the running times becomes linear making it very fast sorting algorithm.

**References :** <br>
*[The Magic of Counting Sort. And where you should use it! | by Wyatt Happ | Medium](https://medium.com/@wyatt.happ_61481/the-magic-of-counting-sort-5db93adc254b)* <br>
*[When is each sorting algorithm used? - Stack Overflow](https://stackoverflow.com/questions/1933759/when-is-each-sorting-algorithm-used)*

# Radix Sort

- When the biggest integer is shorter than array size.
- When we have fixed range of integers.
- When numbers are not much repeated but their length have same range.
- When stability of data is needed with faster implementation.
- When in comparison predicates are needed for sorting.
# PseudoCode:
```Java
Radix-Sort(A, d)
//It works same as counting sort for d number of passes.
//Each key in A[1..n] is a d-digit integer.
//(Digits are numbered 1 to d from right to left.)
    for j = 1 to d do
        //A[]-- Initial Array to Sort
        int count[10] = {0};
        //Store the count of "keys" in count[]
        //key- it is number at digit place j
        for i = 0 to n do
         count[key of(A[i]) in pass j]++
        for k = 1 to 10 do
         count[k] = count[k] + count[k-1]
        //Build the resulting array by checking
        //new position of A[i] from count[k]
        for i = n-1 downto 0 do
         result[ count[key of(A[i])] ] = A[j]
         count[key of(A[i])]--
        //Now main array A[] contains sorted numbers
        //according to current digit place
        for i=0 to n do
          A[i] = result[i]
    end for(j)
end func
```
**Reason :** <br> Radix sort is one of the unique sorting algorithm as here the time complexity depends upon the number of digits also along with number of elements in the list. Generalization of this algorithm is tough then the other sorting algorithms there as it requires fixed size keys, and some very specific  way of breaking the keys into pieces.

**References :** <br>
*[Is radix sort the fastest? – QuickAdviser (quick-adviser.com)](https://quick-adviser.com/is-radix-sort-the-fastest/)* <br>
*[Time and Space complexity of Radix Sort (opengenus.org)](https://iq.opengenus.org/time-and-space-complexity-of-radix-sort/)*

# Bucket Sort

- When the range is much distributed and instead of limited range we have discrete elements .
- When faster implementation is not the top most priority.
- When space overhead is an issue.
- When the elements have a very little variation.
- When we need a stable sorting algorithm.
# PseudoCode:
```Java
BucketSort(A)
n = A.length
Let B[0, . . . , n − 1] be a new array
for i = 0 to n - 1
B[i] ← 0
for i = 1 to n
B[bnA[i]c] ← A[i]
for i = 0 to n-1
sort list B[i] using insertion sort
concatenate the lists B[0], B[1], . . . , B[n − 1]
return B
```
**Reason :** <br> It follows the scatter gather approach. So it performs good when array is of small size and has fixed range of integers. As the overall performance depends on the bucket size chosen it is heavily dependable upon the user and so not much used in everyday algorithms. If the range is much distributed then the bucket sort can help as it will be easy to divide elements in various buckets. 

**References :** <br> 
*[(11) When should we use radix sort Counting sort and bucket sort for sorting purpose? - Quora](https://www.quora.com/When-should-we-use-radix-sort-Counting-sort-and-bucket-sort-for-sorting-purpose)* <br>
*[Bucket Sort Algorithm - LearnersBucket](https://learnersbucket.com/tutorials/algorithms/bucket-sort-algorithm/)*


# Table showing Comparison b/w Time Complexities of Various Sorting Algorithms

![img](https://i.imgur.com/uMBaUv0.png)

*Reference*:  [*sorting_section_solutions.pdf (washington.edu)*](https://courses.cs.washington.edu/courses/cse373/15wi/lectures/sorting_section_solutions.pdf)

# Other References : 

[Counting Sort vs Radix Sort vs Bucket Sort (opengenus.org)](https://iq.opengenus.org/counting-sort-vs-radix-sort-vs-bucket-sort/) <br>
[Analysis of different sorting techniques - GeeksforGeeks](https://www.geeksforgeeks.org/analysis-of-different-sorting-techniques/#:~:text=1 Radix sort – Best%2C average and worst,n^2 if all elements belong to same bucket.) <br>
[Quick Sort , Merge Sort , Heap Sort (slideshare.net)](https://www.slideshare.net/MohammedHussein8/quick-sort-merge-sort-heap-sort) <br>
[Comparison of Quadratic Run time Sorting Algorithm · WorldKosh](http://worldkosh.com/blog/2018/09/14/compare-quadratic-complexity-sort-algo/) <br>
[Quadratic and Linearithmic Comparison-based Sorting Algorithms | John Deringer (wordpress.com)](https://johnderinger.wordpress.com/2012/12/28/quadratic-and-linearithmic-comparison-based-sorting-algorithms/#:~:text=There are two general categories of comparison algorithms%2C,and three linearithmic Heapsort%2C Merge sort and Quicksort.)

