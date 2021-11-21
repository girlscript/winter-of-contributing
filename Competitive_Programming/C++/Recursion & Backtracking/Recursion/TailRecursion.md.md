
# Tail Recursion

* A special form of recursion where the last operation of a function is a recursive call. The recursion may be optimized away by executing the call in the current stack frame and returning its result rather than creating a new stack frame.
* All these operation performed **calling time** only and the function will not be performing any operation at **returning time**.
* It means that for each branch of the main conditional or for any given values of the parameters there must be at most **one** recursive call.
* The value returned by the recursive call is the result of the function.
* Usually a tail-recursive function can be easily transformed into an iterative one.
* Compilers can also optimize the code for such functions by using a single function space for the entire stack of recursive calls.

For better understanding, please have a look at the below code.
```cpp
fun(a)  
{
    if(a>0)
    {
        ----    //Performing some operation
        ----
        ----
        fun(a-1);  //Last statment is the recursive call
    }
}
```
As you can see in the above example, the fun function taking some parameter ‘a’ and if a>0, then there are some statements inside the if block, and further if you notice the last statement it is calling itself by a reduced value of a. So. what all it has to do; it is performing the operations first and then it is calling itself

So, the point that you need to remember is, if the last statement is a recursive function call then it is called tail recursion

**Implementation**

A good example of a tail recursive function is a function to compute the GCD, or Greatest Common Denominator, of two numbers:

```cpp
#include<stdio.h>
int tryDivisor(int m,int n,int g) 
{
    if(((m % g) == 0) && ((n % g) == 0))
        return g;
    else
        return tryDivisor(m, n, g - 1);
}
int gcd(int m, int n)
{
    return tryDivisor(m, n, n);
}
int main()
{
    int n1,n2;
    printf("\nEnter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("GCD of %d and %d is: %d\n",n1,n2,gcd(n1,n2));
    return 0;
}
```
**Output**

```cpp
Enter two numbers: 4 6
GCD of 4 and 6 is: 2
```

Let us consider another example, factorial in a recursive manner in C++
```cpp
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}
```

This implementation, while nice and neat and easy on the eyes, is not tail recursion. To get it to be tail recursive, that multiplication needs to happen inside the parameter list of the function call 
```cpp
int factorial(int n, int b = 1) {
    if (n == 0) {
        return b;
        }
    return factorial(n - 1, b * n);
}
```
**Time Complexity**

 Time complexity of a tail recursion is O(n) 

 **Space Complexity**

 Space complexity of tail Recursion  is O(n)