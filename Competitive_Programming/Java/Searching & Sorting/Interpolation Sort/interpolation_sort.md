# Introduction:

---
There are two kinds of sorting algorithms, O(n²) and O(n*log(n)).  O(n²) takes more time but comparatively less space while O(n*log(n)) algorithms take less time but comparatively more space as described by <a href="https://www.computer.org/profiles/donald-knuth"><b>Knuth</b></a>.
So, O(n²) is preferred over small arrays and O(n*log(n)) is preferred over large arrays.

The most commonly used sorting algorithms are.
* Quick Sort `O(nlog(n))`
* Bubble Sort `O(n²)`
* Merge Sort `O(nlog(n))`
* Insertion Sort `O(n²)`
* Selection Sort `O(n²)`
* Heap Sort `O(nlog(n))`
* Radix Sort `O(d*(n+b))` (where d is the number of digits in the given list, n is the number of elements in the list)
* Bucket Sort `O(n + k)`

But this time, the sorting algorithm which we are going to discuss is not present in this list. Let's start it.

# **Interpolation Sort:**


---

Before starting anything, it is important to know why it is necessary for us.
Interpolation sort is a new sorting algorithm that derives its motivation from the Interpolation search. It shows a high probability to show O(n) time complexity for well-distributed data.

## **Explanation of the Algotithm:**

The algorithm can be better understood if preceded by an example. So this section will aim at explaining the algorithm with an example and then discuss how to implement the same in reality. 

Consider the following unsorted array of size 15:


```
[61 , 53 , 42 , 14 , 64 , 2 , -2 , 6 , 17 , 9 , 11 , 3 , 3 , 4 , 7]
```
The backbone of the sorting algorithm is the interpolation formula:
