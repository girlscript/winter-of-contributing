 ## Why do we need asynchronous programming?

Normally, our JavaScript code is executed line by line, top to bottom. An instruction can only run once the previous one has completed. It is synchronous because there is only one thing happening at the same time.

    console.log(1)  
    console.log(2)

This is great because it’s easy to read and reason about.

The problem occurs when one line of code takes more time. We can simulate a situation like that using  `window.alert`:

    window.alert(1)  
    console.log(2)

`alert`  freezes the browser and 2 won’t log to the console before we close the modal.

What if we have a time consuming operation but we don’t want it to block our app like  `alert` does? We want any instructions following the time-consuming one to be able to run before it finishes. We want the long thing to run in the background and let us know when it finishes. To do that, we need to use an asynchronous function, such as  `setTimeout`:

    console.log(1)  
    console.log(2)  
    setTimeout(() => console.log('Whoops! I’m late!'), 1000)  
    console.log(3)

The third line will execute after 1000 milliseconds but the fourth will run immediately, without waiting for the timeout to finish.

If  `setTimeout` wasn’t asynchronous, the fourth line and anything executed after it would have to wait for the timeout to complete. Our entire website would become unresponsive every time we’d set a timeout.

Now, what if we set the second argument to 0?

    console.log(1)  
    setTimeout(() => console.log(2), 0)  
    console.log(3)

Turns out, 2 will print to the console after 3! What?!

If we have pending synchronous and asynchronous instructions, the synchronous ones will run before the asynchronous one. Because we’re using  `setTimeout` here, which is an asynchronous function, the third line doesn’t wait for 2 to print.

## How to structure asynchronous code

We want to log 2 before 3 and after 1, but because  `setTimeout` is asynchronous, 2 always logs last.

We can fix this by moving the third log inside the callback function provided to  `setTimeout`:

    console.log(1)  
    setTimeout(() => {  
      console.log(2)  
      console.log(3)  
    }, 1000)

Now everything works as intended. We leave the first log outside of the function because it doesn’t depend on any other numbers being printed, it is synchronous and it comes before any asynchronous code. That way, even if we set the timeout to 1000 milliseconds, one will still log immediately. We moved the last log into the function body because it can only be printed once 2 is logged to the console. 3 will log to the console right after 2.

**Understanding which tasks depend on one another and which ones dont’t is crucial for leveraging asynchronous programming’s power.**

## The callback pattern

Now, what if we want to log 1.5 asynchronously and it takes 2000 milliseconds? It should log after 1 and before 2. In order to do that, we would have to do something like this:

    console.log(1)setTimeout(() => {  
      console.log(1.5)  
      setTimeout(() => {  
        console.log(2)  
        console.log(3)  
      }, 1000)  
    }, 2000)

This is a bit difficult to wrap your head around. What we’re essentially doing is we:

1. Perform a synchronous action (log 1) that runs immediately

2. Then we perform an asynchronous action (log 1.5) that takes two seconds

3. And then, we perform another asynchronous action (log 2 and 3) that depends on the previous one and takes one second. Since it has to wait for 1.5 to be logged, it will be printed after 3 seconds total.

Our code gets nested deeper with every asynchronous operation. This can get difficult to manage as our program grows.

We can mitigate that by refactoring our code into functions:

>     const logTheRest = () => {  
>       setTimeout(() => {  
>         console.log(2)  
>         console.log(3)  
>       }, 1000)  
>     }const logAsync = callback => {  
>       setTimeout (() => {  
>         console.log(1.5)  
>         callback()  
>       }, 2000)  
>     }console.log(1)  
>     logAsync(logTheRest)

By writing code like this, we avoid deep nesting and make things more readable. We call  `logAsync`, which “calls back”  `logTheRest` once it does its job. We call  `logTheRest`, which is passed as the callback argument, inside of  `setTimeout`, so it only runs once 1.5 is logged. Only  `logAsync` knows when it finishes, so we pass it  `logTheRest` and it decides when to call it.

This is similar to passing an event listener:

document.body.addEventListener('click', () => console.log('hi'))

