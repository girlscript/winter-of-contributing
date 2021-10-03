# Introduction to the stack data structure in JavaScript

A stack is a data structure that holds a list of elements. A stack works based on the LIFO principle i.e., Last In, First out, meaning that the most recently added element is the first one to remove.

A stack has two main operations that occur only at the top of the stack: push and pop. The push operation places an element at the top of stack whereas the pop operation removes an element from the top of the stack.

The name stack comes from the analogy to a set of physical items e.g., DVD disc, books, stacked on top each other.

A stack has many applications. For example, the simplest one is to reverse a word. To do it, you push a word into the stack, letter by letter, and pop the letters from the stack.

The other applications of the stack are “undo” mechanism in text editors, syntax parsing, function call, and expression conversion (infix to postfix, infix to prefix, postfix to infix, and prefix to infix).

JavaScript Array type provides the push() and pop() methods that allow you to use an array as a stack.

- **push() Method**

The push() method allows you to add one or more elements to the end of the array. The push() method returns the value of the length property that specifies the number of elements in the array.

If you consider an array as a stack, the push() method adds one or more element at the top of the stack. The following example creates an empty array named stack and adds five numbers, one by one, at the end of the stack array. It is like to push each number into the top of the stack.

```js
let stack = [];

stack.push(1);
console.log(stack); // [1]

stack.push(2);
console.log(stack); // [1,2]

stack.push(3);
console.log(stack); // [1,2,3]

stack.push(4);
console.log(stack); // [1,2,3,4]

stack.push(5);
console.log(stack); // [1,2,3,4,5]
```

- **pop() Method**

The pop() method removes the element at the end of the array and returns the element to the caller. If the array is empty, the pop() method returns undefined.

The following example shows how to pop elements from the top of the stack using the pop() method.

```js
console.log(stack.pop()); //  5
console.log(stack); // [1,2,3,4];

console.log(stack.pop()); //  4
console.log(stack); // [1,2,3];

console.log(stack.pop()); //  3
console.log(stack); // [1,2];

console.log(stack.pop()); //  2
console.log(stack); // [1];

console.log(stack.pop()); //  1
console.log(stack); // []; -> empty

console.log(stack.pop()); //  undefined
```

- **Reverse a string using a JavaScript stack**

The following example shows you how to reverse a string using a stack.

```js
function reverse(str) {
    let stack = [];
    // push letter into stack
    for (let i = 0; i < str.length; i++) {
        stack.push(str[i]);
    }
    // pop letter from the stack
    let reverseStr = '';
    while (stack.length > 0) {
        reverseStr += stack.pop();
    }
    return reverseStr;
}

console.log(reverse('JavaScript Stack')); //kcatS tpircSavaJ
Code language: JavaScript (javascript)
```
How the script works.

The reverse() function accepts a string argument and returns its reversed version with the following logic:

First, loop through the str and push each letter into the stack array.
Second, pop each letter from the stack and construct the reversed string.



# Introduction to JavaScript Call Stack

JavaScript engine uses a call stack to manage execution contexts: the Global Execution Context and Function Execution Contexts.

The call stack works based on the LIFO principle i.e., last-in-first-out.

When you execute a script, the JavaScript engine creates a Global Execution Context and pushes it on top of the call stack.

Whenever a function is called, the JavaScript engine creates a Function Execution Context for the function, pushes it on top of the Call Stack, and starts executing the function.

If a function calls another function, the JavaScript engine creates a new Function Execution Context for the function that is being called and pushes it on top of the call stack.

When the current function completes, the JavaScript engine pops it off the call stack and resumes the execution where it left off in the last code listing.

The script will stop when the call stack is empty.

*JavaScript call stack example:*

See the following script-

```js
function add(a, b) {
    return a + b;
}

function average(a, b) {
    return add(a, b) / 2;
}

let x = average(10, 20);
Code language: JavaScript (javascript)
```

When the script runs, the JavaScript engine places the global execution context (denoted by main() or global() function on the call stack.

The global execution context enters the creation phase and moves to the execution phase. The JavaScript engine executes the call to the average(10, 20) function and creates a function execution context for the average() function and pushes it on top of the call stack.

The JavaScript engine starts executing the average() since it is at the top of the call stack.

The average() function calls add() function. At this point, the JavaScript engine creates another function execution context for the add() function and places it on the top of the call stack.

JavaScript engine executes the add() function and pops it off the call stack.

At this point, the average() function is on top of the call stack, JavaScript engine executes it and pops it off the call stack.

Now, the call stack is empty so the script stops executing.


# Stack overflow

The call stack has a fixed size, depending on the implementation of the host environment, either the web 
browser or Node.js.

If the number of the execution contexts exceeds the size of the stack, a stack overflow will occur.

For example, when you execute a recursive function that has no exit condition, it will result in a stack overflow error:

```js
function foo() {
    foo();
}

foo(); // stack overflow

Code language: JavaScript (javascript)
```


# Asynchronous JavaScript

JavaScript is the single-threaded programming language. The JavaScript engine has only one call stack so that it only can do one thing at a time.

When executing a script, the JavaScript engine executes code from top to bottom, line by line. In other words, it is synchronous.

Asynchronous is the opposite of synchronous, which means happening at the same time. 






