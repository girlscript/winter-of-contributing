# What is Break in Python?

Break statement is a loop control statement. It controls the sequence of loop.<br/>
Break statement terminates the very loop it lies within.<br/>
Execution remains at the statment immediately following the body of the terminated statement.<br/>

# Main Purpose<br/>  
Break statement is to stop the excution when a special condition is met. <br/>

## Flowchart of Break
![](Break.jpg)

In the Above Diagram there is a loop test expression, if the loop test expression is true then it will come to break statement else it will go out of loop. When break occurs if the condition in break is true then it will exit the loop, else it will execute the expression in it.

# Sample Code
<pre>
for i in "What is break in Python":<br/>
  if (i == "b"):<br/>
    break<br>
  print(i)<br/>
</pre>  

In the above example the loop is iterating the string "What is break in Python" and as soon as it encounter the character "b", the if condition becomes true and it encounter break statement and the flow of execution is brought out of loop.

# Nested loops
In Nested loops, a break statement will terminate the very loop it appears in.That is , if break statement is inside the inner loop then only the inner loop will terminate and outer loop will continue. Ifhowever, the break statement is in outer loop, the outer loop will terminate.

# Advantages of Break in Python
1. Break skips unncessary iterations of loop.<br/>
2. Break helps to come out of the block of code without exceuting the remaining block of code.<br/>