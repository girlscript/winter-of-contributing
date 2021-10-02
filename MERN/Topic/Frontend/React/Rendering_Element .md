## Rendering Elements

<p> Elements are the Smallest building blocks of React app.
  It describes what you want to see on the screen.
  Example of an element is :-<p>

```

const ele = <h1> Rendering Elements in react </h1>;

```

<p>React DOM update the DOM with the content in the react element. 
An element is a plain object having component instance and its desired properties.
It contains information about its component ( for example, a button), its properties (for example color, height, width, etc..) and any child attribute inside it.
It is an immutable (which can't be changed) object and methods can't be apply on them.</p>

## Rendering an Element into DOM

<p>For rendering any element into browser DOM, we should have a container or root element.
  So, We will have parent div somewhere in our HTML file with id="root" or id="app".</p>

```

<div id="root"></div>

```
<p> ReactDOM manages everything that is inside this div and this root is called as DOM node </p>

<br>

<p> Now, for rendering simple React element to root node, one has to write following code in a javascript file, which is taken as a first parameter while using React.render()
method. </p>

```
 
const element = <h1> This is an example of how to render element to the root node  </h1>
ReactDOM.render(element, document.getElementById('root'));

```

<h3> It produces following output on the screen </h3>

<img width="646" alt="output" src="https://user-images.githubusercontent.com/69414725/134839557-4ded4e80-c154-40e3-90f6-576d8290b253.PNG">

