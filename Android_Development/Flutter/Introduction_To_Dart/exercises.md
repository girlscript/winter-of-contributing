# 💻 Exercises



## Conditional Statements :
### 1. If Condition

- Print "Excellent work" if the student scores A grade


  ```
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
```
  import 'dart:io';

   void main() {
   print("Enter first number");
   int? num1 = int.parse(stdin.readLineSync()!); //using ? and ! because of null safety
   print("Enter second number");
   int? num2 = int.parse(stdin.readLineSync()!);

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

- Write a progeram to input the names of five subjects Physics,Chemistry,Biology,
  Maths and Computer. Calculate percentage and grade according to the given conditions
  Percentage >= 90% : Grade A
  Percentage >= 80% : Grade B
  Percentage >= 70% : Grade C
  Percentage >= 60% : Grade D
  Percentage >= 40% : Grade E
  Percentage < 40%  : Grade F

```
  import 'dart:io';

   void main() {
   stdout.write("Enter Physics Mark: ");
   int? physics = int.parse(stdin.readLineSync()!);
   stdout.write("Enter Chemistry Mark: ");
   int? chemistry = int.parse(stdin.readLineSync()!);
   stdout.write("Enter Biology Mark: ");
   int? biology = int.parse(stdin.readLineSync()!);
   stdout.write("Enter Maths Mark: ");
   int? maths = int.parse(stdin.readLineSync()!);
   stdout.write("Enter Computer Mark: ");
   int? computer = int.parse(stdin.readLineSync()!);

   double percentage = double.parse(
         ((chemistry + physics + maths + biology + computer) / 5.0)
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

```
import 'dart:io';

void main() {
  int max;
  stdout.write("Enter First Number: ");
  int? number1 = int.parse(stdin.readLineSync()!);
  stdout.write("Enter Second Number: ");
  int? number2 = int.parse(stdin.readLineSync()!);
  stdout.write("Enter Third Number: ");
  int? number3 = int.parse(stdin.readLineSync()!);

  if (number1 > number2) {
    if (number1 > number3) {
      /* If num1 > num2 and num1 > num3 */
      print("Maximum Number = $number1");
    } else {
      /* If num1 > num2 but num1 > num3 is not true */
     print("Maximum Number = $number3");
    }
  } else {
    if (number2 > number3) {
      /* If num1 is not > num2 and num2 > num3 */
      print("Maximum Number = $number2");
    } else {
      /* If num1 is not > num2 and num2 > num3 */
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