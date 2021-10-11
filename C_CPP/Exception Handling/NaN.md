# Documentation on NaN exception in C++

This documentation includes the following points in brief:

* What is NaN?

* How to check for NaN?

* Other facts

* References

<br>

## Introduction

**NaN** is an acronym that essentially stands for *Not a Number*. This exception is shown when a mathemtaical operation results in a number which cannot be shown by the computer. For example, imaginary numbers, square roots, result of 0/0, etc.


The NaN values can be different from each other. Library functions can differentiate them by analysing their implememntaion.

<br>

## How to check?

1. Using `==` operator:
  
   Any number can be compared to itself to check if it is complex. For example:

    ```C++
    #include<iostream>
    #include<cmath> 
    using namespace std;
    int main(){
        float a = sqrt(2);
        float b = sqrt(-2);   //complex

        a==a? cout << "Its a real number" << endl:  //true
              cout << "Its NaN" << endl;

        b==b? cout << "Its a real number" << endl:  //false
              cout << "Its NaN" << endl;
  
        return 0;
    }
    ```

2. Using isnan() function from `cmath` library
    
    This fucntion returns true if number is complex else returns false.
    For Example:

    ```C++
    #include<iostream>
    #include<cmath> 
    using namespace std;
    int main(){
        float a = sqrt(2);
        float b = sqrt(-2);   //complex 
    
        isnan(a)? cout << "Its NaN";    //false
                  cout << "Its a real number";

        isnan(b)? cout << "Its NaN";    //true
                  cout << "Its a real number";
         
        return 0;    
    }
    ```

`nanf` and `nanl` return NaN values of type float and long double, respectively.

<br>

## How to deal with it?'

One must check for NaN before dispatching the operation. If detected, the compiler should throw an error to signal the exception.

A simple 'if' statement should be used if NaN occurs frequently in one's code or if the code involves complex mathematical calculations. In all other cases, the checks can be eliminated.

<br>

## Points to note

* According to the IEEE, NaN values have the property that comparisons involving them are always false. That is, for a float f, f != f will be true only if f is NaN.

* A variable can be set NaN in C++ by the use of pointers.


<br>

## References

* https://www.geeksforgeeks.org/nan-in-cpp-what-is-it-and-how-to-check-for-it/

* https://www.quora.com/How-do-I-solve-or-overcome-the-NaN-value-in-C-programming

* https://stackoverflow.com/questions/570669/checking-if-a-double-or-float-is-nan-in-c