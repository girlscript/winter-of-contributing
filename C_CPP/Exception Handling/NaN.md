# Documentation on NaN exception in C++

This documentation includes the following points in brief:
* What is NaN?
* How to check for NaN?
* Eliminating NaN exception
* References

## Introduction

**NaN** stands for *Not a Number*. This exception is shown when a mathematical operation results in a number which cannot be shown by the computer. For example, imaginary numbers, square roots, result of 0/0, etc.
The NaN values can be different from each other. Library functions can differentiate between them by analysing their implementation.

Possible conditions that generate NaN exception:
* Division by 0.
* Operations producing invalid floating-point numbers.
* Operation on a quiet NaN operand.

## How to check?

1. Using `==` operator: 
   Any number can be compared to itself to check if it is complex. For example:

    ```C++
    #include<iostream>
    #include<cmath> 
    using namespace std;
    int main(){
        float a, b;
        a=sqrt(2);
        b=sqrt(-2);   //complex
     
        if(a==a)  //true
          cout<<"It is a real number"; 
        else
           cout<<"It is NaN";

        if(b==b)  //false
           cout<<"It is a real number";
        else
            cout<<"It is NaN";
  
        return 0;
    }
    ```

2. Using isnan() function from `cmath` library 
    This function returns true if number is complex else returns false.
    For Example:

    ```C++
    #include<iostream>
    #include<cmath> 
    using namespace std;
    int main(){
        float a, b;
        a=sqrt(2);
        b=sqrt(-2);   //complex 
    
        if(isnan(a))  //false
          cout<<"It is NaN";
        else
          cout<<"It is a real number";

        if(isnan(b))  //true
          cout << "Its NaN"; 
        else
          cout<<"Its a real number";
         
        return 0;    
    }
    ```

`nanf` and `nanl` return NaN values of type float and long double, respectively.

## How to deal with it?

Real life models can turn out to be completely corrupted if NaN is encountered. Hence, one must check for NaN before dispatching the operation. If detected, the compiler should throw an error to signal the exception.
A simple 'if' statement should be used if NaN occurs frequently in one's code or if the code involves complex mathematical calculations. In imported datasets, empty values may also be reported as NaN. In all other cases, the checks can be eliminated.

## Points to note

* According to the IEEE, NaN comparisons always result in `false`.
* A variable can be set NaN in C++ by the use of pointers.
* The sign bit of NaN has no significance. The sign bit of the `Default NaN` is unknown.

## References

* [GFG](https://www.geeksforgeeks.org/nan-in-cpp-what-is-it-and-how-to-check-for-it/)
* [Stack Overflow](https://stackoverflow.com/questions/570669/checking-if-a-double-or-float-is-nan-in-c)
