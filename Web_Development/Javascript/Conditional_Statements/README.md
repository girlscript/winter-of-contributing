<h1>Conditional Statements in JavaScript</h1>

* **Conditional Statements:**  Conditional statements help us to make a decision based on certain conditions.
<h3>JavaScript supports 4 conditional statements</h3>

 
* if statement
* if-else statement
* if-else-if statement
* switch statement
<h3>if statement</h3>

<p>if statement is used to check only a specific condition.</p>

**Syntax:**

```ruby
if (condition) {
    #block of code to be executed if the condition is true
}
```
**Example:**

```ruby
const num = 8;
if (num % 2 == 0) {
    console.log('Number in even');
}
```
**Output:** Number is even
<h3>if-else statement</h3>

<p>Use the if statement to execute a statement if a logical condition is true. Use the else clause to execute a statement if the condition is false.</p>

**Syntax:**
```ruby
if (condition) {
    #block of code to be executed if the condition is true
} 
else {
    #block of code to be executed if the condition is false
}
```
**Example:**
```ruby
const age=21;
if (age>=18) {
    console.log('Eligible to vote');
}
else {
    console.log('Not eligible to vote');
}
```
**Output:** Eligible to vote

<h3>if-else-if statement</h3>

<p>This statement can be used if we want to check more than two conditions.</p>

**Syntax:**
```ruby
if (condition1) {
    #block of code to be executed if condition1 is true
} 
else if (condition2) {
    #block of code to be executed if the condition1 is false and condition2 is true
} 
else {
    #block of code to be executed if the condition1 is false and condition2 is false
}
```
**Example:**
```ruby
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

<h3>switch statement</h3>

<p>A switch statement allows a program to evaluate an expression and attempt to match the expression's value to a case label. If a match is found, the program executes the associated statement.</p>

**Syntax:**
```ruby
switch(expression) {
  case x:
    #code block
    break;
  case y:
    #code block
    break;
  default:
    #code block
}
```
**Example:**
```ruby
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
