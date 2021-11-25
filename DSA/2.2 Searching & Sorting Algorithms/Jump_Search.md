# Jump Search

### Introduction 📖

Jump Search is a searching algorithm which works in an sorted array and aims to find an element is lesser no of comparisons as compared to linear search which scans every element in serial order to find the element. Jump search achieves this efficiency by jumping ahead by (skipping) fixed steps , a fixed size of block of elements, in place of searching all elements.

For example consider a sorted array A[] of size n, with indexing ranging between 0 and n-1, and element x that needs to be searched in the array A[]. This algorithm defines a block of size m (m<=n) which will be skipped in each iteration, and we search the indices in following manner :-  
iteration 1 : Search at index 0, that is check element A[0]  
iteration 2 : Search at index m, that is check element A[m]  
iteration 3 : Search at index 2m, that is check element A[2m]  
iteration 4 : Search at index 3m, that is check element A[3m]  
and so on until we find an index at which the element is greater than x, the element to be searched.

That is, search at indices km where k = 0,1,2... till we dont find A[km] >= x.
 
![image](https://user-images.githubusercontent.com/54130460/136224847-90aef8b3-1f30-4c53-83ef-3d687b52e28d.png)

After this we perform a linear search in backwards direction until we find the element.

### Example 💡

A : [ 0, 1, 1, 2, 3, 5, 8, 13 ]  
n = 8 size of the array  
x = 5 element to be searched  
m = 3

Iteration 1 : A[0] < x  (0 < 5) thus we move ahead  
Iteration 2 : A[m] = A[3] < x  (2 < 5) thus we move ahead  
Iteration 6 : A[2m] = A[6] > x  (8 > 5), now we stop jumping and perform linear search in backwards direction, that is on index 6,5,4..

Iteration 1 : A[6] != x, move back  
Iteration 2 : A[5] = x = 5 , we stop here as we have found the element.

Thus, we can say that element 5 is present at index 5.

### Algorithm 👨‍💻👩‍💻
```
Step 1: Set i <- 0 and m <- √n.  
Step 2: While A[i] < x and i < n  
            i += m  
Step 3: if i < n  
          while A[i]> x  
              i -= 1
          OUTPUT Element present at index i
        else OUTPUT Element not present
Step 4: Exit

```

### Time and Space complexity ⏰

For best case scenario, we find the element at first index and only need to make one comparison. Thus,  
**Best case time complexity = O(1)**

For worst case scenario, the element is not present in the array or is present at position (m-m+1). For this case we need to make jumps of m for (n/m) times and then from there perform linear search for (m-1) elements. This becomes a total of (n/m + (m-1)). This expression can be minimized by putting m = √n reducing it to (√n + √n - 1). Thus,  
**Worst case time complexity = O(√n)**

The algorithm searches for the element in place and only requires few constant variables. Therefore it has constant space complexity.  
**Space complexity : O(1)**

It is clear from the analysis that :-
- Jump search can only work on sorted arrays
- It is not as efficient as Binary search which also searches in sorted arrays.
- Size of block m should be taken as √n which will give the best step/jump size
- In terms of time complexity : Linear Search O(n) < Jump Search O(√n) < Binary Search O(logn)

### Code 💻👩‍💻

```
import math
n = int(input("Enter array size : "))
print("Enter array elements : ", end="")
A = list(map(int, input().split()))
x = int(input("Enter element to be searched : "))

m = int(math.sqrt(n))
i = 0

while A[i] < x and i < n:
  i += m  
if i < n :
  while A[i] > x:
    i -= 1
  if (A[i] == x):
    print("Element present at index ", i)
  else:
    print("Element not present")
else:
  print("Element not present")
 ```
 
 ### Sample Input  
 
 Sample input 1:  
 
    16  
    0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610  
    55  

 Output 1  
 
    10

 Sample input 2:  
 
    13  
    5 7 14 15 18 20 21 26 30 40 41 45 50  
    25  

 Output 2  
 
    10

### Output of above code

![image](https://user-images.githubusercontent.com/54130460/136222603-a40507f9-411f-4c96-a173-f4557681e6c7.png)
![image](https://user-images.githubusercontent.com/54130460/136223341-baa13349-89dc-4127-86bf-0db3b6452618.png)

