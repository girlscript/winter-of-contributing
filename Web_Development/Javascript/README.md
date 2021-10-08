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
if (condition)
{
    #block of code to be executed if the condition is true
}
```
**Example:**

```ruby
const num = 8
if (num % 2 == 0)
{
    console.log('Number in even')
}
```
**Output:** Number is even
<h3>if-else statement</h3>

<p>Use the if statement to execute a statement if a logical condition is true. Use the else clause to execute a statement if the condition is false.</p>

**Syntax:**
```ruby
if (condition) {
    #block of code to be executed if the condition is true
} else {
    #block of code to be executed if the condition is false
}
```
**Example:**
```ruby
const age=21
if (age>=18)
{
    console.log('Eligible to vote')
}
else
{
    console.log('Not eligible to vote')
}
```
**Output:** Eligible to vote
