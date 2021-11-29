# useReducer

## What is useReducer

The useReducer hook is used for complex state manipulations and state transitions. It accepts a reducer function, and an initial state and returns the state and a dispatch function. 
The useReducer hook is similar to the react useState hook but is used when we need to do many different complex state changes.

To use the useReducer hook you have to import it from react.

``` import { useReducer } from "react"; ```

_Syntax of useReducer_

``` const [state, dispatch] = useReducer(reducer, initialState); ```

## Let us see the basic building blocks of useReducer

### 1. Initial state

It is the value that the state is initialized with.
For example: In case of a counter function, the initial state of ```count``` will be 0

``` const initialState = { count : 0 }```

Instead of passing the initialState as an object you can also directly pass it as a value

``` const [state, dispatch] = useReducer(reducer, 0); ///passing initialState as 0 directly ```

However, passing it as an object is usually preferred as useReducer hook is used for complex state transitions and thus passing an object makes it much more simple.

### 2. Action Object

An action object is an object that describes how to update the state. 
Typically, the action object would have a property ```type``` — a string describing what kind of state update the reducer must do.

For example: In case of a counter we can either ```increment``` the counter or ```decrement``` it.

### 3. Dispatch function

The dispatch function is used to dispatch the action object. Whenever you want to update the state (usually on an event like click event, etc), 
you simple call the dispatch function with the appropriate dispatch object as parameters. 
For eg. Suppopse you want to update the counter on mouseclick event

```
const decrement = () => {

  //calling dispatch function with action object decrement
  dispatch({ type : 'decrement' });
}

<button  onClick = {decrement}> decrement </button>
```
<br>

In the above example ```decrement``` is the action object that is called on button click. Similarly an action object ```increment``` can be called on the dispatch function
for an increment counter button



### 4. Reducer Function

The reducer is a [pure function](https://www.freecodecamp.org/news/what-is-a-pure-function-in-javascript-acb887375dfe/) that accepts ```2 parameters:
the current state and an action object. ```
Depending on the action object, the reducer function must update the state in an immutable manner, and return the new state

It uses 'switch case' to determine how the state must be changed depending on the 'action object' type.

Example: Consider we have to increase the count by 1 if action object type is ```increment``` and decrement it by 1 if the action object type is ```decrement```

```
const reducer = (state, action) =>{

  switch(action.type){                       //switch case based on action type
  
    case 'increment':                        // if action type is increment
        return {count: state.count+1 }
    case 'decrement':                        // if action type is decrement
        return {count: state.count-1 }
    default:
      return state.count
  }
};
```

<br>

### Example: Building a counter using useReducer

```

import { useReducer } from "react";

const reducer = (state, action) =>{
  switch(action.type){
    case 'increment':
        return {count: state.count+1 }
    case 'decrement':
        return {count: state.count-1 }
    default:
      return state.count
  }
};

export default function App() {

const [state,dispatch] =  useReducer(reducer, {count:0})

const increment=()=>{
  dispatch({type:'increment'});
}
const decrement=()=>{
  dispatch({type:'decrement'});
}

  return (
    <div>
      <button  onClick={decrement}>decrement</button>
      <h1>{state.count}</h1>
      <button onClick={increment}>increment</button>
    </div>
  );
}

```

_you can see the above code in action here [https://vnuci.csb.app/](https://vnuci.csb.app/)_

## Why to use useReducer

*  When you have complicated state logic including several sub-values or when the future state is dependent on the prior one, 
using useReducer is typically preferable as compared to useState, because  you may pass dispatch down instead of callbacks.

* The react component by nature should only contain the logic that calculates the output, while the state management logic should be managed in a different space.
useReducer helps separate this concern by extracting the state management out of the component.

## Advantages of useReducer

* useReducer is more efficient when the state consists of more than primitive values, like nested object or arrays.
* It is usually preferable to utilise this strategy when the current state is dependent on the previous. It will provide you with a more consistent state transition.
* It helps separate the state management logic from the rendering logic, thus making the code cleaner easier to understand.
* It makes testing easier as it does not depend on React.


<br>
<br>

<i>
  References: 
  
  https://reactjs.org/docs/hooks-reference.html
  
  [https://dev.to/spukas/3-reasons-to-usereducer-over-usestate-43ad](https://dev.to/spukas/3-reasons-to-usereducer-over-usestate-43ad)

  https://youtu.be/kK_Wqx3RnHk
</i>
