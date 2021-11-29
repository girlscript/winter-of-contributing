# Character Extractions in Java

String in Java is treated as an object, therefore characters that comprises to form string cannot be accessed directly. However, String class
does provide various pre-defined methods which can be used to extract characters from a given string. 

Characters can be extracted from a string using index value which starts from 0 like arrays. We must take care that the index should not be 
negative and should not exceed string length.

## <ins>String Character Extractions Methods</ins>
- `charAt()`

- `getChars()`

- `getBytes()`

- `toCharArray()`

<br>

## **<ins>charAt() Method :**</ins>

This method is used to extract a single character at an index from a given string.
Syntax for the following is-

**Syntax :**
```java
char charAt(int index)
```

### Code for demonstrating charAt() method -
>```java
>public class CharacterExtraction
>{
>  public static void main(String args[])
> {
>String str="Hello World";
>char c1 = str.charAt(0);
>char c2 = str.charAt(1);
>System.out.println("charAt() method output is:"+c1);
>System.out.println("charAt() method output is:"+c2);
> }
>}
>```
### Output -
```
charAt() method output is:H
charAt() method output is:e
```

<br>

## <ins>**getChars() Method :**</ins>

This method is used to extract more than one character at a time from a given string. 
Syntax for the following is-

**Syntax :**
```java
void getChars(int stringStart, int stringEnd, char array[], int arrayStart)
```

In the above syntax, stringStart denotes the starting index of the substring whereas stringEnd denotes the ending index of the substring
(character at index stringEnd won't be included in the substring). array[] is the character array that will contain the substring. It will 
contain the characters from stringStart to stringEnd-1. arrayStart is the index inside array at which substring will be copied.

### Code for demonstrating charAt() method -
>```java
>public class CharacterExtraction
>{
>  public static void main(String args[])
> {
>String str="Hello World";
>char array[]=new char[5];
>str.getChars(0,5,array,0);
>System.out.print("getchars() method output is:");
>System.out.println(array);
> }
>}
>```
### Output -
```
getchars() method output is:Hello
```

<br>

## <ins>**getBytes() Method:**</ins>

This method is used to extract characters from String object from a given string and then converts the characters in an array of bytes.
It uses the default character-to-byte conversions provided by the platform.
Syntax for the following is-

**Syntax :**
```java
byte [] getBytes()
```

### Code for demonstrating charAt() method -
>```java
>public class CharacterExtraction
>{
>  public static void main(String args[])
> {
>String str="Hello World";
>byte barray[] = str.getBytes();
>for(int i=0;i<str.length();i++)
>System.out.print(barray[i]);
>
> }
>}
>```
### Output -
```
721011081081113287111114108100
```

<br>

## <ins>**toCharArray() Method:**</ins>

This method convert all the characters in a String object into a character array. It then returns an array of characters for the entire string.
Syntax for the following is-

**Syntax :**
```java
char [] toCharArray()
```

### Code for demonstrating charAt() method -
>```java
>public class CharacterExtraction
>{
>  public static void main(String args[])
> {
>String str="Hello World";
>char chararr[] = str.toCharArray();
>System.out.println(chararr);
> }
>}
>```
### Output -
```
Hello World
```

