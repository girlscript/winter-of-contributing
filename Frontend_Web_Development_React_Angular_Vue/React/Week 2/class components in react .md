<h1 align="center"> Class Components in React </h1>

Most of the apps in React JS are built with class components. These components are simple classes that are made up of multiple functions which adds functionality to the application. All tha class based components are child classes for the Component class of ReactJS. 

Class syntax is one of the most common ways to define a React component. While more verbose than the functional syntax, it offers more control in the form of lifecycle hooks.

## Creating a Class Component
Creating a class component is very simple; just define a class that extends Component and has a render function.

```
// reactClassComponent.js
import React, { Component } from 'react';

class reactClassComponent extends Component {
  render() {
    return (
      <div>This is a class component.</div>
    );
  }
}

export default reactClassComponent;
```


We can use it in any other component, from here only.

```
// otherComponent.js
import React, { Component } from 'react';
import MyComponent from './reactClassComponent';

class otherComponent extends Component {
  render() {
    return (
      <div>
        <div>This is other class component.</div>
        <MyComponent />
      </div>
    );
  }
}

export default otherComponent;
```
## Features

* **The main feature** of class-based components that distinguish them from functional components is that they have access to a **state** which dictates the current behavior and appearance of the component. This state can be modified by calling the setState() function. One or more variables, arrays, or objects defined as part of the state can be modified at a time with the setState() function. 

* Data is passed to other components with the help of **props**. Props work similarly for all components in ReactJS be they class based or functional. Props are always passed down from the parent component to the child component. ReactJS does not allow a component to modify its own props as a rule. The only way to modify the props is to change the props being passed from the parent component to the child component. This is generally done by passing a reference to a function in the parent component, which changes the props being passed to the child component.

**Using props**

As is, reactClassComponent isn’t terribly useful, it will always render the same thing. Luckily, React allows props to be passed to components with a syntax similar to HTML attributes.
```
<reactClassComponent myProp="This is passed as a prop." />
```

```
class reactClassComponent extends Component {
  render() {
    const {myProp} = this.props;
    return (
      <div>{myProp}</div>
    );
  }
}
//A variable wrapped in brackets will be rendered as a string.
```

* Class-based components have access to the **lifecycle functions** like componentWillMount(), componentWillReceiveProps(),componentWillUpdate(), shouldComponentUpdate(),render() and componentWillUnmount();. These lifecycle functions are called at different stages of the lifecycle and are used for a variety of purposes like changing the state or doing some work (like fetching data from an external API). They are also referred to as **lifecycle hooks**. 

* Class-based components are slightly **slower than their functional counterparts**. The difference is very small and is almost negligible for smaller web apps – though the performance difference increases when the number of components in the app increases. Moreover, class-based components involve a lot more coding on the programmer’s part, making them slightly more inefficient to use.