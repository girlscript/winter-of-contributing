# <p align=center> Synchronous and Asynchronous  </p>
## <p align=center>Synchronous:-</p> 
### &nbsp; &nbsp; Synchronous (or sync) execution usually refers to code executing in sequence. In sync programming, the program is executed line by line, one line at a time. Each time a function is called, the program execution waits until that function returns before continuing to the next line of code.
 For Example :-  
 ```javascript
 <script>
	document.write("Good Morning");   //First
  document.write("<br>");
	document.write("Good Afternoon") ;  //Second
	document.write("<br>");
	document.write("Good Night");  //Third
</script>

Output :- 
Good Morning
Good Afternoon
Good Night
```
### In the above code snippet, the first line of the code "Good Morning " will be logged first then the second line " Good Afternoon " will be logged and then after its completion, the third line would be logged "Good Night ".So as we can see the codes work in a sequence. Every line of code waits for its previous one to get executed first and then it gets executed.**

## <p align=center>Asynchronous:-</p> 
###  &nbsp; &nbsp; Asynchronous (or async) execution refers to execution that doesn’t run in the sequence it appears in the code. In async programming the program doesn’t wait for the task to complete and can move on to the next task.
### Note Point : - If the code  does not involves any heavy operations then even in async one sequence may follow.
 For Example :-  
 ```javascript
 <script>
	document.write("Good Morning");
    document.write("<br>");
  
    setTimeout(() => {
        document.write("Good Afternoon");
    }, 2000);
  
    document.write("<br>");
    document.write("Good Night");
    document.write("<br>");
</script>

Output :- 
Good Morning
Good Night
Good Afternoon
```
### So, what the code does is first it logs in "Good Morning " then rather than executing the setTimeout function it logs in "Good Night" and then it runs the setTimeout function.
# <p align=center>Difference between Synchronous and Asynchronous </p>



|Synchronous| Asynchronous|
|-----------|---------|
| In synchronous operations tasks are performed one at a time and only when one is completed, the following is unblocked.| In asynchronous operations, on the other hand, you can move to another task before the previous one finishes.|
| Synchronous call have blocking i/o operations | ASynchronous call have non-blocking i/o operations |
| Slow Process | Fast Process|

