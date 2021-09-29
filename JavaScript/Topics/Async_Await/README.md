# **JavaScript Async/Await**

"**async and await** make **promises easier to write**"

**async** makes a **function return a Promise**

**await** makes a **function wait for a Promise**

## **Async Syntax**
The keyword async before a function makes the function return a promise:

**For Example**
```js
async function myFunction() {
  return "Hello";
}
```

Is the same as:
```js

async function myFunction() {
  return Promise.resolve("Hello");
}
```
Here is how to use the Promise:
```js
myFunction().then(
  function(value) { /* code if successful */ },
  function(error) { /* code if some error */ }
);
```

**For Example**
```js
async function myFunction() {
  return "Hello";
}
myFunction().then(
  function(value) {myDisplayer(value);},
  function(error) {myDisplayer(error);}
);
```

Or simpler, since you expect a normal value (a normal response, not an error):

**For Example**
```js
async function myFunction() {
  return "Hello";
}
myFunction().then(
  function(value) {myDisplayer(value);}
);
```

## **Await Syntax**
The keyword await before a function makes the function wait for a promise:

``let value`` = await promise;

The **await keyword** can only be used inside an async function.

**For Example**

Let's go slowly and learn how to use it.

Basic Syntax
```js
async function myDisplay() {
  let myPromise = new Promise(function(myResolve, myReject) {
    myResolve("I love You !!");
  });
  document.getElementById("demo").innerHTML = await myPromise;
}

myDisplay();
```

Waiting for a Timeout
```js
async function myDisplay() {
  let myPromise = new Promise(function(myResolve, myReject) {
    setTimeout(function() { myResolve("I love You !!"); }, 3000);
  });
  document.getElementById("demo").innerHTML = await myPromise;
}

myDisplay();
```

Waiting for a File
```js
async function getFile() {
  let myPromis Promise(function(myResolve, myReject) {
    let req = new XMLHttpRequest();
    req.open('GET', "mycar.html");
    req.onload = function() {
      if (req.status == 200) {myResolve(req.response);}
      else {myResolve("File not Found");}
    };
    req.send();
  });
  document.getElementById("demo").innerHTML = await myPromise;
}

getFile();
```
__Contributor :__ [Damini Mehra](https://github.com/daminimehra) :heart: