# 💻 Exercises

  ## VARIABLES
  
  1.Write a program to print a name and a number.


   ```dart
   void main() { 
      int num=12;
      String name="John"; 
      print(num);
      print(name) ;
   }
   ```
   
   ```
   Output-
      12 John
   ```

    
   2. Use of var keyword
   
   ```
   We can declare any data types using var keyword.
   For example:-
   var name = 'Vani';
   var year = 1999;
   var radius = 4.5;
   var array = ['Ram', 'Sita', 'Mohan'];
   
   ```  

   3.  How to declare a variable which stay constant at compile time?     Demonstrate with example.
   

  ```
   The final and const keyword are used to declare constants. We can not modify the values of a variable declared using the final or const keyword. 
     
    For example:-
       void main() { 
          final v1 = 12; 
          const v2 = 13; 
          v2 = 12; 
     }
    
    The code given above will throw error.
      
   ```

## Conditional Statements :

### 1. If Condition

- Print "Excellent work" if the student scores A grade


  ```dart
  void main() {
  String grade = "A";
  if (grade == "A") {
    print("Excellent work");
    } 
  } 
  ```
   ```
   Output:
    Excellent work
   ```

### 2. If Else Condition

- Find maximum between two numbers
```dart
  import 'dart:io';

   void main() {
   print("Enter first number");
   int? num1 = int.parse(stdin.readLineSync()!); //using ? and ! because of null safety
   print("Enter second number");
   int? num2 = int.parse(stdin.readLineSync()!);//Getting input from user

   if (num1 > num2) {
      print("First number is greater");
   } else {
      print("Second number is greater");
   }
   }
```
```
  Output:
  Enter first number
   30
   Enter second number
   20
   First number is greater
```

### 3. Else If Ladder Condition

- Write a progeram to input the names of five      subjects Physics,Chemistry,Biology,
  Maths and Computer. Calculate percentage and grade according to the given conditions
  Percentage >= 90% : Grade A
  Percentage >= 80% : Grade B
  Percentage >= 70% : Grade C
  Percentage >= 60% : Grade D
  Percentage >= 40% : Grade E
  Percentage < 40%  : Grade F

```dart
  import 'dart:io';

   void main() {
   stdout.write("Enter Physics Mark: ");
   int? physics = int.parse(stdin.readLineSync()!);//Getting input from user
   stdout.write("Enter Chemistry Mark: ");
   int? chemistry = int.parse(stdin.readLineSync()!);//using ? and ! because of null safety
   stdout.write("Enter Biology Mark: ");
   int? biology = int.parse(stdin.readLineSync()!);
   stdout.write("Enter Maths Mark: ");
   int? maths = int.parse(stdin.readLineSync()!);
   stdout.write("Enter Computer Mark: ");
   int? computer = int.parse(stdin.readLineSync()!);

   double percentage = double.parse(
         ((chemistry + physics + maths + biology + computer) / 5.0)//Getting total percentage
            .toStringAsFixed(2));
   print("Percentage is : $percentage");

   if (percentage >= 90) {
      print("Grade A");
   } else if (percentage >= 80) {
      print("Grade B");
   } else if (percentage >= 70) {
      print("Grade C");
   } else if (percentage >= 60) {
      print("Grade D");
   } else if (percentage >= 40) {
      print("Grade E");
   } else {
      print("Grade F");
   }
   } 
```
```
  Output:
   Enter Physics Mark: 40
   Enter Chemistry Mark: 60
   Enter Biology Mark: 70
   Enter Maths Mark: 50
   Enter Computer Mark: 90
   Percentage is : 62.0
   Grade D
```

### 4. Nested - If Condition
- Find Maximum between three numbers

```dart
import 'dart:io';

void main() {
  int max;
  stdout.write("Enter First Number: ");
  int? number1 = int.parse(stdin.readLineSync()!);//Getting input from user
  stdout.write("Enter Second Number: ");
  int? number2 = int.parse(stdin.readLineSync()!);
  stdout.write("Enter Third Number: ");
  int? number3 = int.parse(stdin.readLineSync()!);

  if (number1 > number2) {
    if (number1 > number3) {
      /* If number1 > number2 and number1 > number3 */
      print("Maximum Number = $number1");
    } else {
      /* If number1 > number2 but number1 > number3 is not true */
     print("Maximum Number = $number3");
    }
  } else {
    if (number2 > number3) {
      /* If number1 is not > number2 and number2 > number3 */
      print("Maximum Number = $number2");
    } else {
      /* If number1 is not > number2 and number2 > number3 */
      print("Maximum Number = $number3");
    }
  }
}
```

```
Output:
Enter First Number: 3
Enter Second Number: 16
Enter Third Number: 60
Maximum Number = 60
```


## 1. Maps

### Statement :- Access the student via roll no.


```dart
// Map is a data type which contains key , value pairs and the values can only be accessed by using keys.
// Every Key is unique in Map but the values can be same.
// The map that I have created in this example is <String , String>.

void main() {
Map data = {
"1": "Rohan",
"2": "Rohit",
"3": "Pranav",
};
print(data["1"]);
print(data["2"]);
print(data["3"]);
}
```
```
Output:
   Rohan
   Rohit
   Pranav
```

## 2. Lists

