# Java String Method

As many other methods in Java, Java String Class also has some very useful methods.

## Definition of String Methods

String methods can be defined as a way to perform operation on the strings. These operations cannot be handled directly thus 
methods are used and Java provides a number of in-built methods to carry out these operations and manipulate the String.  

## Types of String Methods

Here we will look onto some of the important Java String Methods:
- charAt()
- compareTo()
- concat()
- contains()
- equals()
- equalsIgnoreCase()
- format()
- indexOf()
- isEmpty()
- length()
- replace()
- split()
- substring()
- toCharArray()
- toLowerCase()
- toUpperCase()
-	trim()
-	valueOf()


## charAt() Method

We very well know that char is basically a datatype representing character types. 

So, the method charAt() basically takes an index value as parameter and return the character value at the index provided. 
The range of index must lie between 0 to n-1. Now you might be noticing what this n – 1. 
This n – 1 indicates the last index of the String i.e., if the String is of length n then index ranges from 0 to n-1. 
If the index is out of this range then the StringIndexOutOfBoundsException is given.

**Syntax**

```
public char charAt(int index)
```
**public** is the access modifier.
**char** represents the return type.
**charAt()** is the method used.
**int index** will be the value provided to the parameter which will be of type integer.

Now let us go through an example to understand it better.

### Example
```
public class Example{
      public static void main(String args[]){
            String s = “HelloWorld”;
            Char ch = s.charAt(5);
            System.out. println(ch);
      }
}
```
The Output will be
```
W
```
We can notice that **charAt()** is provided with index 5, hence we need to display the 5th index in the **String s** or 
we can say we have to display the 6th element of the String which is **W**. Hence the output is W.



## compareTo() Method

As the name itself suggests it compares the Strings. This method take a String as parameter and compares it with the other String. 
The comparison is done on the basis of **Unicode Value** of every character present in the Strings. Now you might be wondering what Unicode Value is? 
So, it is basically a unique numeric value which is assigned to each letter, digit or symbol according to the international encoding standards so that 
they can be used with any language or across any platform.

The method return a positive, negative or a 0. Now let’s check all these 3 conditions.

So a positive number is returned if the string1 is greater than string 2. 
A negative number will be returned if string1 is less than string 2 and.
Zero is returned if both the string are equal.

**Syntax**
```
public int compareTo(String nameOfString)
```
Let’s analyse this

**int** is the return type as this method returns an integer.
**compareTo()** is the method used.
**String** is the type of parameter provided
**nameOfString** is the parameter name, basically the string which will provided to compare.

Now let’s see a simple example to understand this


### Example
```
public class CompareStrings{
      public static void main(String args[]) {
            	String str1 = “HelloWorld”;
		String str2 = “Helloworld”;
		String str3 = “Hello”;
		String str4 = “HelloWorld”;
		System.out.println(str1.compareTo(str2)); 
		System.out.println(str1.compareTo(str3));
		System.out.println(str1.compareTo(str4));
      }
}
```

Here the output will be
```
-32
5
0
```

In the first case **w** and **W** has a difference of 32 hence -32 is returned. W comes before W in Unicode hence the output is negative. W is 32 times lower than W.
In second case the difference in length of String is returned i.e., 5. If length of **str1** would have been less than **str3** then negative number would have returned.
In third case both the Strings are **equal** hence 0 is returned.




## concat() Method

What does concat means? So concat is an abbreviation for concatenation. Concatenation means joining together. 
In Java this method helps to join two Strings together and returns a combined or concatenated string.

**Syntax**
```
public String concat(String stringToConcat)
```

**stringToConcat** is the string which is to be added to another String.


### Example
```
public class StringConcat{
      public static void main(String args[]){
	String str1 = “You are reading”;
	String str2 = “ the String concat method.”;
	str1 = str1.concat(str2);
	System.out.println(str1);
      }
}
```

The Output will be
```
You are reading the String concat method.
```

What we have done is we declared two Strings namely **str1** and **str2** and then concatenated the str2 to str1 and stored the result in the str1.



## contains() method

The contains method of Java checks whether a particular character or a sequence of characters is present in the String. 
It has a return type of Boolean i.e.; it return true if the character or the series is found else it returns false.

**Syntax**
```
public boolean contains(CharSequence charName);
```

Here you might be thinking what is CharSequence. So, it is basically a readable sequence of character values. Let’s see an example to make it clearer.


### Example
```
public class Example{
      public static void main(String args[]) {
	String s = “You are reading about contains method”;
	System.out.println (s.contains(“reading”));
	System.out.println (s.contains(“mth”));
	System.out.println (s.contains(“ab”));
      }
}
```

Here the Output will be:
true
false
true

