# What is Break in Python

Break statement is a loop control statement. It controls the sequence of loop.<br/>
Break statement terminates the very loop it lies within.<br/>
Execution remains at the statement immediately following the body of the terminated statement.<br/>

# Main Purpose<br/>  
Break statement is to stop the excution of the current block. <br/>

# Types and Methods
Break Statement can be used in for loops, while loop, Nested loop and in if else .

# Flowchart of Break
![alt text](loops_break.jpg)

In the Above Diagram there is a loop test expression, if the loop test expression is true then it will come to break statement else it will go out of loop. When break occurs if the condition in break is true then it will exit the loop, else the loop will be exceuted.

# Sample Code
```Python
for i in "What is break in Python":
  if (i == "b"):
    break
  print(i)
```
# Output<br/>
W<br/>
h<br/>
a<br/>
t<br/>
 <br/>
i<br/>
s<br/>

In the above example the loop is iterating the string "What is break in Python" and as soon as it encounter the character "b", the if condition becomes true and it encounter break statement and the flow of execution is brought out of loop.

# While Loop
```Python
i = 0
while 1:
  print(i)
  i=i+1
  if i == 9:
    break
print("out of loop")
```

# Output
0<br/>
1<br/>
2<br/>
3<br/>
4<br/>
5<br/>
6<br/>
7<br/>
8<br/>
out of loop<br/>

In the above example it will search for 9 , and when it is found it will print 0 to 8 except 9.

# Nested loops
In Nested loops, a break statement will terminate the very loop it appears in.That is , if break statement is inside the inner loop then only the inner loop will terminate and outer loop will continue. If however, the break statement is in outer loop, the outer loop will terminate.

# Sample Code
```Python
for a in range(3):
    for b in range(4):          
        if b==3:   
            break
        print("The number is ",a,b)
```     

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

# Conclusion
Break Statement is a loop control statement that terminates the execution of a sequence of statements in a loop and passes it to the next statement after the current loop exits. Break Statement can be used in 2 loops : While , For.



