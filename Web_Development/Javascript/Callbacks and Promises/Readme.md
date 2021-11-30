# CALLBACKS 

In order to perform asynchronous processing than waiting for a function to complete its execution, a process is told to call another function when the result is ready. This “other function” is called the callback. It is passed as an argument to any asynchronous function.

`Execution`

asyncFunction(callback1);
console.log('asyncFunction has been called');
// Call when asyncFunction completes
function callback1(error) {
  if (!error) console.log('asyncFunction is complete');
}

# PROMISES

A Promise is a JavaScript object with a value that may not be available at the moment when the code line executes. These values are resolved at some point in the future. It allows you to write asynchronous code more synchronously. A promise can have three states: Pending (not fulfilled or rejected), Fulfilled (Operation is successful), Rejected (Operation is unsuccessful).

`Execution`

// Promise constructor
let promise = new Promise(function(resolve, reject) {
     const x = "apple";
     const y = "apple"
if (x === y) {
        resolve();
     } else {
        reject();
     }
});
// Consuming the Promise
promise
   .then(function () {
      console.log('Successful');
   })
   .catch(function () {
      console.log('Some error has occured');
   });

The promise constructor takes one argument where we need to pass a callback function. The callback function takes two arguments, `resolve()` and `reject()` . Any functionality that needs to be executed after the Promise is completed (e.g., After a network request) should be placed inside `then()` . According to the above example, since the operation would be successful, the console will output `Successful`.