**reading** is found in the String hence it returned true. The next sequence **mth** is not found in anywhere in the string hence it returned false 
while the **ab** again returned true as **ab** was found in the string in the **about**.



## equals() method
The equals method basically compares two given strings based on the characters in the string. If any single character is even not matched then the equals method return false. 
Thus we can say that each character and its type should be matched. 

The type here means if a particular character in one string is in Upper case then in the second string it should be upper case as well. 

The return type is boolean i.e. it return true if string are equal else returns false.

**Syntax**
```
Public boolean equals(Object anotherString)
```

You might be wondering here why I have used the **parameter type** as **Object**. So basically here we overrides the equals() method of the Object Class, 
and while overriding it is important to follow the same Signature or in simpler words Syntax. 
We also know that String is a class and not a datatype thus object of String class can be provide as parameter here.


### Example
```
public class EqualsExample {
      public static void main (String args[]) {
	String str1 = “HelloWorld”;
	String str2 = “HELLOworld”;
	String str3 = “Welcome”;
	String str4 = “HelloWorld”;
	System.out.println(str1.equals(str2));
	System.out.println(str1.equals(str3));
	System.out.println(str1.equals(str4));
      }
}
```

Here the output will be
```
false
false
true
```
The case of **HELLO**was different form the **Hello** in **str1** thus it returned false. The **str3** was completely different thus returned false 
while **str4** was exactly same as **str1** thus returned true.



## equalsIgnoreCase() Method

As we looked in the equals method the comparison was done on the basis of content of Strings as well as the case of the characters 
while here in the **equalsIgnoreCase()** method we just compare the two given strings on basis of content while the case is ignored. 
If any letter’s content is not matched then the method return false.

Thus the return type is boolean. If both Strings are matched then method returns equals else returns false.

**Syntax**
```
Public boolean equalsIgnoreCase(String compString)
```
**compString** is the string that is to be compared.

Lets take the previous example only in this case as well so to compare both the methods.


### Example
```
public class EqualsExample {
      public static void main (String args[]) {
	String str1 = “HelloWorld”;
	String str2 = “HELLOworld”;
	String str3 = “Welcome”;
	String str4 = “HelloWorld”;
	System.out.println(str1.equals(str2));
	System.out.println(str1.equals(str3));
	System.out.println(str1.equals(str4));
      }
}
```

Here the Output will be
```
true
false
true
```
As the content of **str1, str2 and str 4** were same if we ignore the case hence comparing **str1** with **str2** and **str4** returned true, 
while with **str3** It returned false which contains different content.



## format() Method

Formatiing means making changes, thus a Java format() method returns a formatted String by given locale. It is also supplied with format and arguments.
One important point to remember here is the ***String.format()*** method by default calls a ***Locale.getDefault()** method if we don’t specify the locale in the method.
Here there can be two different syntax i.e. one with locale in the parameter and other without it.

**Syntax**
```
Public static String format(String format, Object args)

public static String format(Locale locale, String format, Object args)
```

Here the **format**  is the format of the String and is specified by the Format Specifier. For example it is **%c** for character, **%x** for integer, 
**%f** for floating point etc.
**args** is the format String arguments. They can be any positive number.

Lets analyze this using an example


### Example
```
public  class Example {
      public static void main(String arge[]) {
	String str1 = String.format(“name %s “, JavaProgramming);
	String str2 = String.format(“%.9f “, 15.113);
	String str3 = String.format( “The value is %10.2f”, 23.222768);
	System.out.println(str1);
	System.out.println(str2);
	System.out.println(str3);
      }
}
```

The output here will be
```
JavaProgramming
15.113000000
The value is         23.22
```


Now what is happening here is in the **str2** ***%.9f*** is given thus after the point it has to show a total of 9 digits, 3 digits were already present 
so the method added 6 zeros to fill up the space.
Similarly in the **str3**, it was ***%10.2 f*** thus before the decimal a total of 10 places should be available and after the decimal only 2 places. 
Thus 8 blank spaces were given between the statement and the number and only 2 digits were printed after the decimal.



## indexOf() Method

This is a very simple method which provides the index value of the sequence of character or a specified character in the given string. The index returned is the first occurrence of that character. 
So again, there are two syntax for this method. We can either only provide the character/sequence or we can provide the character/sequence along with an index number. 
Now what this index will do? So basically, this index will tell the method that the ser is searching for this particular character/sequence after this index. In other words, it is instructing to search after the provided index.

**Syntax**
```
int indexOf(String s)
int indexOf(String s, int index)
```

