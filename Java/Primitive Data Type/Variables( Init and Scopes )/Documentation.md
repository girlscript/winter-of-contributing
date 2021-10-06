<h1 align="center">Variables in Java</h1>
<br>

## <b>What are Variables ? </b>
<br>
<b>Variables</b> in a programming language can be defined as a name given to an memory location. It can be considered as a container or a box that stores some data while the program is executed. Moreover, they are a helpful way of labeling our data in a way that strengthens reader comprehension and improves ourselves as well. Typical functions of these elements include storing data and labeling it. Throughout your program, you can use this data.  

<br>
<br>
<br>

## Naming the Variables :- 

<br>

Naming a variable is just like naming that box which contains data while the program is being executed, so that it can be used in some operations in future.

A name for a variable, in computer programming, is considered to be a difficult task. If you are naming variables, take your time to think about their names. If you are assigning a variable a name, make sure it is descriptive and easily understood by another person. The other reader can also be you, if you revisit an earlier program that you wrote months or even years ago.

<br>


### There are some rules or conventions used for naming a variables :-

<br>

<li>Names for variables can only contain letters (both uppercase and lowercase letters), numbers and underscores.</li>
<li>Variables should begin with either a letter or an underscore.</li>
<li>Names of variables (identifiers) do not need to be any particular length.</li>
<li>Variables name can't be same as any keyword or reserved words of that programming language.</li>

<br>
<br>

## Declaring a  Variables :-
<br>

To create a variable and use it into the program, we must specify the datatype to the variable name.

<div align="center">

![declaring_the_variable](https://github.com/AbhishekBhatt072003/winter-of-contributing/blob/Java/Java/Primitive%20Data%20Type/Assets/declaration.png)

</div>

<br>
As from the above image we can see that, while declaring the variable we need to take care of some things,

<br>
<br>

<b>Datatype :</b> Datatype denotes that what type of data can a varible store and what types of operations can be performed on it. 

<br>
Not all variables can store all type of data, infact a variable can store a particular type of data and that is specified by the datatype assigned to that variable during declaration.
<br>
For Example: 

```java
int a;
```
Here, in the above example we can see that variable "a" is declared as integer(int). So "a" can only store integer values like 45,68,0,-78,-100 etc. By no chance it can have any decimal or fractional number.

<br>

# Initializing  a  Variables :- 
<br>

Providing or giving some default value to a variable is known as initializing the variable.
<br>
The syntax of declaring the variable inside java program is :

```
datatype variable_name = value; 
```

For Example :-
<div align="center">

![Initializing_the_variable](https://github.com/AbhishekBhatt072003/winter-of-contributing/blob/Java/Java/Primitive%20Data%20Type/Assets/initializing.png)

</div>


From the above image we can see that on assigning 45 to variable "num", create a block of memory on the main memory of the device which can be used whenever we needed.

<br>
<br>
<h2 align="center">Scope of the variable</h2>

<br>
Scope of a variable can be defined as the part of the program where that variable can be accessible. In java programming the scope of any variable is determined at the compile time (i.e when java code is being converted into machine code).  

### On the basis of scope the variables are classified into following types:

1. Class or member variables 
2. Local variables 
3. Block scope variables 

<br>
Let's learn them one by one :)

<br>
<br>
<h3 align="center">Class or member variables</h3>

<br>

Classes are the basis for Java programs. Every code , functions, etc we write in java are written inside a particular class. 

<br>
<br>
These variables are declared inside the class but outside any function. They have the global scope in program i.e they can be accessed anywhere in the program. 

For Example :
```java
class Variables 
{
    // Any variable declared inside class and outside any functions are class variable

    int a,b;
    char c;

    void sum()
    {
        //a,b can be used inside any method
        a = 45; 
        b = 78;
        System.out.println(a+b);
    }

    void printChar()
    {
        // similarly c can also be used inside any method
        c = '#';
        System.out.println(c);
    }
}
```
<br>


<h3 align="center">Method variables</h3>
<br>
These are the variables that are declared inside methods and have the method level scope. They can only be accessible in those method in which they are declared.

For example :
```java
class Variables 
{
    void method()
    {
        int a = 45;  // a can only be accessed in this method.
        System.out.println("The value of a is = " + a);
    }
}
```


<br>

** Some times there comes a situation where both class variable and method variable have same name. So this is where the _"this"_ keyword comes into picture. 

**See the "this" keword documentation for more details.

<br>
<h3 align="center">Block scope variables</h3>
<br>
Variables that are declared inside a pair of curly braces "{" and "}" have the block scope. They are only accessible inside those braces.
<br>
Variables declared inside {} or for loop or while loop are examples of this.

```java
class Variables 
{
    void method()
    {
        int i = 0; // i is a method scope variable.
        while(i != 1)
        {
            int a = 5; //this is a block scope variable.
            System.out.println(a);
            i++;
        }

        // any use of variable "a" outside will produce error

    }
}
```

Output:
```
5
```

<br>
There is another twist in Java related to Block and method scope variables.

_"If two variables one with method scope and another with block scope have same name then on compilation it will be going to give the error."_


```java
class Varibles 
{
    void method()
    {
        int x = 45;
        {
            int x = 894;
            System.out.println(x); //will produce an error
        }
    }
}
```
Output
```
7: error: variable x is already declared

{
    int x = 848;
        ^
}

1 error
```

<b>So the point is Java does not allow to declare the variable with same name that is already declared and have the higher scope presidency.</b>


<br>
That's all for this topic. If you like this docs then make sure to check more at :-

[Girlscript Winter of contribution](https://github.com/girlscript/winter-of-contributing)