We provide a function and once the event fires, the browser calls that function. You can read more about how to avoid “callback hell”  [here](http://callbackhell.com/).

## Asynchronous JavaScript in practice

If this makes little sense to you, that’s fine. Once you start writing asynchronous code yourself, you will start to grasp this concept. And I’m not talking about nesting  `setTimeout` inside of another  `setTimeout` (You can play around with it if you want though). Check out my  [article about making network requests in JavaScript](https://tomek-ch.medium.com/intro-to-ajax-and-xhr-network-requests-in-javascript-41738093fe00)  and see how you can use async JavaScript to get random pictures of dogs on your webpage! Build cool things and learn by doing. Have fun!

## How the JavaScript Callback Queue Works (aka Task Queue)

JavaScript maintains a queue of callback functions. It is called a callback queue or task queue. A queue data structure is  `First-In-First-Out(FIFO)`. So, the callback function that first gets into the queue has the opportunity to go out first. But the question is:

-   When does the JavaScript engine put it in the queue?
-   When does the JavaScript engine take it out of the queue?
-   Where does it go when it comes out of the queue?
-   Most importantly, how do all these things relate to the asynchronous part of JavaScript?

Whoa, lots of questions! Let's figure out the answers with the help of the following image:

![](https://www.freecodecamp.org/news/content/images/2021/09/taskQ.png)

The above image shows the regular  `call stack`  we have seen already. There are two additional sections to track if a browser API (like setTimeout) kicks in and  `queue`s the callback function from that API.

The JavaScript engine keeps executing the functions in the call stack. As it doesn't put the callback function straight into the stack, there is no question of any code waiting for/blocking execution in the stack.

The engine creates a  `loop`  to look into the queue periodically to find what it needs to pull from there. It pulls a callback function from the queue to the call stack when the stack is empty. Now the callback function executes generally as any other function in the stack. The loop continues. This loop is famously known as the  `Event Loop`.

So, the moral of the story is:

-   When a Browser API occurs, park the callback functions in a queue.
-   Keep executing code as usual in the stack.
-   The event loop checks if there is a callback function in the queue.
-   If so, pull the callback function from the queue to the stack and execute.
-   Continue the loop.

Alright, let's see how it works with the code below:

```js
function f1() {
    console.log('f1');
}

function f2() {
    console.log('f2');
}

function main() {
    console.log('main');
    
    setTimeout(f1, 0);
    
    f2();
}

main();
```

The code executes a  `setTimeout`  function with a callback function  `f1()`. Note that we have given zero delays to it. This means that we expect the function  `f1()`  to execute immediately. Right after setTimeout, we execute another function,  `f2()`.

So, what do you think the output will be? Here it is:

```shell
main
f2
f1
```

But, you may think that  `f1`  should print before  `f2`  as we do not delay f1 to execute. But no, that's not the case. Remember the  `event loop`  mechanism we discussed above? Now, let's see it in a step-by-step flow for the above code.

![](https://www.freecodecamp.org/news/content/images/2021/09/third-flow.gif)

Event loop - see the step-by-step execution

Here are steps written out:

1.  The  `main()`  function gets inside the call stack.
2.  It has a console log to print the word main. The  `console.log('main')`  executes and goes out of the stack.
3.  The setTimeout browser API takes place.
4.  The callback function puts it into the callback queue.
5.  In the stack, execution occurs as usual, so  `f2()`  gets into the stack. The console log of  `f2()`  executes. Both go out of the stack.
6.  The  `main()`  also pops out of the stack.
7.  The event loop recognizes that the call stack is empty, and there is a callback function in the queue.
8.  The callback function  `f1()`  then goes into the stack. Execution starts. The console log executes, and  `f1()`  also comes out of the stack.
9.  At this point, nothing else is in the stack and queue to execute further.

I hope it's now clear to you how the  `asynchronous`  part of JavaScript works internally. But, that's not all. We have to look at  `promises`.
## How the JavaScript Engine Handles Promises

In JavaScript, promises are special objects that help you perform asynchronous operations.

You can create a promise using the  `Promise`  constructor. You need to pass an  `executor`  function to it. In the executor function, you define what you want to do when a promise returns successfully or when it throws an error. You can do that by calling the  `resolve`  and  `reject`  methods, respectively.

Here is an example of a promise in JavaScript:

```js
const promise = new Promise((resolve, reject) =>
        resolve('I am a resolved promise');
);
```

After the promise is executed, we can handle the result using the  `.then()`  method and any errors with the  `.catch()`  method.

```js
promise.then(result => console.log(result))
```

You use promises every time you use the  `fetch()`  method to get some data from a store.

The point here is that JavaScript engine doesn't use the same  `callback queue`  we have seen earlier for browser APIs. It uses another special queue called the  `Job Queue`.



> “One must learn by doing the thing; for though you think you know it, you have no certainty, until you try.” — Sophocles


##  Reference

  

>

>  [w3schools](https://www.w3schools.com/html/html5_semantic_elements.asp)

>  [MDN
 docs](https://developer.mozilla.org/en-US/docs/Glossary/Semantics#semantics_in_html)
>  [freecodeCamp](https://www.freecodecamp.org/)