### Example
```
public lass Example{
      public static void main(String args[]) {
	String s = “You are reading the index Of Example”
	int index1 = s.indexOf(“in”);
	int index2 = s.indexOf(“in”, 15);
	int index3 = s.indexOf(“the”);
	System.out.println(index1);    
	System.out.println(index2);
	System.out.println(index3);
      }
}
```

The output will be :
12
20
16

In the case of index2 the method will find the index of **in** after the 15th index. Thus, it displayed the index as 20.



## isEmpty() Method

This method is very helpful to avoid ***nullPointer errors*** and is generally used with the loops or as conditions.
So, what it basically does is, it checks if the entered String is Empty or not. So, it returns true if the length of String is 0 else or otherwise it returns false.

**Syntax**
```
boolean isEmpty()
```

Let’s understand this in an example using the method in ***if condition***

### Example
```
Public class Example{
      public static void main(String[] args) {
	String str1 = “This is isEmpty method”;
	String str2 = “”;
	if (str1.isEmpty()) {
		System.out.println (“str1 is empty”);
	} 
	if (str2.isEmpty()) {
		System.out.println(“str2 is empty”);
	}
      }
}
```
The output will be:
```
str2 is empty
```

Now we can see that only str2 was empty thus only the **second if** condition satisfied and displayed the output. The first condition failed hence no output was given.



## length() Method

Length as it is defined by name finds the length of a string. Thus the length() method returns the Length of characters. This is a very simple method and I think the Syntax and Example will make it more clear.

**Syntax**
```
int length()
```

Now lets take a look at an example

### Example
```
Public class Example{
      public static void main(String[] args) {
	String str1 = “This is length method”;
	System.out.println(“The length is “ + str1.length());
      }
}
```

Here the output will be 
```
21
```

The whitespaces will also be counted in length thus the total length is 21.



## replace() Method
The replace method helps to replace all the old characters/sequence with the newly provided character/sequence. This method takes two parameters namely the old character/sequence and the new character/sequence.

**Syntax**
```
String replace(char oldCh, char newCh)
Or
String replace(CharSequence oldSq, CharSequence newSq)
```

### Example
```
Public class Example{
      public static void main(String[] args) {
	String str1 = “This is in replace method”;
	String repStr = str1.replace(“in”, “the”);
	System.out.println(repStr);
      }
}
```

This will give the Output:
```
This is the replace method
```



## split() Method
Split means parting the things apart or in simpler words separating the things. In the same way the split() method splits the string following the given regular expression called regex. This method return a string array. 

**Syntax**
```
String split(String regex)
```

### Example
```
Public class Example{
      public static void main(String[] args) {
	String str1 = “This is the split method”;
	String[] elements = str1.split(“ ”);
	For(String s : elements) {
		System.out.println(s);
	}
      }
}
```

Here Output will be
```
This
is
the
split
method
```

So what is happening is we provide ***str1.split(“ “)*** which split the str1 from the whitespaces, in simpler words the string str1 broke into separate words from wherever the blank-space was given. We store these words in an array of Strings.
To retrieve the words from the array we used the **for each** loop and printed every element.



## substring() Method

Substring in simpler words can be defined as part of String. This method takes integer type as parameter i.e. the index from the String provided. 
Then there are basically 2 methods either we just take the starting index, in this case the String is printed from the index given else we provide the starting index and the ending index , in this case the string between both the index is printed.
Basically the beginning index start from 0 and ending index start from 1. Here ***StringOutOfBoundsException*** can be raised if the index value is greater than the number of character in string or the starting index is negative.

**Syntax**
```
Public String substring(int startingIndex)
Or
Public String substring(int startingIndex, int endingIndex)
```

Lets analyse this using an example

### Example
```
public class Example {
      public static void main (String args[]) {
	String str1 = “This is the substring method”;
	System.out.println (str1.substring(5));
	System.out.println (str1.substring(8, 23));
      }
}
```

This will produce the following output

```
is the substring method
the substring m
```

One important point to note here is if both start index and ending index are provided in parameter than the output will be displayed from starting index upto the ending index but not including it.
From the output in the 1st case ***i*** is at the 5th index so the complete string from the index 5 is displayed while in the 2nd case ***t*** is at 8th index and ***e*** is at 23rd index so the output displayed from 8th index to 22nd index which is ***m***.



## toCharArray() Method
The method is very useful when one needs to convert the String to a character array. 
A new array of character is created from the String which is of same length as the size of String. Thus the individual characters of a sequence of character can be retrieved from the array, using the loop.

** Syntax ** 
```
char[] toCharArray()
```

### Example
```
public class Example {
      public static void main (String args[]) {
	String str1 = “Hello”;
	char[] c = str1.toCharArray();
	for(int i = 0; i < c.length; i++)
		System.out.print(c[i]);
      }
}
```
The output here will be
```
H
e
l
l
o
```

