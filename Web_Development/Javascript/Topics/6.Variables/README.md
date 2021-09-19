## Javascript Variables

In this article you are going to learn everything about **Javascript Variables** from scratch. 

Variables are "containers" for storing information JavaScript variables are used to hold values or
expressions. A variable can have a short name, like x, or a more descriptive name, like carname.



 ## Rules for declaring Javascript Variable name:
There are some rules while declaring a JavaScript variable (also known as identifiers).

   1. Name must start with a letter (a to z or A to Z), underscore( _ ), or dollar( $ ) sign.
   2. After first letter we can use digits (0 to 9), for example value1.
   3. JavaScript variables are case sensitive, for example x and X are different variables.



Creating variables in JavaScript is most often referred to as "declaring" variables. We declare
JavaScript variables with the var keyword let's have a look on the syntax.

## Syntax:-
```
var x;
var name;
you can also assign values to the variables when you declare them:
var x=5;
var name="Ram";

```

**Note :-** When you assign a text value to a variable, use quotes around the value. If you redeclare a
JavaScript variable, it will not lose its value.


**Correct JavaScript variables**

   ``` 
   var x = 10;  
   var _value="sonoo";  

   ```
**Incorrect JavaScript variables**


    var  123=30;  
    var *aa=320; 
  

## Example of JavaScript variable

Let’s see a simple example of JavaScript variable.


__Source Code:__

```
<html>
<body>
<script>  
var x = 10;  
var y = 20;  
var z=x+y;  
document.write("x+y = ",z);  
</script>  
</body>
</html>
```

## Output of the above example

![image](output.png)

## Types of Javascript Variables

A JavaScript variable is simply a name of storage location. There are two types of variables in JavaScript : **local variable and global variable**.

## Javascript Local Variable


A JavaScript local variable is declared inside block or function. It is accessible within the function or block only.

__Source Code:__
```
    <html>
    <body>
    <script>  
    function abc(){  
    var x=10;//local variable  
    }  
    </script>  
    </body>
    </html>
```
## JavaScript global variable

A JavaScript global variable is accessible from any function. A variable i.e. declared outside the function or declared with window object is known as global variable.

__Source Code:__

```
<html>
<body>
<script>  
var data=200;//gloabal variable  
function a(){  
document.writeln(data);  
}  
function b(){  
document.writeln(data);  
}  
a();//calling JavaScript function
b();
  
</script>  
</body>
</html>

```
## Output of the above example
```
200 200
```

## Javascript global variable with window object


To declare JavaScript global variables inside function, you need to use window object. For example:
```
window.value=90;  
    
```
Now it can be declared inside any function and can be accessed from any function.


__Source Code:__
```
<html>
<body>
<script>
function m(){  
window.value=100;//declaring global variable by window object  
}  
function n(){  
alert(window.value);//accessing global variable from other function  
}  
m();
n();
</script>
</body>
</html>
```

## Output of the above example
  This will generate a alert box in your browser.

![image](alert.png)

## Conclusion
Congratulations! You've Successfully learnt everything about Javascript Variable.

Happy learning..!! :wave:

__Contributor:__  [Mansi Mishra](https://github.com/0904-mansi) :heart:
