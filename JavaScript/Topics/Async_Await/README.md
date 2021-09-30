# Async and Await:-

JavaScript Introduces keywords “async” and “await” as an addition to EcmaScript 2015.We are going to see about the following concepts. 

1. Working With Async Keyword
2. Impact of Await Keyword

# What is Async and Await?

Before getting in details of Async and Await, We should have a good understanding of Promises in JavaScript. Async/Await is the extension of promises which we get as a support in the language. So before going to understand whatis Async/Await, We should, first understand Promises in Javascript.

## What is Promises in JavaScript?

Promises are used to handle asynchronous operations in JavaScript.
Promises are the ideal choice for handling asynchronous operations in the simplest manner. They can handle multiple asynchronous  multiple asynchronous operations easily and provide better error handling than callbacks and events.

Benefits of Promises:-

1. Improves Code Readability.
2. Better handling of asynchronous operations.
3. Better flow of control definition in asynchronous logic.
4. Better Error Handling.

State of a Promise has four states

Promise has four states:-
1. fulfilled: Action related to the promise succeeded
2. rejected: Action related to the promise failed
3. pending: Promise is still pending i.e not fulfilled or rejected yet
4. settled: Promise has fulfilled or rejected

EXAMPLE:
 ```js
let myPromise = new Promise(function(myResolve, myReject) {
  myResolve(); // when successful
  myReject();  // when error
});

myPromise.then(
  function(value) { /* code if successful */ },
  function(error) { /* code if some error */ }
);
```
Success: myResolve(result value)
Error: myReject(error object)

# Async:

It simply allows us to write promises based code as if it was synchronous and it checks that we are not breaking the execution thread. It operates asynchronously via the event-loop. Async functions will always return a value. It makes sure that a promise is returned and if it is not returned then javascript automatically wraps it in a promise which is resolved with its value.

So, Returning Promises with Async Keyword: 
When we append the keyword “async” to the function, this function returns the Promise by default on execution. Async keyword provides extra information to the user of the function:
1. The function contains some Asynchronous Execution
2. The returned value will be the Resolved Value for the Promise.

EXAMPLE: 
```js
async function simpleAsync() {
  return "1"
}

console.log(simpleAsync())
```
OUTPUT: 1

In the above code, since the value returned is a promise, we can capture the promise and extract value from the same.We can associate a callback function with the promise using “then”

EXAMPLE: 
```js
async function simpleAsync() {
  return "1"
}

simpleAsync().then((data) => {
    console.log(data)
})
```
OUTPUT: 1

In order to summarize the impact of the “async” keyword, we can say that:

1. Appending “async” will return a promise from a function
2. In case the function is returning some value, the value will be available as the resolved value from the promise.
3. If no value is returned, the resolved value will be “undefined”

To see the whole Asynchronous behaviour:

EXAMPLE:-
```js
function returnPromises() {
  var newPromise = new Promise((resolve) => {
    setTimeout(() => {
      console.log("Promise Executed...");
      resolve("Sample Data");
    }, 3000);
  });
}

function ExecuteFunction() {
  var newData = "Mayank";
  var getPromise = returnPromises();
  console.log(newData);
}

ExecuteFunction()
```
OUTPUT:  Mayank
         Undefined.
         Promise Executed...


# Await:

Await function is used to wait for the promise. It could be used within the async block only. It makes the code wait until the promise returns a result. It only makes the async block wait.

EXAMPLE: 
```js
const getData = async() => {
    var y = await "Hello World";
    console.log(y);
}
  
console.log(1);
getData();
console.log(2);
```

OUTPUT: 1
        2
        Hello World

Adding “await” before a promise makes the execution thread to wait for asynchronous task/promise to resolve before proceeding further. When we are adding the “await” keyword, we are introducing synchronous behavior to the application. Even the promises will be executed synchronously.

EXAMPLE:
```js
function returnPromises() {
  return new Promise((resolve) => {
    setTimeout(() => {
      console.log("Promise Executed...");
      resolve("Sample Data");
    }, 3000);
  });
}

async function ExecuteFunction() {
  var newData = "Mayank";
  var getData = await returnPromises();
  console.log(getData);
}

ExecuteFunction()
```

OUTPUT: Promise Executed...
        Sample Data

# Why use Async & Await?

Closure:-
Await and Async keyword combined together ensures that the main thread will not start executing further until the asynchronous part of the application has finished execution hence imparting synchronous behavior to the thread.

# Why were async/await introduced?

1. They reduce the boilerplate around promises, and the "don't break the chain" limitation of chaining promises.
2. When Promises were introduced in ES2015, they were meant to solve a problem with asynchronous code, and they did, but over the 2 years that separated ES2015 and ES2017, it was clear that promises could not be the ultimate solution.
3. Promises were introduced to solve the famous callback hell problem, but they introduced complexity on their own, and syntax complexity.
4. They were good primitives around which a better syntax could be exposed to the developers, so when the time was right we got async functions.
5. They make the code look like it's synchronous, but it's asynchronous and non-blocking behind the scenes.

# How it works?

