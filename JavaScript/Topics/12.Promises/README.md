# Promises
---
The Promise object represents the eventual completion (or failure) of an asynchronous operation and its resulting value.

Example:
```js
let myPromise = new Promise(function(myResolve, myReject) {
// "Producing Code" (May take some time)

  myResolve(); // when successful
  myReject();  // when error
});

// "Consuming Code" (Must wait for a fulfilled Promise)
myPromise.then(
  function(value) { /* code if successful */ },
  function(error) { /* code if some error */ }
);
```

## What is a Promise in javascript?
---
A Promise is a proxy for a value not necessarily known when the promise is created. It allows you to associate handlers with an asynchronous action's eventual success value or failure reason. This lets asynchronous methods return values like synchronous methods: instead of immediately returning the final value, the asynchronous method returns a promise to supply the value at some point in the future.

A Promise is in one of these states:

- pending: initial state, neither fulfilled nor rejected.
- fulfilled: meaning that the operation was completed successfully.
- rejected: meaning that the operation failed.
  
A pending promise can either be fulfilled with a value or rejected with a reason (error). When either of these options happens, the associated handlers queued up by a promise's then method are called. If the promise has already been fulfilled or rejected when a corresponding handler is attached, the handler will be called, so there is no race condition between an asynchronous operation completing and its handlers being attached.

## Why do we need Promises?
---
Promises are used to handle asynchronous operations in JavaScript. They are easy to manage when dealing with multiple asynchronous operations where callbacks can create callback hell leading to unmanageable code.

Prior to promises events and callback functions were used but they had limited functionalities and created unmanageable code.
Multiple callback functions would create callback hell that leads to unmanageable code.
Events were not good at handling asynchronous operations.

Promises are the ideal choice for handling asynchronous operations in the simplest manner. They can handle multiple asynchronous operations easily and provide better error handling than callbacks and events.

Benefits of Promises:

- Improves Code Readability
- Better handling of asynchronous operations
- Better flow of control definition in asynchronous logic
- Better Error Handling

## How to create a Promise? (Syntax)
---

A promise can be created using Promise constructor.

Syntax:
```js
var promise = new Promise(function(resolve, reject){
     //do something
});
```

Parameters:

- Promise constructor takes only one argument,a callback function.
- Callback function takes two arguments, resolve and reject
- Perform operations inside the callback function and if everything went well then call resolve.
- If desired operations do not go well then call reject.

Example:

```js
var promise = new Promise(function(resolve, reject) {
const x = "javascript";
const y = "javascript"
if(x === y) {
	resolve();
} else {
	reject();
}
});

promise.
	then(function () {
		console.log('Success, You are a GEEK');
	}).
	catch(function () {
		console.log('Some error has occured');
	});
```
Promise Consumers:
1. then()

then() is invoked when a promise is either resolved or rejected.
Parameters:
then() method takes two functions as parameters.

- First function is executed if promise is resolved and a result is received.
- Second function is executed if promise is rejected and an error is received. (It is optional and there is a better way to hanlde error using .catch() method

Syntax:
```js
.then(function(result){
        //handle success
    }, function(error){
        //handle error
    })
```

Example: Promise Resolved
```js
var promise = new Promise(function(resolve, reject) {
	resolve('Javascript');
})

promise
	.then(function(successMessage) {
	//success handler function is invoked
		console.log(successMessage);
	}, function(errorMessage) {
		console.log(errorMessage);
	})
```

Example: Promise Rejected
```js
var promise = new Promise(function(resolve, reject) {
	reject('Promise Rejected')
})

promise
	.then(function(successMessage) {
		console.log(successMessage);
	}, function(errorMessage) {
	//error handler function is invoked
		console.log(errorMessage);
	})
```
2. catch()
catch() is invoked when a promise is either rejected or some error has occured in execution.
Parameters:
catch() method takes one function as parameter.
- Function to handle errors or promise rejections.(.catch() method internally calls .then(null, errorHandler), i.e. .catch() is just a shorthand for .then(null, errorHandler) )

Syntax:
```js
.catch(function(error){
        //handle error
    })
```

Examples: Promise Rejected
```js
var promise = new Promise(function(resolve, reject) {
	reject('Promise Rejected')
})

promise
	.then(function(successMessage) {
		console.log(successMessage);
	})
	.catch(function(errorMessage) {
	//error handler function is invoked
		console.log(errorMessage);
	});

```

## Chained Promises
---
The methods promise.then(), promise.catch(), and promise.finally() are used to associate further action with a promise that becomes settled.

The .then() method takes up to two arguments; the first argument is a callback function for the resolved case of the promise, and the second argument is a callback function for the rejected case. Each .then() returns a newly generated promise object, which can optionally be used for chaining; for example:

```js
const myPromise = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve('foo');
  }, 300);
});

myPromise
  .then(handleResolvedA, handleRejectedA)
  .then(handleResolvedB, handleRejectedB)
  .then(handleResolvedC, handleRejectedC);
```

## Methods in Promises
---

### 1. Promise.all(iterable)
---
Wait for all promises to be resolved, or for any to be rejected. If the returned promise resolves, it is resolved with an aggregating array of the values from the resolved promises, in the same order as defined in the iterable of multiple promises. If it rejects, it is rejected with the reason from the first promise in the iterable that was rejected.

### 1. Promise.allSettled(iterable)
---
Wait until all promises have settled (each may resolve or reject). Returns a Promise that resolves after all of the given promises is either fulfilled or rejected, with an array of objects that each describe the outcome of each promise.

### 2. Promise.any(iterable)
---
Takes an iterable of Promise objects and, as soon as one of the promises in the iterable fulfills, returns a single promise that resolves with the value from that promise.

### 3. Promise.race(iterable)
---
Wait until any of the promises is fulfilled or rejected. If the returned promise resolves, it is resolved with the value of the first promise in the iterable that resolved. If it rejects, it is rejected with the reason from the first promise that was rejected.

### 4. Promise.reject(reason)
---
Returns a new Promise object that is rejected with the given reason.

### 5. Promise.resolve(value)
---
Returns a new Promise object that is resolved with the given value. If the value is a thenable (i.e. has a then method), the returned promise will "follow" that thenable, adopting its eventual state; otherwise, the returned promise will be fulfilled with the value. Generally, if you don't know if a value is a promise or not, Promise.resolve(value) it instead and work with the return value as a promise.

<br>


 __Contributor :__ [Aniket Pathak](https://github.com/aniketpathak028)