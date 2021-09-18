<h1>What are loops?</h1>

Loops offer a quick and easy way to do something repeatedly.Here we will  introduce the different iteration statements available to JavaScript.
Loops can execute a block of code a number of times. Loops are handy, if you want to run the same code over and over again, each time with a different value.

<h2>Types of LOOPS :</h2>

 - for - loops through a block of code a number of times

- while - loops through a block of code while a specified condition is true
- do/while - also loops through a block of code while a specified condition is true

## The FOR loop:

The JavaScript for loop iterates the elements for the fixed number of times. It should be used if number of iteration is known. 

### Syntax :

    for (initialization; condition; increment)  
    {  
        code to be executed  
    }  

- Initialization is executed (one time) before the execution of the code block.

- Condition defines the condition for executing the code block.

- Increment is executed (every time) after the code block has been executed.

#### Example: 


    for (var i = 0; i < 5; i++) {
      //code
    }


***
## The WHILE loop :

The JavaScript while loop iterates the elements for the infinite number of times. It should be used if number of iteration is not known. 
In other words the while loop, loops through a block of code as long as a specified condition is true.

### Syntax: 

    while (condition) {
    // code block to be executed
    }

#### Example :

    while (i < 10) {
    text += "The loop is on " + i + "step";
    i++;
    }    

***
## The 'do while' loop 
The do while loop is a variant of the while loop.
The JavaScript do while loop iterates the elements for the infinite number of times like while loop. But, code is executed at least once whether condition is true or false. 

### Syntax :

    do {
    // code block to be executed
    }
    while (condition);

#### Example :

    do {
    text += "The loop is on  " + i + "step";
    i++;
    }
    while (i < 10);

 ***   
