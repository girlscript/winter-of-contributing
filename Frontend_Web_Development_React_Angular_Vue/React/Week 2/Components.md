<div align="center">
    <img src="https://cdn.educba.com/academy/wp-content/uploads/2020/03/React-Components.jpg" alt="react-components" height="80%" width="80%">
</div>
<br>
<div align="center">
    <h1> What is Component? </h1> 
</div> 
 
## Introduction

Components let you split the UI into independent, reusable pieces, and think about each piece in isolation. In this lesson, we'll learn introduction to components in React and how to use them in our React applications and types of it.

Okay so let's start with an example. Let's write the simplest React component:

```js
const App = () => {
    return (
        <h1>Hello World!</h1>
    );
};

ReactDOM.render(<App />, document.getElementById("root"));
```
This is a simplest React Application.
- The first thing we do here, is to make our own component, `App`. React is all about making components. And then taking those components and making more components out of those.
- There are two types of components, `function` components and `class` components. In this example we used a function component. We'll see class components shortly.
- The `return` statement is the only thing that is required in a function component.
- then we render our component `App` to the DOM using `ReactDOM.render`.
- `ReactDOM.render` is what takes our rendered App component and puts in the DOM (in our case we're putting it in the root element.)

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
This is also a function component, which is written in pure Javascipt function.
after that we can render it to the DOM using `ReactDOM.render`. and the output will be:

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