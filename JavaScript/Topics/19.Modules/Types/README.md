# Quiz Application
#### A simple quiz application consisting of some multiple choice questions.
###### Focused on Javascript not on CSS.

# CommonJs  vs  AMD  vs  UMD

*If you are not familiar with javascript module, I highly recommend you must visit [here](../Module_patterns/README.md)*
<br>

#### Let's talk about the patterns we have used so far 

### Advantages

All the module patterns that you have seen [here](../Module_patterns/README.md), have one thing in common: the use of single global variable to wrap its code in a function and thereby creating a private namespace for itself using a closure scope. This is the great advantage of these types of module patterns.

### Disadvantages

- managing dependencies :- Let's say we have two javascript file, main.js and script.js, in which main.js depends on the code of script.js. For this, script.js should load first i.e, script.js should be included before main.js. What if we have a large project, it becomes quite difficult for developers to maintain this.

- Namespace collisions :- What if we have two modules with same name. This will create an issue

- Version collisons :- What if we have two versions of the module and we want to use both of them.

### Solution

Solution to the above problem is to design a way to ask for a module's interface without going through the global scope.
And this can be done through well-implemented approaches : CommonJS and AMD


## CommonJS module

A commonJS module is a reusable piece of Javascript which exports specific object which is avilable to require in other programs. If you are familiar with Node.js, you can relate this.

### Defining commonJS module

```js
function commonModule(){
    this.hello = function(){
        return 'Hello!'
    }

    this.bye = function(){
        return 'Bye!'
    }
}

module.exports = commonModule
```

### Calling commonModule() in another program

```js
//var commonModule = require('path_to_commonModule')
var commonModule = require('commonModule')

var myModule = new commonModule()
commonModule.hello()        //'Hello'
commonModule.bye()        //'Bye'
```

### Benefits

- Avoiding global namespace pollution
- Making our dependencies explicit
- Compact syntax
- Module loads synchronously

### Disadvantages

- Only support objects as modules
- Reading a module from web takes longer then reading from disc and due to synchronous property, as long as the script to load a module is running, it blocks the browser from running anything else until it finishes loading.


## AMD - Asynchronous module definition

Although commonJS technique was good, but what if we want to load modules asynchronously? This can be done through AMD

### Defining AMD module

Code to module named **myModule**

```js
define([], function(){
    return {
        hello: function(){
            console.log("Hello!")
        },
        bye: function(){
            console.log('Bye!')
        }
    }
})
```

### Loading module using AMD

```js
define(['myModule', 'myOtherModule'], function(myModule, myOtherModule){
    console.log(myModule.hello())
})
```

### What's happening

**define** function an array of module's dependencies as its first argument and these arguments are loaded in the background in a non-blocking manner. Once it loaded, **define** call the callback function it was given with argiment myModule and myOtherModule which were loaded earlier

### Advantages

- Takes browser-first approach
- Asynchronous behaviour
- Modules can be objects, functions, constructors, strings, JSON and many other types

### Disadvantages
- Not compatible with io, filesystem and other server-oriented features
- Function wrapping syntax is a bit more verbose compared to a simple ***require*** statement


## UMD - Universal Module Definition

UMD or Universal Module Definition is used in a project which requires the feature of both commonJS and AMD alonwith the support of global variable definition.<br>
UMD modules are capable of working on both client and server

### Defining UMD module

```js
(function (root, factory) {
  if (typeof define === 'function' && define.amd) {
      // AMD
    define(['myModule', 'myOtherModule'], factory);
  } else if (typeof exports === 'object') {
      // CommonJS
    module.exports = factory(require('myModule'), require('myOtherModule'));
  } else {
    // Browser globals (Note: root is window)
    root.returnExports = factory(root.myModule, root.myOtherModule);
  }
}(this, function (myModule, myOtherModule) {
  // Methods
  function notHelloOrGoodbye(){}; // A private method
  function hello(){}; // A public method because it's returned (see below)
  function goodbye(){}; // A public method because it's returned (see below)

  // Exposed public methods
  return {
      hello: hello,
      goodbye: goodbye
  }
}));
```

For more information regarding UMD, visit [UMD](https://github.com/umdjs/umd)


## Native JS

As you might have noticed above, none of the modules above were native to JavaScript. Instead of this, we have created ways to emulate a modules system by using either the module pattern, commonJS or AMD.<br>
<br>
There comes a built-in modules with ECMAScript 6 (ES6) intorduced by smart folks at TC39 (the standards body that defines the syntax and semantics of ECMAScript)


### Defining commonJS module and ES6 module to show the difference

**1. CommonJS module**

```js
// lib/counter.js

var counter = 1;

function increment() {
  counter++;
}

function decrement() {
  counter--;
}

module.exports = {
  counter: counter,
  increment: increment,
  decrement: decrement
};


// src/main.js

var counter = require('../../lib/counter');

counter.increment();
console.log(counter.counter); // 1
```

In this example, we basically make two copies of the module: one when we export it, and one when we require it.<br>

Moreover, the copy in main.js is now disconnected from the original module. That’s why even when we increment our counter it still returns 1 — because the counter variable that we imported is a disconnected copy of the counter variable from the module.<br>

So, incrementing the counter will increment it in the module, but won’t increment your copied version. The only way to modify the copied version of the counter variable is to do so manually:

```js
counter.counter++;      //it will increment exported counter
console.log(counter.counter); // 2
```

**2. ES6 module**
ES6 creates a live read-only view of the modules we import:

```js
// lib/counter.js
export let counter = 1;

export function increment() {
  counter++;
}

export function decrement() {
  counter--;
}


// src/main.js
import * as counter from '../../counter';

console.log(counter.counter); // 1
counter.increment();
console.log(counter.counter); // 2
```

As you can clearly see the difference between CommonJS module and ES6 module, how ES6 module can rule over CommonJS module.
<br>
**Benefits**

- Compact and declarative syntax
- Asynchronous loading
- Better support for cyclic dependencies
- Imports are live read-only view of exports

Yay! We learnt all the types of modules in Javascript. <br>

__Contributor :__ [Harsh Anand](https://github.com/its-me-Harsh-Anand)