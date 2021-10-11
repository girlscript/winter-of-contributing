# Conditional Statements in JavaScript

**Conditional Statements:**  Conditional statements help us to make a decision based on certain conditions.
## JavaScript supports 4 conditional statements</h3>
 
* if statement
* if-else statement
* if-else-if statement
* switch statement
### if statement

if statement is used to check only a specific condition.

**Syntax:**

```js
if (condition) {
    //Statements that execute if the condition is true
}
```
**Example:**

```js
const num = 8;
if (num % 2 == 0) {
    console.log('Number in even');
}
```
**Output:** Number is even
### if-else statement

It is used to execute one of the two possible actions depending on the result of a logical test. If the test expression is true, statement/s inside the body of if statement is executed but if the test expression is false, else statement is executed.

**Syntax:**
```js
if (condition) {
    //Statements that execute if the condition is true
} 
else {
    //Statements that execute if the condition is false
}
```
**Example:**
```js
const age=21;
if (age>=18) {
    console.log('Eligible to vote');
}
else {
    console.log('Not eligible to vote');
}
```
**Output:** Eligible to vote

### if-else-if statement

This statement can be used if we want to check more than two conditions.

**Syntax:**
```js
if (condition1) {
    //Statements that execute if the condition1 is true
} 
else if (condition2) {
    //Statements that execute if condition1 is false and condition2 is true
} 
else {
    //Statements that execute if condition1 and condition2 both are false
}
```
**Example:**
```js
const marks = 65;

if (marks < 50) {
    console.log('fail');
} 
else if (marks >= 50 && marks < 60) {
    console.log('D grade');
} 
else if (marks >= 60 && marks < 70) {
    console.log('C grade');
} 
else if (marks >= 70 && marks < 80) {
     console.log('B grade');
} 
else if (marks >= 80 && marks < 90) {
     console.log('A grade');
} 
else if (marks >= 90 && marks < 100) {
     console.log('A+ grade');
} 
else {
     console.log('Invalid!');
}
```
**Output:** C grade

### switch statement

A switch statement is used to execute a particular group of statements to take from different available choices. The selection is based on the current value of an expression with the switch statement.

**Working of switch statement**

Firstly the switch expression is evaluated, then the value of the expression is compared one by one with every case constant. If the value of expression matches with any case constant, then all statements under that particular case are executed. If none of the case constant matches with the value of expression then the block of statements under default is executed. 'default' is optional, if it is not present and no case matches then no action takes place. These cases and default can occur in any order.

**Syntax:**
```js
switch(expression) {
  case x:
    //code block
    break;
  case y:
    //code block
    break;
  default:
    //code block
}
```
**Example:**
```js
const i=2;
    switch (i)
    {
    case 1:
            console.log("First case\n");
            break;
    case 2:
            console.log("Second case\n");
            break;
    case 3:
            console.log("Third case\n");
            break;
    default :
            console.log("Any other case\n");
            break;                            
    }
```
**Output:** Second case
