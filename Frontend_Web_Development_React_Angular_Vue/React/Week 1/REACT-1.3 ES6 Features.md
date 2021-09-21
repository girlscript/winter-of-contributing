<h1 align="center">REACT-1.3 ES6 Features</h1>

<br>
<img  src="https://reactjs.org/logo-og.png"  
 alt="react-logo" width="100%" />
</p>

# What is React? 

## Introduction
- React is a JavaScript library which is used to create single page applications. It is a declarative, efficient, and flexible JavaScript library which allows to create reusable UI components. It is developed and maintained by Facebook.
<p>&nbsp;</p>

<h1> New Featues in Javascript ES6 </h1>

- ECMAScript 2015 is also known as ES6.

### 1. ***let and const*** : - Both these keywords are used to declare variable. Variables declared with let can be re-assigned but cannot be redeclared within the same scope whereas those declared by const must be assigned an initial value but cannot be redeclared within the same scope.


 ```jsx
let opensource = 'GWOC';
opensource = 'GirlScript';
console.log(opensource);

//output
GirlScript


const frontend = 'React';
frontend = 'React with ES6';
console.log(frontend);

//Error
Uncaught TypeError: Assignment to constant variable.
```
<p>&nbsp;</p>

### 2. ***The Spread Operator*** : - It is denoted by ... .It is used to expand iterable objects into multiple elements and also to combine multiple arrays into one array
 ```jsx
const github = ["fork", "clone", "star"];
const pr = ["pull","commit", "push"];
console.log(...github);

const combine = [...github, ...pr];
console.log(combine);

//output
fork clone star
['fork', 'clone', 'star', 'pull', 'commit', 'push']
```

<p>&nbsp;</p>

### 3. ***Arrow functions*** : Decreases the syntax for writing functions. Now we don't require the function keyword, the return keyword, and the curly brackets

 ```jsx
// ES5
var x = function(x, y) {
   return x * y;
}

// ES6
const x = (x, y) => x * y;
```
<p>&nbsp;</p>

### 4. ***Template literals***
 ```jsx
 //ES5
const opensource = {
 name: 'GWOC',
 year: ' 2021'
};

let msg = "I am Contributing in " + opensource.name + opensource.year;
console.log(msg);


//ES6
let msg = `I am Contributing in ${opensource.name} ${opensource.year}`;
console.log(msg);

//output
I am Contributing in GWOC 2021
```
<p>&nbsp;</p>

### 5. ***Adding default values to the function’s parameter***

```jsx
function opensource(name = 'GWOC', year = '2021') {
 return ` ${name} ${year}`;
}

console.log(opensource()); // GWOC 2021
console.log(opensource('GSSoC')); // GSSoC 2021

```
<p>&nbsp;</p>

### 6. ***Extracting data from an array***

```jsx
// ES5
const evenNumbers = [2, 4, 6];

const a = evenNumbers[0];
const b = evenNumbers[1];
const c = evenNumbers[2];

console.log(a, b, c);
//output
2 4 6


//ES6
const evenNumbers = [2, 4, 6];

const [x, y, z] = evenNumbers;

console.log(a, b, c);
//output
2 4 6


```
<p>&nbsp;</p>

### 7. ***Extracting data from a object***

```jsx
// ES5
const opensource = {
 program: 'GWOC',
 year: 2021
};

const program = opensource.program;
const year = opensource.year;

console.log(program, year);
//output
opensource 2021


// ES6
const opensource = {
 program: 'GWOC',
 year: 2021
};

const {program, year} = opensource;

console.log(program, year);
//output
opensource 2021


```
<p>&nbsp;</p>

### 8. ***Initialising Objects*** 

```jsx
// ES5

let program = 'GWOC';
let year = '2021';

const opensource = {
 program: program,
 year: year
};

console.log(opensource);
//output
{ program: 'GWOC', year: 2021 }


//ES6
let program = 'GWOC';
let year = '2021';

const opensource = {
 program,
 year
};

console.log(opensource);
//output
{ program: 'GWOC', year: 2021 }

```
<p>&nbsp;</p>

<h1> REACT WITHOUT ES6 vs REACT WITH ES6 </h1>

### 1. **bundle.js file**
- Without ES6: You have to manually include the webpacked bundle.js file in the script tag of index.html

```jsx
  <!DOCTYPE html>
  <html>
  <head>
      <meta charset="UTF-8">
  </head>
  <body>
     <h1>React Without ES6</h1>
     <script src="dist/bundle.js"></script>
  </body>
  </html>

```

- With ES6: bundle.js is already included while installing the create-react-app scripts


```jsx
  <!DOCTYPE html>
  <html>
  <head>
      <meta charset="UTF-8">
  </head>
  <body>
     <h1>React With ES6</h1>
  </body>
  </html>

```
<p>&nbsp;</p>

### 2. **Setting up the root container component in the index.js file**
- Without ES6: 

```jsx
   var React = require('react');
   var ReactDOM = require('react-dom');
   var App = require('./Containers/AppContainer');

   ReactDOM.render(
       <App />,
       document.getElementById('app')
   );


```

- With ES6: 


```jsx
   import React from 'react';
   import ReactDOM from 'react-dom';
   import App from './Containers/AppContainer';

   ReactDOM.render(
       <App />,
       document.getElementById('app')
   );

```
<p>&nbsp;</p>

### 3. **Props**
- Without ES6: Props are implicit

```jsx
  var girlscript = createReactClass({
  getInitialState: function() {
    return {name: this.props.name};
  },
  render: function() {
    return <span>{this.state.name}</span>;
  }
});

```

- With ES6: props are passed into the component via the constructor()


```jsx
  class girlscript extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      name: props.name
    }
  }
  render() {
    return <span>{this.state.name}</span>;
  }
}

```
<p>&nbsp;</p>

### 4. **React Component**
- Without ES6:  React component is defined using the create-react-class module

```jsx
   var createReactClass = require('create-react-class');
   var opensource = createReactClass({
  render: function() {
    return <h1>{this.props.name}</h1>;
  }
});

```

- With ES6: React Component is defined as a plain javascript class


```jsx
  class opensource extends React.Component {
  render() {
    return <h1>{this.props.name}</h1>;
  }

```
<p>&nbsp;</p>