# <div align="center">💥 Static and Dynamic Scoping in C 💫</div> 

![image](https://user-images.githubusercontent.com/84238610/136240495-475518cc-0940-49fb-8c6c-9d7f2a52aecb.png)


What is scope?
--------------

*Scope* refers to the places in a program where a variable is visible and can be referenced.

An interesting situation is when a function has free variables. Consider the example below:
<p align="center"><img src="https://user-images.githubusercontent.com/84238610/136238511-7fcdb49e-18a1-4178-ae9f-70d165ca0d63.png"></p>
On line 1, we create a mapping for `x` with value `1`. On line 2, we define a function `f` whose body uses the parameter `a`, but also the free variable `x`. On line 3, we define a function `g`, whose body creates a new mapping for `x` with value `2`, and then calls `f(0)`. (Note that line 4 does not update the mapping created on line 1.) Finally, on line 7, we call `g()`.

What value does `g` return when it is called? What mapping does the free variable `x` on line 2 refer to? Does it refer to the mapping on line 1 that was visible when `f` was defined? Or does it refer to the mapping on line 4 that was created just before `f` was called?
/
## Definition
The **scope** of a variable x is the region of the program in which uses of x refers to its declaration. One of the basic reasons of scoping is to keep variables in different parts of program distinct from one another. Since there are only a small number of short variable names, and programmers share habits about naming of variables (e.g., i for an array index), in any program of moderate size the same variable name will be used in multiple different scopes.

Scoping is generally divided into two classes:\
\
**1. Static Scoping**\
**2. Dynamic Scoping**

## Static Scoping:
Static scoping is also called **lexical scoping**. In this scoping a variable always refers to its top level environment. This is a property of the program text and unrelated to the run time call stack. Static scoping also makes it much easier to make a modular code as programmer can figure out the scope just by looking at the code. In contrast, dynamic scope requires the programmer to anticipate all possible dynamic contexts.

In most programming languages including C, C++ and Java, variables are always statically (or lexically) scoped i.e., binding of a variable can be determined by program text and is independent of the run-time function call stack.

For example, output for the below program is 10, i.e., the value returned by f() is not dependent on who is calling it (Like g() calls it and has a x with value 20). f() always returns the value of global variable x.

```c
// A C program to demonstrate static scoping.
#include<stdio.h>
int x = 10;
  
// Called by g()
int f()
{
   return x;
}
  
// g() has its own variable
// named as x and calls f()
int g()
{
   int x = 20;
   return f();
}
  
int main()
{
  printf("%d", g());
  printf("\n");
  return 0;
}

Output :
10
```
To sum up in static scoping the compiler first searches in the current block, then in global variables, then in successively smaller scopes.

## Dynamic Scoping:
With dynamic scope, a global identifier refers to the identifier associated with the most recent environment, and is uncommon in modern languages. In technical terms, this means that each identifier has a global stack of bindings and the occurrence of an identifier is searched in the most recent binding.

In simpler terms, in dynamic scoping the compiler first searches the current block and then successively all the calling functions.
```c
// Since dynamic scoping is very uncommon in 
// the familiar languages, we consider the 
// following pseudo code as our example. It
// prints 20 in a language that uses dynamic
// scoping.   
  
int x = 10;
  
// Called by g()
int f()
{
   return x;
}
  
// g() has its own variable
// named as x and calls f()
int g()
{
   int x = 20;
   return f();
}
  
main()
{
  printf(g());
}
Output in a a language that uses Dynamic Scoping :

20
```
## Static Vs Dynamic Scoping
In most programming languages static scoping is dominant. This is simply because in static scoping it's easy to reason about and understand just by looking at code. We can see what variables are in the scope just by looking at the text in the editor.

Dynamic scoping does not care how the code is written, but instead how it executes. Each time a new function is executed, a new scope is pushed onto the stack.

[Perl](https://en.wikipedia.org/wiki/Perl) supports both dynamic ans static scoping. Perl's keyword "my" defines a statically scoped local variable, while the keyword "local" defines dynamically scoped local variable.

```perl
# A perl code to demonstrate dynamic scoping
$x = 10;
sub f 
{ 
   return $x; 
}
sub g 
{ 
   # Since local is used, x uses
   # dynamic scoping. 
   local $x = 20; 
  
   return f(); 
}
print g()."\n";

Output :

20
```
So that is all that you need to get started with Static/Dynamic Scoping in C.

## Thankyou for reading!🌼☺
<hr>
