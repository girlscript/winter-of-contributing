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