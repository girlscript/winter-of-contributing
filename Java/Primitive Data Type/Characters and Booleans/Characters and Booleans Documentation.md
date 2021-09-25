
# Characters and booleans

Java defines eight *primitive* kinds of data: byte, short, int, long, char, float, double, and boolean.  Among them two important data types are char and boolean.

[Characters](#characters)


[Booleans](#booleans)
 

# Characters


In Character group, the character data type, **char** is used to represent a single character (letter or number). 
			
*Char* in Java is different than char in C or C++. It is a single 16-bit Unicode character. It has a **minimum value of '\u0000' (or 0) and a maximum value of '\uffff'  (or 65,535 inclusive)**. Unicode defines a fully international character set that can represent all of the characters found in all human languages. It is a unification of dozens of character sets, such as Latin, Greek, Arabic, Cyrillic, Hebrew, Katakana, Hangul, and many more. 

Example of using char data type in the code-
```Java
public  class Example1 {
public  static  void main(String[] args) {
char char1='a';
char char2='A';
System.out.println("char1: "+char1);  
System.out.println("char2: "+char2);  
}
}
```
``` j
output :  char1: a
	  char2: A
```				
 **ASCII Code for Commonly Used Characters**:--
 -


| Characters  | Code value in decimals | Unicode value |
| ------------- | -------------------- | ------------- |
| '0' to '9'  | 48 to 57   | \u0030 to \u0039 |
| 'A' to 'Z'   | 65 to 90  | \u0041 to \u005A |
| 'a' to 'z'  | 97 to 122 | \u0061 to \u007A|

**Important points about Java Char data types**
--
- As because Java uses Unicode system, not ASCII code system, char uses 2 bytes in java. 
-    Default value  of char is '\u0000' which is 0 in decimal.
- Literal char values are surrounded with single quote, such as 'z' or '9' or '\n' or ' \ ' .
- We can have variables, parameters as well as return type using char data type. Example;
 ```java
 char letter = 'S'
 System.out.println(letter);               
 ```
 ```j
 output : S
 ```
 - Char is a primitive data type . That's why we can't call methods on it. Methods can be called using Character class.
 - A  char value cannot  be ```negative``` because it is a 16 bit unsigned Java data type.
 - We can get next or previous Unicode character of char variable by using increment and decrement operators.
 ```java
 char ch = 'a';
 System.out.println(++ch);     
 ```
 ```j
 output : b
 ```
 - **Casting between char and numeric types**:--
    A char can be converted into any numeric type, and vice versa. All numeric operations can be done using char operands. Example;
 ```java
int i = 'a';     // Same as int i = (int)'a';     // (int) a is 97
int j = 1 + 'a'; 
System.out.println("j is " + j);       
``` 
```j
output : j is 98
```
``` java
int i = '1' + '2';      // (int) 1 is 49 and (int) 2 is 50 
System.out.println("i is " + i);      
``` 
```j
output : i is 99
```
- To return a char value from an integer variable we typecast the integer value to java char explicitly. 
```java
int num= 67;
char character=(char)num;
System.out.println(character);   
```
```j
output : C
```
- Char values can be compared with rational operators such as; 'a'<'b' , 'X'=='X' , 'Q'!='q' .
- Chars present in a String can be accessed using the ```charAt(index)``` method. Example;
```java
String food = "pizza";
System.out.println(food.charAt(0));    
```
```j
output : p
```
- In order to take char input from the user, there is no such method called *nextChar()*  in the Scanner class. We need to use ``next()`` method along with ``charAt()`` method to take character input. Example;
```java
Scanner sc = new Scanner (System.in);
char ch = sc.next().charAt(0);
```

**Escape sequence for special characters**:--
-
 A character preceded by a backslash (\\) is an escape sequence and has a special meaning to the compiler.
 
| Escape Sequence  | Description | 
| ------------- | -------------------- | 
| \t  | Inserts a tab in the text at the particular point |
| \b   | Inserts a backspace in the text at the particular point |
| \n  | Inserts a newline in the text at the particular point |
| \r | Inserts a carriage return in the text at the particular point|
|\f | Inserts a form feed in the text at the particular point |
| \\' | Inserts a single quote in the text at the particular point |
| \\" | Inserts a double quote in the text at the particular point |
| \\\ | Inserts a blackslash in the text at the particular point |

Example of escape sequence; 
```java
char ch = '\u005C'
System.out.println(ch);   
```
```j
output : 92
```
**Character Class in Java**:--
-
 Java provides an immutable character class in ***java.lang*** package. Character class wraps the value of primitive data type char into an  ```object```.
 ```java
 Character ch = new Character ('x');
 ```
 
 *Methods of java Character class*:
 | Method  | Description | 
| ------------- | -------------------- | 
 |  boolean isLetter(ch) | Returns true if specified character is a letter|
 |  boolean isDigit(ch) |  Returns true if specified character is a digit |
 |  boolean isWhitespace(ch) | Returns true if specified character is a whitespace|
 |boolean isUpperCase(ch) | Returns true if specified character value is in uppercase |
 |boolean isLowerCase(ch) | Returns true if specified character value is in lowercase|
 |char toUpperCase(ch)| Returns uppercase of the specified char value|
 | char toLowerCase(ch)| Returns lowercase of the specified char value|
 |toString(ch) | Returns string representation of the specified character|
 | char charValue() | Returns value of the character Object|
 |static int compare( char x ,  char y)| Compares two char values numerically|
| boolean equals( object obj)| Returns true if the objects are same|
|static Character valueOf (Character ch)|Returns a Character instance representing the specified char value|

[Back to top](#characters-and-booleans)

 # Booleans
 
   For logical values java has a primitive data type **boolean**. It is  named after ```George Boole```; inventor of boolean algebra and mathematical logic. Boolean data type is required for the conditional expression that governs the control statements such as if and for. 
  
  Example of using boolean data type in the code- 
```java
public  class  Example2  {
public  static  void  main( Strings[] args)  {
boolean light_on= true;
if(light_on==true) {
		System.out.println("Light is on!");
else {
		System.out.println("Light is off!");
}
}
```
```j
output : Light is on!
```
**Important points about Java boolean data type**:--
-
- Boolean data type can have two values; either *true* or *false* and they use relational and logical operators . 
- In numeric expressions all operands with non-zero values are considered true , and zero is considered false . 
- Default value of boolean is false and default size  is 1 bit . 
- Comparisons of arithmatic expressions result into boolean type.
 
| Operator  |Name |Result |
| ------------- | -------------------- | ---------|
| ==| equal to | "a" == "a" is true|
|!= | not equal to | "a" != "a" is false |
|<|less than| 3 < 3 is false|
|<=|less than or equal to|3 <= 3 is true|
|>|greater than| 6 > 5 is true |
|>=|greater than or equal to| 5 >= 5 is true |
- Logical operators combine boolean values and evaluate to boolean results.
For example ;
```
!a will result true only if a is false, otherwise true.
a && b  will result true only if both a and b are true, otherwise false. 
a || b  will result false only if both a and b are false, otherwise true.
```
**Boolean Class in Java**:--
-
There is a boolean wrapper class in  ***java.lang*** package in Java.  Boolean class wraps a value of primitive type boolean into an  ```Object```.
```java
Boolean b = new Boolean (boolean value)
```
```java
Boolean b = new Boolean (String s)
```
*Methods of Boolean class are*:-

|Method  |Description |
| ------------- | -------------------- |
|static boolean parseBoolean(String s)| Returns boolean value represented by String argument|
|boolean booleanValue() | Returns primitive boolean value of the object|
|static Boolean valueOf (boolean b)| Returns boolean instance representing the specified boolean|
|static String toString (boolean b)| Returns string representation of the specified boolean|
|boolean equals (Object obj)| Returns true if the boolean objects represent the same value|
|int compareTo (Boolean b) | Returns zero if values of object and argument are same; positive value if object represents true and argument represents false; negative value if object represents false and argument represents true|
|int compare (Boolean x , Boolean y)|Returns zero if x and y have same value;positive value if x is true and y is false; negative value if  x is false and y is true.|
|int hashCode()| Returns 1231 if object value is true and 1237 if object value is false.|

# Conclusion 
 Char and boolean are two important primitive data types in Java. In many ways they decide the flow of program execution.  And you have successfully learned about them .
 
 Thank you. :sunglasses:


 Happy learning  :wave: 

[Back to top](#characters-and-booleans)
