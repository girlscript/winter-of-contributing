# Introducing to React Hook

Hooks are new feature of React, Introduced into version 16.8.They allow you to control your application state with some other features without writing a class. React hooks works only inside of functional components not in the class base components.

# We will be learning two basic React hooks, useState and useEffect through practical example.

# No.1  useState

We call useState Hook inside a functional component to add some local state to it. It returns a pair of values: current value and function which allow us to update it. You can call this function from an event handler or somewhere else. It’s similar to this.setState in a class, except it doesn’t merge the old and new state together.

**Note:** React preserves the state during component re-render.

# Let's understand useState Hook with a example -

```javascript
import React, { useState } from "react";

function Example() {
  // Declare a new state variable, which we'll call "count"
  const [count, setCount] = useState(0);

  return (
    <div>
      <p>You clicked {count} times</p>
      //updating the setCount when a user clicks on the button
      <button onClick={() => setCount(count + 1)}>Click me</button>
    </div>
  );
}
```

**What does useState Returns -** It returns a pair of values: the current state and a function that updates it. This is why we write const [count, setCount] = useState(). This is similar to this.state.count and this.setState in a class, except you get them in a pair.

**What do we pass to useState as a argument -** The only argument useState Hook accepts is initial state.In our example, we just want a number for how many times the user clicked, so pass 0 as initial state for our variable. (If we wanted to store two different values in state, we would call useState() twice.)

**Updating State -** In our example to update our count variable(when someone clicks button) we need to call the function **setCount** with a new value.

# No 2. useEffect

you’ve likely performed data fetching, subscriptions, or manually changing the DOM from React components before. We call these operations “side effects” (or “effects” for short) because they can affect other components and can’t be done during rendering.

The Effect Hook, useEffect, adds the ability to perform side effects from a function component. It serves the same purpose as componentDidMount, componentDidUpdate, and componentWillUnmount in React classes, but unified into a single API.

# Let's understand useEffect Hook with a example -

```javascript
import React, { useState, useEffect } from "react";

function Example() {
  const [count, setCount] = useState(0);

  // Similar to componentDidMount and componentDidUpdate:
  useEffect(() => {
    // fetching data from any api endpoint
    fetch("https://localhost:3000/quoteApi")
      .then((res) => res.json())
      .then((data) => console.log(data))
      .catch((err) => console.log(err));
  });

  return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>Click me</button>
    </div>
  );
}
```

**Explanation -** Let's assume a condition when a user clicks on button React re-render the component and every time a request is sent to the server But what if we don't want to make a request every time except of first render, then the useEffect hook comes into the picture. useEffect hook allow us to decide either render a piece of code or not when a react component re-renders.

**Dependency as a argument -** useEffect hook accepts a dependency array as second argument. Initially code snippet doesn't contains a dependency array which means if every time component re-renders useEffect hook will allow to run the piece of code inside of it.

  **-** It is also possible to add an empty dependency array. In this case, effects are only executed once; it is similar to the componentDidMount() lifecycle method.

  # Short Code Snippet

  ```javascript
  useEffect(() => {
    // fetching data from any api endpoint
    fetch("https://localhost:3000/quoteApi")
      .then((res) => res.json())
      .then((data) => console.log(data))
      .catch((err) => console.log(err));
  },[]);
  ```

  **-** We can also pass values to array as dependency which means effects are only executed when the array value changes.
  
  # Short Code Snippet

  ```javascript
  useEffect(() => {
    // fetching data from any api endpoint
    fetch("https://localhost:3000/quoteApi")
      .then((res) => res.json())
      .then((data) => console.log(data))
      .catch((err) => console.log(err));
  },[count]);
  ```
  
