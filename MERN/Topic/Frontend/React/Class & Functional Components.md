![React-Components](https://www.freecodecamp.org/news/content/images/2020/03/React-components.png)

<p>&nbsp</p>

<h1 align="center">Class and Functional Components and their lifecycles</h1>

## What are Components ?
A component is an independent, reusable code block which divides the UI into smaller pieces. For example, if we were building the UI of Twitter with React:

<p>&nbsp</p>

![Twitter-UI](https://www.freecodecamp.org/news/content/images/2020/11/twit.png)

<p>&nbsp</p>

Rather than building the whole UI under one single file, we can and we should divide all the sections (marked with red) into smaller independent pieces. In other words, these are components.

In other words, Components are the foundation of every React project, and a typical React app will have a large number of them. Simply defined, a component is a JavaScript class or function that receives properties(props) as input and produces a React element that defines how a portion of the UI (User Interface) should appear.

There are two sorts of components: 
    
- Class components, and
- Functional components.


In order to understand *Components* one should have a knowledge of what *props* are, they are pretty simple and you can understand them as:

    " Arguments sent into React components are known as props.
    They are the short-form for "properties" and HTML attributes are used to pass props to components."

The simplest way to define a component is to write a JavaScript function:

```js
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}
```

This function is a valid React component because it accepts a single "props" (which stands for properties) object argument with data and returns a React element. We call such components "function components" because they are literally JavaScript functions.

You can also use an [ES6 class](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes) to define a component:

```js
class Welcome extends React.Component {
  render() {
    return <h1>Hello, {this.props.name}</h1>;
  }
}
```

The above two components are equivalent from React’s point of view.

---

<p>&nbsp</p>

<h1> Class Components</h1>

These components are created using [ES6’s class](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes) syntax. They have some additional features such as the ability to contain logic (for example methods that handle onClick events), local state and other capabilities.

<p>&nbsp</p>

## Create a Class Component
When creating a React component, the component's name must start with an upper case letter.

The component has to include the `extends React.Component` statement, this statement creates an inheritance to `React.Component`, and gives your component access to React.Component's functions.

The component also requires a `render()` method, this method returns HTML.

### For Example
Create a Class component called `Car`.

```js
class Car extends React.Component {
  render() {
    return <h2>Hi, I am a Car!</h2>;
  }
}
```

Now your React application has a component called Car, which returns a `<h2>` element.

To use this component in your application, use similar syntax as normal HTML: `<Car />`

Now, Display the `Car` component in the "root" element:

```js
ReactDOM.render(<Car />, document.getElementById('root'));
```

As you explore other resources, you might find class components referred to as smart, container or stateful components.

- **Class** because they are basically classes

- **Smart** because they can contain logic

- **Stateful** because they can hold and/or manage local state

- **Container** because they usually hold/contain numerous other (mostly functional) components


## Class Properties
You may make your handler functions easier to understand by using class properties. Babel provides transform-class-properties, which is included by default in React Native.

```js
class AwesomeProject extends Component {
  state = {n: 0}
  handleOnPress = () => this.setState({n: this.state.n + 1})
}
```

**With anonymous arrow functions**

This creates a new function on every render potentially invalidating any efforts to memorise in Button.

```js
class AwesomeProject extends Component {
  constructor() {
    super()
    this.state = {n: 0}
  }
  handleOnPress() {
     this.setState({n: this.state.n + 1})
  }
  render() {
    return <Button onPress={() => this.handleOnPress()} />
  }
}
```

**With bind()**

The same function is reused on every render this is the ES6 best practice.

```js
class AwesomeProject extends Component {
  constructor() {
    super()
    this.state = {n: 0}
    this.handleOnPress = this.handleOnPress.bind(this)
  }
  handleOnPress() {
     this.setState({n: this.state.n + 1})
  }
  render() {
    return <Button onPress={this.handleOnPress} />
  }
}
```

**With Class properties**

We remove the need for a constructor and avoid manually binding the handler.

```js
class AwesomeProject extends Component {
   state = {n: 0}
   handleOnPress = () => {
     this.setState({n: this.state.n + 1})
   }
   render() {
    return <Button onPress={this.handleOnPress} />
  }
}
```

*Class components have a considerably larger amount of markup. Using them excessively and unnecessarily can negatively affect performance as well as code readability, maintainability and testability.*

---

<p>&nbsp</p>

<h1> Functional Components</h1>

A functional component is basically a JavaScript/ES6 function that returns a React element (JSX). According to React's official docs, the function below is a valid functional component:

```js
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}
```
Alternatively, you can also create a functional component with the arrow function definition:

```js
const Welcome = (props) => { 
  return <h1>Hello, {props.name}</h1>; 
}
```

> This function is a valid React component because it accepts a single “props” (which stands for properties) object argument with data and returns a React element. — [reactjs.org](https://reactjs.org/)


## Create a Functional Component

A Functional component also returns HTML, and behaves pretty much the same way as a Class component.

### For Example

Create a Function component called `Car`.

```js
function Car() {
  return <h2>Hi, I am also a Car!</h2>;
}
```

Once again your React application has a Car component.

Now, you can display the Car component in the "root" element:

```js
ReactDOM.render(<Car />, document.getElementById('root'));
```

So a Functional Component in React:

- is a **JavaScript/ES6** function

- must return a React element (**JSX**)

- always starts with a capital letter (naming convention)

- takes **props** as a parameter if necessary


## Advantage of Functional Components over Class Components

<p>&nbsp</p>

 - **It's simple to reason about functional components.**
    
     Functional components make your code easier to read and comprehend, which is one of its primary advantages. You might not think this is a huge problem if you're working on a project by yourself. But take my word for it. You'll understand when you take a one-month break from working on a project and return to try to figure out what your previous self was thinking.

- **Functional components are easy to test** 

    It’s easier to test functional components because you don’t have to worry about hidden state or [side effects](https://en.wikipedia.org/wiki/Side_effect_(computer_science)). For every input (props), functional components have exactly one output.

    Given certain props, one can assert exactly what the HTML output will be. This means you don’t have to rely on any mocking, state manipulation, or crazy testing libraries. It’s pretty awesome.

- **Functional components can potentially have a better performance**

    You'd assume that the lack of state or lifecycle methods in functional components would allow React's internals to avoid needless overhead like lifecycle events. Unfortunately, this is not the situation right now.

    In the words of [release notes](https://reactjs.org/blog/2015/10/07/react-v0.14.html#stateless-functional-components):

    > “In the future, we’ll also be able to make performance optimizations specific to these components by avoiding unnecessary checks and memory allocations”  — [React v0.14](https://reactjs.org/blog/2015/10/07/react-v0.14.html)

- **Functional components are easy to debug**

    To generate an output, functional components rely solely on the props they are provided, making debugging easy. There's no need to keep a running track of the component's status to figure out what's going on.

    It's simple to trace the route of your code and figure out what's going on if you know the props being given in.

- **Functional components are more reusable**

    *<h4>Functional Checkbox</h4>*
    
    ```js
    const Checkbox = ({ checked, label, handleClick }) => (
   <div
      className={checked ? 'Checkbox-container checked' : 'Checkbox-container'}
      onClick={handleClick}
      role="button"
      tabIndex={0}
      data-label={label}
   >
      <p className="label" data-label={label}>{label</p>
   </div>
    );
    ```

    Making the checkbox a functional component requires us to reduce it to its most basic characteristics, which has the unintended consequence of making it more widely applicable. Consider it a compelled excellent practise.

    The checkbox component does not need to decide on its default state or what should happen when it is clicked. This is instead assigned to a higher-level component. Could you do the same thing using a class component? Sure, but a functional component pushes us to adhere to best practises, resulting in a more reusable, cleaner component.

- **Functional components can reduce coupling**

    Coupling is one of the most important principles in clean code. Coupling is a term that defines how dependent one thing is on another. When we say our code has minimal coupling, we mean that we can modify one part of it without affecting the others. As a result, our code is more manageable.

    The limitations imposed by functional components require us to remove much of the logic that would otherwise reside within a component to a higher level component, a state management library like Redux, or the new [React Context API](https://reactjs.org/docs/context.html#api). Low coupling seems a lot like separating logic from display.

---


 ## External References

  - [45% Faster React Functional Components](https://medium.com/missive-app/45-faster-react-functional-components-now-3509a668e69f)