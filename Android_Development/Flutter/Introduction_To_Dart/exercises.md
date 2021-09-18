# 💻 Exercises
## Array Utility Methods
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
```
a)
```
```dart
  void main(){
      var numbers = [2,3,5,6,8,9];
      var op = numbers.forEach((number)=>print(number*number));
  }

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

   Output:
   true
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