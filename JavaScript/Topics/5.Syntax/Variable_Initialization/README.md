# Difference between var, let & const
There are 3 ways to declare a JavaScript variables:

- Using `var`
- Using `let`
- Using `const`
## Variables
**Variables are containers for storing data (values).**
> Declaring (Creating) JavaScript Variables
Creating a variable in JavaScript is called "declaring" a variable.
You declare a JavaScript variable with the `var` keyword:

var carName;
After the declaration, the variable has no value (technically it has the value of undefined).

To assign a value to the variable, use the equal sign:

    carName = "Volvo";
You can also assign a value to the variable when you declare it:

    var carName = "Volvo";
In the example above, we create a variable called carName and assign the value "Volvo" to it.

Then we "output" the value inside an HTML paragraph with id="demo":
#### Example
    <p id="demo"></p>
    <script>
      var carName = "Volvo";
      document.getElementById("demo").textContent = carName;
    </script>

*It's a good programming practice to declare all variables at the beginning of a script.*
var variables can be re-declared and updated
### This means that we can do this within the same scope and won't get an error.
    var greeter = "hey hi";
    greeter = "say Hello instead";
    
### Hoisting of var
Hoisting is a JavaScript mechanism where variables and function declarations are moved to the top of their scope before code execution. This means that if we do this:

    console.log (greeter);
    var greeter = "say hello"
it is interpreted as this:

    var greeter;
    console.log(greeter); // greeter is undefined
    greeter = "say hello"
So var variables are hoisted to the top of their scope and initialized with a value of undefined.
### Problem with var
There's a weakness that comes with  var. I'll use the example below to explain:

    var greeter = "hey hi";
    var times = 4;

    if (times > 3) {
        var greeter = "say Hello instead"; 
    }
    
    console.log(greeter) // "say Hello instead"
So, since times > 3 returns true, greeter is redefined  to "say Hello instead". While this is not a problem if you knowingly want greeter to be redefined, it becomes a problem when you do not realize that a variable greeter has already been defined before.

If you have used greeter in other parts of your code, you might be surprised at the output you might get. This will likely cause a lot of bugs in your code. This is why let and const are necessary.
## Let
let is now preferred for variable declaration. It's no surprise as it comes as an improvement to var declarations. It also solves the problem with var that we just covered. Let's consider why this is so.\
#### Cannot be Redeclared
Variables defined with let cannot be redeclared.You cannot accidentally redeclare a variable.
With let you can not do this:
#### Example
    let x = "John Doe";
    let x = 0;

// SyntaxError: 'x' has already been declared\
**With var you can:**
### Block Scope
ES6 introduced two important new JavaScript keywords: let and const.
These two keywords provide Block Scope in JavaScript.
Variables declared inside a { } block cannot be accessed from outside the block:

#### Example
    {\
    let x = 2;\
    }\
    // x can NOT be used here
Variables declared with the var keyword can NOT have block scope.
### Redeclaring
Redeclaring a variable using the let keyword can solve this problem.

Redeclaring a variable inside a block will not redeclare the variable outside the block:

#### Example
    let x = 10;\
    // Here x is 10\
    {\
    let x = 2;`\
    // Here x is 2\
    }
    // Here x is 10\
## Hoisting of let
Just like  var, let declarations are hoisted to the top. Unlike var which is initialized as undefined, the let keyword is not initialized. So if you try to use a let variable before declaration, you'll get a Reference Error.
### Const
Variables declared with the const maintain constant values. const declarations share some similarities with let declarations.
Cannot be Reassigned
A const variable cannot be reassigned:

#### Example
    const PI = 3.141592653589793;
    PI = 3.14;      // This will give an error
    PI = PI + 10;   // This will also give an error
### When to use JavaScript const?
As a general rule, always declare a variable with const unless you know that the value will change.

Use const when you declare:
- A new Array
- A new Object
- A new Function
- A new RegExp
### Block Scope
Declaring a variable with const is similar to let when it comes to Block Scope.

The x declared in the block, in this example, is not the same as the x declared outside the block:

#### Example
    const x = 10;
    // Here x is 10
    {
    const x = 2;
    // Here x is 2
    }
    // Here x is 10
### Redeclaring
Redeclaring a variable with const, in another scope, or in another block, is allowed:

#### Example
    const x = 2;       // Allowed
    {
    const x = 3;   // Allowed
    }
    {
    const x = 4;   // Allowed
    }
### Const Hoisting
Variables defined with const are also hoisted to the top, but not initialized.

Meaning: Using a const variable before it is declared will result in a ReferenceError:

#### Example
    alert (carName);
    const carName = "Volvo";
    
**Contributor**: [Shalini Kumari](https://github.com/Raghavshalu)
