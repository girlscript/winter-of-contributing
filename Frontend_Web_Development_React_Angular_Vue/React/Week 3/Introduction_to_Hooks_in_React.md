# **Introduction to Hooks in React**

> _Hooks was added in React `version 16.8`_

Before Hooks, If you need to use state and lifecycle you have to use class component. Simply, Hooks are the function which provides you the feature that can use state, life cycle and other react features in functional component.

# **Prerequisite**

- Basic knowledge of Reactjs, Javascript
- Node version 6 or above
- npm version 5.2 or above

> Hooks are the function which always starts with name of use. _e.g. (useState, useEffect etc.)_

React provides few built-in Hooks like `useState`, `useEffect`, `useContecxt`, `useRef`, and `useReducer` etc. You can even make your own Hooks (Custom Hook).

We can build static or dummy components by writing function. However UI components are more often dynamic, theremay be need to change the state of the data, reactive life cycle event, and access the elements from DOM this is where Hook comes in a scene.

# **Advantages of Hooks**

1. Hooks code are easier to read and less line of code. Lets take a simple example of counter and compare functional components and class components.

```javascript
// In this example we will be using useState Hooks.
import React, { useState } from 'react';

cosnt Counter = () =>  {
  // Declare a new state variable, which we'll call "count"
  const [count, setCount] = useState(0);

  return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>
        Click me
      </button>
    </div>
  );
}
```

```javascript
// Without Hooks
class Counter extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      count: 0,
    };
  }

  render() {
    return (
      <div>
        <p>You clicked {this.state.count} times</p>
        <button onClick={() => this.setState({ count: this.state.count + 1 })}>
          Click me
        </button>
      </div>
    );
  }
}
```

2. Previously we use `componentDidMount` and `componentDidUpdate` to render states and `componentWillUnmount` to clean but we can do it all together using Hooks `useEffect()`

3. You can still use classes in React but Hooks generally provide you more easy way to build components. Because you can reuse state for logic without changing the components hierarchy.

4. Hooks are easier to work on and to test and it also makes our code cleaner.

5. It allows you to use the state and other react features without writing a classes.

## **Before starting to use the Hooks you should always aware of:**

- Hooks does not work inside classes.
- You can only call them at the top level of the functional component, they don't work in javascript function.
- Don't call Hooks inside loops, conditional statements.
