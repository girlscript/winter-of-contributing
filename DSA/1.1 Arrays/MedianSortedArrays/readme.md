Example 1:

        Input:
        m = 3, n = 4
        array1[] = {1,5,9}
        array2[] = {2,3,6,7}
        Output: 5
        Explanation: The middle element for
        {1,2,3,5,6,7,9} is 5
Example 2:

        Input:
        m = 2, n = 4
        array1[] = {4,6}
        array2[] = {1,2,3,5}
        Output: 3.5

# First, lets see a simpler approach.

=> We will merge the sorted arrays in an efficient way and keep a cout of the sum of elements of the combined array.So, half of teh original size withh give the position of the middle element.
There are two cases: 

Case 1: Total elements is odd, the median will be at at (total)/2 th index in the combined array.
Case 2: Total elements is even, the median will be average of elements at index ((total)/2 – 1) and (total)/2 in the combined array.

        Time Complexity of this approach will be->T(n)=O(m+n).


# An efficient Approach

We start by partitioning the two arrays into two groups by makimg cut1 and cut2 in the respective arrays consisiting of elements from both the arrays. The first half contains some first elements from the first and the second arrays, and the second half contains the rest (or the last) elements form the first and the second arrays. 

![image](https://user-images.githubusercontent.com/68536395/134367427-c124799f-6147-4d63-b7a5-79650f28e3a6.png)

Partition is choosen in such a form that all the elements in the first half are less than the elements in the second half, and all the elements in the second half are greater than the elements in the first half.


If an element in the first half is greater than the element in the secodn half, then we try partinioning by decreasing on element fron the first half and putting it in the second half and vice versa.

![image](https://user-images.githubusercontent.com/68536395/134367706-15d9cfd7-de1f-4e79-8bc3-4178804e398d.png)

![image](https://user-images.githubusercontent.com/68536395/134367795-483e8e42-fa18-4d27-a9d0-7382b6e0376f.png)

![image](https://user-images.githubusercontent.com/68536395/134367877-741fb541-a6ec-403e-a681-e4c182954629.png)


How to lead to median?

The median is the (n + 1) / 2 smallest element of the array, and here, the median is the (n + m + 1) / 2 smallest element among the two arrays.
If, all the elements in the first half are less than (or equal) to all elements in the second half.
->In case of ODD numbers in total, we calculate the maximum between the last two elements in the first half (a2 and b2 in our example),and this will lead us to the (n + m + 1) / 2 smallest element among the two arrays, which is the median ((7 + 4 + 1) / 2 = 6).

->In case of EVEN numbers in total, we calculate the average between the maximum of the last two elements in the first half  with its successive number among the arrays which is the minimum of first two elements in the second half.

        Time Complexity : O(log(min(n, m))), where n and m are the sizes of given sorted array

# References 
https://www.geeksforgeeks.org/median-two-sorted-arrays-different-sizes-ologminn-m/
