# Sliding Window Algorithm

## Video Link : [Sliding Window Algorithm](https://drive.google.com/file/d/1Zi_YlkoLLz6mAPn1kabAF4QBxmT5PTd8/view?usp=sharing)

When dealing with problems that require checking the answer of some ranges inside a given array, the sliding window algorithm can be a very powerful technique.

## Theoretical Idea
The main idea behind the sliding window technique is to convert two nested loops into a single loop. Usually, the technique helps us to reduce the time complexity from O(n^2) to O(n).

The condition to use the sliding window technique is that the problem asks to find the maximum (or minimum) value for a function that calculates the answer repeatedly for a set of ranges from the array. Namely, if these ranges can be sorted based on their start, and their end becomes sorted as well, then we can use the sliding window technique.

## Fixed-Size Sliding Window

### The Problem
Suppose the problem gives us an array of length n and a number k. The problem asks us to find the maximum sum of k consecutive elements inside the array.

In other words, first, we need to calculate the sum of all ranges of length k inside the array. After that, we must return the maximum sum among all the calculated sums.

## Naive Approach
Let’s take a look at the naive approach to solving this problem:

![image](https://user-images.githubusercontent.com/63282184/143812950-d5cfe41f-e72f-47e7-b33c-0dae0b1e3c7e.png)

First, we iterate over all the possible beginnings of the ranges. For each range, we iterate over its elements from L to L + k - 1 and calculate their sum. After each step, we update the best answer so far. Finally, the answer becomes the maximum between the old answer and the currently calculated sum.

In the end, we return the best answer we managed to find among all ranges.

The time complexity is O(n^2) in the worst case, where n is the length of the array.

## Sliding Window Algorithm
Let’s try to improve on our naive approach to achieve a better complexity.

First, let’s find the relation between every two consecutive ranges. The first range is obviously [1, k]. However, the second range will be [2, k+1].

We perform two operations to move from the first range to the second one: The first operation is adding the element with index k+1 to the answer. The second operation is removing the element with index 1 from the answer.

Every time, after we calculate the answer to the corresponding range, we just maximize our calculated total answer.

![image](https://user-images.githubusercontent.com/63282184/143813006-b98c28d4-382c-422e-8c4e-65795aa95a0d.png)


Firstly, we calculate the sum for the first range which is [1, k]. Secondly, we store its sum as the answer so far.

After that, we iterate over the possible ends of the ranges that are inside the range [k+1, n]. In each step, we update the sum of the current range. Hence, we add the value of the element at index i and delete the value of the element at index i-k.

Every time, we update the best answer we found so far to become the maximum between the original answer and the newly calculated sum. In the end, we return the best answer we found among all the ranges we tested.

## Differences
The main difference comes from the fact that in some problems we are asked to check a certain property among all range of the same size. On the other hand, on some other problems, we are asked to check a certain property among all ranges who satisfy a certain condition. In these cases, this condition could make the ranges vary in their length.

In case these ranges had an already known size (like our consecutive elements problem), we’ll certainly go with the fixed-size sliding window technique. However, if the sizes of the ranges were different (like our book-length problem), we’ll certainly go with the flexible-size sliding window technique.

Also, always keep in mind the following condition to use the sliding window technique that we covered in the beginning: We must guarantee that moving the L pointer forward will certainly make us either keep R in its place or move it forward as well.

## Conclusion
we explained the sliding window approach. We provided the theoretical idea for the technique. Also, we described two examples of the fixed-size and flexible-size sliding window technique. Finally, we explained when to use each technique.
