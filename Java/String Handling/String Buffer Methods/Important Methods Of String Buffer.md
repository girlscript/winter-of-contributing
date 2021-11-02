# Important Methods of String Buffer

StringBuffer provides a way to create a modifiable string which is growable and writable.

Following are the important methods of the `StringBuffer` Class. 

|S. No| Method | Description |
|:--:| ---| ---|
|1. | [`length()`](#length)|Returns the cureent length of the `StringBuffer` object. | 
|2. | [`capacity()`](#capacity) |Returns the current allocated capacity of `StringBuffer` object. |
|3. | [`ensureCapacity()`](#ensurecapacity) | It is used to set the size of the buffer. Useful when we know in advance that a minimum size will be required.|
|4. | [`setLength()`](#setlength) | Used to set the length of the string within a `StringBuffer` object.|
|5. | [`charAt()`](#charat) | Returns the character at the index passed as the parameter.|
|6. | [`setCharAt()`](#setcharat) | Replaces the value of character at the index passed as the parameter. |
|7. | [`getChars()`](#getchars) | Creates a copy of a substring into an array. |
|8. | [`append()`](#append) | Concatenates the string representation of any other type of data passsed as parameter. |
|9. | [`insert()`](#insert) | Inserts one string into another.|
|10. | [`reverse()`](#reverse) | Reverse the charcaters of the string.|
|11. | [`delete()`](#delete) |Deletes a range of characters from the string, specified by the parameters passed. |
|12. | [`deleteCharAt()`](#deletecharat) | Deletes a single character at the given index passed as the parameter.|
|13. | [`replace()`](#replace) | Replaces a set of characters with the string passed as the parameter.|
|14. | [`subString()`](#substring) | Returns a substring of StringBuffer object specified by the parameters.|





## `length()`
<hr />

General form: ` int length()`. 

```java
class StringBufferExample{
    public static void main(String[] args){
        StringBufer obj = new StringBuffer("Hello World");
        System.out.println("Length of the string is :" + obj.length());
    }
}
```
 The program produces the following output
 ```
Length of the string is: 11
 ```

## `capacity()`
<hr />

General form:  `int capacity()`.

```java
class StringBufferExample{
    public static void main(String[] args){
        StringBufer obj = new StringBuffer("Hello World");
        System.out.println("Capacity of the object is :" + obj.capacity());
    }
}
```
 The program produces the following output
 ```
Length of the string is: 35
 ```

<span style="opacity:0.8">Note: Capacity of a StringBuffer is always greater than the length. It automatically grows and shrinks as required.</span>

## `ensureCapacity()`
<hr />

General form: `void ensureCapacity(int minCapacity)`

For example, 
```java
class StringBufferExample{
    public static void main(String[] args){
        StringBuffer obj = new StringBuffer("Minimum");
        obj.ensureCapacity(10);
    }
}
```
<span style="opacity:0.8"> Note: `ensureCapacity()` only specifies the minimum capacity of the buffer. A buffer size larger than the  *minCapacity* may be allotted according to the need.</span>


## `setLength()`
<hr />

General form: `void setLength(int len)`

*len* must be non-negative. 
1. Specifying a length greater than the length of the string results in adding of null characters at the end. 
2. Specifying a length shorter than the length of the string will result in loss of characters beyond the new length.

```java
class StringBufferExample{
    public static void main(String[] args){
        StringBuffer obj = new StringBuffer("Long String");

        obj.setLength(50);
        System.out.println("1. " + obj);
        obj.setLength(4);
        System.out.println("2. " + obj);

    }
}
```

The program produces the following output
```
1. Long String
2. Long
```

## `charAt()`
<hr />

General form: ` char charAt(int index)`

```java
class StringBufferExample{
    public static void main(String[] args){
        StringBuffer obj = new StringBuffer("Long String");
        System.out.println("Char at index 1 is " + obj.charAt(1));
    }
}
```

The program produces the following output
```
Char at index 1 is o
```

## `setCharAt()`
<hr />

General form: `void setCharAt(int index, char ch)`

```java
class StringBufferExample{
    public static void main(String[] args){
        StringBuffer obj = new StringBuffer("Sdring");
        obj.setCharAt(1, 't');
        System.out.println(obj);
    }
}
```
The program produces the following output
```
String
```

## `getChars()`
<hr />

General form: `void getChars(int sourceStart, int sourceEnd, char target[], int targetStart)`

```java
class StringBufferExample{
    public static void main(String[] args){
        StringBuffer obj = new StringBuffer("This is a good string");

        char getArray[] = new char[10];
        obj.getChars(10, 14, getArray, 0);
        System.out.println(getArray);
    }
}
```

The program produces the follwoing output
```
good
```

## `append()`
<hr />



## `insert()`
<hr />


## `reverse()`
<hr />


## `delete()`
<hr />


## `deleteCharAt()`
<hr />


## `replace()`
<hr />


## `subString()`
<hr />
