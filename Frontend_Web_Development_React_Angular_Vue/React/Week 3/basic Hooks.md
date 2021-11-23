# Basic Hooks: useState and useEffect

Hooks are the new feature introduced in the React 16.8 version. It allows to use **state** and other React features without writing a class. Hooks are the functions which "hook into" React state and lifecycle features from function components. It does not work inside classes.

# When to use Hooks
If we want to add some state to a functional component, we need to convert the functional component to class component previously. But now using **hooks** we can do it by using it inside functional components.

# Declaring a State 

Hook state is the new way of declaring a state in React app. Hook uses **useState()** functional component for setting and retrieving state. Let us understand Hook state with the following example.

```
//App.js

import React, { useState } from 'react';  
  
function CountApp() {  
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
export default CountApp;  
```
# UseState

useState is the Hook which needs to call inside a function component to add some local state to it. The useState returns a pair where the first element is the current state value/initial value, and the second one is a function which allows us to update it. After that, we will call this function from an event handler or somewhere else. The useState is **similar to this.setState** in class. 


# Hooks Effect

The Effect Hook allows us to **perform side effects (an action)** in the function components. It does not use components lifecycle methods which are available in class components. In other words, Effects Hooks are equivalent to componentDidMount(), componentDidUpdate(), and componentWillUnmount() lifecycle methods.

They have following features which most web applications needs to perform:
* Updating DOM
* Fetching and consuming data from a server API,
* Setting up a subscription, etc.

```
import React, { useState, useEffect } from 'react';  
  
function CounterExample() {  
  const [count, setCount] = useState(0);  
  
  // Similar to componentDidMount and componentDidUpdate:  
  useEffect(() => {  
    // Update the document title using the browser API  
    document.title = `You clicked ${count} times`;  
  });  
  
  return (  
    <div>  
      <p>You clicked {count} times</p>  
      <button onClick={() => setCount(count + 1)}>  
        Click me  
      </button>  
    </div>  
  );  
}  
export default CounterExample;  
```

