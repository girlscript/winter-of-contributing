# 💻 Exercises
## 📑 Contents
- [Variables](#variables)
- [Conditional Statements](#conditionals)
- [Maps And Lists](#conditionals)
- [ForEach And Map](#conditionals)
- [Inheritance](#conditionals)

  
# ✅ Variables
  
- Write a program to print a name and a number.

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

- Use of var keyword

   ```dart
   //We can declare any data types using var keyword.
  // For example:-
   var name = 'Vani';
   var year = 1999;
   var radius = 4.5;
   var array = ['Ram', 'Sita', 'Mohan'];
   
   ```  

- How to declare a variable which stay constant at compile time?     Demonstrate with example.

  ```dart
  /* The final and const keyword are used to declare constants. We can not modify the values of a variable declared using the final or const keyword. */
     
    For example:-
       void main() { 
          final v1 = 12; 
          const v2 = 13; 
          v2 = 12; 
     }
    
   // The code given above will throw error.
      
   ```

# ✅ Conditional Statements

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

   ```sh
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

```sh
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
  - Percentage >= 90% : Grade A
  - Percentage >= 80% : Grade B
  - Percentage >= 70% : Grade C
  - Percentage >= 60% : Grade D
  - Percentage >= 40% : Grade E
  - Percentage < 40%  : Grade F

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

```sh
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

# ✅Maps And Lists

### 1. Maps

- Access the student via roll no

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

```sh
Output:
   Rohan
   Rohit
   Pranav
```

## 2. Lists

- Create a list and access their all values and add one extra value and print all again.

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

```sh
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

# ✅ ForEach And Map

- Explain briefly about the working of the Array Utility Methods forEach(), map() and reduce(). Use these methods to solve the following questions.
  - A) Given an array **numbers** = [2,3,5,6,8,9], print the square of these numbers.
  - B) Given an array **principal_amount** = [100,500,2000,700,950], return a new array, filled with the simple interest of each of the element in principal_amount array for a **time period** of **2 years** and a **rate of interest** of **15%**.
  - C) Given an array **studentHeigths** = [171,185,163,154,173], find the average height of the students.



```sh
The forEach() method, traverses over every element of the given iterable and performs a function over that element.
The map() method is similar to forEach(), but it actually returns an iterable, whereas forEach() returns a void type.
The reduce() method is used to obtain a cumulative single value from a given collection.
```

**A)**

```dart
  void main(){
      var numbers = [2,3,5,6,8,9];
      var op = numbers.forEach((number)=>print(number*number));
  }
```

```sh
  Output:
      4
      9
      25
      36
      64
      81
```  

**B)**

```dart
   void main(){
      var principal_amount = [100,500,2000,700,950];
      var op = principal_amount.map((p)=>p*2*15/100);
      print(op);
   }
```

```sh
   Output:
   (30, 150, 600, 210, 285)
```

   **C)**

```dart
   void main(){
      var studentHeigths = [171,185,163,154,173];
      var op = studentHeigths.reduce((current,next)=>current+next);
      print(op/studentHeigths.length);
   }
```

```sh
   Output:
   169.2
```

- Given an array of building heights **bHeights** = [828,501,1002,321,978,200], sort the array and print the building heights in descending order.



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

- Given an array of shortlisted candidates for a program **candidates** = ["James","Joseph","Jessica","John","Jonas"], check if a student called John is present in it.



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

# ✅ Inheritance in Dart

## Question

 - Write a program with class Student as the super class and class ScienceStudent as its child. Class MathsStudent is in turn the child of ScienceStudent. Student class has two methods walk() and talk(). Class ScienceStudent has a method studiesScience() and lass MathsStudent has a method likesMaths(). Inherit the properties of the super class in the sub classes.

## Solution

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

## Output

```sh
The student likes Maths.
The student studies Science.
The student walks.
The student talks.

```
