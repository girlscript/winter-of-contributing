# [JS] Topic: Create a "Hello World" Tutorial
We will be creating a simple hello world tutorial for Javascript.
## Description
In this we will be learning how to write hello world in Javascript in 4 different ways.
This is a simple program which prints Hello World as an output. Though it is very simple but it's often used to learn a new language to the beginners. Find the attached Google Colab link from [here](https://github.com/itika1/winter-of-contributing/blob/Javascript/Web_Development/Javascript/Topics/1.Hello_World/Hello_World.ipynb)
The following are the ways to write Hello World in Javascript.

### 1. Using **console.log**
This is a most significant method for writing Hello World in Javascript.

###  Source Code: 
```javascript
//hello world program
console.log(Hello World);
```
### Output:
```javascript
Hello World
```
### Explanation
Here's the first line is a comment and the second line is the code to write Hello World.

### 2. Using **alert** method
If we want to run hello world script in an HTML page we should use alert method inside script tag.

<details>
        <summary> script tag </summary>
        <p>Javascript program can be inserted into an HTML document using .</p>
</details>

###  Source Code: 
```html
<!DOCTYPE HTML>
<html>
    <head>
        <title>Insert alert tag</title>
    </head>
    <body>
        <script>
            alert('Hello World');
        </script>
    </body>
</html>
```
### Output:
Whenever the page reloads it will show an alert like:
```javascript
This page says
Hello World
```
### Explanation
The alert() method displays an alert box with a specified message (here it is Hello World) and an OK button below the box.

### 3. Using Node.js
Now we will learn how to run a Hello World program in Node.js. The following are the steps to write script in Node.js

1. Step 1: Create a folder like **'FirstNodeJs'** and inside that create a file like **'app.js'**.
2. Step 2: Open the file app.js in any editor like Visual Studio Code and write the following piece of code.
    ```javascript
    var http = require('http');  
    //create a server object:  
  
    http.createServer(function (request, response) {  
    response.write('Hello World!'); //write a response to the client  
    response.end(); //end the response  
    }).listen(5000); //the server object listens on port 8080   
  
    // Console will print the message  
    console.log('Server running at 5000'); 
    ```
3. Now open your command prompt by typing **cmd** in the start and open your folder using 

    ```cd FirstNodeJs```

    Now run the Node.js file using

    ```node app.js```

4. Now the server is running at port 5000. You just type *localhost:5000* in your browser and press enter and you can find your Node.js app running.

### Output:
Hello World

### 4. Using **document.write()**
Here's another way of writing hello world code in HTML document without using the most significant way console.log method.

###  Source Code: 
```javascript
//hello world program
document.write(Hello World);
```
### Output:
```javascript
Hello World
```
### Explanation
Here's the first line is a comment and the second line is the code to write Hello World.

### Conclusion
Bingo! 👍 You've succesfully leant how to write Hello World 👋 in Javascript. 

Happy Coding! 

*Documentation contributed by* [Itika](http://github.com/itika1) *with* 💖
