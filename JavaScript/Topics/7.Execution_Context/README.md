# Execution Context in JavaScript

When running code, **Execution Context** gets created by our JS engine, which does all the magic in the background. Here's how!

# What is Execution Context?

By the name we can decode it as:

**Execution** = to execute out code
**Context** = specific environment

Hence, Execution Context provides information about our *environment* where our *specific* code is *stored and executed*. 

Whenever a script is executed by the JS engine, a new execution context is created. By default **Global Execution Context** is created.

## Global/Default Execution Context

It is the first thing that is created when we write JavaScript code. Hence referred to as Default Context. Since JS is a single-threaded language, only one Global Execution Context(GEC) is created for executing the code.

It has two phases:

1) Creation phase
2) Execution phase

Let's dive deep into it!

### 1) Creation Phase

In this phase, the compilation of JS code is done but doesn't involve the execution of code. Let's consider the following program.

```js
let x = 5;

function printHello() {
    console.log("Hello Kitty!");
}

printHello();
```

When we debug this program with our developer's tool of our browser, we could notice that the value of `x` variable is coming as `undefined` in our scripts and `"Hello Kitty!"` has not been printed in our console. Also, there's something called `window` present in our global scope.

![globalScope](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/k31d8k0hzy4jebqouweg.png)

This means in Creation Phase following this happens:

- **variables** - initialized with *undefined* value
- **functions** - declared and initialized but are NOT executed yet
- **window/global** object - gets created (holds information about function arguments, variables as well as inner functions declaration)
- **this** - created which points to the global object created above

After creation phase, the global execution context moves to the Execution phase.

> NOTE: Local variables and functions are stored in Heap Memory.

### 2) Execution Phase
Finally! Our code gets executed in this phase. JS engine executes the code line-by-line where all the variables are finally initialized with their value and functions get invoked. For each function invocation, **Functional Execution Context** gets created. Let's learn about this.

#### Functional/Local Execution Context
Whenever a new function gets called, a new execution context is created with basic two phases: The creation phase and the execution phase. This new execution context is known as **Local/Functional Execution Context (FEC)**.

Hence in the above code, while parsing the function invocation we could notice our function being present in the local scope.

![local scope](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/uu4uk62h9onqefgcrbt2.png)

This FEC is similar to GEC, the difference is that it creates the `arguments object` instead of creating the `global object` where `this` points to the current object.

### Visual Representation

Since, for each function invocation => new execution context is created. Let's visualize this whole concept:

![Execution Contexts](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/zxg6so03vbl4c38ppr7b.jpeg)
 
and, this feels trippy! 😵‍💫

For ease of storing Global Execution Context and all Local Execution Context, we have a data structure called **Call Stack**.

Whenever a new execution context is created, it gets stacked above the previous execution context, and so on. The JS engine takes care of keeping track of this stack's execution so that one execution context gets executed at a time to maintain the Single-threaded nature of JS.

## Wrap up

Great! Now we know what execution context is and why it is so useful for our beloved JS engine. ❤️
We got a good grasp of the differences between Global Execution Context & Local Execution Context, along with the phases required in their creation.

> Author :
> <cite>[Neha Gupta](https://github.com/nayyyhaa)</cite>
