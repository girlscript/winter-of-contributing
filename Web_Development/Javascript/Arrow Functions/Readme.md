# Arrow Functions in javascript
<hr>
## What are arrow functions?

The 2015 edition of the ECMAScript specification (ES6) added arrow function expressions to the JavaScript language.An arrow function expression is a compact alternative to a traditional javascript function expression, but is limited and can't be used in all situations.It is similar to lambda functions in python.
 
The following are a few facts about arrow functions:
- Using the arrow function, curly braces, parenthesis, function, and return keywords become optional.

- The arrow function has a lexical scoping to this context.

One of the main differences between arrow functions and regular functions is that arrow functions can only be anonymous. They are not bound to any identifier.

Thus they created dynamically. We cannot name an arrow function as we do for the regular functions. However, if you’d like to call or reuse an arrow function, you will need to assign it to a variable.

## Syntax

const Function_Name = (*params*) => { **return something** }

### Destructing the syntax

In a Arrow function we have a **()** *(We write our parameters inside here)* followed by a **=>** which resembles the arrow symbol. Following this we will have a block statement **{}** in which we will perform the required operations

### Ways to write arrow functions

1.) When there is only one param with a simple expression, we can write the arrow function in the following way:
     
      
 ***param => expression***




2.)When there is multiple params with a simple expression, we can write the arrow function in the following way:

***(param1,param2) => expression***

3.)Multiline statements require body braces and return:

   ***param => {
       expressionOne
       return expressionTwo }***


4.)Multiple params require parentheses. Multiline statements require body braces and return:

 ***(param1, paramN) => {
   expressionOne;
   return expressionTwo;
   }***

<hr>

## Application of arrow functions

Arrow functions save you some keystrokes when working with the functions. They are especially useful for inline functions, as they pass along the outer this context.

With an arrow function:

- No more function keywords are need, and parenthesis are optional as well as curly braces.
- Arrow functions make code shorter, more concise, and less verbose.
- The keyword return would indeed be optional. The Arrow function has an implicit return. Thus no curly braces. If you are using the curly braces, you have to use the return statement.
- Arrow functions are not attached to an identifier (the function name). To call or reuse them, your need to assign them to a variable.
- They are frequently used in callback chaining, promise chaining, array methods, and situations where anonymous (the function has no name) functions would be useful.
- They handle this operator a lot more clearly. The Arrow functions shine most whenever you need this to be attached to the context and not its own function.


#### Contributor: [Arun bala](https://github.com/ARUNBALACHOCKALINGAM)




