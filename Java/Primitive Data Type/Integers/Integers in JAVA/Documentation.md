<h1 align="center"> <strong><u>Integers in Java</u></strong></h1>

<p>

In Java, there are ```two categories``` of data types -

1. Primitive Data Types
2. Non-Primitive or Object Data Type

```Integers``` are in the category of <em>```Primitive Data Types```</em>. ```Integers``` represents the ```whole numbers```, that is, they can have any numeric value, <em>```without decimal point```</em>.

<br>
    
<!-- ![DataTypes](https://user-images.githubusercontent.com/87887741/134543635-ef6eccdf-528e-4569-bccf-6c2e73a1f0e0.png) -->
<p align="center">
  <img src="https://user-images.githubusercontent.com/87887741/134543635-ef6eccdf-528e-4569-bccf-6c2e73a1f0e0.png">
</p><br>

</p><br>

<h2 align="center"><em><u>Types of Integers</u></em></h2>

<p>

Depending upon the range of numeric values a data type can represent, ```Integers``` are categorised into <em>```four types```</em> -

<em>

1. [`Byte`](#Byte-Type)
2. [`Short`](#Short-Type)
3. [`Int`](#Int-Type)
4. [`Long`](#Long-Type)

</em>

<br>
    
<p align="center">
  <img src="https://user-images.githubusercontent.com/87887741/134544170-3c2a4726-c7ab-4116-90a8-9a3dd0615a60.png">
</p><br>

<!-- ![integer-data-types](https://user-images.githubusercontent.com/87887741/134544170-3c2a4726-c7ab-4116-90a8-9a3dd0615a60.png) -->

A variable of each of these data types can hold whole numbers within a certain ```range```, depending upon the ```size``` of the data type. A variable of all the four types of ```integers``` can hold whole numbers within ```different ranges```. Therefore, they all have ```different sizes```.

Let us discuss all four ```Integer``` types in detail.

</p><br>

<h2 align="center"><em><u>Byte Type</u></em></h2>

<p>

Any data value stored in the computer’s memory must be represented as a <em>```binary number```</em>, that is, as a string of zeros and ones. A single zero or one is called a ```bit```. A string of <em>```eight bits```</em> is called a ```byte```. Therefore, the size of ```byte``` data type is 8 bit or <em>```1 byte```</em>.

A variable of type ```byte``` can hold any of the integers between <em>```-128 and 127```</em>, both inclusive. Therefore, a variable of ```byte``` type can hold - ```two raised to power eight``` - <em>```256```</em> different values.

<br>

```Java
Example:

byte a = 10;
byte b = -46;
byte c = 0;
```

<br>

By default, a ```byte``` variable is initialized with ```0``` by the compiler, if not initialised manually.

<br>

<h3><em><u>

Input and Output Streams -

</u></em></h3>

<p>

Java programs perform I/O through streams. <em>```A stream is an abstraction that either produces or consumes information```</em>. Java implements streams using classes defined in the <em>```'java.io'```</em> package. <em>A java package is a group of similar types of classes and sub-packages.</em>

<em>```Byte streams```</em> provide handling of input and output of ```bytes```.

</p><br>

<h3><em><u>

Reading Inputs using 'Scanner class' -

</u></em></h3>

<p>

The Java <em>```Scanner class```</em> is the simplest way to get input in Java. By the help of Scanner in Java, we can get ```input``` from the user.

Scanner class in Java is found in the <em>```'java.util'```</em> package. It provides ```methods``` to read the type of value entered through ```standard input device``` (which, in most of the cases, is keyboard).

To read a value of type ```byte```, Scanner class provides a ```method``` called <em>```nextByte()```</em>. To get the input, we need to create an ```object``` of ```Java Scanner class```, which reads input from the user.

</p><br>

```Java
Example and Syntax:

import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        /* Syntax */
        
        // We need to pass the input stream, (System.in) in the constructor of Scanner class
        Scanner input = new Scanner(System.in);

        // We need to declare a variable of 'byte' type to store the input from standard input device.
        byte b;

        // Taking input using object of 'Scanner class'
        b = input.nextByte();  // This will read a input which will be stored in the variable of type 'byte'.

        System.out.println(b); // Printing the value stored in variable 'b'.
    }
}
```
```Java
Input : 24
Output: 24

Input : -98
Output: -98
```

<br>

<h3><em><u>

Byte Wrapper Class-

</u></em></h3>

<p>

Java is an ```object-oriented programming language```, so we need to deal with objects many times. ```Wrapper classes``` provide a way to use ```primitive data types``` as ```objects```. These ```Wrapper classes``` are defined in the <em>```'java.lang'```</em> package.

```Byte class``` is a wrapper class for the primitive type ```byte```.

We can use functions of ```Byte``` wrapper class to check the ```minimum``` and ```maximum``` value a ```byte``` type variable can hold.

<br>

```Java
import java.lang.Byte;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'MIN_VALUE' function in order to get minimum value of byte
        System.out.println("Minimum value of byte --> " + Byte.MIN_VALUE); 

        // we use 'MAX_VALUE' function in order to get maximum value of byte
        System.out.println("Maximum value of byte --> " + Byte.MAX_VALUE);
    }
}
```
```
Output:

Minimum value of byte --> -128
Maximum value of byte --> 127
```

<br>

We can use other functions of ```Byte``` wrapper class to check the ```size in bits```, ```size in bytes``` of ```byte``` type and ```data type``` of ```Byte``` wrapper class.

<br>

```Java
import java.lang.Byte;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'SIZE' function in order to get size of byte in bits
        System.out.println("Size of byte in bits --> " + Byte.SIZE);

        // we use 'BYTES' function in order to get size of byte in bytes
        System.out.println("Size of byte in bytes --> " + Byte.BYTES);

        // we use 'TYPE' function in order to get data type of 'Byte' wrapper class
        System.out.println("Data type of 'Byte' class --> " + Byte.TYPE);
    }
}
```
```
Output:

Size of byte in bits --> 8
Size of byte in bytes --> 1
Data type of 'Byte' class --> byte
```

<br></p>

Since ```byte``` is the <em>```smallest sized integer type```</em>, so it can be used to <em>```save memory```</em> while working with ```larger sized arrays```. Also, it can be used in place of other ```integer``` types if the data is in the range of ```-128 to 127```, that is, within the range of ```byte``` type to save memory.

</p><hr>

[`↑Back to Top`](#Types-of-Integers)<br>

<h2 align="center"><em><u>Short Type</u></em></h2>

<p>

A variable of ```byte type``` can hold integers ranging from ```-128 to 127```. But what if we need to work with integers that is outside the range of ```byte```.

In solution to this problem, ```Java``` provides other data types of ```Integer``` category with ```extended range and size```.

```short``` data type corresponds to <em>```2 bytes```</em> (16 bits) of memory. So, a variable of ```short``` type can hold - ```two raised to power sixteen``` - <em>```65,536```</em> different values. Therefore, a variable of type ```short``` can hold any of the integers between <em>```-32,768 and 32,767```</em>, both inclusive.

<br>

```Java
Example:

short a = 10000;
short b = -4000;
short c = 127;
```

<br>

By default, a ```short``` variable is initialized with ```0``` by the compiler, if not initialised manually.

<br>

<h3><em><u>

Input and Output Streams -

</u></em></h3>

<p>

A <em>```Character based stream```</em> provide handling of input of ```short```, which is obtained by wrapping the ```standard input stream```, <em>```System.in```</em> in a <em>```BufferedReader```</em> object.

Console output is done with methods that are defined by the class <em>```PrintStream```</em>.

</p><br>

<h3><em><u>

Reading Inputs using 'Scanner class' -

</u></em></h3>

<p>

Similar to the ```byte``` data type, objects of <em>```Scanner class```</em> can be used to read input from standard input device.

To read a value of type ```short```, Scanner class provides a ```method``` called <em>```nextShort()```</em>. To get the input, we need to create an ```object``` of ```Java Scanner class```, which reads input from the user.

</p><br>

```Java
Example and Syntax:

import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        /* Syntax */
        
        // We need to pass the input stream, (System.in) in the constructor of Scanner class
        Scanner input = new Scanner(System.in);

        // We need to declare a variable of 'short' type to store the input from standard input device.
        short s;

        // Taking input using object of 'Scanner class'
        s = input.nextShort();  // This will read a input which will be stored in the variable of type 'short'.

        System.out.println(s); // Printing the value stored in variable 's'.
    }
}
```
```Java
Input : 5234
Output: 5234

Input : -14613
Output: -14613
```

<br>

<h3><em><u>

Short Wrapper Class-

</u></em></h3>

<p>

```Short class``` is a wrapper class for the primitive type ```short```.

We can use functions of ```Short``` wrapper class to check the ```maximum``` and ```minimum``` value a ```short``` type variable can hold.

<br>

```Java
import java.lang.Short;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'MIN_VALUE' function in order to get minimum value of short
        System.out.println("Minimum value of short --> " + Short.MIN_VALUE); 

        // we use 'MAX_VALUE' function in order to get maximum value of short
        System.out.println("Maximum value of short --> " + Short.MAX_VALUE);
    }
}
```
```
Output:

Minimum value of short --> -32768
Maximum value of short --> 32767
```

<br>

We can use other functions of ```Short``` wrapper class to check the ```size in bits```, ```size in bytes``` of ```short``` type and ```data type``` of ```Short``` wrapper class.

<br>

```Java
import java.lang.Short;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'SIZE' function in order to get size of short in bits
        System.out.println("Size of short in bits --> " + Short.SIZE);

        // we use 'BYTES' function in order to get size of short in bytes
        System.out.println("Size of short in bytes --> " + Short.BYTES);

        // we use 'TYPE' function in order to get data type of 'Short' wrapper class
        System.out.println("Data type of 'Short' class -->" + Short.TYPE);
    }
}
```
```
Output:

Size of short in bits --> 16
Size of short in bytes --> 2
Data type of 'Short' class --> short
```

<br></p>

Since ```short``` data type is still smaller type than two other ```Integer``` types, they can also be used to save memory just like ```byte``` data type.

</p><hr>

[`↑Back to Top`](#Types-of-Integers)<br>


<h2 align="center"><em><u>Int Type</u></em></h2>

<p>

```Int``` data type is the most used data type among the ```4 Integer types```. It is generally used as a default data type for integral variables inside our program.

```int``` data type corresponds to <em>```4 bytes```</em> (32 bits) of memory. So, it provides large range of different ```integer``` value for a variable of type ```int```.

A variable of ```int``` type can hold - ```two raised to power thirty two``` - <em>```4,29,49,67,296```</em> different values, whiche is a very large value to read. Therefore, a variable of type ```int``` can hold any of the integers between <em>```-2147483648 and 2147483647```</em>, both inclusive.

<br>

```Java
Example:

int a = 1000000;
int b = -2000000;
int c = 32000;
int d = 127;
int e = 0;
```

<br>

All of the above values lies inside the range of ```int type```. Therefore, they can be assigned to a variable of ```int type```.

</p>

By default, a ```int``` variable is initialized with ```0``` by the compiler, if not initialised manually.

<br>

<h3><em><u>

Input and Output Streams -

</u></em></h3>

<p>

Similar to that of ```Short``` type, A <em>```Character based stream```</em> provide handling of input of ```int```, which is obtained by wrapping the ```standard input stream```, <em>```System.in```</em> in a <em>```BufferedReader```</em> object.

Also, similar to ```short```, Console output is done with methods that are defined by the class <em>```PrintStream```</em>.

</p><br>

<h3><em><u>

Reading Inputs using 'Scanner class' -

</u></em></h3>

<p>

Similar to the ```byte``` and ```short``` data type, objects of <em>```Scanner class```</em> can be used to read input from standard input device.

To read a value of type ```int```, Scanner class provides a ```method``` called <em>```nextInt()```</em>. To get the input, we need to create an ```object``` of ```Java Scanner class```, which reads input from the user.

</p><br>

```Java
Example and Syntax:

import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        /* Syntax */
        
        // We need to pass the input stream, (System.in) in the constructor of Scanner class
        Scanner input = new Scanner(System.in);

        // We need to declare a variable of 'int' type to store the input from standard input device.
        int i;

        // Taking input using object of 'Scanner class'
        s = input.nextInt();  // This will read a input which will be stored in the variable of type 'int'.

        System.out.println(i); // Printing the value stored in variable 'i'.
    }
}
```
```Java
Input : 67347
Output: 67347

Input : -52349
Output: -52349
```

<br>

<h3><em><u>

Integer Wrapper Class-

</u></em></h3>

<p>

```Integer class``` is a wrapper class for the primitive type ```int```.

We can use functions of ```Integer``` wrapper class to check the ```maximum``` and ```minimum``` value a ```int``` type variable can hold.

<br>

```Java
import java.lang.Integer;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'MIN_VALUE' method in order to get minimum value of int
        System.out.println("Minimum value of int --> " + Integer.MIN_VALUE); 

        // we use 'MAX_VALUE' method in order to get maximum value of int
        System.out.println("Maximum value of int --> " + Integer.MAX_VALUE);
    }
}
```
```
Output:

Minimum value of int --> -2147483648
Maximum value of int --> 2147483647
```
<br>

We can use other functions of ```Integer``` wrapper class to check the ```size in bits```, ```size in bytes``` of ```int``` type and ```data type``` of ```Integer``` wrapper class.

<br>

```Java
import java.lang.Integer;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'SIZE' function in order to get size of int in bits
        System.out.println("Size of int in bits --> " + Integer.SIZE);

        // we use 'BYTES' function in order to get size of int in bytes
        System.out.println("Size of int in bytes --> " + Integer.BYTES);

        // we use 'TYPE' function in order to get data type of 'Integer' wrapper class
        System.out.println("Data type of 'Integer' class --> " + Integer.TYPE);
    }
}
```
```
Output:

Size of int in bits --> 32
Size of int in bytes --> 4
Data type of 'Integer' class --> int
```
</p><hr>

[`↑Back to Top`](#Types-of-Integers)<br>


<h2 align="center"><em><u>Long Type</u></em></h2>

<p>

```long``` data type is the highest sized data type among the ```4 Integer types```. It is a ```64-bit``` type and is useful for those occasions where an ```int``` type is not large.

The ```range``` of a ```long``` is quite large. This makes it useful when big, whole numbers are needed.

<br>

For example, Let's computes the number of miles that light will travel in a 1000 days.

```Java
public class Main
{
    public static void main(String[] args)
    {
        // Compute distance light travels using long variables.
        int lightspeed;

        long days;
        long seconds;
        long distance;

        // approximate speed of light in miles per second
        lightspeed = 186000;

        days = 1000; // specify number of days here
        seconds = days * 24 * 60 * 60; // convert to seconds

        distance = lightspeed * seconds; // compute distance
        
        System.out.print("In " + days);
        System.out.print(" days light will travel about ");
        System.out.println(distance + " miles.");
    }
}
```
```
Output:

In 1000 days light will travel about 16070400000000 miles.
```

<br>

One can clearly observe the resuting number. It is quite large and we definetly not store this number inside a ```int``` variable, since the number is not in the range of ```int```. But using ```long``` type, we can easily perform such large calculations.

```long``` data type corresponds to <em>```8 bytes```</em> (64 bits) of memory. A variable of ```long``` type can hold - ```two raised to power sixty four``` - <em>```18,446,744,073,709,551,615```</em> different values, whiche is a very large value to read. Therefore, a variable of type ```long``` can hold any of the integers between <em>```-9,223,372,036,854,775,808 (-2^63) to 9,223,372,036,854,775,807 (2^63 – 1)```</em>, both inclusive. Such a large range of ```long``` type makes it a ```special``` and very useful data type.

<br>

<h3><em><u>

Declaring a 'long' value in Java -

</u></em></h3>

<p>

Unlike ```C``` or ```C++``` programing languages, ```long``` type in ```Java``` is declared in a slight different way.

In ```Java```, all the numbers without a ```decimal point``` is considered as ```int```. So, if we want to use a ```long``` type and not a ```int```, we need to specify to the compiler by appending the alphabet ```L``` or ```l``` to the last of the numeric value.

Let's understand it with some example and code snippets:

<br>

```Java
Example:

/* Correct declarations */

long a = 127348L;   // Appending alphabet 'L' will make the number '127348' of 'long' type
long b = -27653l;   // Appending alphabet 'l' also will make the number '-27653' of 'long' type

/* Correct declarations without appending 'L' or 'l' */

long l = 854775808;      // Not an error since the number '854775808' is within the range of 'int'. But it will be treated as 'int' and not 'long'
long m = -2147483640;    // Not an error since the number '-2147483640' is within the range of 'int'. But it will be treated as 'int' and not 'long'
```

<br>

<h3><em><u> Code snippet applying above example:</u></em></h3>

<br>

```Java
public class Main
{
    public static void main(String[] args)
    {
        long a = 127348L;
        long b = -27653l;

        System.out.println("a --> " + a);
        System.out.println("b --> " + b);

        System.out.println();   // for new line

        long l = 854775808;
        long m = -2147483640;

        System.out.println("l --> " + l);
        System.out.println("m --> " + m);
    }
}
```
```Java
Output:

a --> 127348
b --> -27653

l --> 854775808
m --> -2147483640
```

<br>

But, If we don't append the alphabet ```L``` or ```l``` to the last of a numeric value, and try to assign it to a ```long``` type variable, compiler will give an error if the numeric value is not in the range of ```int``` (since the by default data type ```Integers``` in ```Java``` is considered as ```int```, therefore, compiler will always treat the value as of ```int``` type).

<br>

```Java
Example:

/* Incorrect declarations */

long i = 2147483648;            // Error, since the number '2147483648' is not the range of 'int'.
long j = 9223372036854775807;   // Error, since the number '9,223,372,036,854,775,807' is not the range of 'int'.
```

<br>

<h3><em><u> Code snippet applying above example:</u></em></h3>

<br>

```Java
public class Main
{
    public static void main(String[] args)
    {
        long i = 2147483648L;
        long j = 9223372036854775807;

        System.out.println("i --> " + i);
        System.out.println("j --> " + j);
    }
}
```
```
Output:
```

<!-- ![Screenshot (777)](https://user-images.githubusercontent.com/87887741/134544579-e7e9d0a9-09fa-4b2f-8c0b-92ee9e32a77a.png) -->
<p align="center">
  <img src="https://user-images.githubusercontent.com/87887741/134544579-e7e9d0a9-09fa-4b2f-8c0b-92ee9e32a77a.png">
</p><br>

Therefore, all of the above example clarifies that how we can ```declare``` and ```assign``` values to a variable of ```long``` type.

</p>

By default, a ```long``` variable is initialized with ```0``` by the compiler, if not initialised manually.

<br>

<h3><em><u>

Input and Output Streams -

</u></em></h3>

<p>

Similar to that of ```Short``` and ```int``` type, A <em>```Character based stream```</em> provide handling of input of ```long```.

Also, similar to ```short``` and ```int```, Console output is done with methods that are defined by the class <em>```PrintStream```</em>.

</p><br>

<h3><em><u>

Reading Inputs using 'Scanner class' -

</u></em></h3>

<p>

Similar to the ```byte```, ```short``` and ```int``` data type, objects of <em>```Scanner class```</em> can be used to read input from standard input device.

To read a value of type ```long```, Scanner class provides a ```method``` called <em>```nextLong()```</em>. To get the input, we need to create an ```object``` of ```Java Scanner class```, which reads input from the user.

</p><br>

```Java
Example and Syntax:

import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        /* Syntax */

        // We need to pass the input stream, (System.in) in the constructor of Scanner class
        Scanner input = new Scanner(System.in);

        // We need to declare a variable of 'int' type to store the input from standard input device.
        long l;

        // Taking input using object of 'Scanner class'
        l = input.nextLong();  // This will read a input which will be stored in the variable of type 'int'.

        System.out.println(l); // Printing the value stored in variable 'i'.
    }
}
```
```Java
Input : 18481599
Output: 18481599

Input : -98146136
Output: -98146136
```

<br>

<h3><em><u>

Long Wrapper Class-

</u></em></h3>

<p>

```Long class``` is a wrapper class for the primitive type ```long```.

We can use functions of ```Long``` wrapper class to check the ```maximum``` and ```minimum``` value a ```long``` type variable can hold.

<br>

```Java
import java.lang.Long;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'MIN_VALUE' method in order to get minimum value of long
        System.out.println("Minimum value of long --> " + Long.MIN_VALUE);

        // we use 'MAX_VALUE' method in order to get maximum value of long
        System.out.println("Maximum value of long --> " + Long.MAX_VALUE);
    }
}
```
```
Output:

Minimum value of long --> -9223372036854775808
Maximum value of long --> 9223372036854775807
```
<br>

We can use other functions of ```Long``` wrapper class to check the ```size in bits```, ```size in bytes``` of ```long``` type and ```data type``` of ```Long``` wrapper class.

<br>

```Java
import java.lang.Long;

public class Main
{
    public static void main(String[] args)
    {
        // we use 'SIZE' function in order to get size of long in bits
        System.out.println("Size of long in bits --> " + Long.SIZE);

        // we use 'BYTES' function in order to get size of long in bytes
        System.out.println("Size of long in bytes --> " + Long.BYTES);

        // we use 'TYPE' function in order to get data type of 'Long' wrapper class
        System.out.println("Data type of 'Long' class --> " + Long.TYPE);
    }
}
```
```
Output:

Size of long in bits --> 64
Size of long in bytes --> 8
Data type of 'Long' class --> long
```
</p><hr>

[`↑Back to Top`](#Types-of-Integers)<br><hr>


<h2 align="center"><em><u>

A Brief Discussion on Incorrect Value Assignment to variables of Integer Category -

</u></em></h2>

<p>

Every ```data type``` has a definite ```range``` of values which it can hold. Therefore, if we try to assign a ```larger data type``` to a relatively ```smaller one```, it's value may cross the ```range``` of smaller one. Hence, we may get ```errors``` in the output.

Let us discuss some examples of incorrect value assignments.

</p>

<p>

As we know, we have ```4``` data types of ```Integer``` category - <em>```byte```, ```short```, ```int``` and ```long```</em>. Among these, ```byte``` is the ```shortest in size``` and ```long``` is the ```largest in size```.

<br>

<!-- ![Screenshot (778)](https://user-images.githubusercontent.com/87887741/134544749-9cfefc10-3ab1-49de-8801-e8549effd9ef.png) -->
<p align="center">
  <img src="https://user-images.githubusercontent.com/87887741/134544749-9cfefc10-3ab1-49de-8801-e8549effd9ef.png">
</p><br>

<br>

- A ```long``` can store an ```int```, a ```short``` and a ```byte``` value.
- An ```int``` can store a ```short``` and a ```byte``` value.
- A ```short``` can store a ```byte``` value.
- A ```byte``` can only store a ```byte``` value.

<br>

Therefore, a particular ```data type``` can store all the other ```data type``` values that is ```less in size``` comparision. But a ```smaller data type``` may not a store a value of a ```larger data type```.

<br>

Given below is some example of ```correct``` and ```incorrect``` assignments -

<br>

```Java
byte b = 5;
short s = 10;
int i = 20;
long l = 100;

l = (i + s + b);    // Correct assignment, since 'long' is larger then all the data types that is being assigned to it
i = (s + b);        // Correct assignment, since 'int' is larger then all the data types that is being assigned to it
s = b;              // Correct assignment, since 'short' is larger then the data types that is being assigned to it

i = l;  // Incorrect assignment, since 'int' is smaller than 'long'
s = i;  // Incorrect assignment, since 'short' is smaller than 'int'
b = s;  // Incorrect assignment, since 'byte' is smaller than 'short'

````

<br></p><hr>

[`↑Back to Top`](#Types-of-Integers)
