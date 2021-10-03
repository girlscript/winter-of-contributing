## Algorithm 

1)We create an array ans[] to store the result of the factorial, because a large number having factorial of 100s of digits will be an inefficient usage of space.

2)We will initialize both the array and its size to 1.

3)We multiply x with ans[] and store the product in res[] and increase the size of ans[].

# 4)How do we multiply each of the diigts from 2 to n?

Multiply each digit of ans[] with x, and remember to store the res in reverse order as multiplication is doen in right to left order.

        1)Initialize the carry as 0.
        2)last digit of product is stored in ans[].
        3)The remaining digits are updated in carry.
        4)Put all the digits of carry in ans[] and update teh size of the answer array.
