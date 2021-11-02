# **Assignment Operator in Java**
The "Assignment Operator" is the single equal sign, = .The Assignment Operator is used when we want to assign a value to the expression.
It has this general form:

**var** = **expression**;

Here, the type of var must be *compatible* with the type of expression.

One more *interesting* thing about Java Assignment Operator is that we can create a *chain of assignments* where you can assign a single value for multiple variables.

For Example:

int x, y, z;

x = y = z = 50;     //set x, y and z to 50.

This works because the **=** is an operator that yields the value of the right-hand expression. Thus, the value of z = 50 is 50 which is then assigned to y, which in
turn is assigned to x.

Example:
```java
class Assignment{
    public static void main(String[] args){
        int a, b, c, d;
        a = 10;
        b = c = d = 100;
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
    }
}
```
**OUTPUT:**

10

100

100

100



# **Ternary (?) Operator in Java**
Java Ternary(*three-way*) operator can replace certain types of *if-then-else* statements. This Operator is the ?. It takes three conditions that's why it's name is Ternary(*three-way*).

The Ternary(?) has this general form.

*var* = *expression1* ? *expression2* : *expression3*;

Here, *expression1* can be any expression that evaluates to a boolean value. If *expression1* is true, then *expression2* is evaluated otherwise, *expression3* is evaluated. Both *expression2* and *expression3* are required to return the *compatible* type, which can not be void.
Example:
```java
class Ternary{
    public static void main(String[] args){
        int a = 10, b = 20, res;
        res = (a > b)? a : b;
        System.out.println("Greater Number is : " + res);
    }
}
```
**OUTPUT:**

Greater Number is : 20