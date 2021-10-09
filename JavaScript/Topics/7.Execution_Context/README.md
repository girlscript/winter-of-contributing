# Execution Context in JavaScript

Before diving deep into what the execution context is we have to first understand what the javascript engine is because it plays a crucial role and performs a lot of tasks before the role of execution context came.

# What is Javascript Engine?
- **Javascript Engine is nothing but a program that executes our javascript code. Every browser has its own Javascript engine but probably the most well-known engine is Google's V8.**
- **Javascript Engine has actually two components:**

# 1. Callstack
 - **The CallStack is the place where our code is actually executed using execution context. Inside the CallStack various execution contexts are stacked on the top of one another and gets popped out from the stack whenever the entire code present inside the execution context is executed.**
 
# 2. Heap
On the other hand, Heap is a unstructured memory pool which stores all the objects that our application needs.

# Task of JS Engine
Before starting out the task of execution context or we say before execution context came into picture, the very first step which is performed is to actually send the piece of javascript code into the javascript engine.

As the piece of code enters into the javascript engine, it actually parse the code. Parsing the code simply means to read the code.

During the parsing, the code is  parsed into the special data structure called as the abstract syntax tree. This works by first splitting up the each line of code into pieces that are meaningful to the language like the const or the function keywords and then eventually saving all these pieces into a tree called as Abstract syntax tree.

Note: This step also checks if there are any syntax errors.
Now, the next step comes as a complilation wich takes the generated AST and converts that AST into the machine code. 

Execution of code only happens after compilation.
Now, our code is ready to be executed. What happens then is so called global execution context is created and from now on execution context comes into picture.

# Javascript Runtime

We can imagine the Javascript runtime as a big-box or a big container that includes all the things we need to use the javascript.
(In this case container is our browser).

These things that we need to use the javascript which is a part of Javascript runtime are:
1.Javascript Engine
2.Web APIs
3.Callback queue
4.Event loop

Note: The heart of any Javascript rutime is our Javascript engine. Without Javascript engine, there is noruntime and there is no javascript at all.

As we have already discussed about the Javascript engine, now let's talk about the web APIs.

# Web APIs
- **Web APIs present in a browser let javascript do a wide variety of things in a go. For example, If we want to apply some styling to our webpages dynamically like changing the border, changing the color, pixel updation and many more other things then for that browser has the API available called as DOM API.**

- **Similarly, If we want to fetch some data from a server then for that also we have a API called as The Fetch API  which provides an interface for fetching the resources across the network by using the generic definitions of the request and response objects.**

# Callback queue
- **The callback queue simply stores the callback functions sent from the Web APIs in the order in which they were added.**
- **Callback functions will sit in the queue until the call stack is empty, they are then moved into the stack by the event loop.**

# Event loop
- **The event loop is constantly monitoring the call stack and the callback queue; if the call stack is empty it will move the callback function at the front of the queue to the call stack, scheduling it for execution.That is only the tip of the iceberg about Event loop. It is itself a good topic to discuss. So we will talk about that in detail in separate event loop topic.**

The workflow mechanism of this Javascript Runtime is depicted diagrammatically below:

![image](https://user-images.githubusercontent.com/34187897/134546681-26fb8cdc-79e3-4336-a973-914517a3db8a.png)


# What is Execution Context?

By the name we can decode it as:

**Execution** = to execute out code
**Context** = specific environment

Hence, Execution Context provides information about our *environment* where our *specific* code is *stored and executed*. 
It stores all the necessary information for some code to be executed like variables, arguments, functions etc.

Whenever a script is executed by the JS engine, a new execution context is created. By default **Global Execution Context** is created.

## Global/Default Execution Context

It is the first thing that is created when we write JavaScript code. Hence referred to as Default Context. Since JS is a single-threaded language, only one Global Execution Context(GEC) is created for executing the code.
Note: This global execution context is created for the code that is not inside any function i.e for only top level code

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

>
> Author :
> <cite>[Neha Gupta](https://github.com/nayyyhaa)</cite>
> 
> <cite>[Shishiranjan Thakur](https://github.com/Shishiranjan)</cite>
