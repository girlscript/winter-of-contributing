# Predefined Functional Interface
## Table of Content
* [Introduction](#introduction)
* [Major Types of Predefined Functional Interface](#major-types-of-predefined-functional-interface)
* [Predicate](#predicate)
* [Function](#function)
* [Consumer](#consumer)
* [Supplier](#supplier)
* [Other Functional Interfaces](#other-functional-interfaces)

## Introduction

Java provides a bunch of functional interfaces to deal with functional programming by using lambda and method references that comes under java.util.function package. Every predefined functional interface has its characteristics. 

>Some of the major ones are :
* Predicate
* Consumer
* Supplier 
* Function

## Predicate

* It accepts a single input.
* In other words, it is used for conditional checks.
* It supports a single abstract method named test().
* It always returns a Boolean type.

**For example :**
```java
import java.util.function.Predicate;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Predicate<Integer> ageTester = (x) -> x>18;
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

* It is used for performing logic on given input.
* It takes two arguments first is to represent input and second is for output.
* It supports a single abstract method named apply().
* Its return type can be varied.

**For example :**
```java
import java.util.function.Function;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Function<Integer,Integer> calculator = (x) -> 4*4;
        System.out.println("Square : "+calculator.apply(4));
    }
}
```
**Output:**

```
Square: 16
```
## Consumer

* It accepts a single input argument but returns nothing.
* It supports a single abstract method named accept().
* It doesn’t have any return type.

**For example :**
```java
import java.util.function.Consumer;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Consumer<Integer> display = (x) -> System.out.println("I am displaying "+ x);
       display.accept(10);
    }
}
```
**Output:**

```
I am displaying 10
```
## Supplier

* It accepts no argument but returns a value.
* It must return something.
* It supports a single abstract method named get().

**For example :**
```java
import java.util.Date;
import java.util.function.Supplier;

public class InBuiltFunctionalInterfaceExamples {

    public static void main(String[] args) {
        Supplier<Date> date = () -> new Date();
        System.out.println("Date : "+date.get());

    }
}
```
**Output:**

```
Date : Thu Oct 21 13:56:32 GMT 2021
```

## Other Functional Interfaces

* **BiConsumer<T,U>:** Represents an operation that accepts two input arguments and returns no result.
* **BiFunction<T,U,R>:** Represents a function that accepts two arguments and returns a result.
* **BiPredicate<T,U>:** Represents a boolean-valued function of two arguments.
* **BinaryOperator<T>:** Represents an operation upon two operands of the same type, producing a result of the same type as the operands.
* **BooleanSupplier:** Represents a supplier of boolean-valued results.
* **Consumer<T>:** Represents an operation that accepts a single input argument and returns no result.
* **DoubleBinaryOperator:** Represents an operation upon two double-valued operands and producing a double-valued result.
* **DoubleConsumer:** Represents an operation that accepts a single double-valued argument and returns no result.
* **DoubleFunction<R>:** Represents a function that accepts a double-valued argument and produces a result.
* **DoublePredicate:** Represents a predicate (boolean-valued function) of one double-valued argument.
* **DoubleSupplier:** Represents a supplier of double-valued results.
* **DoubleToIntFunction:** Represents a function that accepts a double-valued argument and produces an int-valued result.
* **DoubleToLongFunction:**	Represents a function that accepts a double-valued argument and produces a long-valued result.
* **DoubleUnaryOperato:r** Represents an operation on a single double-valued operand that produces a double-valued result.
* **Function<T,R>:** Represents a function that accepts one argument and produces a result.
* **IntBinaryOperator:** Represents an operation upon two int-valued operands and producing an int-valued result.
* **IntConsumer:** Represents an operation that accepts a single int-valued argument and returns no result.
* **IntFunction<R>:** Represents a function that accepts an int-valued argument and produces a result.
* **IntPredicate:**	Represents a predicate (boolean-valued function) of one int-valued argument.
* **IntSupplier:** Represents a supplier of int-valued results.
* **IntToDoubleFunction:** Represents a function that accepts an int-valued argument and produces a double-valued result.
* **IntToLongFunction:**  Represents a function that accepts an int-valued argument and produces a long-valued result.
* **IntUnaryOperator:** Represents an operation on a single int-valued operand that produces an int-valued result.
* **LongBinaryOperator:** Represents an operation upon two long-valued operands and producing a long-valued result.
* **LongConsumer:**	Represents an operation that accepts a single long-valued argument and returns no result.
* **LongFunction<R>:** Represents a function that accepts a long-valued argument and produces a result.
* **LongPredicate:** Represents a predicate (boolean-valued function) of one long-valued argument.
* **LongSupplier:** Represents a supplier of long-valued results.
* **LongToDoubleFunction:** Represents a function that accepts a long-valued argument and produces a double-valued result.
* **LongToIntFunction:** Represents a function that accepts a long-valued argument and produces an int-valued result.
* **LongUnaryOperator:** Represents an operation on a single long-valued operand that produces a long-valued result.
* **ObjDoubleConsumer<T>:** Represents an operation that accepts an object-valued and a double-valued argument, and returns no result.
* **ObjIntConsumer<T>:** Represents an operation that accepts an object-valued and a int-valued argument, and returns no result.
* **ObjLongConsumer<T>:** Represents an operation that accepts an object-valued and a long-valued argument, and returns no result.
* **ToDoubleBiFunction<T,U>:** Represents a function that accepts two arguments and produces a double-valued result.
* **ToDoubleFunction<T>:** Represents a function that produces a double-valued result.
* **ToIntBiFunction<T,U>:** Represents a function that accepts two arguments and produces an int-valued result.
* **ToIntFunction<T>:** Represents a function that produces an int-valued result.
* **ToLongBiFunction<T,U>:** Represents a function that accepts two arguments and produces a long-valued result.
* **ToLongFunction<T>:** Represents a function that produces a long-valued result.
* **UnaryOperator<T>:** Represents an operation on a single operand that produces a result of the same type as its operand.
