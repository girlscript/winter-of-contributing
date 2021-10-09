<p align="center"><img src="https://cdn-media-1.freecodecamp.org/images/1*QeEbGcmtoQ3T_zUdpG8TZw.jpeg" width="500px"></p><br>

# React Props vs State

## React Props :-

We know that components in React are used again and again in the UI, but we don’t normally render the same component with the same data. Sometimes we need to change the content inside a component. Props come to play in these cases, as they are passed into the component by the user. Let’s see how they work: 
___

## Props in Class Component :-

**Example :-**

#App.js

```javascript

import React, { Component } from 'react';  
class App extends React.Component {  
   render() {     
      return (  
          <div>  
            <h1> Hello { this.props.name } </h1> 
            <p> 
                { this.props.title } in Class Component.
            </p>            
          </div>  
      );  
   }  
}  
export default App;

```

#Index.js

```javascript

import React from 'react';  
import ReactDOM from 'react-dom';  
import App from './App.js';  
  
ReactDOM.render(
    <App 
        name = "World!!",
        title = "Props"    
     />,
     document.getElementById('root')
     );

```

A simple component and then we pass the props as attributes and then access them inside our component using this.props. So props makes components reusable by giving components the ability to receive data from the parent component in the form of props. They are immutable.

**Output :-**

<img src="assets/../../../assets/Output1.png" width="400px">

<hr>

## Props in Functional Component :-

**Example :-**

#App.js

```javascript

function App(props) {
  return (
    <div>  
        <h1> Hello { this.props.name } </h1> 
        <p> 
            { props.title } in Functional Component.
        </p>            
    </div>
  );
}

```

#Index.js

```javascript

import React from 'react';  
import ReactDOM from 'react-dom';  
import App from './App.js';  
  
ReactDOM.render(
    <App 
        name = "World!!",
        title = "Props"    
     />,
     document.getElementById('root')
     );

```

We pass the props as attributes and then access them inside our component using props.title, So props makes components reusable by giving components the ability to receive data from the parent component in the form of props. They are immutable.

**Output :-**

<img src="assets/../../../assets/Output_2.png" width="400px">

<hr>

## React State :-
<br>

* React components has a built-in state object.

* The state object is where you store property values that belongs to the component.

* When the state object changes, the component re-renders.

## Creating the state Object :- 

```javascript

class Car extends React.Component {
  constructor(props) {
    super(props);
    this.state = {title: "Morning"};
  }
  render() {
    return (
      <div>
        <h1>Good Morning!</h1>
      </div>
    );
  }
}

```

## Using the state Object :-

```javascript

class Car extends React.Component {
  constructor(props) {
    super(props);
    this.state = {title: "Morning"};
  }
  render() {
    return (
      <div>
        <h1>Good {this.state.title}!</h1>
      </div>
    );
  }
}

```

## Changing the state Object :-

```javascript

class App extends React.Component {
  constructor(props) {
    super(props);
    this.state = {title: "Morning"};
  }
    changeTitle = () => {
    this.setState({Title : "Night"});
    }

  render() {
    return (
      <div>
        <h1>Good {this.state.title}!</h1>
        <button type="button" onClick={this.changeTitle}>Change Title</button>
      </div>
    );
  }
}

```

**Output :-**

**Before Changing the State :-** 

<img src="assets/../../../assets/Output_3.png" width="400px"><br>

**After changing the state :-** 
<br>

<img src="assets/../../../assets/Output_4.png" width="400px"><br>

<hr>

## React Props vs State :-

**State :-**

* State changes can be asynchronous.
* State is mutable.
* State holds information about the components.
* State cannot be accessed by child components.
* States can be used for rendering dynamic changes with the component.
* Stateless components cannot have State.
* State cannot make components reusable.
* The State is internal and controlled by the React Component itself.

**Props :-**

* Props are read-only.
* Props are immutable.
* Props allow you to pass data from one component to other components as an argument.
* Props can be accessed by the child component.
* Props are used to communicate between components.
* Stateless component can have Props.	
* Props make components reusable.
* Props are external and controlled by whatever renders the component.

___