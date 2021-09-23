

# Javascript Functions

<iframe  width="560"  height="315"  src="https://www.youtube.com/embed/LAl0vdiPVZQ"  title="YouTube video player"  frameborder="0"  allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture"  allowfullscreen></iframe>


## Transcript

A **JavaScript function** is a block of code designed to perform a particular task. Its basically dividing your program into different functional components.

Now a function looks like this..  
Wait.. lets break it into different parts first

```javascript
function myFunction(p1, p2) {
    return p1 * p2; // The function returns the product of p1 and p2
}
```
But before learning functions, lets learn about **scope**.

<hr>

### Scope

The scope is basically the availability of your code.  
Let’s see by an example

``` javascript
if (true) {
    const a = 2;
}
```
```javascript
console.log(a); //ReferenceError : a is not defined
```
Because (**if**) block creates a scope for `a` and `a` can be used within that scope only. You are free to access the variable within its scope , but a variable cannot  be accessed outside its scope.

<hr>

  
Now lets go back to our function example:

  
```javascript
function myFunction(p1, p2) {
    return p1 * p2; // The function returns the product of p1 and p2
}
```
Here the myFunction block creates scope of p1 and p2. Which now gets us to a point which is lifetime of function parameters.

You already know this answer now

Scope of the parameters last between these to curly braces of the function

Means you can access them inside the function but not outside it

Lets write our first function that prints the sum of two elements :


```javascript
function sum(a,b) {
	c = a+b
	console.log(c);
}

sum(10,12);
```
<hr>

Lets now look at different types of functions:

**Anonymous Functions**

 - As the name suggests its anonymous and it doesn’t have a name to it.

```javascript
const show = function(){
	console.log("Anonymouse Function");
}
	
show();
```
**Named/Generator function**

 - This is useful when we have to call it many times and pass different
       values to it

```javascript
function subtract(num1, num2) {
	return num1 - num2;
}
```
**Arrow Functions**

 - Its a compact way to express a function
 - Its limited and can’t be used in all situations

```javascript
(a) => {		
	return a + 100;	
}
```
		
**Why we use functions?**

 - Often times, you need to run the same processes at many places and
   copy pasting the same thing again and again can work but suppose
   there’s a change in the same part.
 - Now you have to make changes in all of the parts again.
 - Now if you use a function, I allows you to reuse the same code,
   without having to do all the trouble.
 - If you want to change something, you can just edit the function and
   its done. Function also makes your code small and concise
   
**Created by :** [Sarfraz Alam](https://github.com/Sarfraz-droid)

