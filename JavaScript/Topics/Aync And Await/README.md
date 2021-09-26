
#Javascript Async And Await
JavaScript is always synchronous and single-threaded that provides the event loops. The event loops enable us to queue up an activity. This activity will not happen until the loops become available after the program that queued the action has completed the execution. However, our program contains a large number of functionalities, which causes our code to be asynchronous. 
The Async/Await functionality is one of them. Async/Await is an extension of promises that we get as language support.

**Async**
A Async function is a function declared with **Async** keyword wic means it will run in the backround while performing the code inside when the function is done, it automatically returns a promise.
Async function always returns a Promise.
## Syntax
````
 async function printHelloWorld(){
        return "Hello World !!!";
 }
 console.log(printHelloWorld());
 ````
 output-
```` Promise {<fulfilled>: 'Hello World !!!'}
[[Prototype]]: Promise
[[PromiseState]]: "fulfilled"
[[PromiseResult]]: "Hello World !!!"````

Here "Hello World !!!" act as a fulfilled value of promise.

**Await**
JavaScript Await function is used to wait for the promise. It stops the execution of the function at this time until the promise is fulfilled.
````
async function xyz(){
                return "GirlScript";
            }
            async function printHelloWorld(){
                let s;
                await xyz().then(value=>s = value);
                return `Hello ${s}!!!`;
            }
            printHelloWorld().then(value => console.log(value));
````

Output - 
````
Hello GirlScript!!!
````



 
