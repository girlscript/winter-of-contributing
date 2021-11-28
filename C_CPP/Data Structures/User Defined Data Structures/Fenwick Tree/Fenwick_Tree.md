<h1 align="center">  Fenwick Tree or Binary Indexed Tree </h1>

A Fenwick Tree is a user-defined data structure that helps to calculate Prefix sums or cumulative frequency tables in a very efficient manner. It is a representational form of an array and can query or update elements in **O(logN)** time complexity. It is also known as a Binary Indexed Tree as it makes use of bit manipulation concepts for implementation purposes.

## Need:

- We can perform both Query and Update operations even in a large array in **O(logN)** time using Fenwick Trees.
- Fenwick Trees require less space as compared to Segment Trees.
- They have an easy implementation code which is useful during various programming contests.

## Terminology:

- **Query**:Operation performed on an interval or on an element.For example minimum or maximum or summation in a particular range.
- **Update**:To update the fenwick tree.There are two types of updates in a fenwick tree.
  - **Point Updates**:Updating a particular element of the binary indexed tree with a value.
  - **Range Updates**:Executing queries on a range of elements with a value.

## Bit Manipulation Concepts:

The basic concept behind Fenwick Tree is that we can represent all positive integers as the sum of powers of 2.  
Example: 21 can be represented as 21 = 16 + 4 + 1 = 2<sup>4</sup> +2<sup>2</sup> +2<sup>0</sup>.

- **Chain of Responsibilities**:

  - L.S.B is the Least Significant bit of the binary representation of any given number.
    ![image](https://user-images.githubusercontent.com/72400676/139364185-263bbadf-237d-4d01-8f7b-1f3c1e12bae4.png)
  - Here we observe a chain of responsibilities i.e. when we drop the L.S.B from 11,we get 10.
  - Progressively dropping the chain of L.S.B s, we can reach 0.
  - Similarly Adding up the L.S.B s will help us to propagate the value up to the cells responsible.

- **Isolation of L.S.B**:
  - Let a positive number be of the form A1B where A contains some random binary bits and B contains only zeroes.
  - Taking 2's complement of A1B: **(A1B)'+1= (A'0B')+1**
  - Now the number would be of the form A'1B'
  - Taking bitwise AND : **A1B & A'1B'** = A number of the form **0....1....0**
    For example:
    ![image](https://user-images.githubusercontent.com/72400676/139364135-1bfc2a26-e9d9-415a-b30c-fe5bec458b3c.png)
    In this way, we can extract the Least Significant bit from the binary representation of any number to carry out different operations.

## Algorithm:

- **Query**:In each iteration we are removing a L.S.B from the given number till we reach 0.
- **Point Updates**: In each iteration we are adding a L.S.B to the number.
- **Range Updates**: We are adding val to all elements from L to end and -val to all elements from R till end such that val is added only to elements from L to R.

The number of set bits in the binary representation of a number n is **O(logN)**. We at worst case, the number of traversals is **O(logN)**.So, the time complexity is **O(logN)**.

## Sample Problem:

Question: Take an input array from the user.  
Operations:1.Print the Sum of Array from Range L to R.  
2.Update the value of an element of given index with val.  
3.Add val to each element of the array from range L to R.
