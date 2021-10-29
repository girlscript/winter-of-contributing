<h1 align="center">  Fenwick Tree or Binary Indexed Tree </h1>

A Fenwick Tree is a user-defined data structure that helps to calculate Prefix sums or cumulative frequency tables in a very efficient manner.It is a representational form of an array and can update elements in O(logN) time complexity.It is also known as a Binary Indexed Tree as it makes use of bit manipulation concepts for implementation.

Need:

Terminology:

- Query:Operation performed on an interval or on an element.For example minimum or maximum or summation in a particular range.
- Update:To update the fenwick tree.There are two types of updates in a fenwick tree.
  - Point Updates:
  - Range Updates:

## Bit Manipulation Concepts:

- Chain of Responsibilities:
![image](https://user-images.githubusercontent.com/72400676/139364185-263bbadf-237d-4d01-8f7b-1f3c1e12bae4.png)

- Isolation of L.S.B
![image](https://user-images.githubusercontent.com/72400676/139364135-1bfc2a26-e9d9-415a-b30c-fe5bec458b3c.png)


## Algorithm:

## Sample Problem:

The idea is based on the fact that all positive integers can be represented as the sum of powers of 2. For example 19 can be represented as 16 + 2 + 1. Every node of the BITree stores the sum of n elements where n is a power of 2. For example, in the first diagram above (the diagram for getSum()), the sum of the first 12 elements can be obtained by the sum of the last 4 elements (from 9 to 12) plus the sum of 8 elements (from 1 to 8). The number of set bits in the binary representation of a number n is O(Logn). Therefore, we traverse at-most O(Logn) nodes in both getSum() and update() operations. The time complexity of the construction is O(nLogn) as it calls update() for all n elements.

Using binary Indexed tree also, we can perform both the tasks in O(logN) time. But then why learn another data structure when segment tree can do the work for us. It’s because binary indexed trees require less space and are very easy to implement during programming contests.
