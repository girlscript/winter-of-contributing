
# Program Execution in JavaScript

When we run a JS program, an execution context is created, which is further divided into two phases:
        
        1.  Memory Allocation Phase (Variable Environment)
        2.  Code Execution Phase (Thread of Execution)

## First Phase
* In the first phase, the entire program is skimmed line by line, and memory is allocated to functions and variables. In case of variables, undefined is stored as a placeholder and in case of functions, the whole code of function is stored.

## Second Phase
* In the second phase, the code is actually executed line by line. The Undefined keyword is now replaced by actual values of variables. When there is a function invocation, a entirely new execution context is created which has further two components. When return keyword is encountered, it just returns all the controls to the global execution context where the function was first invoked. After complete execution of the function, the execution context related to the instance of the function is deleted. Then, the next line is executed.

## Call Stack
* When a program starts execution JavaScript pushes the whole program as global context into a stack which is known as Call Stack and continues execution. Whenever JavaScript executes a new context and just follows the same process and pushes to the stack.



  
