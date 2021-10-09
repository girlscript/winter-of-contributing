# Documentation on Runtime Errors

This articles covers the following topics in brief:

* What are errors?

* Types of errors encountered during programming

* List of runtime errors with their causes

* How to overcome errors?

* Reference and resources for further reading

<br>

## Overview

An error is the result of incorrect code in some program which leads to erroneous result or abnormal working of program. 

**Programming errors** either get detected during the compilation stage or remain undetected until the program is executed. 

The most common errors can be broadly classified as follows:

1. Syntax errors

2. Semantic errors

3. Run-time Errors

4. Linker Errors

5. Logical Errors

For succesful working of our program, the errors must be debugged.

<br>

## Runtime errors

*A runtime error is a bug in the program which causes the program to crash even after it has been succesfully compiled.* 

It usually goes unnoticed by the developer as it is not reported by the compiler.

The different types of runtime errors are:

<br>

* **SIGFPE:**

   SIGFPE is a floating-point error. It is mostly caused due to the following reasons. 
    * Division by Zero.
    * Modulo Operation by Zero.
    * Integer Overflow.

    <br>

    ```C++
    #include <iostream>
    using namespace std;

    int main(){
        int a = 5;
        cout << a / 0;     //dision by 0 gives SIGFPE
        cout << a % 0;     //modulo by 0 gives SIGFPE
        return 0;
    }
    ```

<br>

* **SIGABRT:** 

   The program itself detects this error and sends a singal to call the `abort()` function. 
   
   This signal is also used by standard library to report an internal error.

   <br>

   ```C++
    #include <iostream>
    using namespace std;
 
    int main(){
    
        int a = 100000000000;  //assigning excessive memory
        int* arr = new int[a];
        return 0;
    }
    ```
<br>

* **NZEC:** 

   This error denotes *“Non-Zero Exit Code”*. 
   
   In C programs, this error will be generated if the `main()` method does not have a  `return 0`  statement. 
   
   In C++ programs, users could generate this error if they throw an exception. 

   Other reasons of getting NZEC are: 

    * Infinite Recursion.

    * Reaching the limit of stack memory.

    * Negative array index is accessed.

    * ArrayIndexOutOfBounds Exception.

    * StringIndexOutOfBounds Exception.
    
<br>

* **SIGSEGV:** 

    Also known as *Segmentation Fault (core dumped)*, SIGSEGV is the most common type of error encounterred during programming. 
    
    It is generated when the program tries to access a memory that is not allowed to access.
    
    List of some of the common reasons for segmentation faults are:

    * Accessing an array out of bounds.

    * Dereferencing NULL pointers.

    * Dereferencing freed memory.

    * Dereferencing uninitialized pointers.

    * Incorrect use of the “&” and “*” operators.

    * Stack overflow.

    * Writing to read-only memory.

    <br>

    ```C++
    #include <bits/stdc++.h>
    using namespace std;
  
    void infiniteRecur(int a){
        return infiniteRecur(a);
    }

    int main(){

        long n;
        n = 100000000000;
        long a[n];
        cout << a[1] << " ";    //index out of bound
        infiniteRecur(5);       //infinte recursion
        return 0;
    }
    ```

<br>

* **SIGBUS:**

  SIGBUS or *Bad memory access* occurs when a variable is assigned garbage value resulting in runtime error.

  ```C++
  #include <iostream>
  using namespace std;

  int main(){
      long long N;
      long arr[N];    //N has garbage value here
      cin >> N;

      for (int i = 0; i < N; i++) {
          cout << arr[i] << " ";
      }
  
      return 0;
   }
  ```

<br>

## Ways to avoid Runtime Errors

* Avoid using variables that have not been initialized. 

* Check every single occurrence of an array element (all corner test cases) and ensure that it is not out of bounds.

* Avoid declaring too much memory.

* Avoid declaring too much Stack Memory. 

* Large arrays should be declared globally outside the function.

* Use return as the end statement.

* Avoid referencing free memory or null pointers.

<br>

Resources for further reading: https://en.cppreference.com/w/cpp/error

<br>

## References

* https://www.geeksforgeeks.org/runtime-errors/

* https://www.codecademy.com/articles/cpp-errors
