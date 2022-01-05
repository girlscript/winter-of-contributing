An interesting aspect of JavaScript is 'metaprogramming', ie ability to change the basic building blocks of JS using JS as the language itself.

JavaScript is already a flexible language, addition of new features in ES6 version made JS flexible, scalable and versatile more than ever. One of the feature that was introduced was 'Proxy and Reflect API'.

## Proxy API

Proxy API allows us to override the default behaviour of operations on objects. This may include operations like trying to set or get the key of the object.

## Where Is it used?

It is used in many APIs and framework where data is manipulated through objects. A Proxy is itself is an object that wraps another object and intercepting operations such as writing and reading properties.

### Proxy Terminologies

There are few terms that are associated with Proxy and Reflect concept.

1. Proxy: A wrapper around the object.
2. Target: The object you want to proxy.
3. Traps: Object methods that intercept original operations of the object.
4. Handler: An object containing a function associated with particular trap and other information about the target object.

## JavaScript Object Traps

JavaScript objects have internal methods that describe how objects work at the lowest level. These are mostly internal methods and hence only used in the specification. We can't directly call them to modify the code.  
This is where Proxy API comes handy. It traps intercept invocations and allow us to override the internal object to add custom functionality.
Intercept invocations are listed in Proxy specification of official ECMAScript documentation. To be honest, it's very confusing and lengthy so here are the most commonly used specifications:

| Internal Method | Proxy Methods  | Trigger               |
| --------------- | -------------- | --------------------- |
| [[Get]          | get            | reading a property    |
| [[SET]]         | set            | writing to a property |
| [[HasProperty]] | has            | `in` operator         |
| [[Delete]]      | deleteProperty | `delete` operator     |
| [[Call]]        | apply          | function call         |
| [[Construct]]   | construct      | `new` operator        |

### How it is created

To create a proxy in JavaScript, we use the Proxy constructor which accepts two parameters:

1. **target**: The object you want to proxy.
2. **handler**: The object containing functions and other information to proxy target object.

```js
let proxy = new Proxy(target, handler);
```

> Proxy is a 'exotic object'. That means, it doesn't have its own parameters. If the handler is empty, it directly forwards operations to the target.

### Our First Proxy

```js
let target = {}; // Empty object
let handler = {}; // Empty handler

let proxy = new Proxy(target, handler); // New Proxy on object 'target'

proxy.key = 5; // Writing to the proxy

console.log(proxy.key);
console.log(target.key);
```

Since there is no trap in the `handler`, the proxy forwards the results directly to the object.  
This proxy is called as 'Empty Proxy` because it has no handler to it.

### Handler with the Trap (GET Trap)

Look at this snippet, this proxy intercepts `get' method of the object:

```js
let capital = {
  India: "Delhi",
  Germany: "Berlin",
  France: "Italy",
}; // Created the target object

// Adding proxy
capital = new Proxy(capital, {
  // adding proxy to 'get' method
  // target is the object(capital) and phrase is the key in the object
  get(target, phrase) {
    if (phrase in target) {
      // key exists in the object
      return target[phrase];
    } else {
      // key doesn't exists in the object
      return phrase;
    }
  },
});

// Test
console.log(capital["France"]); // "Italy"
console.log(capital["Taiwan"]); // "Taiwan" (Since 'Taiwan' is not present in the object.)
```

### Handler with the Trap (SET Trap)

We can use set whenever we want to add data to the array/objects. We can set a rule and the new property will be added only if it passes the set trap. set trap is triggered when a property is written.
`set` trap takes four parameters and returns true if code is successful and false if error is raised.
Parameters are as follows:

1. target: The target object, which is passed as the first argument to proxy object.
2. property: property name.
3. value: property value.
4. receiver: similar to get trap, but used only for setter properties.

Let's see an example, where we will validate a against some conditions:

```js
let numbers = [10, 20, 30];

numbers = new Proxy(numbers, {
  set(target, prop, value) {
    if (typeof value === "number") {
      target[prop] = value;
      return true;
    } else return false;
  },
});

numbers.push(40);
numbers.push(50);

for (let i in numbers) console.log(i);

numbers.push("string"); // TypeError because set proxy returns 'false'
```

# Reflect

Reflect is also a built in object introduced in ES6, just like Proxy. It simplifies the creation of `Proxy`. With reflect, we can directly pass parameters along with the corresponding method invocation.  
As said earlier, internal methods such as `[[Get]]` and `[[Set]]` can not be called directly for being specification only methods. The Reflect object makes that somehow possible. It methods are minimal wrappers around the internal methods.

## Where to use Reflect?

With the help of Reflect API alone, JavaScript operations and especially manipulation with objects and arrays will become much more easier. Here are some main use cases:

1. Simplification of function operations
2. Reducing the complexity of Proxy API

## Reflect Methods

Reflect object provides static functions which have the same names has their corresponding Proxy handlers. Methods are minimal wrappers around the internal methods.

Here are some of the most commonly used Reflect methods:
|Operation | Reflect Method | Internal Method |
|-----------|-----------------|-----------------|
|obj[prop]| Reflect.get(obj, prop)| [[Get]]|
|obj[prop]| = value Reflect.set(obj, prop, value) [[Set]]|
|delete obj[prop]| Reflect.deleteProperty(obj, prop)| [[Delete]]|
|new F(value)| Reflect.construct(F, value)| [[Construct]]|

### Reflect Method - 'set'

As the name suggests, this method sets the arguments passed in the `.set()` function to the first argument, which is the object itself. It takes three parameters: target object, property name, value name.

```js
let capitals = {}; // Empty object

Reflect.set(user, "Germany", "Berlin");

console.table(user);
```

### Reflect Method - 'construct'

This method acts like `new` operator but it is invoked as a function. The return value of the function is expected to be new instance of the target was initialized by the target with the argument list.  
The `.construct()` method take three parameters: target object, argument list and an optional parameter new target object.

```js
let d = Reflect.construct(Date, [1776, 6, 4])
console.log(d.instanceof Date)  // True
console.log(d.getFullYear)      // 17776
```

## Further Readings:

1. [ECMA Specifications](https://tc39.es/ecma262/#sec-proxy-object-internal-methods-and-internal-slots)
2. [JavaScript.info](https://javascript.info/proxy)
3. [Blog by Toast UI](https://toastui.medium.com/javascript-proxy-but-with-reflect-665f868fbeba)

Contributed by: [Kaushal Joshi](https://github.com/joshi-kaushal)
