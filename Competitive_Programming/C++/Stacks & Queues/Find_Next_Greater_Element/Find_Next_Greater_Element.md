# GirlScript Winter of Contributing

[![Competitive Programming](https://img.shields.io/badge/Competitive%20Programming-Stacks%20&%20Queue%20-orange?style=for-the-badge&logo=github)](https://github.com/girlscript/winter-of-contributing/blob/main/Competitive_Programming/C%2B%2B/Stacks%20%26%20Queues/Find_Next_Greater_Element.md)

>### About, 
> Language: C++ <br>
> Type: Documentation <br>
> Topic: Stack & Queue <br>

<br>
<hr>

- # Table of Contents
    1. [Question](#Question)
        - [Example](#Example)
        - [Constraints](#Constraints)
        - [Practice](#Practice)
    2. [Explanation](#Explanation)
        - [BruteFroce](#BruteFroce)
        - [Efficient Method](#Efficient)
<hr>

<details>
    <summary><b>Question</b></summary>
Given an array of n elements.You have to find next greater element to the right of each element.Next greater element is the first element to the right of given element(say x) in array which is greater than x.If there is no such element than answer to this element is -1.

you have to return the answer array containing Next greater element corresponding to every element in given array.

### Example
#### input
<b>N<b>=5<br>
<b>Array<b>=[2,4,3,5,1]<br>
#### Output
[4,5,5,-1,-1]

### Constraints
<b>1<=N<=100000<b> <br>
0<arr[i]<10^9

### Practice
<b>https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1<b>
</details>

<details>
    <summary><b>Explanation</b></summary>

### BruteForce

We can simply use 2 for loops to find the Next greater element the first for loop iterate over each element of array to find next greater element of this perticular element and second loop iterate over all element to right of it and it breaks itself when it found first element greater then the "i".

#### Complexity

<b>Time Complexity-<b>O(n^2)<br>
<b>Space Complexity-<b>O(1)<br>

### Efficient Method

We can maintain a stack(monotonic) and iterate over array and if we found element smaller than or equal to top of stack then push its index in stack if not than pop element form the stack 'until' either stack is empty or ``` arr[s.top()] >= arr[cur]  ```then ans of all popped element is this cur element.

#### Complexity

<b>Time Complexity-<b>O(n)<br>
<b>Space Complexity-<b>O(n)<br>
</details>