An async function returns a promise, like in this example:
```js
const doSomethingAsync = () => {
  return new Promise(resolve => {
    setTimeout(() => resolve('I did something'), 3000)
  })
}

/*When you want to call this function you prepend await, and the calling code will stop until the promise is resolved or 
rejected. One caveat: the client function must be defined as async. Here's an example:*/

const doSomething = async () => {
  console.log(await doSomethingAsync())
}
```

# Async & Await Syntax Rules:

1. Async functions return a promise.

2. Async functions use an implicit Promise to return results. Even if you don’t return a promise explicitly, the async function makes sure that your code is passed through a promise.

3. Await blocks the code execution within the async function, of which it (await statement) is a part.

4. There can be multiple await statements within a single async function.

5. When using async await, make sure to use try catch for error handling.

6. If your code contains blocking code it is better to make it an async function. By doing this you are making sure that somebody else can use your function asynchronously.

7. By making async functions out of blocking code, you are enabling the user (who will call your function) to decide on the level of asynchronicity they want.

8. Be extra careful when using await within loops and iterators. You might fall into the trap of writing sequentially executing code when it could have been easily done in parallel.

9. Await is always for a single promise. If you want to await multiple promises (run this promise in parallel) create an array of promises and then pass it to the Promise.all function.

10. Promise creation starts the execution of asynchronous functionality.

11. Await only blocks the code execution within the async function. It only makes sure that the next line is executed when the promise resolves. So, if an asynchronous activity has already started, await will not have an effect on it.


# When to use promises and when to use async-await?

The answer is that we will use both.
Here are the thumb rules that I use to decide when to use promises and when to use async-await.

1. The async function returns a promise. The converse is also true. Every function that returns a promise can be considered as async function.

2. Await is used for calling an async function and waits for it to resolve or reject.

3. Await blocks the execution of the code within the async function in which it is located.

4. If the output of function2 is dependent on the output of function1, I use await.

5. If two functions can be run in parallel, create two different async functions and then run them in parallel.

6. To run promises in parallel, create an array of promises and then use Promise.all(promisesArray).

7. Every time you use await remember that you are writing blocking code. Over time we tend to neglect this.

8. Instead of creating huge async functions with many await asyncFunction() in it, it is better to create smaller async functions. This way, we will be aware of not writing too much blocking code.

9. Another advantage of using smaller async functions is that you force yourself to think of which async functions can be run in parallel.
 
10. If your code contains blocking code, it is better to make it an async function. By doing this, you are making sure that somebody else can use your function asynchronously.

11. By making async functions out of blocking code, you are enabling the user (who will call your function) to decide on the level of asynchronicity they want.


From MDN:

“An asynchronous function is a function which operates asynchronously via the event loop, using an implicit Promise to
 return its result. But the syntax and structure of your code using async functions is much more like using standard 
 synchronous functions.
 An async function can contain an await expression that pauses the execution of the async function and waits for the 
 passed Promise's resolution, and then resumes the async function's execution and returns the resolved value. Remember,
 the await keyword is only valid inside async functions.”

 
 # Different Examples for PRACTICE:-
 
 1. For General Syntax of Using async-await
 ```js
 async function testAsync() {
  for (var i = 0; i < 5; i++) {
    try {
      result1 = await promiseTRRARNOSG();
      console.log("Result 1 ", result1);
      result2 = await promiseTRRARNOSG();
      console.log("Result 2 ", result2);
    } catch (e) {
      console.log("Error", e);
    } finally {
      console.log("This is done");
    }
  }
}
testAsync();
```

2. Two more deterministic functions. One that resolves after n seconds and another which rejects after n seconds.
```js
var promiseTRSANSG = (promiseThatResolvesAfterNSecondsGenerator = function(
  n = 0
) {
  return new Promise(function(resolve, reject) {
    setTimeout(function() {
      resolve({
        resolvedAfterNSeconds: n
      });
    }, n * 1000);
  });
});
var promiseTRJANSG = (promiseThatRejectsAfterNSecondsGenerator = function(
  n = 0
) {
  return new Promise(function(resolve, reject) {
    setTimeout(function() {
      reject({
        rejectedAfterNSeconds: n
      });
    }, n * 1000);
  });
});
```

3. A function that returns a promise which resolves or rejects after n number of seconds.
```js
var promiseTRRARNOSG = (promiseThatResolvesRandomlyAfterRandomNumnberOfSecondsGenerator = function() {
  return new Promise(function(resolve, reject) {
    let randomNumberOfSeconds = getRandomNumber(2, 10);
    setTimeout(function() {
      let randomiseResolving = getRandomNumber(1, 10);
      if (randomiseResolving > 5) {
        resolve({
          randomNumberOfSeconds: randomNumberOfSeconds,
          randomiseResolving: randomiseResolving
        });
      } else {
        reject({
          randomNumberOfSeconds: randomNumberOfSeconds,
          randomiseResolving: randomiseResolving
        });
      }
    }, randomNumberOfSeconds * 1000);
  });
});
 ```
 
 HAPPY LEARNINGS!
 
 ##Contributed by, 
 [Diksha Sharma] (https://github.com/Diksha-11)
 
 
