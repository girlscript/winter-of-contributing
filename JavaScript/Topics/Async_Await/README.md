## Javascript Async And Await

JavaScript is always synchronous and single-threaded that provides the event loops. The event loops enable us to queue up an activity. This activity will not happen until the loops become available after the program that queued the action has completed the execution. However, our program contains a large number of functionalities, which causes our code to be asynchronous. 
The Async/Await functionality is one of them. Async/Await is an extension of promises that we get as language support.

**Async**

An Async function is a function declared with the **Async** keyword which means it will run in the background while performing the code inside when the function is done, it automatically returns a promise.
Async function always returns a Promise.

**Syntax**

````js
 async function printHelloWorld(){
        return "Hello World !!!";
 }
 console.log(printHelloWorld());
 ````
 Output-
````js
Promise {<fulfilled>: 'Hello World !!!'}
[[Prototype]]: Promise
[[PromiseState]]: "fulfilled"
[[PromiseResult]]: "Hello World !!!"
````

Here "Hello World !!!" act as a fulfilled value of promise.

**Await**

JavaScript Await function is used to wait for the promise. It stops the execution of the function at this time until the promise is fulfilled.

````js
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

Output- 

````
Hello GirlScript!!!
````

Example-
````js
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Aync And Await Tutorial</title>
</head>
<body>
    <h1></h1>
    <h2></h2>
    <script>
            async function xyz(){
                const heading = document.querySelector('h1').textContent = "Hey Everyone Welcome to this tutorial";
                return "GirlScript";
            }
            async function printHelloWorld(){
                let s;
                await xyz().then(value=>s = value);
                const heading = document.querySelector('h2').textContent = "Hope You are enjoying";
                return `Hello ${s}!!!`;
            }
            printHelloWorld().then(value => console.log(value));
    </script>
</body>
</html>
````

Output-

<img src="https://github.com/7sakshi7/winter-of-contributing/blob/Javascript/JavaScript/Topics/Aync%20And%20Await/Example.png" alt="Output" /> 

## Error Handling
If error occurs in function of try and catch, adding catch handler won't work. Even tou tere was an error ten also async function will return fulfill values.

````js
async function Demo(){
            try{
                const res = await tryDemo();
                console.log(res);
            }
            catch(err){
                console.log(err);
            }
        } 
        Demo();
 ````
 
 Output-
 
 ````
 ReferenceError: tryDemo is not defined
    at Demo
````


**To Solve it throw the error again**

````js
async function Demo(){
            try{
                const res = await tryDemo();
                console.log(res);
            }
            catch(err){
                throw err;
            }
        } 
        Demo();
 ````

<img src="https://github.com/7sakshi7/winter-of-contributing/blob/Javascript/JavaScript/Topics/Aync%20And%20Await/Aync%20And%20Await%20Tutorial%20-%20Google%20Chrome%209_26_2021%206_23_23%20PM%20(2).png" alt="Output" /> 

## Multiple await in single async function

````js
  let counter=0;
        async function Hello(){
            counter++;
            return `Hello ${counter}`;
        }
        async function multipleAwaits(){
            const res1 = await Hello().then(value => {return value});
            const res2 = await Hello().then(value => {return value});
            const res3 = await Hello().then(value => {return value});

            return `${res1} ${res2} ${res3}`;
        }
      multipleAwaits().then(value => console.log(value));
````

Output-

````
Hello 1 Hello 2 Hello 3
````


Contributor: [Sakshi Agarwal](https://github.com/7sakshi7)



 
