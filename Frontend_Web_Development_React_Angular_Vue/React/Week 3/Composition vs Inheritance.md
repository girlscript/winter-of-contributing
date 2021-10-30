
# <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="50px"> Frontend with Framework: React 3.2 Composition vs Inheritance
## <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="30px"> What is Composition in React ?
- React Composition is a development pattern based on React's original component model where we build components from other components using explicit defined props or the 
implicit children prop.
In programming, composition allows usto build more complex functionality by combining small and focused functions.
- For example, think about using `map()` to create a new array from an initial set, and then filtering the result using `filter()`:
```react.js
const list = ['Apple', 'Orange', 'Egg']
list.map(item => item[0]).filter(item => item === 'A') //'A'
```
### <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="20px"> Implementations
- Create specialized version of a component
- Use an outer component to expand and specialize a more generic component:
```react.js
const Button = props => {
  return <button>{props.text}</button>
}

const SubmitButton = () => {
  return <Button text="Submit" />
}

const LoginButton = () => {
  return <Button text="Login" />
}
```
### <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="20px"> Pass methods as props
- A component can focus on tracking a click event, for example, and what actually happens when the click event happens is up to the container component:
```react.js
const Button = props => {
  return <button onClick={props.onClickHandler}>{props.text}</button>
}

const LoginButton = props => {
  return <Button text="Login" onClickHandler={props.onClickHandler} />
}

const Container = () => {
  const onClickHandler = () => {
    alert('clicked')
  }

  return <LoginButton onClickHandler={onClickHandler} />
}
```
### <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="20px"> Using children
- The props.children property allows you to inject components inside other components.
The component needs to output props.children in its JSX:
```react.js
const Sidebar = props => {
  return <aside>{props.children}</aside>
}
```
- and you embed more components into it in a transparent way:
```react.js
<Sidebar>
  <Link title="First link" />
  <Link title="Second link" />
</Sidebar>
```
## <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="30px"> When do we use Composition ?
- React Hooks let you split one component into smaller functions that can be reused across different components. React Hooks remove the cognitive overhead that Render Props
and HoC add when reusing component logic. Composition will make your code more reusable, easier to maintain, and easier to test

## <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="30px"> What is Inheritance in React ?
- Inheritance is a way to achieve code reusability when some objects have the same number of properties that can be shared across the app. Inheritance allows the app to do the
coupling between the parent-child component and reuse properties such as state values and function in its child components.
React does not use inheritance except in the initial component class, which extends from the `react` package.

### <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="20px">Implementation of Inheritance in React
- Inheritance uses the keyword `extends` to allow any component to use the properties and methods of another component connected with the parent. Using the `extends` keyword, 
you can allow the current component to access all the component's properties, including the function, and trigger it from the child component.
This example creates one component called `ParentClass.jsx`.
```react.js
import React from "react";

class ParentClass extends React.Component {
  constructor(props) {
    super(props);
    this.callMe = this.callMe.bind(this);
  }

  // ParentClass function
  callMe() {
    console.log("This is a method from parent class");
  }

  render() {
    return false;
  }
}
```
### <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="20px"> `ParentClass` extends the component from 
- React as `React.component`, which means the newly created component itself is using the inheritance. After creating parent class/component,create one child component, 
Example.jsx.
```react.js
export default class Example extends ParentClass {
  constructor() {
    super();
  }
  render() {
    this.callMe();
    return false;
  }
}
```
- The `Example` class extends `ParentClass` so the child class will access all the properties and methods created inside the parent component.
```react.js
render() {
  this.callMe();
  return false;
}
```
- Here in the child class, the `this.callMe()` function is called the part of parent class implementation, so the parent component's properties and its methods can be accessed
by implementing inheritance in the child component.
## <img src="https://user-images.githubusercontent.com/66662965/139453481-c60f1bc6-d013-4f64-b759-ac66e5fe2ed4.png" width="20px"> When do we use Inheritance ?
- Inheritance in React (or Plain JavaScript Classes) Inheritance is a concept in JavaScript which allows one class to inherit another class's properties to duplicate behavior
and add more features.
- Inheritance is in most scenarios — just not good a viable solution. Because extending components with inheritance more or less lead to a scenario at some point, where the
behaviors cannot be clubbed seamlessly. However, with Composition, it's possible.
### References:
<p>React <a href="https://www.pluralsight.com/guides/react.js-and-inheritance
">React.js and Inheritance!</a></p>
<p>Why don't we use inheritance in react-native too often? <a href="https://stackoverflow.com/questions/57734538/why-dont-we-use-inheritance-in-react-native-too-often
">Stackoverflow.com!</a></p>
<h3>Thanks for reading! ✨ </h3>