Lets analyse this example. So basically we provided a String variable str1 and then converted it to char Array using the method. We stored the characters in an array named ***c***.
Now using for loop we iterated from 0 to length of the array which is 5 and displayed each character on a new line. So this was the simple implementation using the toCharArray() Method.



## toLowerCase()
This method is used to change the case of the String. There are in general 3 kinds of cases i.e. lowercase, uppercase and CamelCase.
Lower case is one where all the characters in the string are in lower or we can say smaller case. One simple example is “hello”, while for upper case it is “HELLO”, here all the characters will be in upper case. 
The third type which is the camelCase is one in which first letter or character of every word is in UpperCase and rest all in lower case. A simple example is “HelloWorld”.

Now lets see what this method does. So basically whatever the case in String is provided it is converted to lower case using this method. The method returns String with all lower case letters.

**Syntax**
```
String toLowerCase()
```

This method is very easy to understand so we will look at a simple example.

### Example
```
public class Example{
      public static void main (String[] args) {
	String str1 = “THIS is The LowER CasE METHOD”;
	System.out.println (str1.toLowerCase());
      }
}
```

The output here will be
```
this is the lower case method.
```

## toUpperCase()
This method is just opposite to the toLowerCase() method. In this method we convert the case of String to upper case. 

**Syntax**
```
String toUpperCase()
```

Let’s take the previous example only to compare both the methods. I will just change the method here but will keep the String same.

### Example
```
public class Example{
      public static void main (String[] args) {
	String str1 = “THIS is The LowER CasE METHOD”;
	System.out.println (str1.toUpperCase());
      }
}
```

The output here will be
```
THIS IS THE LOWER CASE METHOD
```

It is as easy as it looks. All the characters in the String whether they be in lower case or upper case are converted to upper case. 



## trim() Method

The word trimming basically means removing. The trim() Method removes the extra space after or before the provided String. 
One important point to remember is trim() Method does not remove space present between the two Strings.
This method returns a String type.

**Syntax**
```
Public String trim() 
```

Let’s look onto a simple example
### Example
```
public class Example {
      public static void main (String[] args) {
	String str1 = “       This is the trim    ”;
	System.out.println (str1 + “method”);
	System.out.println (str1.trim() + “method”);
      }
}
```
The output will be:
```
This is the trim    method
This is the trimmethod
```

So here we tested both the things, we displayed the String without trimming it for the first time. So you might be thinking why the initial spaces are removed. So this is basically inner functionality of Java where any number of spaces from the beginning are removed automatically as the output is not affected by it. 
If purposely one has to centralize the text or provide space in the front then it is necessary to use the format method.
In the second case the trim() Method trims the string removing all the spaces before and after and then add the String ***method*** to it.



## valueOf() Method

This is actually the most important method of the Java String Class. This method is seen as a part of autoboxing and unboxing. The method is used to convert different datatypes or even objects and character arrays to String.
The method returns String.

**Syntax**

```
public static String valueOf (datatype name)
public static String valueOf (char[] name)
public static String valueOf (Object name)
```

Here datatype can be int, long, char, boolean, float or double.

Let’s take few simple examples

### Example
```
public class Example{
     public static void main(String[] args) {
	int number = 8;
	String str1 = String.valueOf(number);
	System.out.println(number + 1);
	
	System.out.println(str1 + 1);
	char ch = ‘A’
	String str2 = String.valueOf(ch);
	System.out.println(ch + ‘B’);
	System.out.println(str2 + ‘B’);
     }
} 
```

This will give the output
```
9
81
131
AB
```

Let’s look at what actually happened here
- So in the first case we declared an ***integer number*** and displayed it by adding one. Now this is simple as addition of two integers yield an integer result. Thus we received the sum of both the numbers i.e. ***8 + 1 = 9***
- In the second case using the value of method we converted the number to a String type and then added an integer to it. So this will concatenate the integer to the string hence ***“8” + 1*** give 81 as a result.
- We took another example of char type, where a character type variable named ch was initialised to **‘A’**. When we added char type **‘B’** to char type **‘A’** it actually added the ***Unicode value*** of both the characters and displayed the integer result. This is because the characters cannot be concatenated.
- When we used the valueOf method() to convert the character to the String, the char **‘A’** was converted to String type **“A”** and we know that String concatenation is possible. It is possible to append a character in the String  hence ***“A” + ‘B’*** gave ***AB***. 


This was all about the important String methods. 
You can implement all these codes in any IDE or even online java compilers like 
(https://www.onlinegdb.com/online_java_compiler)


## Author
- [@Abhinay Garg] (https://github.com/techabhi08)
