# Pancake sort

### Introduction 📖

The pancake sorting problem  is the mathematical problem of sorting or arranging an unsorted stack of pancakes in order (ascending or descending) of size such that the spatula can be inserted between any two pancakes or under all of the pancakes and flips all pancakes above it. The technique was first posed by Jacob E. Goodman, under the name "Harry Dweighter" ("harried waiter").

> In general traditional algorithms like selection sort and insertion sort, the main aim is to minimize the no of comparisons and swaps required to sort the list or array. But in Pancake sort, the goal is to sort the sequence in as few flips as possible. 

Pancake sorting appears in applications in parallel processor networks as an effective routing algorithm between processors.

### Problem Statement

Given an unsorted array of integers A, sort the array A by performing a series of pancake flips where  
In one pancake flip we do the following steps:  
Choose an integer K where 1 <= K <= arr.length  
Reverse the sub-array arr[0...K-1] (0-indexed)

**Input** : array A to be sorted

**Output** : Print an array of Ks, the sequence of k picked to flip the stack to sort the array.

**Constraints** : Required no of flips <= 10*N where N is the no of elements in array A.


### Example

#### Input
```
arr = [3,2,4,1]
```

#### Output
```
4 2 4 3
```

#### Explaination 🤔
```
Starting state of the array : [3,2,4,1]
For 1st flip, k=4. So we flip all the elements from index 0 to index k-1=4-1=3
After 1st flip : arr = [1,4,2,3]
For 2nd flip, k=2. So we flip all the elements from index 0 to index k-1=2-1=1
After 2nd flip : arr = [4,1,2,3]
For 3rd flip, k=4. So we flip all the elements from index 0 to index k-1=4-1=3
After 3rd flip : arr = [3,2,1,4]
For 4th flip, k=3. So we flip all the elements from index 0 to index k-1=3-1=2
After 4th flip : arr = [1,2,3,4]
```

### Approach 💡

For n elements, find the largest element in the subarray of n elements, and try to put it as the last element. Then consider the sub array of n-1 elements excluding the last element as it has already been placed at the last index, and try to put this 2nd largest element at 2nd last index. For eg :

for arr : [..., 5, ...] where 5 is largest element we first try to achieve  
arr : [..., 4, ... , 5] where 4 is the second largest element  
Then in second iteration arr : [... , 4 , 5] and so on.

By this approach we need not the whole array every time. We can achieve this by 

- First flipping all elements till maxi where maxi is the index of largest element of the array under consideration. 
- Then flipping all the elements till nc where nc is the size of subarray currently under consderation.

For example for arr : [3,2,4,1], our output following this approach will be 
``` 3 4 2 3 2 ``` 
as explained above.


### Time and Space Complexity Analysis ⏰
For each iteration of the approach, we need to traverse the whole subarray to find the largest element. This can be achieved here using linear search only in O(n) time.  
The Flip operation also takes O(n) time to reverse the array, and is called twice in the whole iteration.  

For the worst case, for n elements, we need to put each and every element at its correct index by running its own iteration, that is, no iteration gives us two or more elements at their correct positions. In best case, the array is already sorted and no flips are required, but we need to check all subarrays of size n, n-1,n-2,...2 and find the max element in it. Thus, 
- time complexity : O(n^2)
- space complexity : O(1) if output is printed, O(n) if the sequence of Ks is returned
- worst case no of flips : 2(N-1)
- best case no of flips : 0



### Algorithm 👨‍💻👩‍💻
```
flip(A, ind)
  n = length(A)
  for i from 0 to ind/2
    tmp <- A[i]
    A[i] <- A[n-i]
    A[n-i] <- A[i]

pancakeSort(A):
  n <- length(A)
  for i from n to 1
    maxi <- 0
    for j from 0 to i
      if A[j] > A[maxi]
        maxi <- j
    if maxi != 0
      flip(A, maxi+1)
      result.add(maxi+1)
    flip(A, i+1)
    result.add(i+1)
```



### Code 👨‍💻👩‍💻
Python

      def flip(A, index):
        return A[:index][::-1] + A[index:]

      def pancakeSort(A):
        result = []
        for i in range(len(A)-1, 0, -1):
          maxi = 0
          for j in range(1,i+1):
            if A[j] > A[maxi]:
              maxi = j
          if maxi != 0:
            A = flip(A, maxi+1)
            result.append(maxi+1)
          A = flip(A, i+1)
          result.append(i+1)
        print(result)
            
      pancakeSort([3,2,4,1])


### Development
1. Jacob E. Goodman proposed the pancake problem in the American Mathematical Monthly magazine in 1975. Its solution took (2n-3) flips.
2. In 1979, Bill Gates and Christos Papadimitriou gave a more efficient solution to this problem with a lower bound of 1.06n flips and an upper bound of (5n+5)/3 flips in their paper "Bounds for Sorting by Prefix Reversal". This paper is the only scientific research paper of Bill Gates, the founder of Microsoft and it remained the best approach for almost 30 years.
3. In 2011, Laurent Bulteau, Guillaume Fertin, and Irena Rusu proved that the problem of finding the shortest sequence of flips for a given stack of pancakes is NP-hard, thereby answering a question that had been open for over three decades.
4. Another variant of this problem, The Burnt Pancake Problem, was implemented in 2008 by a group of undergraduates who built a bacterial computer that can solve a simple example of the burnt pancake problem by programming E. coli to flip segments of DNA which are analogous to burnt pancakes. 

### Output image of code
![image](https://user-images.githubusercontent.com/54130460/135709022-5b1aa8dd-7197-4724-bb8d-455b7f0b57d4.png)


### References 🔗

- https://leetcode.com/contest/weekly-contest-118/problems/pancake-sorting/
- https://www.geeksforgeeks.org/pancake-sorting/
- https://en.wikipedia.org/wiki/Pancake_sorting
- https://www.youtube.com/watch?v=AFtXLUn_TZg
- https://www.bbvaopenmind.com/en/science/mathematics/bill-gates-and-the-pancake-problem/
- https://www.sciencedirect.com/science/article/pii/0012365X79900682
