# What is Union Data Type ?
 A Union is an *User-defined Type* in C Programming Language. Unions are used to save memory, To better understand It is a memory location shared by two or more variables of different Data Types. It allow data members which are mutually exclusive to share the same memory. This is quite important
when memory is valuable, such as in embedded systems. Unions are mostly used in embedded programming
where direct access to the memory is needed.
## Syntax of Union Data Type 
Syntax for declaring a union is same as that of declaring a *Structure* except the keyword **struct**. The general form of **Union** is: 
>**union** *union-type-name* {<br /> *type member-name*<br /> *type member-name*<br /> *type member-name* <br /> .<br /> .<br /> .<br/>} *union-variable* ;
