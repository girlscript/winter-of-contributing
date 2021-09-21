# For Loop

A for loop repeats until a specified condition evaluates to false. The JavaScript for loop is similar to the Java and C for loop.

A for statement looks as follows:

```
for ([initialExpression]; [conditionExpression]; [incrementExpression]){
  statement
}
```

- **Initialization condition:** Here, we initialize the
variable in use. It marks the start of a for loop. An already declared
variable can be used or a variable can be declared, local to loop only.
- **Testing Condition:** It is used for testing the exit condition for a loop. It must return a boolean value. It is also an **Entry Control Loop** as the condition is checked prior to the execution of the loop statements.
- **Statement execution:** Once the condition is evaluated to true, the statements in the loop body are executed.
- **Increment/ Decrement:** It is used for updating the variable for next iteration.
- **Loop termination:** When the condition becomes false, the loop terminates marking the end of its life cycle.

![For loop control flow diagram](For_loop_1.png)

## Example of a for loop
```javascript
    // for loop begins when x=2
    // and runs till x <=4
    for (var x = 2; x <= 4; x++) 
    {
        console.log("Value of x:" + x);
    }
```

### Output
```
Value of x:2
Value of x:3
Value of x:4
```