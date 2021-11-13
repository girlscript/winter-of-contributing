![Introduction to Dart](https://user-images.githubusercontent.com/71007973/133734431-8ebc98ce-a455-4279-b014-6e7f06735907.jpg)
### What is Dart?

Dart is a programming language to develop multiple platform application in Flutter.
It is a comprehensive language and offers excellent language capabilities, such as Future, Stream, Sound Null Safety.

#### Dart Libraries :

* dart:async,
* dart:convert,
* dart:html,
* dart:io,
etc., and also handle package manager pub dev

### Dart Variables

A variable acts as a container for values in a program. Variable names are also called identifiers.

### Rules :
1. Identifiers cannot be keywords.
2. Identifiers can contain alphabets and numbers.
3. Identifiers cannot contain spaces and special characters, except the underscore (_) and the dollar ($) sign.
4. Variable names cannot begin with a number.
#### Syntax : 
```
var  var_name = "John Doe";
int num = 96;
``` 
We also **Dynamic Keyword** which helps to change the **datatype** in futures .

### Data Types

The most fundamental of the programming language is **Data Type** .
- Numbers - used to represent numeric literals
- Strings - used to represent sequence of characters
- Booleans - used to represent values is True or False
- Lists - used to represent collection of Objects
- Maps - similar to list additionally key value pairs

### Dart Function

A function is a set of statements to perform a specific task and helps to reuse code in block manner. After functions are defined , call the function to access code .Moreover, functions make it easy to read and maintain the program’s code. A function declaration tells the compiler about a function's name, return type, and parameters.

```
void main() { 
   print(add(2,5));
}  
add(num1,num2) { 
    return num1+ num2;
} 
``` 
### Arrow Functions
Lambda Functions are also called as Arrow functions.
#### What is Lambda ? 
Lambda is a short and concise manner to represent small functions.
It must be only one line expression. Just like normal function lambda function cannot have a block of code to execute.
**Syntax**
```
return_type function_name(arguments) => expression;
``` 
**Example**

```
int Sum(int num1, int num2) => num1+ num2;
``` 
### Dart List

Dart List is similar to an array. Dart represents arrays in the form of List objects. A List is simply an ordered group of objects. The array is the most popular and commonly used collection in any other programming language.
```
var list1 = [3,4,6,9,15,20,]  
``` 
#### Lists can be classified as −
- Fixed Length List
   
```
void main() { 
   var lst = new List(3); 
   lst[0] = 12; 
   lst[1] = 13; 
   lst[2] = 11; 
   print(lst); 
}
``` 
> From the above program we can conclude that **fixed length list** means the size of the list is already **defined**
- Growable List

```
void main() { 
   var lst = new List(); 
   lst.add(12); 
   lst.add(13); 
   print(lst); 
} 
``` 
> From the above program we can conclude that **growable list** means the size of the list grows whenever new elements is added to the list , In other words size of the list is not **predefined**

### Dart conditonals
The conditionals (ternary) operator is the only Dart Operator that takes three operands: a condition followed by a question mark (?), then an expression to execute if the condition is **truthy** followed by a colon (:), and finally the expression to execute if the condition is **falsy**.

**Syntax**
```
condition ? exprIfTrue : exprIfFalse
``` 
> Where:
> * condition: An expression whose value is used as a condition.
> * exprIfTrue: An expression which is evaluated if the condition evaluates to a **truthy** value (one which equals or can be converted to true).
> * exprIfFalse: An expression which is executed if the condition is **falsy** (that is, has a value which can be converted to false).

**Example**

```
String message(bool isValid) {
  return isValid ? 'This is valid' : 'This is not valid';
}

void main() {
  print(message(true));
}
``` 

```
Center(
        child: isLogin ? Text('You are a member') : Text('Hello Guest'),
),
```

### Dart Control Flow Statements
You can control the flow of your Dart code using any of the following:
* if and else
* for loops
* while and do-while loops
* break and continue
* switch and case

#### if and else
Dart supports if statements with optional else statements, as the next sample shows.

**Syntax**
```
if (isRaining()) {
  you.bringRainCoat();
} else if (isSnowing()) {
  you.wearJacket();
} else {
  car.putTopDown();
}
``` 
#### for loops
You can iterate with the standard for loop.

**Syntax**
```
var message = StringBuffer('Dart is fun');
for (var i = 0; i < 5; i++) {
  message.write('!');
}
``` 
#### while and do-while
A while loop evaluates the condition before the loop:

**Syntax**
```
while (!isDone()) {
  doSomething();
}
``` 
A do-while loop evaluates the condition after the loop:

**Syntax**
```
do {
  printLine();
} while (!atEndOfPage());
``` 
#### break and continue
Use break to stop looping:

**Syntax**
```
while (true) {
  if (shutDownRequested()) break;
  processIncomingRequests();
}
``` 
Use continue to skip to the next loop iteration:

**Syntax**
```
for (int i = 0; i < candidates.length; i++) {
  var candidate = candidates[i];
  if (candidate.yearsExperience < 5) {
    continue;
  }
  candidate.interview();
}
``` 
#### Switch and case
Switch statements in Dart compare integer, string, or compile-time constants using ==. The compared objects must all be instances of the same class (and not of any of its subtypes), and the class must not override ==. Enumerated types work well in switch statements.

Each non-empty case clause ends with a break statement, as a rule. Other valid ways to end a non-empty case clause are a continue, throw, or return statement.

Use a default clause to execute code when no case clause matches:

**Syntax**
```
var command = 'OPEN';
switch (command) {
  case 'CLOSED':
    executeClosed();
    break;
  case 'PENDING':
    executePending();
    break;
  case 'APPROVED':
    executeApproved();
    break;
  case 'DENIED':
    executeDenied();
    break;
  case 'OPEN':
    executeOpen();
    break;
  default:
    executeUnknown();
}
``` 

### Dart Classes
Dart is an object-oriented language. It supports object-oriented programming features like classes, interfaces, etc. A class in terms of OOP is a blueprint for creating objects. A class encapsulates data for the object. Dart gives built-in support for this concept called class.
### Declaring a Class
Use the class keyword to declare a class in Dart. A class definition starts with the keyword class followed by the class name; and the class body enclosed by a pair of curly braces.

**Syntax**
```
class class_name {  
   <fields> 
   <getters/setters> 
   <constructors> 
   <functions> 
}
``` 
The **class** keyword is followed by the class name. The rules for identifiers must be considered while naming a class.
A class definition can include the following −
* Fields − A field is any variable declared in a class. Fields represent data pertaining to objects.
* Setters and Getters − Allows the program to initialize and retrieve the values of the fields of a class. A default getter/ setter is associated with every class. However, the default ones can be overridden by explicitly defining a setter/ getter.
* Constructors − responsible for allocating memory for the objects of the class.
* Functions − Functions represent actions an object can take. They are also at times referred to as methods.

**Example**
```
class Car {  
   // field 
   String engine = "E1001";  
   
   // function 
   void disp() { 
      print(engine); 
   } 
}
``` 
> The example declares a class Car. The class has a field named engine. The disp() is a simple function that prints the value of the field engine.

### Creating Instance of the class
To create an instance of the class, use the new keyword followed by the class name.

**Syntax**
```
var object_name = new class_name([ arguments ])
``` 
> * The new keyword is responsible for instantiation.
> * The right-hand side of the expression invokes the constructor. The constructor should be passed values if it is parameterized.

**Example: Instantating a Class**
```
var obj = new Car("Engine 1")
``` 

### Accessing Attributes and Functions
A class’s attributes and functions can be accessed through the object. Use the ‘.’ dot notation (called as the period) to access the data members of a class.
```
//accessing an attribute 
obj.field_name  

//accessing a function 
obj.function_name()
```

**Example**
```
void main() { 
   Car c= new Car(); 
   c.disp(); 
}  
class Car {  
   // field 
   String engine = "E1001";  
   
   // function 
   void disp() { 
      print(engine); 
   } 
}
``` 
The output of the above program will be **E1001**

### Dart Constructors
A constructor is a special function of the class that is responsible for initializing the variables of the class. Dart defines a constructor with the same name as that of the class. A constructor is a function and hence can be parameterized. However, unlike a function, constructors cannot have a return type. If you don’t declare a constructor, a default no-argument constructor is provided for you.

**Syntax**
```
Class_name(parameter_list) { 
   //constructor body 
}
``` 
**Example**
```
void main() { 
   Car c = new Car('E1001'); 
} 
class Car { 
   Car(String engine) { 
      print(engine); 
   } 
}
``` 
The output of the above program will be **E1001**

### Dart Class ─ Getters and Setters
**Getters** and **Setters**, also called as **accessors** and **mutators**, allow the program to initialize and retrieve the values of class fields respectively. Getters or accessors are defined using the get keyword. Setters or mutators are defined using the **set** keyword.

A default getter/setter is associated with every class. However, the default ones can be overridden by explicitly defining a setter/ getter. A getter has no parameters and returns a value, and the setter has one parameter and does not return a value.

**Syntax: Defining a getter**
```
Return_type  get identifier 
{ 
} 
``` 

**Syntax: Defining a setter**
```
set identifier 
{ 
}
``` 

**Example**
```
class Student { 
   String name; 
   int age; 
    
   String get stud_name { 
      return name; 
   } 
    
   void set stud_name(String name) { 
      this.name = name; 
   } 
   
   void set stud_age(int age) { 
      if(age<= 0) { 
        print("Age should be greater than 5"); 
      }  else { 
         this.age = age; 
      } 
   } 
   
   int get stud_age { 
      return age;     
   } 
}  
void main() { 
   Student s1 = new Student(); 
   s1.stud_name = 'MARK'; 
   s1.stud_age = 0; 
   print(s1.stud_name); 
   print(s1.stud_age); 
} 
``` 

  - - - -