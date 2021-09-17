## Strings

A Dart string is a sequence of UTF-16 (16-bit Unicode Transformation Format) code units. Strings are mainly used to represent text. A character may be represented by multiple code points, each code point consisting of one or two code units It makes Dart more powerful to build our cross-platform applications in any language. Here we are going to take three basic questions based upon Strings and implement them using Dart programming language.

- How to create Strings in Dart ?
- How to input String data in Dart ?
- How to get a substring from a given String in Dart ?



### How to create Strings in Dart ?

**Create normal Strings**
To create a String, we can use single or double quotes:

**Example:**
```
String s1 = 'GirlScript Winter of Contributing';
String s2 = "GirlScript Summer of Code";

String s3 = 'It\'s possible to have a string with single quotes in Dart!';
String s4 = "It's possible to have a string with single quotes in Dart!";

// It\'s possible to have a string with single quotes in Dart!

```

**Create raw Strings**
For raw string, we’re gonna use r before quotation mark of a string:

**Example:**
```

String raws1 = r'gwoc.girlscript.tech\nGirlScript Winter of Contributing';
print(raws1);

// gwoc.girlscript.tech\nGirlScript Winter of Contributing

String raws2 = r"It's possible to have a string with single quotes in Dart!";
print(raws2);

// It's possible to have a string with single quotes in Dart!
```




**Create multi-lines Strings**
We’re gonna use a triple quote to create a multi-lines Strings:

**Example:**
```
String s1 = '''gwoc.girlscript.tech
GirlScript Winter of Contributing''';
print(s1);
/*
gwoc.girlscript.tech
GirlScript Winter of Contributing
*/

String s2 = """gssoc.girlscript.tech
GirlScript Summer of Code""";
print(s2);
/*
gssoc.girlscript.tech
GirlScript Summer of Code
*/
```


### How to input String data in Dart ?

In Dart programming language, you can take standard input from the user through the console via the use of **.readLineSync()** function. To take input from the console you need to import a library, named **dart:io** from libraries of Dart.

**Stdin** class allows the user to read data from standard input in both synchronous and asynchronous ways. The method **readLineSync()** is one of the methods used to take input from the user.

**Example:**
```dart
// importing dart:io file
import 'dart:io';

void main()
{
	print("Enter your name?");
	// Reading string from the console
	String? name = stdin.readLineSync();

	// Printing the name with a Hello
	print("Hello, $name! \n!");
}

```




### How to get a substring from a given String in Dart ?


To get substring from a Dart String, we use  `substring()`  method. This is the signature of  `substring()`  method that returns a  `String`:

```dart
String substring(int startIndex, [int endIndex]);

```

–  `startIndex`: index of character to start with. Beginning index is  `0`.  
–  `endIndex`  (optional): index of ending character +  `1`. If it is not set, the result will be a subtring starting from  `startIndex`  to the end of the string.

**Example:**
```dart
String str = 'GirlScript';
str.substring(0,8); // GirlScri
str.substring(2,8); // rlScri
str.substring(3);   // lScript
```

## 💻 Exercises

### Exercise 1

1. Create a string and print the same


```dart
import 'dart:io'; 
  
void main() 
{ 
   String name= "Open Source Contributor"
   print("name \n");
  }
 ```
 ```
Output:
Open Source Contributor
```


### Exercises 2

1. Write a code that takes  multiple strings as a input and print customized message

```dart
import 'dart:io'; 
  
void main() 
{ 
    print("Enter your name\n"); 
   
    String name = stdin.readLineSync(); 
     print("Enter your favourite programming language\n"); 
   
    String lang = stdin.readLineSync(); 
     print("Are you proficient in $lang?. Enter Yes or No only\n"); 
   
    String resp = stdin.readLineSync(); 
    if(resp){
    print("Congrats! $name you are welcome to contribute to the $lang project\n");
    }
    else{
    print("Sorry, $name you need to hone your $lang skills first\n");
    }
    
 
  ```
  ```
  Output 1:
   Enter your name
   XYZ
   Enter your favourite programming language 
   Java
   Are you proficient in Java?. Enter Yes or No only 
   Yes
   Congrats! XYZ you are welcome to contribute to the Java project
 
   
Output 2:
   Enter your name
   ABC
   Enter your favourite programming language 
   Dart
   Are you proficient in Java?. Enter Yes or No only 
   No
   Sorry, ABC you need to hone your Dart skills first

  ```

### Exercises 3

 - Write a program which we take a input String and find the substring of it defined by starting index and ending index which is also given by user.

  ```dart
import 'dart:io'; 
void main() 
{ 

print("Enter a string of your choice\n"); `
 String input = stdin.readLineSync(); 
 
 print("Enter startIndex\n"); 
 int sindex = int. parse(stdin. readLineSync());
 print("Enter endIndex\n"); 
 int eindex = int. parse(stdin. readLineSync());

if(sindex>0 &&eindex<=input.length){
String result = str.substring(sindex, eindex);
print(result);
}
else
print("Wrong indices provided");
}
  ```

```

Output 1:
   Enter a string of your choice
   GirlScriptwinterofcontributing
   
   Enter startIndex
   1
   
   Enter endIndex
   10
   
   irlScriptw
 
   
Output 2:
   Enter a string of your choice
   GirlScriptwinterofcontributing
   
   Enter startIndex
   -1
   
   Enter endIndex
   10
   
   Wrong indices provided
   
  

Enter a string of your choice
   GirlScriptwinterofcontributing
   
   Enter startIndex
   1
   
   Enter endIndex
   55
   
   Wrong indices provided

  ```
