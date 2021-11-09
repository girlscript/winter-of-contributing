# **Context In React**
<br>

<img src="https://miro.medium.com/max/1400/1*Yo1nkzOAMihE8Ia5O411PQ.jpeg">

<br>

## **What is Context in React ?**

* React Context is a method to pass props from parent to child component(s), by storing the props in a store and using these props from the store by child component(s) without actually passing them manually at each level of the component tree.

* In a typical React application, data is passed top-down (parent to child) via props, but such usage can be cumbersome for certain types of props (e.g. locale preference, UI theme) that are required by many components within an application. Context provides a way to share values like these between components without having to explicitly pass a prop through every level of the tree.
<br>

## **Where we use Context in React ?**
 
* Whenever one wants a store to keep states or variables in and use them elsewhere in program, Context is used. Generally, when we have two or more levels(height) in our component tree, it is viable to use a store instead of passing props and then lifting the state as this will create confusion and unnecessary lengthy code. 
* Context is designed to share data that can be considered “global” for a tree of React components, such as the current authenticated user, theme, or preferred language.

## **What are the Benefits of the context in React ?**

* One of the most important things about React is that the data flows in only one direction, which enables the developers to predict.
* It enables easy debugging.
* It provides Reusability.

Context lets us pass a value deep into the component tree without explicitly threading it through every component.
Create a context for the current theme (with "light" as the default).

```jsx
// Context lets us pass a value deep into the component tree
// without joining it through every component.


const ThemeContext = React.createContext('light');

class App extends React.Component {
 render() {

// Use a Provider to pass the current theme to the tree below.    
// Any component can read it, no matter how deep it is.    
// In this example, we're passing "dark" as the current value.

return (    
  <ThemeContext.Provider value="dark">      
    <Toolbar />        
  </ThemeContext.Provider>      
);    
  }
}


// A component in the middle doesn't have to
// pass the theme down explicitly anymore.

function Toolbar() {

  return (
    <div>
      <ThemedButton />
    </div>
  );
}

class ThemedButton extends React.Component {
  // Assign a contextType to read the current theme context.
  // React will find the closest theme Provider above and use its value.
  // In this example, the current theme is "dark".
  static contextType = ThemeContext;
  render() {
    return <Button theme={this.context} />;
  }
}

class ThemedButton extends React.Component {
  render() {
    return <Button theme={this.props.theme} />;
  }
  }
  ```

#### With the context API, we can avoid passing props through intermediate elements, and directly pass the props to the last child or the child we are targeting:
```jsx
 // Context lets us pass a value deep into the component tree
  // without explicitly threading it through every component.
 // Create a context for the current theme (with "light" as the default).
 const ThemeContext = React.createContext('light');

 class App extends React.Component {
   render() {
     // Use a Provider to pass the current theme to the tree below.
     // Any component can read it, no matter how deep it is.
     // In this example, we're passing "dark" as the current value.
     return (
       <ThemeContext.Provider value="dark">
         <Toolbar />
       </ThemeContext.Provider>
     );
   }
 }

 // A component in the middle doesn't have to
 // pass the theme down explicitly anymore.
 function Toolbar() {
   return (
     <div>
       <ThemedButton />
     </div>
   );
 }
 ```
Part 2

 ```jsx     
 import React from "react";
 import ReactDOM from "react-dom";
 import "./index.css";
 import App from "./App";
 import * as serviceWorker from "./serviceWorker";
 import reducer, { initialState } from "./reducer";
 import { DataLayer } from "./DataLayer";

 ReactDOM.render(
   <React.StrictMode>
     <DataLayer initialState={initialState} reducer={reducer}>
       <App />
     </DataLayer>
   </React.StrictMode>,
   document.getElementById("root")
 );
 class ThemedButton extends React.Component {
   // Assign a contextType to read the current theme context.
   // React will find the closest theme Provider above and use its value.
   // In this example, the current theme is "dark".
   static contextType = ThemeContext;
   render() {
     return <Button theme={this.context} />;
   }
 }
 class ThemedButton extends React.Component {
   render() {
     return <Button theme={this.props.theme} />;
   }
 }
 ```



#### Every Context object comes with a Provider React component that allows consuming components to subscribe to context changes. All that we have to do is make a variable (here it is initialState) and give it and the provider an initial value. This initial value depends upon the project which you are making.
#### For more, I highly recommend going to the official documentation and reading their tutorials from https://reactjs.org/docs/context.html

### **Conclusion**

Hence , React Context API is a way to essentially create global variables that can be passed around in a React app. This is the alternative to “prop drilling”, or passing props from grandparent to parent to child, and so on.

Thank you! I hope that you found this valuable!

#### references:

https://reactjs.org/docs/context.html

https://www.freecodecamp.org/news/react-context-in-5-minutes/
