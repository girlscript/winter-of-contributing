# Stack Data-structure in JavaScript:

A stack is a type of Data-Structure which holds a list of elements. It works on the principle of LIFO(Last-In-First-Out). It means that the element which is inserted at the last will be removed first. We can explain stack data-structure using some things which comes in our day-to-day life. For example- clothes are stacked over each other, plates are stacked over each other.

Stack data-structure has many applications. For eg.: To reverse a string. To do this, you need to push a word letter by letter and pop it out.


**Operations:**
1- Push() 
2- Pop()

**Push() Operation**
This operation allows to add elements at the end of the array. In a stack whenever we add any element, it resides at the top of the stack.
It is layered over top of every previous stack.
For example: Let us create an empty array named stack and adds 5 numbers, one by one, at the end of the stack array. It is like to push each number into the top of the stack.
let stack = [];

stack.push(1);
console.log(stack);  <!--[1] -->

stack.push(2);
console.log(stack);  <!--[1,2]-->

stack.push(3);
console.log(stack);  <!--[1,2,3]-->

stack.push(4);
console.log(stack); <!--[1,2,3,4]-->

stack.push(5);
console.log(stack); <!--[1,2,3,4,5]-->

In the above example, previously the stack was empty. After each time we called push() function, the element was layered over previous element.

**Pop Operation()**
This operation allows you to remove the last element. The element which is at the top of the stack will be removed first. If the list is empty, this operation will return undefined.
For example: The following example shows how to pop elements from the top of the stack using the pop() method. We will take the same example which was in Push() operation.

console.log(stack.pop());     <!-- 5 -->
console.log(stack);           <!-- [1,2,3,4] -->

console.log(stack.pop());     <!-- 4 -->
console.log(stack);           <!-- [1,2,3] -->

console.log(stack.pop());     <!--  3 -->
console.log(stack);           <!-- [1,2] -->

console.log(stack.pop());     <!--  2 -->
console.log(stack);           <!-- [1] -->

console.log(stack.pop());     <!--  1 -->
console.log(stack);           <!-- []; :- stack is empty -->

console.log(stack.pop());     <!--  undefined -->

At first, when we called the previous stack function, it returned 5 because that was the element inserted at last in the previous example.
Similarly all the operation were performed and after the stack was empty, it returned undefined.



# JavaScirpt Call-Stack
The javaScript engine uses a call stack to manage execution contexts: the Global Execution Context and Function Execution Contexts.
This works on the principle of LIFO. meaning- Last-In-First-Out. Whenever the execution of the script takes place, the global execution context enters the creation phase and moves to the execution phase. The JavaScript engine executes the call to the average(10, 20) function and creates a function execution context for the average() function and pushes it on top of the call stack.

The JavaScript engine starts executing the average() since it is at the top of the call stack. The average() function calls add() function. At this point, the JavaScript engine creates another function execution context for the add() function and places it on the top of the call stack. JavaScript engine executes the add() function and pops it off the call stack. At this point, the average() function is on top of the call stack, JavaScript engine executes it and pops it off the call stack. After all of this, the execution stops as the stack is empty.



# Stack overflow
The size of the Call-Stack is fixed which depends on the implementation of the host environment, either the web 
browser or Node.js. If the number of the execution contexts exceeds the size of the stack, a stack overflow will occur.
For example: If you execute a recursive function that has no exit condition, it will result in a stack overflow error:
function foo() {
    foo();
}

foo(); // stack overflow


# Asynchronous JavaScript

JavaScript is the single-threaded programming language. Due to presence of only one Call-Stack function, the JavaScript can perform only one thing at a time. The javaScipt function is SYNCHRONOUS. It means the engine runs the code from top to bottom, line by line.
