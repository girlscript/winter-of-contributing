![Babel](https://upload.wikimedia.org/wikipedia/commons/thumb/0/02/Babel_Logo.svg/1200px-Babel_Logo.svg.png)

# Introduction To Babel

### What is Babel?

Babel is a JavaScript compiler and a transpiler. It converts the latest version of javascript with advanced features into ES5 or other older versions of javascript.

___

### Basic Information about Babel

* Babel supports any latest version of javascript through syntax transformers. 
 * it converts into ES5 Javascript code.
 * Babel tries using the least amount of code possible with no dependence on a bulky runtime.

___

 ### Why do we need Babel?

 JavaScript is moving so fast that browsers behind are not able to adapt all the changes which it brings.
 So, Babel compile down your advanced feature code into the ones which your browser can actually understand.

 It allows you to use latest JavaScript without needing to worry about the needs of your target environment(s).

After ES5, we have had ES6, ES7, and ES8. ES6 released with a lot of new features which are not fully supported by all browsers. So, it makes javascript compatible and browser friendly.


Babel includes a polyfill that includes a custom regenerator runtime and core-js. This will emulate a full ES2015+ environment and is intended to be used in an application rather than a library/tool.

 ___

 ### Code Examples


 **Example-1**

 ```javascript
 let name="Rahul"

 const arr = [1,2,3]

 let person={name: "Rahul", age: 26, gender: "Male"}
```

*Babel converts code to ES5 format-*

```javascript
"use strict";

var name="Rahul";

var arr = [1,2,3];

 var person={name: "Rahul", age: 26, gender: "Male"};
```
___

**Example-2**

```javascript
var add = (x,y) => {
   return x+y;
}

var k = add(3,6);
console.log(k);
```

*Babel converts code to ES5 format-*

```javascript
"use strict";

var add = function add(x, y) {
   return x + y;
};

var k = add(3, 6);
console.log(k);
```

___

**Example-3**

```javascript
 class Student{

 }
```
*Babel converts code to ES5 format-*

```javascript
"use strict";

function _classCallCheck(instance, Constructor) {
  if (!(instance instanceof Constructor)) {
    throw new TypeError("Cannot call a class as a function");
  }
}

var User = function User() {
  _classCallCheck(this, User);
};
```

___

### Benefits of using Babel in react

1. You can use modules.
2. You can use JSX with ES6.
3. It support a lot of browsers.
3. You can use more advanced features (async/await) etc.

**React can be used without ES6 and JSX which would remove the initial need for Babel but you would lose the potential benefits of ES6 and JSX.Babel acts as a compiler allowing us to leverage all the benefits of JSX while building React components.**

So, 
when we start a react-based project, setting up the build environment is tough and time-consuming work. To help with this, the developers of React created an npm package called **react-scripts** that includes a lot of the basic setup most people will need for an average React app. **Babel and webpack are included as dependencies in react-scripts**.

___

### Setup React app with Babel and Webpack

```bash
mkdir reactApp

cd reactApp

npm init

npm install react react-dom --save

npm install webpack webpack-dev-server webpack-cli --save

npm install babel-core babel-loader babel-preset-env 
   babel-preset-react html-webpack-plugin --save-dev
   ```

___
___






