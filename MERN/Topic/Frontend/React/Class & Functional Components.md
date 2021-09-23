![React-Components](https://www.freecodecamp.org/news/content/images/2020/03/React-components.png)

<p>&nbsp</p>

<h1 align="center">Class and Functional Components and their lifecycles</h1>

## What are Components ?
Components are independent and reusable bits of code. They serve the same purpose as JavaScript functions, but work in isolation and return HTML via a render() function.

In other words, Components are the foundation of every React project, and a typical React app will have a large number of them. Simply defined, a component is a JavaScript class or function that receives properties(props) as input and produces a React element that defines how a portion of the UI (User Interface) should appear.

There are two sorts of components: 
    
- Class components, and
- Function components.


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