### statement :- Create a list and access their all values and add one extra value and print all again.

```dart
// List is simply an ordered group of objects.
// The values in Lists are also accessed by Indices.
// The List can be growable

void main(){
List myList = ["This is the First index" , "This is the Second index" , "This is the Third index"];

print("List before the adding: ");
for(int i=0 ; i<myList.length ; i++){
 print(myList[i]);
}

myList.add("This is the Fourth index");
print("List after the adding: ");
 for(int i=0 ; i<myList.length ; i++){
 print(myList[i]);
}
}

```
```
Output:
List before the adding:
This is the First index
This is the Second index
This is the Third index
List after the adding:
This is the First index
This is the Second index
This is the Third index
This is the Fourth index
```
1. Explain briefly about the working of the Array Utility Methods forEach(), map() and reduce(). Use these methods to solve the following questions.\
   a) Given an array **numbers** = [2,3,5,6,8,9], print the square of these numbers.\
   b) Given an array **principal_amount** = [100,500,2000,700,950], return a new array, filled with the simple interest of each of the element in principal_amount array for a **time period** of **2 years** and a **rate of interest** of **15%**.\
   c) Given an array **studentHeigths** = [171,185,163,154,173], find the average height of the students.\
   \
**Answer:**\
The forEach() method, traverses over every element of the given iterable and performs a function over that element.\
The map() method is similar to forEach(), but it actually returns an iterable, whereas forEach() returns a void type.\
The reduce() method is used to obtain a cumulative single value from a given collection.
\

a)

```dart
  void main(){
      var numbers = [2,3,5,6,8,9];
      var op = numbers.forEach((number)=>print(number*number));
  }
```
```
  Output:
      4
      9
      25
      36
      64
      81
```  

   b)

```dart
   void main(){
      var principal_amount = [100,500,2000,700,950];
      var op = principal_amount.map((p)=>p*2*15/100);
      print(op);
   }
```

```
   Output:
   (30, 150, 600, 210, 285)
```

   c)
   
```dart
   void main(){
      var studentHeigths = [171,185,163,154,173];
      var op = studentHeigths.reduce((current,next)=>current+next);
      print(op/studentHeigths.length);
   }
```
```
   Output:
   169.2
```
2. Given an array of building heights **bHeights** = [828,501,1002,321,978,200], sort the array and print the building heights in descending order.\
\
**Answer:**
```dart
   void main(){
      var bHeights = [828,501,1002,321,978,200];
      bHeights.sort((h1,h2)=>h2-h1);
      bHeights.forEach((height)=>print(height));
   }
```
```
   Output:
   1002
   978
   828
   501
   321
   200
```
3. Given an array of shortlisted candidates for a program **candidates** = ["James","Joseph","Jessica","John","Jonas"], check if a student called John is present in it.\
\
**Answer:**
```dart
   void main(){
      var candidates = ["James","Joseph","Jessica","John","Jonas"];
      print(candidates.contains("John"));
   }
```

```
   Output:
   true
```

## Inheritance in Dart

# Question :
Write a program with class Student as the super class and class ScienceStudent as its child. Class MathsStudent is in turn the child of ScienceStudent. Student class has two methods walk() and talk(). Class ScienceStudent has a method studiesScience() and lass MathsStudent has a method likesMaths(). Inherit the properties of the super class in the sub classes.

# Solution:
As the Student() class is the the top most in hierarchy followed by the ScienceStudent and MathsStudent classes, the properties of Student class is retaied in both the classes.

```dart
  
  class Student{    
      void walk() {  
          print("The student walks.\n");  
      }     
      void talk() {  
          print("The student talks.\n");  
      }
  }
  
  // Inherits the super class  
  class ScienceStudent Extends Student{  
      //child class function  
      void studiesScience(){  
          print("The student studies Science.\n");
      }            
  }
        
  // Inherits the super class  
  class MathsStudent extends ScienceStudent{
      //child class function  
      void likesMaths{
          print("The student likes Maths.\n");           
      }
  }
  
  void main(){ 
      // Creating object of the child class  
      MathsStudent student=new MathsStudent();
      student.likesMaths();
      student.studiesScience();
      student.walk();
      student.talk();
  }
  
```
#Output :
```
The student likes Maths.
The student studies Science.
The student walks.
The student talks.

```


## Strings

A Dart string is a sequence of UTF-16 (16-bit Unicode Transformation Format) code units. Strings are mainly used to represent text. A character may be represented by multiple code points, each code point consisting of one or two code units It makes Dart more powerful to build our cross-platform applications in any language. Here we are going to take three basic questions based upon Strings and implement them using Dart programming language.

- How to create Strings in Dart ?
- How to input String data in Dart ?
- How to get a substring from a given String in Dart ?



### How to create Strings in Dart ?

**Create normal Strings**
To create a String, we can use single or double quotes:

**Example:**

```dart
String s1 = 'GirlScript Winter of Contributing';
String s2 = "GirlScript Summer of Code";

String s3 = 'It\'s possible to have a string with single quotes in Dart!';
String s4 = "It's possible to have a string with single quotes in Dart!";

// It\'s possible to have a string with single quotes in Dart!

```

**Create raw Strings**
For raw string, we’re gonna use r before quotation mark of a string:

**Example:**

```dart

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

```dart
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
