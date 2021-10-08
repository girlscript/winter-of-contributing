# STACK(NEAREST GREATER TO RIGHT IN STACK) #
----------------------------------------------------------------------------------------
- Stack foundation problem(nearest greater to right or say Next greater element
- we can solve it using array also but it will have a high time complexity 
- therfore using stack only 1 loop is suffecient completing IN o(n) time
#  STEPS TO FOLLOW:-
-  firstly Push the first element to stack.
- Pick rest of the elements and follow the loop ad other steps. 
- point the current element as next.
- If stack is not empty, compare top element of stack with next element.
- If next element is greater than the top element then Pop the element from stack. next is the next greater element for the previous popped element.
- Keep popping the elements from the stack while the popped element is smaller than next. and then next becomes the next greater element for all such other popped elements.
- Finally, push the next in the stack.
- After the loop is over, reverse the vector and print it to get the desired output.
- ----------------------------------------------------------------------------------------
Path:-[Implementation Code](./NGR.cpp)

