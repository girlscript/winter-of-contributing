# Predefined Functional Interface
## Table of Content
* [Introduction](#introduction)
* [Predicate](#predicate)
* [Function](#function)
* [Consumer](#consumer)
* [Supplier](#supplier)
* [Other Functional Interfaces](#other-functional-interfaces)

## Introduction

Java furnishes utilitarian interfaces to manage practical programming by utilizing lambda and technique references that goes under java.util.function bundle. Each predefined utilitarian interface has its attributes.

>Some of the major ones are :
* Predicate
* Consumer
* Supplier 
* Function

## Predicate

* It accepts a single input.
* It is used for conditional checks.
* It supports test() which is a single abstract method.
* It always returns a Boolean type.

**For example :**
```java
import java.util.function.Predicate;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Predicate ageTester = (x) -> x>18;
        if(ageTester.test(15))
        {
            System.out.println("You can vote");
        }
        else
        {

            System.out.println("You are too young");
        }
    }
}
```
**Output:**

```
You are too young
```
## Function

* It is used for performing logic on a given input.
* It takes two arguments in which first is used to represent input and second is used for output.
* It supports apply() which is a single abstract method.
* Its return type can be varied.

**For example :**
```java
import java.util.function.Function;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Function calculator = (x) -> 4*4;
        System.out.println("Square : "+calculator.apply(4));
    }
}
```
**Output:**

```
Square: 16
```
## Consumer

* Single input argument is accepted and nothing is returned.
* It upholds a single abstract method named accept().
* It doesn’t have any return type.

**For example :**
```java
import java.util.function.Consumer;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Consumer display = (x) -> System.out.println("I am displaying "+ x);
       display.accept(10);
    }
}
```
**Output:**

```
I am displaying 10
```
## Supplier

* No argument is accepted but it returns a value.
* It must return something.
* It upholds a single abstract method named get().

**For example :**
```java
import java.util.Date;
import java.util.function.Supplier;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Supplier date = () -> new Date();
        System.out.println("Date : "+date.get());

    }
}
```
**Output:**

```
Date : Thu Oct 21 13:56:32 GMT 2021
```

## Other Functional Interfaces

* **BiConsumer:** Represents an operation that accepts two input arguments and returns no result.
* **BiFunction:** Represents a function which accepts two arguments and returns a result.
* **BiPredicate:** Represents a boolean-valued function of two arguments.
* **BinaryOperator:** Represents an operation upon two operands of the same type that produces a result of same type as the operands.
* **BooleanSupplier:** Represents a supplier of boolean-valued results.
* **Consumer:** Represents an operation which accepts a single input argument and returns no result.
* **DoubleBinaryOperator:** Represents an operation that occurs on two double-valued operands and a double-valued result is produced.
* **DoubleConsumer:** Represents an operation that accepts a single double-valued argument and returns no result.
* **DoubleFunction:** Represents a function which accepts a double-valued argument and produces a result.
* **DoublePredicate:** Represents a predicate of one double-valued argument.
* **DoubleSupplier:** Represents a supplier of double-valued results.
* **DoubleToIntFunction:** Represents a function which accepts a double-valued argument and produces an int-valued result.
* **DoubleToLongFunction:**	Represents a function where a double-valued argument is accepted and a long-valued result is produced.
* **DoubleUnaryOperator:** Represents an operation on a single double-valued operand which produces a double-valued result.
* **Function:** Represents a function in which one argument is accepted and a result is produced.
* **IntBinaryOperator:** Represents an operation upon two int-valued operands and producing an int-valued result.
* **IntConsumer:** Represents an operation which accepts a single int-valued argument and returns no result.
* **IntFunction:** Represents a function which accepts an int-valued argument and produces a result.
* **IntPredicate:**	Represents a predicate of one int-valued argument.
* **IntSupplier:** Represents supplier of int-valued results.
* **IntToDoubleFunction:** Represents a function where an int-valued argument is accepted and a double-valued result is produced.
* **IntToLongFunction:**  Represents a function which accepts an int-valued argument and produce a long-valued result.
* **IntUnaryOperator:** Represents an operation on a single int-valued operand which produces an int-valued result.
* **LongBinaryOperator:** Represents an operation upon two long-valued operands that produces a long-valued result.
* **LongConsumer:**	Represents an operation which accepts a single long-valued argument and returns no result.
* **LongFunction:** Represents a function which accepts a long-valued argument and produce a result.
* **LongPredicate:** Represents a predicate of one long-valued argument.
* **LongSupplier:** Represents a supplier of long-valued results.
* **LongToDoubleFunction:** Represents a function which accepts a long-valued argument and produces a double-valued result.
* **LongToIntFunction:** Represents a function which accepts a long-valued argument and produces an int-valued result.
* **LongUnaryOperator:** Represents an operation on a single long-valued operand that produces a long-valued result.
* **ObjDoubleConsumer:** Represents an operation which accepts an object-valued and a double-valued argument, and returns no result.
* **ObjIntConsumer:** Represents an operation which accepts an object-valued and a int-valued argument, and returns no result.
* **ObjLongConsumer:** Represents an operation which accepts an object-valued and a long-valued argument, and returns no result.
* **ToDoubleBiFunction:** Represents a function which accepts two arguments and produces a double-valued result.
* **ToDoubleFunction:** Represents a function which produces a double-valued result.
* **ToIntBiFunction:** Represents a function which accepts two arguments and produces an int-valued result.
* **ToIntFunction:** Represents a function which produces an int-valued result.
* **ToLongBiFunction:** Represents a function which accepts two arguments and produces a long-valued result.
* **ToLongFunction:** Represents a function which produces a long-valued result.
* **UnaryOperator:** Represents an operation on a single operand that produces a result of the same type as its operand.
