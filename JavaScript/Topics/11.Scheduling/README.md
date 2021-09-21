# Scheduling

There are primarily two ways of scheduling a task in JavaScript - ```setTimeout()``` and ```setInterval()```.
<br>

Both ```setTimeout()``` and ```setInterval()``` are built-in methods of the global object on the Document Object Model to schedule tasks at a set time.```setTimeout()``` calls a passed-in function once after a specified delay, while ```setInterval()``` invokes one continuously at a designated time.
<br>

- ## **setTimeout()**
  The ```setTimeout``` function is a native JavaScript function. It sets a timer (a countdown set in milliseconds) for an execution of a callback function, calling the function upon completion of the timer.

  The ```setTimeout()``` method accepts two arguments: a callback function and a delay in milliseconds, and calls the function once.
  
Syntax:
```js
myVar = setTimeout(function, milliseconds);
clearTimeout(myVar);
```

  In your js file, implement a ```setTimeout()``` method and pass in an anonymous function as the first argument, and a number in milliseconds as the second argument:
  
```js
var myVar;

function myFunction() {
  myVar = setTimeout(alertFunc, 3000);
}

function alertFunc() {
  alert("Hello!");
}
// This will display an alert box after 3 seconds (3000 milliseconds)
```
- ## **setInterval()**
  Similar to ```setTimeout()```, the ```setInterval()``` method accepts two arguments: a callback function and a delay in milliseconds. The method also accepts additional arguments to pass into the callback function.
  
  The difference is that the ```setInterval()``` method invokes the callback function regularly with a specified delay between calls.
  
Syntax:
```js
let myVar = setInterval(function, milliseconds);
clearInterval(myVar);
```

```js
var myVar;

function myFunction() {
  myVar = setInterval(alertFunc, 3000);
}

function alertFunc() {
  alert("Hello!");
}
// This will Alert "Hello" every 3 seconds (3000 milliseconds)
```
- ## **clearTimeout()**
  To cancel a ```setTimeout()``` method, you can resort to the ```clearTimeout()``` method passed within the body of your ```setTimeout()``` call. The ```clearTimeout()``` method accepts a callback function as an argument.

```js
var myVar;

function myFunction() {
  myVar = setTimeout(function(){ alert("Hello"); }, 3000);
}

function myStopFunction() {
  clearTimeout(myVar);
}
// Prevent the function set with the setTimeout() to execute
```
- ## **clearInterval()**
  To cancel a ```setInterval()``` method, you can apply the ```clearInterval()``` method. Similarly to ```clearTimeout()```, the ```clearInterval()``` method accepts a callback function as an argument.

```js
var myVar = setInterval(myTimer, 1000);

function myTimer() {
  var d = new Date();
  var t = d.toLocaleTimeString();
  document.getElementById("demo").innerHTML = t;
}

function myStopFunction() {
  clearInterval(myVar);
}
// Display the current time (the setInterval() method will execute the "myTimer" function once every 1 second). Use clearInterval() to stop the time
```

#### Contributor: [Sushovan Banerjee](https://github.com/sushovanb02)
