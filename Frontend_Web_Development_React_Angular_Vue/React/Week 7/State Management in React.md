<h1 align="center">  State Management in React  </h1>

## :arrow_right: What is State Management in React  ?

State management describes the maintenance of the state/knowledge of an application depending on all inputs. Inputs usually take place on the server (API) or the client (user).
The state describes the condition of an application at a given point of time.The state of any application is represented by the user interface of the application. The state is mutable and whenever the user interacts with the application and changes its state, the user interface of the app may change as it will be represented by the new state.
Sub-types of the state are:
* Server state
* Navigation state
* Local UI state
* Global UI state

Accordingly, the difficulty of state management arises from the coordination of all subtypes of state in an application.
Decision-making process for choosing the right state management solution is shown below:-
<p align="center"><img src="https://user-images.githubusercontent.com/72224843/141657656-8f1f9a2d-94e5-4995-a80e-3acabb64f519.png" align="center" ></p>


## :point_right: useState

First, is our state shared by more than two components? If not, then the next question is whether our state has complex update logic. In other words, is the new state dependent on the old state or are multiple subvalues changed? If the answer to these questions is no, we use local state with useState.
For example, if we have a simple counter with one component, the use of local state with useState is sufficient.

* App.js
```jsx
import React, { useState } from 'react';

function App() {
  const [click, setClick] = useState(0);
  // using array destructuring here
  // to assign initial value 0
  // to click and a reference to the function
  // that updates click to setClick
  return (
    <div>
       
 
<p>You clicked {click} times</p>
 
 
      <button onClick={() => setClick(click + 1)}>
        Click me
      </button>
    </div>
  );
}
 
export default App;
```
![useState](https://user-images.githubusercontent.com/72224843/141659541-73719001-8c08-4d9a-839b-1afa42c51073.gif)


## :point_right:useReducer

Now, if our state does have complex update logic, it makes sense to useReducer.
As described above, “complex” in this context means that a change of the state must change many values of the state or that the state depends on the previous state.

```jsx
import React, { useReducer } from "react";
 
// Defining the initial state and the reducer
const initialState = 0;
const reducer = (state, action) => {
  switch (action) {
    case "add":
      return state + 1;
    case "subtract":
      return state - 1;
    case "reset":
      return 0;
    default:
      throw new Error("Unexpected action");
  }
};
 
const App = () => {
    // Initialising useReducer hook
  const [count, dispatch] = useReducer(reducer, initialState);
  return (
    <div>
      <h2>{count}</h2>
      <button onClick={() => dispatch("add")}>
        add
      </button>
      <button onClick={() => dispatch("subtract")}>
        subtract
      </button>
      <button onClick={() => dispatch("reset")}>
        reset
      </button>
    </div>
  );
};
 
export default App;
```
![useReducer](https://user-images.githubusercontent.com/72224843/141659811-0ae66a18-75f7-4c00-bb11-e933686dee25.gif)

## :point_right: Context API + State Hooks

If we look at the right part of the decision diagram — that is, if we answered yes to the question “Is the state shared by more than two components?” — we are faced with the question of whether our global state changes frequently. If we can answer no to this, the Context API can make our lives easier.
A typical example is the login state of a user that is needed in many different components.
* auth-context.js

```jsx
import React from 'react';
  
// Creating the context object and passing the default values.
const authContext = React.createContext({status:null,login:()=>{}});
  
export default authContext;
```
* App.js

```jsx
import React, { useState } from "react";
import Auth from "./Auth";
import AuthContext from "./auth-context";
  
const App = () => {
  //using the state to dynamicallly pass the values to the context
  
  const [authstatus, setauthstatus] = useState(false);
  const login = () => {
    setauthstatus(true);
  };
  return (
    <React.Fragment>
      <AuthContext.Provider value={{ status: authstatus, login: login }}>
        <Auth />
      </AuthContext.Provider>
    </React.Fragment>
  );
};
export default App;
```
* Auth.js

```jsx
import React, { useContext } from "react";
import AuthContext from "./auth-context";
  
const Auth = () => {
  // Now all the data stored in the context can 
  // be accessed with the auth variable
  const auth = useContext(AuthContext);
  console.log(auth.status);
  return (
    <div>
      <h1>Are you authenticated?</h1>
      {auth.status ? 
<p>Yes you are</p>
 : 
<p>Nopes</p>
}
  
      <button onClick={auth.login}>Click To Login</button>
    </div>
  );
};
export default Auth;
```
![context api](https://user-images.githubusercontent.com/72224843/141659969-c4c62e2a-f38a-44b6-82a2-ff012d08b560.gif)

## :point_right: Server State (react-query, Apollo, swr)

If an application uses global state primarily to retrieve, cache, and update data residing on a server, it is recommended to use a specialized data management solution.
In an admin interface, we often need to display many different data in different views. Managing this data efficiently can be anything but trivial.
* App.js
```jsx
import { QueryClient, QueryClientProvider} from 'react-query'
const queryClient = new QueryClient()
export default function App() {
  return (
    <QueryClientProvider client={queryClient}>
      <Component />
    </QueryClientProvider>
  )
}
```

* Component.js
```jsx
import { useQuery } from 'react-query'
function Component() {
  const { isLoading, error, data } = useQuery('issues', () =>
    fetch('https://api.github.com/repos/rockiger/metado').then(res =>
      res.json()
    )
  )
  if (isLoading) return 'Loading...'
  if (error) return 'An error has occurred: ' + error.message
  return (
    <>
      <h1>{data.name}</h1>
      <p>{data.description}</p>
    </>
  );
}
```
With the useQuery custom Hook, we can now fetch the data we need. For this, we pass useQuery a unique name and the actual fetch function. We get back the data (status, error, content) we need to display.
The real highlight is that react-query takes over the management for us. It makes sure that the data is cached and updated automatically. If we use the same query issues in a second component, react-query will not execute the query multiple times but will fall back on the cached data.
In addition, the provided context provider is optimized to prevent unnecessary re-rendering of components

## :point_right: Redux

But what do you do if the state is shared by multiple components, changes frequently, and is not mainly server state?
Let’s take managing the state in a text editor with many buttons as an example. This is where Redux comes in. Redux is very efficient, has a large ecosystem with many plugins (so-called middleware), and is very well-documented.

```jsx
import React from 'react'
import { useDispatch, useSelector } from 'react-redux'
import { createSlice } from '@reduxjs/toolkit'
// 1) Create state and actions/reducers
const counterSlice = createSlice({
  name: 'counter',
  initialState: {
    value: 0,
  },
  reducers: {
    incremented: (state) => {
      return {value: state.value + 1};
    },
    decremented: (state) => {
      return { value: state.value - 1 };
    },
  },
})
export const { incremented, decremented } = counterSlice.actions
// 2) select and dispatch
export const Count = () => {
  const count = useSelector(state => state.counter.count)
  const dispatch = useDispatch()
  return (
    <main>
      <div>Count: {count}</div>
      <button onClick={() => dispatch(incremented())}>Decrement</button>
      <button onClick={() => dispatch(decremented())}>Increment</button>
    </main>
  )
}
```
![redux](https://user-images.githubusercontent.com/72224843/141698620-1e848584-ea0b-4a39-8f78-fed82aa6c78b.gif)

***The decision diagram can help developers find the right form of state management for their application.***

## :arrow_right: Where we use this concept in React ?

The concept of state management where we use in React are as follows:-
* Updating parent State 
* Maintaining the code structure of a complex project(Redux)
* Dynamic updates of components (Observables)
* Increasing performance and reduce redundant work 
* Storing variables in one place(Store) enables easy access and code quality is maintained. It also makes it easy for other developers to understand project structure
* For easy Dom rendering

## :arrow_right: Benefits of using this concept ?

State management is very important in application development. It centralizes all the states of various UI controls to handle data flow across the application.
For example, consider you want to show a “welcome” message on the user’s first-time visit but not on subsequent page visits, you need the state of the user. Telling each page to manage the state of the user will increase code complexity and also result in duplication of code.
Or simply consider showing a message on button submission or handling error message, in any case, the state of that UI control is required to take further course of actions.

State Management Helps Solve These Problems:
* How to handle the page when the user refreshes the browser URL?
* What to do when server data gets updated/refreshed?
* How components or services be aware of the state?
* How the request has made to the server when to update the page?

Managing the state of the application is one of the most important and necessary processes. It is like a representation of an application or simply you can say the state is what an application knows about the user, where they are, what information they have entered, and what is the status of UI controls after user-entered information.

## :arrow_right: References
* https://www.geeksforgeeks.org/reactjs-state-react/
* https://betterprogramming.pub/react-state-management-7e7f3a2018e4
* https://searchapparchitecture.techtarget.com/definition/state-management
