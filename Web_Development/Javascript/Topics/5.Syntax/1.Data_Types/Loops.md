# JavaScript Loops
In JavaScript when we need to execute a block of code multiple times , to print something multiple times and even in feeding or extracting values to or from an array we need loops. 
   
For example, If we have to print  "Girlscript Winter of Code" 10 times we will have to write  the following code to do so . But that could be a time taking task.

```
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");
console.log("Girlscript Winter of Code");

```
### What are loops?: 
<p>Loops  are basically a control statement that executes multiple times unless or until the given condition is reached. Loops also come in handy when you run the same code over and over again iterating each time with different values.</p>

###  Types of loops :
There are four types of loops in JavaScript.
- for loop
- while loop
- do while loop
- for each loop

##  The ' for ' loop 
 A JavaScript  for loop is a control structure that repeats itself over a specific number of time and execute the block of code a specific number of times. 
<p>For loop is used when the number of step is known. It enables us to perform n number of steps together in one line.</p>

### Syntax :


    for ( [initialization] ;  [condition] ; [increment])  
    {  
     block of code to be executed  
    }  

#### Control Flow of For loop :
- The initialization step is executed first, and only once. This step allows us to declare and initialize any loop control variables. After declaration it is preceded by a semicolon .

- Next , the Condition is checked , if it is true the block of code executes otherwise the control flow jumps outside the for loop. It is checked every-time before execution.

- Last, is the increment/decrement  which is executed (executed every-time) after the block of code has been executed.

#### For example  : 

```
// for printing  "Girlscript Winter of Code" five times
     for (let  i = 0 ;  i < 5 ;  i++ ) {
         console.log("Girlscript Winter of Code");
    }
```
```
// for printing  1 to 10 .
     for (let  i = 1 ;  i <= 10 ;  i++ ) {
         console.log(i);
    }
```
```
// infinite loop .
     for ( ;   ;  ) {
         console.log("Girlscript Winter of Code");
    }
// this loop will print the statement infinite times since the condition is always true.
```

***
##  The ' while ' loop 
 A JavaScript  while loop is a control structure that repeats itself over a specific number of time unless and untill the given condition is true. 
<p>While loop is used when the number of step is unknown. It enables us to perform operation while a condition is true . A while loop can also be converted into for loop.</p>

### Syntax :

```
    while ( [condition] )  
    {  
     block of code to be executed  
        [ increment/ decrement ] (optional)
    }  
```

#### Control Flow of For loop :

- First , the Condition is checked , if it is true the block of code executes otherwise the control flow jumps outside the while loop. It is checked every-time before execution.

- Last, is the increment/decrement  which is executed (executed every-time) after the block of code has been executed. It is optional in while loop.

#### For example  : 

```
// for printing  "Girlscript Winter of Code" five times
     let i = 0;
     while ( i < 5 ) {
         console.log("Girlscript Winter of Code");
    }
```
```
// for printing  " 1 to 10 " .
     let i = 1
     while ( i <= 10 ) {
         console.log( i );
          i++;
    }
```

***

##  The ' do while ' loop 
 A JavaScript do while loop is a control structure that is similar to while loop but it execute the block of code in it once, before checking the condition , then it will repeat the loop as long as the condition is true.
<p>do while loop is used when we need to run the loop once irrespective of the condition is true or false . It enables us to perform operation while a condition is true . A while loop can also be converted into for loop.</p>

### Syntax :
```
 do {  
     // block of code to be executed  
        [ increment/ decrement ] (optional)
    }  while ( [condition] ) ;
```
#### Control Flow of For loop :

- First , the loop execute one the code block in it without checking the condition .

- Then the condition is checked and if it is true then the loop runs until it is true otherwise the control jump outside the do while loop.

#### For example  : 

```
// for printing  "Girlscript Winter of Code" one times
// here the condition given is false but the do while loop do not check condition while running first time.

     let i = 0;
     do  {
         console.log("Girlscript Winter of Code");
    } while ( i != 0 ); 
```
```
// for  printing 1 to 10 .
     let i = 1
    do {
         console.log( i );
          i++;
    } while ( i <= 10 );
```

***
