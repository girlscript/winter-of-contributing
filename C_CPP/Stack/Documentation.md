# STACK(NEAREST GREATER TO RIGHT IN STACK) #
----------------------------------------------------------------------------------------
- Stack foundation problem(nearest greater to right or say Next greater element
- we can solve it using array also but it will have a high time complexity 
- therfore using stack only 1 loop is suffecient completing IN o(n) time
#  STEPS TO FOLLOW:-
-  Push the first element to stack.
- Pick rest of the elements one by one and follow the following steps in loop. 
- Mark the current element as next.
- If stack is not empty, compare top element of stack with next.
- If next is greater than the top element, Pop element from stack. next is the next greater element for the popped element.
- Keep popping from the stack while the popped element is smaller than next. next becomes the next greater element for all such popped elements.
- Finally, push the next in the stack.
- After the loop is over, reverse the vector and print it to get the desired output.
- ----------------------------------------------------------------------------------------
(https://github.com/keshav12122000/winter-of-contributing/blob/C_CPP/C_CPP/Stack/NGR.cpp)
