# What is Break in Python

Break statement is a loop control statement. It controls the sequence of loop.<br/>
Break statement terminates the very loop it lies within.<br/>
Execution remains at the statement immediately following the body of the terminated statement.<br/>

# Main Purpose<br/>  
Break statement is to stop the excution when a special condition is met. <br/>

# Flowchart of Break
![](loops_break.jpg)

In the Above Diagram there is a loop test expression, if the loop test expression is true then it will come to break statement else it will go out of loop. When break occurs if the condition in break is true then it will exit the loop, else the loop will be exceuted.

# Sample Code
<pre>
for i in "What is break in Python":<br/>
  if (i == "b"):<br/>
    break<br>
  print(i)<br/>
</pre>  

# Output<br/>
W<br/>
h<br/>
a<br/>
t<br/>
 <br/>
i<br/>
s<br/>

In the above example the loop is iterating the string "What is break in Python" and as soon as it encounter the character "b", the if condition becomes true and it encounter break statement and the flow of execution is brought out of loop.

# Nested loops
In Nested loops, a break statement will terminate the very loop it appears in.That is , if break statement is inside the inner loop then only the inner loop will terminate and outer loop will continue. If however, the break statement is in outer loop, the outer loop will terminate.

# Sample Code
<pre>
for a in range(3):</br>
    for b in range(4):</br>          
        if b==3:</br>    
            break<br/>
        print("The number is ",a,b);<br/>
</pre>        

# Output <br/>
The number is  0 0<br/>
The number is  0 1<br/>
The number is  0 2<br/>
The number is  1 0<br/>
The number is  1 1<br/>
The number is  1 2<br/>
The number is  2 0<br/>
The number is  2 1<br/>
The number is  2 2<br/>

In the above example numbers from 0 to 2 (2 D aarray) will be printed as when the break statement encounter with 3 it will come out of loop.

# Advantages of Break in Python
1. Break skips unncessary iterations of loop.<br/>
2. Break helps to come out of the block of code without exceuting the remaining block of code.<br/>

# Resources:-
1. https://www.geeksforgeeks.org/python-break-statement/<br/>
2. https://www.tutorialspoint.com/python/python_break_statement.htm<br/> 