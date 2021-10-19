**What is Comb Sort ?**

This sorting algorithm is also known as Dobosiewicz Sort. It is an optimization of Bubble sort. 
The difference is that Comb Sort looks at elements with a gap and this gap progressively shifts down as the algorithm continues.

The gap is first equal to n, after each iteration is reduced by a factor (k) until it reaches value 1. Hence, at end, the Comb Sort behaves like the Bubble Sort.

*This algorithm is as fast as quick sort !*

**Steps For performing algorithm:-**
1. Set gap = n

2. While there is swap needed:
  a. Shrink the gap by k such that gap always >= 1.
  b. Compare each pair of elements separated by the gap and if they are in reversed order, swap them.
  c. If gap = 1 and no swap made, then stop: we are done.

**Lets See the Code**
```
void CombSort (Iterator begin, Iterator end)
{
  auto distance = distance(begin, end);
  if (distance < 2)
    return;

  auto gap = distance;
  bool swapped = true;
  while (swapped)
  {
    swapped = false;

    // Compute new gap
    gap /= 1.3;
    if (gap > 1)
      swapped = true;
    else
      gap = 1;

    for (auto it = begin; it + gap < end; ++it)
      if (Compare(it, (it + gap)))
      {
        swap(it, (it + gap));
        swapped = true;
      }
  }
}
```


**Space Complexity**

Comb Sort does not use any buffer nor does make any recursion. Thus, it requires ```O(1)``` space in all cases.

**Time Complexity**

*Best Time :-*
The best configuration occurs when all elements are already sorted or nearly sorted.
In that case, the loop with gap=1 will be run only once.

``` Θ ≈ O(nlog(n)) ```

*Average :-*
The average runtime of Comb sort (or Dobosiewicz sort) is :
```O(n2)``` . 

*Worst Case:-*
The worst case runtime of Comb sort is : ```O(n2)```.

**Other Properties =>**

*Adaptability* -	No

*In Place* -	Yes, Its inlace Sorting algorithm

*Method*	- Swapping

*Recursion* -	No recursive calls

*Stability* -	No

*Type* -	Comparison of array elements
