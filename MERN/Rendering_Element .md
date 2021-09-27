## Rendering Elements

<p> Elements are the Smallest building blocks of React app.
  It describes what you want to see on the screen.
  Example of an element is :-<p>

```

const ele = <h1> Rendering Elements in react </h1>;

```

<p>React DOM update the DOM with the content in the react element. React elements are cheap to create, and are plain objects. Its a simple object that describes DOM node and its attributes.
It is an immutable (which can't be changed) object and methods can't be apply on them.</p>

## Rendering an Element into DOM

<p>For rendering any element into browser DOM, we should have a container or root element.
  So, We will have parent div somewhere in our HTML file with id="root" or id="app".</p>

```

<div id="root"></div>

```
<p> ReactDOM manages everything that is inside this div and this root is called as DOM node </p>

<br>

<p> Now, for rendering simple React element to root node, one has to write following code in App.js file </p>

```

const element = <h1> This is an example of how to render element to the root node  </h1>
ReactDOM.render(element, document.getElementById('root'));

```

<h3> It produces following output on the screen </h3>

<img width="646" alt="output" src="https://user-images.githubusercontent.com/69414725/134839557-4ded4e80-c154-40e3-90f6-576d8290b253.PNG">

## Updating an element in React

<p> React elements ae immutable i.e, once you create them you can't change its children and attributes. Therefore, if you want to update an element in React, you must use render() method several time
to update the value time to time</p>

```

function fun() {
  const element = (
    <div>
      <h1>Example of how to update element in React</h1>
      <h2>It is {new Date().toLocaleTimeString()}.</h2>
    </div>
  );
  ReactDOM.render(element, document.getElementById('root'));
}

setInterval(fun, 1000);

```

<p> This is how it gets updated </p>
<img width="462" alt="time" src="https://user-images.githubusercontent.com/69414725/134840377-b6c230d7-c6d9-43e0-868c-c5c86c9fdbe8.PNG">

<img width="484" alt="time 2" src="https://user-images.githubusercontent.com/69414725/134840610-8f402780-977a-4058-8b0c-a312358a9665.PNG">

<p> In this example, we have created a function fun() which calls the ReactDom.render() method after every one sec of time using setInterval() method. </p>
