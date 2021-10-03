# Java Data Types

Data types are divided into two groups:

- Primitive data types - includes `byte`, `short`, `int`, `long`, `float`,
  `double`, `boolean` and `char`
- Non-primitive data types - such as
  [String](https://www.w3schools.com/java/java_strings.asp),
  [Arrays](https://www.w3schools.com/java/java_arrays.asp) and
  [Classes](https://www.w3schools.com/java/java_classes.asp) (you will learn
  more about these in a later chapter)

## Primitive Data Types

A primitive data type specifies the size and type of variable values, and it has
no additional methods. There are eight primitive data types in Java:

## Numbers

Primitive number types are divided into two groups:

**Integer types** stores whole numbers, positive or negative (such as 123 or
-456), without decimals. Valid types are `byte`, `short`, `int` and `long`.
Which type you should use, depends on the numeric value.

**Floating point types** represents numbers with a fractional part, containing
one or more decimals. There are two types: `float` and `double`.

## Integer Types

### Byte

The `byte` data type can store whole numbers from -128 to 127. This can be used
instead of `int` or other integer types to save memory when you are certain that
the value will be within -128 and 127:

### Example

```java
byte myNum = 100;
System.out.println(myNum);
```

### Short

The `short` data type can store whole numbers from -32768 to 32767:

### Example

```java
short myNum = 5000;
System.out.println(myNum);
```

### Int

The `int` data type can store whole numbers from -2147483648 to 2147483647. In
general, and in our tutorial, the `int` data type is the preferred data type
when we create variables with a numeric value.

### Example

```java
int myNum = 100000;
System.out.println(myNum);
```

### Long

The `long` data type can store whole numbers from -9223372036854775808
to 9223372036854775807. This is used when int is not large enough to store the
value. Note that you should end the value with an "L":

### Example

```java
long myNum = 15000000000L;
System.out.println(myNum);

```

## Floating Point Types

You should use a floating point type whenever you need a number with a decimal,
such as 9.99 or 3.14515.

### Float

The `float` data type can store fractional numbers from 3.4e−038 to 3.4e+038.
Note that you should end the value with an "f":

### Example

```java
float myNum = 5.75f;
System.out.println(myNum);
```

### Double

The `double` data type can store fractional numbers from 1.7e−308 to 1.7e+308.
Note that you should end the value with a "d":

### Example

```java
double myNum = 19.99d;
System.out.println(myNum);

```

Use `float` or `double`?

The **precision** of a floating point value indicates how many digits the value
can have after the decimal point. The precision of `float` is only six or seven
decimal digits, while `double` variables have a precision of about 15 digits.
Therefore it is safer to use `double` for most calculations.

### Scientific Numbers

A floating point number can also be a scientific number with an "e" to indicate
the power of 10:

### Example

```java
float f1 = 35e3f;
double d1 = 12E4d;
System.out.println(f1);
System.out.println(d1);
```

## Booleans

A boolean data type is declared with the `boolean` keyword and can only take the
values `true` or `false`:

### Example

```java
boolean isJavaFun = true;
boolean isFishTasty = false;
System.out.println(isJavaFun);     // Outputs true
System.out.println(isFishTasty);   // Outputs false

```

Boolean values are mostly used for conditional testing, which you will learn
more about in a later chapter.

---

## Characters

The `char` data type is used to store a **single** character. The character must
be surrounded by single quotes, like 'A' or 'c':

### Example

```java
char myGrade = 'B';
System.out.println(myGrade);
```

Alternatively, you can use ASCII values to display certain characters:

### Example

```java
char myVar1 = 65, myVar2 = 66, myVar2 = 67;
System.out.println(myVar1);
System.out.println(myVar2);
System.out.println(myVar3);
```

## Strings

The `String` data type is used to store a sequence of characters (text). String
values must be surrounded by double quotes:

### Example

```java
String greeting = "Hello World";
System.out.println(greeting);
```
