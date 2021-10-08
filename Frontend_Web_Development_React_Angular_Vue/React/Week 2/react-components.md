<p align="center">
<img src="https://blog.wildix.com/wp-content/uploads/2020/06/react-logo.jpg" width=400px height=200px>
<h1 align="center"> React Components </h1>

### About :

This md file will cover the basics of React Components.

## What are React Components ?
React components allows us to re use our code at different parts of our application. There are two main types of components. These are class components and function components. We will mostly cover function components since class components are not commonly used any more.

### Function Component Example
```jsx
function Robot() {
  return (
	  <div>
		  <h1>"Beep boop"</h1>
		  <h2>"I'm a robot"</h2>
	  </div>
  )
}
```
NOTE: Components returns HTML elements. You can return multiple HTML tags by returning them inside a div.

### Wrong Example (This will give an error)
```jsx
function Robot() {
  return (
	<h1>"Beep boop"</h1>
	<h2>"I'm a robot"</h2>
  )
}
```

## How To Use Components On Different Projects
To use components inside other react components you first need to export the component you want to use. You can do that like this
```jsx
function Robot() {
  return (
	  <div>
		  <h1>"Beep boop"</h1>
		  <h2>"I'm a robot"</h2>
	  </div>
  )
}

export default Robot;
```
And after that you can import your component and use it like this

```jsx
import Robot from "<./Robot.js";

function AnotherComponent() {
	return (
		<div>
			<Robot/>
			<p>We used the component at top</p>
		</div>
	)
]
```

## Props
Components can have props inside their function. Props are kind of like function arguments, and you send them into the component as attributes.
Example props.

```jsx
function Robot(props) {
  return 
	  <h2>
		  Hello Human! My name is {props.name}!
	  </h2>;
}

ReactDOM.render(<Robot name="Ultron"/>, document.getElementById('root'));
```
