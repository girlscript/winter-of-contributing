<div align="center">
    <img src="https://cdn.educba.com/academy/wp-content/uploads/2020/03/React-Components.jpg" alt="react-components" height="80%" width="80%">
</div>
<br>
<div align="center">
    <h1> What is Component? </h1> 
</div> 
 
## Introduction

Components let you split the UI into independent, reusable pieces, and think about each piece in isolation. In this lesson, we'll learn introduction to components in React and how to use them in our React applications and what are the types of it.

Okay so let's start with an example. Let's write the simplest React component:

```js
const App = () => {
    return (
        <h1>Hello World!</h1>
    );
};

ReactDOM.render(<App />, document.getElementById("root"));
```
This is a simplest React Application anyone can write, let's understand it line by line:
- The first thing we do here, is to make our own component, `App`. React is all about making components. And then taking those components and making more components out of those.
- There are two types of components, `function` components and `class` components. In this example we used a function component. We'll see class components shortly.
- The `return` statement is the only thing that is required in a function component.
- In the body of the return statement, we have written JSX. This is a JavaScript XML extension. It is a way to write HTML inside a JavaScript file.
- Then we render our component `App` to the DOM using `ReactDOM.render`.
- `ReactDOM.render` is what takes our rendered App component and puts in the DOM (in our case we're putting it in the root element.)

This is pretty much about what a component is. It's a function that returns some JSX. Although there are variations on this, we can also pass some props to our component. Let's see how to do that.
```js
// react component example using props
const Greet = (props) => {
    return (
        <h1>Hello {props.name}! Welcome to GWOC!</h1>
    );
};
const App = () => {
    return (
        <div>
            <Greet name="John" />
            <Greet name="Jimmy" />
            <Greet name="Jack" />
        </div>
    );
};
ReactDOM.render(<App />, document.getElementById("root"));
```
In this example:
- we have created two components, `Greet` and `App`. The first component is `Greet` which is taking a `props` object as an argument and then returning some JSX.
- Notice the strange {props.name} syntax: this is how you output JavaScript expressions in JSX. An expression is anything that can be the right side of an assignment operator in JavaScript, e.g. const x = <anything that can go here>. If you take away the {} it will literally output props.name to the DOM.
- And then we have a `App`, which is a Parent component. It's a component that has other components as its children.
- `Greet` is more flexible component because it accepts some props from its parent component.
- **Props are variables that a parent (App) passes to its children (the instances of Greet.)**. Now each one can be different! Now that is far more useful than the previous one, since this Greet component can now used to greet any specific person or group of people. Previously It was just `Hello World!`.
- In `App`, inside the body of return statement, we have a div. This is a container. It's a container for our Greet components, we can now use our Greet components as children of our App component and it accepts props called `name` and it is written like `<Greet name="John">`

> Now the above code is not going run for now because components needs to be export and imported. which is explained in the next lesson 2.4 `import, export, modules`. After that you will able to run this code.

And you will output like this:
```yml
Hello John! Welcome to GWOC!
Hello Jimmy! Welcome to GWOC!
Hello Jack! Welcome to GWOC!
```
This is a complete Information about React Components. Now you should practise by your hand to create some components and pass some props to it and try to render it, you will be able to understand the concept of components. Okay let's disscuss the types of it.

## Types of Components

There are two types of components in React.
1. `function` components - these are the ones that are written in javascript functions. A function component must return markup.
example:
```js
const App = () => {
    return (
        <h1>Hello World!</h1>
    );
}
```
In the above example we use a Javascript Arrow function to return the markup, we can also write it like this:
```js
function App() {
    return (
        <h1>Hello World!</h1>
    );
}
```
The above one is also a function component, which is written in pure Javascipt function.
after that we can render it to the DOM using `ReactDOM.render`. This is the best practise for writing React Components, most of the React developer follow this practise. 

The output will be:

```html
Hello World!
```

2. `class` components - class components are written in ES6 classes. Every class component extends `React.Component`. Every class component must have a render method that returns some sort of JSX / markup / call to `React.createElement`.

example:
```js
class App extends React.Component {
    render() {
        return (
            <h1>Hello World!</h1>
        );
    }
}
```
This is brief Introduction to types of components in React. We will see more about them in the lesson. For now you just have to learn how the component is written, and how it is rendered.