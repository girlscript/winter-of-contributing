# ASYNCHRONOUS FUNCTION

An async function is a function declared with the async keyword, and the await keyword is permitted within them. The async and await keywords enable asynchronous, promise-based behavior to be written in a cleaner style, avoiding the need to explicitly configure promise chains.

Async functions may also be defined as `expressions`

# JavaScript Demo: Statement - Async

function resolveAfter2Seconds() {
  return new Promise(resolve => {
    setTimeout(() => {
      resolve('resolved');
    }, 2000);
  });
}

async function asyncCall() {
  console.log('calling');
  const result = await resolveAfter2Seconds();
  console.log(result);
  // expected output: "resolved"
}

asyncCall();

# Parameters

# name
The function’s name.

# param
The name of an argument to be passed to the function.

# statements
The statements comprising the body of the function.  The await mechanism may be used.

# Return value
A Promise which will be resolved with the value returned by the async function, or rejected with an exception thrown from, or uncaught within, the async function.
Parameters
name
The function’s name.

param
The name of an argument to be passed to the function.

statements
The statements comprising the body of the function.  The await mechanism may be used.

Return value
A Promise which will be resolved with the value returned by the async function, or rejected with an exception thrown from, or uncaught within, the async function

# AWAIT FUNCTIONS

Async functions can contain zero or more await expressions. Await expressions make promise-returning functions behave as though they're synchronous by suspending execution until the returned promise is fulfilled or rejected. The resolved value of the promise is treated as the return value of the await expression. Use of async and await enables the use of ordinary try / catch blocks around asynchronous code.The await keyword is only valid inside async functions within regular JavaScript code. If you use it outside of an async function's body, you will get a SyntaxError.Await can be used on its own with JavaScript modules.

const p = new Promise((res, rej) => {
  res(1);
})

async function asyncReturn() {
  return p;
}

function basicReturn() {
  return Promise.resolve(p);
}

console.log(p === basicReturn()); // true
console.log(p === asyncReturn()); // false