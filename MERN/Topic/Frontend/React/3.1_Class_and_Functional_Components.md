![React-Components](https://www.freecodecamp.org/news/content/images/2020/03/React-components.png)

<p>&nbsp</p>

<h1 align="center">Class and Functional Components and their lifecycles</h1>

## What are Components ?
A component is an independent, reusable code block which divides the UI into smaller pieces. For example, if we were building the UI of Twitter with React:

<p>&nbsp</p>

![Twitter-UI](https://www.freecodecamp.org/news/content/images/2020/11/twit.png)

<p>&nbsp</p>

Rather than building the whole UI under one single file, we can and we should divide all the sections (marked with red) into smaller independent pieces. In other words, these are components.

In other words, Components are the foundation of every React project, and a typical React app will have a large number of them. Simply defined, a component is a JavaScript class or function that receives properties(props) as input and produces a React element that defines how a portion of the UI (User Interface) should appear.

There are two sorts of components: 
    
- Class components, and
- Functional components.


In order to understand *Components* one should have a knowledge of what *props* are, they are pretty simple and you can understand them as:

    " Arguments sent into React components are known as props.
    They are the short-form for "properties" and HTML attributes are used to pass props to components."

The simplest way to define a component is to write a JavaScript function:

```js
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}
```

This function is a valid React component because it accepts a single "props" (which stands for properties) object argument with data and returns a React element. We call such components "function components" because they are literally JavaScript functions.

You can also use an [ES6 class](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes) to define a component:

```js
class Welcome extends React.Component {
  render() {
    return <h1>Hello, {this.props.name}</h1>;
  }
}
```

The above two components are equivalent from React’s point of view.

---

<p>&nbsp</p>

<h1> Class Components</h1>

These components are created using [ES6’s class](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes) syntax. They have some additional features such as the ability to contain logic (for example methods that handle onClick events), local state and other capabilities.

<p>&nbsp</p>

## Create a Class Component
When creating a React component, the component's name must start with an upper case letter.

The component has to include the `extends React.Component` statement, this statement creates an inheritance to `React.Component`, and gives your component access to React.Component's functions.

The component also requires a `render()` method, this method returns HTML.

### For Example
Create a Class component called `Car`.

```js
class Car extends React.Component {
  render() {
    return <h2>Hi, I am a Car!</h2>;
  }
}
```

Now your React application has a component called Car, which returns a `<h2>` element.

To use this component in your application, use similar syntax as normal HTML: `<Car />`

Now, Display the `Car` component in the "root" element:

```js
ReactDOM.render(<Car />, document.getElementById('root'));
```

As you explore other resources, you might find class components referred to as smart, container or stateful components.

- **Class** because they are basically classes

- **Smart** because they can contain logic

- **Stateful** because they can hold and/or manage local state

- **Container** because they usually hold/contain numerous other (mostly functional) components


## Class Properties
You may make your handler functions easier to understand by using class properties. Babel provides transform-class-properties, which is included by default in React Native.

```js
class AwesomeProject extends Component {
  state = {n: 0}
  handleOnPress = () => this.setState({n: this.state.n + 1})
}
```

**With anonymous arrow functions**

This creates a new function on every render potentially invalidating any efforts to memorise in Button.

```js
class AwesomeProject extends Component {
  constructor() {
    super()
    this.state = {n: 0}
  }
  handleOnPress() {
     this.setState({n: this.state.n + 1})
  }
  render() {
    return <Button onPress={() => this.handleOnPress()} />
  }
}
```

**With bind()**

The same function is reused on every render this is the ES6 best practice.

```js
class AwesomeProject extends Component {
  constructor() {
    super()
    this.state = {n: 0}
    this.handleOnPress = this.handleOnPress.bind(this)
  }
  handleOnPress() {
     this.setState({n: this.state.n + 1})
  }
  render() {
    return <Button onPress={this.handleOnPress} />
  }
}
```

**With Class properties**

We remove the need for a constructor and avoid manually binding the handler.

```js
class AwesomeProject extends Component {
   state = {n: 0}
   handleOnPress = () => {
     this.setState({n: this.state.n + 1})
   }
   render() {
    return <Button onPress={this.handleOnPress} />
  }
}
```

*Class components have a considerably larger amount of markup. Using them excessively and unnecessarily can negatively affect performance as well as code readability, maintainability and testability.*

---

<p>&nbsp</p>

<h1> Functional Components</h1>

A functional component is basically a JavaScript/ES6 function that returns a React element (JSX). According to React's official docs, the function below is a valid functional component:

```js
function Welcome(props) {
  return <h1>Hello, {props.name}</h1>;
}
```
Alternatively, you can also create a functional component with the arrow function definition:

```js
const Welcome = (props) => { 
  return <h1>Hello, {props.name}</h1>; 
}
```

> This function is a valid React component because it accepts a single “props” (which stands for properties) object argument with data and returns a React element. — [reactjs.org](https://reactjs.org/)


## Create a Functional Component

A Functional component also returns HTML, and behaves pretty much the same way as a Class component.

### For Example

Create a Function component called `Car`.

```js
function Car() {
  return <h2>Hi, I am also a Car!</h2>;
}
```

Once again your React application has a Car component.

Now, you can display the Car component in the "root" element:

```js
ReactDOM.render(<Car />, document.getElementById('root'));
```

So a Functional Component in React:

- is a **JavaScript/ES6** function

- must return a React element (**JSX**)

- always starts with a capital letter (naming convention)

- takes **props** as a parameter if necessary


## Advantage of Functional Components over Class Components

<p>&nbsp</p>

 - **It's simple to reason about functional components.**
    
     Functional components make your code easier to read and comprehend, which is one of its primary advantages. You might not think this is a huge problem if you're working on a project by yourself. But take my word for it. You'll understand when you take a one-month break from working on a project and return to try to figure out what your previous self was thinking.

- **Functional components are easy to test** 

    It’s easier to test functional components because you don’t have to worry about hidden state or [side effects](https://en.wikipedia.org/wiki/Side_effect_(computer_science)). For every input (props), functional components have exactly one output.

    Given certain props, one can assert exactly what the HTML output will be. This means you don’t have to rely on any mocking, state manipulation, or crazy testing libraries. It’s pretty awesome.

- **Functional components can potentially have a better performance**

    You'd assume that the lack of state or lifecycle methods in functional components would allow React's internals to avoid needless overhead like lifecycle events. Unfortunately, this is not the situation right now.

    In the words of [release notes](https://reactjs.org/blog/2015/10/07/react-v0.14.html#stateless-functional-components):

    > “In the future, we’ll also be able to make performance optimizations specific to these components by avoiding unnecessary checks and memory allocations”  — [React v0.14](https://reactjs.org/blog/2015/10/07/react-v0.14.html)

- **Functional components are easy to debug**

    To generate an output, functional components rely solely on the props they are provided, making debugging easy. There's no need to keep a running track of the component's status to figure out what's going on.

    It's simple to trace the route of your code and figure out what's going on if you know the props being given in.

- **Functional components are more reusable**

    *<h4>Functional Checkbox</h4>*
    
    ```js
    const Checkbox = ({ checked, label, handleClick }) => (
   <div
      className={checked ? 'Checkbox-container checked' : 'Checkbox-container'}
      onClick={handleClick}
      role="button"
      tabIndex={0}
      data-label={label}
   >
      <p className="label" data-label={label}>{label</p>
   </div>
    );
    ```

    Making the checkbox a functional component requires us to reduce it to its most basic characteristics, which has the unintended consequence of making it more widely applicable. Consider it a compelled excellent practise.

    The checkbox component does not need to decide on its default state or what should happen when it is clicked. This is instead assigned to a higher-level component. Could you do the same thing using a class component? Sure, but a functional component pushes us to adhere to best practises, resulting in a more reusable, cleaner component.

- **Functional components can reduce coupling**

    Coupling is one of the most important principles in clean code. Coupling is a term that defines how dependent one thing is on another. When we say our code has minimal coupling, we mean that we can modify one part of it without affecting the others. As a result, our code is more manageable.

    The limitations imposed by functional components require us to remove much of the logic that would otherwise reside within a component to a higher level component, a state management library like Redux, or the new [React Context API](https://reactjs.org/docs/context.html#api). Low coupling seems a lot like separating logic from display.

---


## Converting a Function to a Class

### Initial (Functional) Component State

```js
function Clock(props) {
  return (
    <div>
      <h1>Hello, world!</h1>
      <h2>It is {props.date.toLocaleTimeString()}.</h2>
    </div>
  );
}

function tick() {
  ReactDOM.render(
    <Clock date={new Date()} />,
    document.getElementById('root')
  );
}

setInterval(tick, 1000);
```

However, it misses a crucial requirement: the fact that the `Clock` sets up a timer and updates the UI every second should be an implementation detail of the `Clock`.

Ideally we want to write this once and have the `Clock` update itself:

```js
ReactDOM.render(
  <Clock />,
  document.getElementById('root')
);
```

Now, you can convert a function component like `Clock` to a class in five steps:

1. Create an [ES6 class](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes), with the same name, that extends `React.Component`.

2. Add a single empty method to it called `render()`.

3. Move the body of the function into the `render()` method.

4. Replace `props` with `this.props` in the `render()` body.

5. Delete the remaining empty function declaration.

```js
class Clock extends React.Component {
  render() {
    return (
      <div>
        <h1>Hello, world!</h1>
        <h2>It is {this.props.date.toLocaleTimeString()}.</h2>
      </div>
    );
  }
}
```

---

<h1>Hooks</h1>

*Hooks are a new addition in [React 16.8](https://reactjs.org/blog/2019/02/06/react-v16.8.0.html).* 

They allow you to use state and other React features without writing a class. Hooks are the functions which "hook into" React state and lifecycle features from function components. It does not work inside classes.

<p>&nbsp</p>

### When to use Hooks ?
If you write a function component, and then you want to add some state to it, previously you do this by converting it to a class. But, now you can do it by using a Hook inside the existing function component.

<p>&nbsp</p>

### Need and Motivation

- **It’s hard to reuse stateful logic between components**

    With Hooks, you can extract stateful logic from a component so it can be tested independently and reused. *Hooks allow you to reuse stateful logic without changing your component hierarchy.* This makes it easy to share Hooks among many components or with the community.

- **Complex components become hard to understand**

    *Hooks let you split one component into smaller functions based on what pieces are related (such as setting up a subscription or fetching data)*, rather than forcing a split based on lifecycle methods. You may also opt into managing the component’s local state with a reducer to make it more predictable.

- **Classes confuse both people and machines**

    *Hooks let you use more of React’s features without classes*. Conceptually, React components have always been closer to functions. Hooks embrace functions, but without sacrificing the practical spirit of React. Hooks provide access to imperative escape hatches and don’t require you to learn complex functional or reactive programming techniques.

---

<p>&nbsp</p>

## Data Fetching using the Fetch API with useEffect() hook

<p>&nbsp</p>

APIs are what we can use to supercharge our React applications with data. There are certain operations that can’t be done on the client-side, so these operations are implemented on the server-side. We can then use the APIs to consume the data on the client-side.

APIs consist of a set of data, that is often in JSON format with specified endpoints. When we access data from an API, we want to access specific endpoints within that API framework. We can also say that an API is a contractual agreement between two services over the shape of request and response. The code is just a byproduct. It also contains the terms of this data exchange.

In React, there are various ways we can consume REST APIs in our applications, these ways include using the JavaScript inbuilt `fetch()` method and Axios which is a promise-based HTTP client for the browser and Node.js.

<p>&nbsp</p>

### What is a REST API ?
A [REST API](https://www.smashingmagazine.com/2018/01/understanding-using-rest-api/) is an API that follows what is structured in accordance with the REST Structure for APIs. REST stands for “Representational State Transfer”. It consists of various rules that developers follow when creating APIs.

<p>&nbsp</p>

### An Example of a REST API Response

<p>&nbsp</p>

The way a REST API is structured depends on the product it’s been made for — but the rules of REST must be followed.

The sample response below is from the [Github Open API](https://docs.github.com/en/rest). We’ll be using this API to build a React app later on in this tutorial.

```js
{
"login": "hacktivist123",
"id": 26572907,
"node_id": "MDQ6VXNlcjI2NTcyOTA3",
"avatar_url": "https://avatars3.githubusercontent.com/u/26572907?v=4",
"gravatar_id": "",
"url": "https://api.github.com/users/hacktivist123",
"html_url": "https://github.com/hacktivist123",
"followers_url": "https://api.github.com/users/hacktivist123/followers",
"following_url": "https://api.github.com/users/hacktivist123/following{/other_user}",
"gists_url": "https://api.github.com/users/hacktivist123/gists{/gist_id}",
"starred_url": "https://api.github.com/users/hacktivist123/starred{/owner}{/repo}",
"subscriptions_url": "https://api.github.com/users/hacktivist123/subscriptions",
"organizations_url": "https://api.github.com/users/hacktivist123/orgs",
"repos_url": "https://api.github.com/users/hacktivist123/repos",
"events_url": "https://api.github.com/users/hacktivist123/events{/privacy}",
"received_events_url": "https://api.github.com/users/hacktivist123/received_events",
"type": "User",
"site_admin": false,
"name": "Shedrack akintayo",
"company": null,
"blog": "https://sheddy.xyz",
"location": "Lagos, Nigeria ",
"email": null,
"hireable": true,
"bio": "☕ Software Engineer | | Developer Advocate🥑|| ❤ Everything JavaScript",
"public_repos": 68,
"public_gists": 1,
"followers": 130,
"following": 246,
"created_at": "2017-03-21T12:55:48Z",
"updated_at": "2020-05-11T13:02:57Z"
} 
```

The response above is from the Github REST API when I make a `GET` request to the following endpoint `https://api.github.com/users/hacktivist123`. It returns all the stored data about a user called hacktivist123. With this response, we can decide to render it whichever way we like in our React app.

### Parameters for the fetch() API

- `resource`

    This is the path to the resource you want to fetch, this can either be a direct link to the resource path or a request object.

- `init`

    This is an object containing any custom setting or credentials you’ll like to provide for your `fetch()` request. The following are a few of the possible options that can be contained in the `init` object:
    
    - `method`

        This is for specifying the HTTP request method e.g GET, POST, etc.

    - `headers`

        This is for specifying any headers you would like to add to your request, usually contained in an object or an object literal.

    - `body`

        This is for specifying a body that you want to add to your request: this can be a `Blob`, `BufferSource`, `FormData`, `URLSearchParams`, `USVString`, or `ReadableStream` object.

    - `mode`

        This is for specifying the mode you want to use for the request, e.g., `cors`, `no-cors`, or `same-origin`.

    - `credentials`

        This for specifying the request credentials you want to use for the request, this option must be provided if you consider sending cookies automatically for the current domain.


<p>&nbsp</p>

### Basic Syntax for fetch() API
A basic fetch request is really simple to write, take a look at the following code:

```js
fetch('https://api.github.com/users/hacktivist123/repos')
  .then(response => response.json())
  .then(data => console.log(data));
```

In the code above, we are fetching data from a URL that returns data as JSON and then printing it to the console. The simplest form of using fetch() often takes just one argument which is the path to the resource you want to fetch and then return a promise containing the response from the fetch request. This response is an object.

The response is just a regular HTTP response and not the actual JSON. In order to get the JSON body content from the response, we’d have to change the response to actual JSON using the json() method on the response.

<p>&nbsp</p>

## Let’s Consume A REST API With Fetch Method

In this section, we will be building a simple react application that consumes an external API, we will be using the Fetch method to consume the API.

The simple application will display all the repositories and their description that belongs to a particular user. For this tutorial, I’ll be using my GitHub username, you can also use yours if you wish.

The first thing we need to do is to generate our React app by using `create-react-app`:

```js
npx create-react-app myRepos
```

The command above will bootstrap a new React app for us. As soon as our new app has been created, all that’s left to do is to run the following command and begin coding:

```js
npm start
```

If our React is created properly we should see this in our browser window when we navigate to `localhost:3000` after running the above command.

![localhost:3000](https://res.cloudinary.com/indysigner/image/fetch/f_auto,q_80/w_2000/https://cloud.netlifyusercontent.com/assets/344dbf88-fdf9-42bb-adb4-46f01eedd629/fbbf2489-eb0b-42ff-8fe7-7fa5387031cd/rest-api-react-fetch-axios-initial-app-screen.png)

<p>&nbsp</p>

In your `src` folder, create a new folder called `component`. This folder will hold all of our React components. In the new folder, create two files titled *List.js* and *withListLoading.js*. These two files will hold the components that will be needed in our app.

The *List.js* file will handle the display of our Repositories in the form of a list, and the *withListLoading.js* file will hold a higher-order component that will be displayed when the Fetch request we will be making is still ongoing.

In the `List.js` file we created inside the `components` folder, let’s paste in the following code:

```js
import React from 'react';
const List = (props) => {
  const { repos } = props;
  if (!repos || repos.length === 0) return <p>No repos, sorry</p>;
  return (
    <ul>
      <h2 className='list-head'>Available Public Repositories</h2>
      {repos.map((repo) => {
        return (
          <li key={repo.id} className='list'>
            <span className='repo-text'>{repo.name} </span>
            <span className='repo-description'>{repo.description}</span>
          </li>
        );
      })}
    </ul>
  );
};
export default List;
```
The code above is a basic React list component that would display the data, in this case, the repositories name and their descriptions in a list.

Now, Let us understand the code bit by bit.

```js
const { repos } = props;
```

We are initializing a prop for the component called repos.

```js
if (repos.length === 0 || !repos) return <p>No repos, sorry</p>;
```

Here, all we are doing is making a conditional statement that will render a message when the length of the repos we get from the request we make is equal to zero.

```js
return (
    <ul>
      <h2 className='list-head'>Available Public Repositories</h2>
      {repos.map((repo) => {
        return (
          <li key={repo.id} className='list'>
            <span className='repo-text'>{repo.name} </span>
            <span className='repo-description'>{repo.description}</span>
          </li>
        );
      })}
    </ul>
  );
```

Here, we are mapping through each of the repositories that will be provided by the API request we make and extracting each of the repositories names and their descriptions then we are displaying each of them in a list.

```js
export default List;
```

Here we are exporting our `List` component so that we can use it somewhere else.

In the *withListLoading.js* file we created inside the components folder, let’s paste in the following code:

```js
import React from 'react';

function WithListLoading(Component) {
  return function WihLoadingComponent({ isLoading, ...props }) {
    if (!isLoading) return <Component {...props} />;
    return (
      <p style={{ textAlign: 'center', fontSize: '30px' }}>
        Hold on, fetching data may take some time :)
      </p>
    );
  };
}
export default WithListLoading;
```

The code above is a higher-order React component that takes in another component and then returns some logic. In our case, our higher component will wait to check if the current `isLoading` state of the component it takes is `true` or `false`. If the current `isLoading` state is true, it will display a message *Hold on, fetching data may take some time :)*. Immediately the `isLoading` state changes to `false` it’ll render the component it took in. In our case, it’ll render the **List** component.

In your **App.js* file inside the src folder, let’s paste in the following code:

```js
import React, { useEffect, useState } from 'react';
import './App.css';
import List from './components/List';
import withListLoading from './components/withListLoading';
function App() {
  const ListLoading = withListLoading(List);
  const [appState, setAppState] = useState({
    loading: false,
    repos: null,
  });

  useEffect(() => {
    setAppState({ loading: true });
    const apiUrl = `https://api.github.com/users/hacktivist123/repos`;
    fetch(apiUrl)
      .then((res) => res.json())
      .then((repos) => {
        setAppState({ loading: false, repos: repos });
      });
  }, [setAppState]);
  return (
    <div className='App'>
      <div className='container'>
        <h1>My Repositories</h1>
      </div>
      <div className='repo-container'>
        <ListLoading isLoading={appState.loading} repos={appState.repos} />
      </div>
      <footer>
        <div className='footer'>
          Built{' '}
          <span role='img' aria-label='love'>
            💚
          </span>{' '}
          with by Shedrack Akintayo
        </div>
      </footer>
    </div>
  );
}
export default App;
```

Our App.js is a functional component that makes use of React Hooks for handling state and also side effects.

Let us understand the code above bit by bit.

```js
import React, { useEffect, useState } from 'react';
import './App.css';
import List from './components/List';
import withListLoading from './components/withListLoading';
```

Here, we are importing all the external files we need and also the components we created in our components folder. We are also importing the React Hooks we need from React.

```js
const ListLoading = withListLoading(List);
  const [appState, setAppState] = useState({
    loading: false,
    repos: null,
  });
```

Here, we are creating a new component called `ListLoading` and assigning our `withListLoading` higher-order component wrapped around our list component. We are then creating our state values `loading` and `repos` using the `useState()` React Hook.

```js
useEffect(() => {
    setAppState({ loading: true });
    const user = `https://api.github.com/users/hacktivist123/repos`;
    fetch(user)
      .then((res) => res.json())
      .then((repos) => {
        setAppState({ loading: false, repos: repos });
      });
  }, [setAppState]);
```

Here, we are initializing a `useEffect()` React Hook. In the `useEffect()` hook, we are setting our initial loading state to true, while this is true, our higher-order component will display a message. We are then creating a constant variable called `user` and assigning the API URL we’ll be getting the repositories data from.

We are then making a basic `fetch()` request like we discussed above and then after the request is done we are setting the app loading state to false and populating the repos state with the data we got from the request.

```js
return (
    <div className='App'>
      <div className='container'>
        <h1>My Repositories</h1>
      </div>
      <div className='repo-container'>
        <ListLoading isLoading={AppState.loading} repos={AppState.repos} />
      </div>
    </div>
  );
}
export default App;
```

Here we are basically just rendering the Component we assigned our higher-order component to and also filling the `isLoading` prop and `repos` prop with their state value.

Now, we should see this in our browser, when the fetch request is still being made, courtesy of our `withListLoading` higher-order component:


![Loading](https://res.cloudinary.com/indysigner/image/fetch/f_auto,q_80/w_2000/https://cloud.netlifyusercontent.com/assets/344dbf88-fdf9-42bb-adb4-46f01eedd629/287290a1-eb17-486e-9630-a5a13b2b3697/rest-api-react-fetch-axios-app-loading-state.png)


<p>&nbsp</p>

Now, when the fetch request has completed successfully, we should see the repositories displayed in a list format as below:

![List-display](https://res.cloudinary.com/indysigner/image/fetch/f_auto,q_80/w_2000/https://cloud.netlifyusercontent.com/assets/344dbf88-fdf9-42bb-adb4-46f01eedd629/8b693782-ce77-4cb4-b4e9-2ef560b076d8/rest-api-react-fetch-axios-finished-app.png)

<p>&nbsp</p>

Now, let’s style our project a little bit, in your App.css file, copy and paste this code.

```css
@import url('https://fonts.googleapis.com/css2?family=Amiri&display=swap');
:root {
  --basic-color: #23cc71;
}
.App {
  box-sizing: border-box;
  display: flex;
  justify-content: center;
  align-items: center;
  flex-direction: column;
  font-family: 'Amiri', serif;
  overflow: hidden;
}
.container {
  display: flex;
  flex-direction: row;
}
.container h1 {
  font-size: 60px;
  text-align: center;
  color: var(--basic-color);
}
.repo-container {
  width: 50%;
  height: 700px;
  margin: 50px;
  box-shadow: 0 2px 10px rgba(0, 0, 0, 0.3);
  overflow: scroll;
}
@media screen and (max-width: 600px) {
  .repo-container {
    width: 100%;
    margin: 0;
    box-shadow: none;
  }
}
.repo-text {
  font-weight: 600;
}
.repo-description {
  font-weight: 600;
  font-style: bold;
  color: var(--basic-color);
}
.list-head {
  text-align: center;
  font-weight: 800;
  text-transform: uppercase;
}
.footer {
  font-size: 15px;
  font-weight: 600;
}
.list {
  list-style: circle;
}
```

So in the code above, we are styling our app to look more pleasing to the eyes, we have assigned various class names to each element in our App.js file and thus we are using these class names to style our app.

Once we’ve applied our styling, our app should look like this:

![Modified-display](https://res.cloudinary.com/indysigner/image/fetch/f_auto,q_80/w_2000/https://cloud.netlifyusercontent.com/assets/344dbf88-fdf9-42bb-adb4-46f01eedd629/54fe00da-f1a4-4610-bead-b4904a4b4788/rest-api-react-fetch-axios-app-with-axios.png)

<p>&nbsp</p>

Now our app looks much better. 😊

So that’s how we can use the Fetch API to consume a REST API.

---

<p>&nbsp</p>

## Data Fetching using the Axios API with componentDidMount() method

<p>&nbsp</p>

A React component can be created using a function or a class-based component, and the class-based component can use different lifecycle hooks.

But quite often, we need to load data from the server to render the same data into the DOM. To do that, we can use a widely used lifecycle hook called `componentDidMount`.

The `componentDidMount()` method will be triggered as soon as the component is mounted or inserted into the DOM.

The basic syntax to use `componentDidMount()` is looks like this:

```js
componentDidMount() {
    // your source code to load initial data
}
```

This method used widely by developers because it loads immediately once the component is mounted. Hence, it’s quite handy when we need to get data from a remote endpoint.

This hook is also used to apply or configure the subscription with the initial render, but we need to unsubscribe it using another hook called `componentWillUnmount()`.

Let’s look at an example of fetching data from a remote endpoint and using the same data into `render()` to render it into the DOM.

We call the API using Axios, and the method should look like this.

```js
async getTodos() {
    let data = await axios
      .get("https://jsonplaceholder.typicode.com/todos?_limit=10")
      .then(function(response) {
        return response;
      })
      .catch(function(error) {
        console.log(error);
      });
    this.setState({ todos: data.data });
  }
```

**Note:** We have used the free API endpoint `json-placeholder`, which provides the dummy data for the demo purpose.

In the above method, we have used Axios as the HTTP promise-based client, which uses `XMLHttpRequests` to request data from the browser.

Now let’s call the method `getTodos()` from the `componentDidMount()` hook, like this:

```js
  componentDidMount() {
    this.getTodos();
  }
```

By calling this method, we will be able to call the remote endpoint once the current component is mounted and added into the DOM tree.

Finally, we will use the response data coming from the API in the `render()`, like this:

```js
  render() {
    const { todos } = this.state;
    return (
      <div>
        <h3>Using componentDidMount for initial data render</h3>
        <hr />
        {todos &&
          todos.map(todo => {
            return (
              <table>
                <tr>
                  <td>{todo.id}</td>
                  <td>
                    <p key={todo.id}>{todo.title}</p>
                  </td>
                </tr>
              </table>
            );
          })}
      </div>
    );
  }
```

Here in the `render()` method, we have used a `map()` in order to iterate the items of the `todos` that are stored in the state object.

The complete component code should look like this:

```js
import React, { Component } from "react";
import { render } from "react-dom";
import axios from "axios";

class Usingdidmount extends Component {
  constructor() {
    super();
    this.state = {
      name: "React"
    };
    this.getTodos = this.getTodos.bind(this);
  }

  componentDidMount() {
    this.getTodos();
  }

  async getTodos() {
    let data = await axios
      .get("https://jsonplaceholder.typicode.com/todos?_limit=10")
      .then(function(response) {
        return response;
      })
      .catch(function(error) {
        console.log(error);
      });
    this.setState({ todos: data.data });
  }

  render() {
    const { todos } = this.state;
    return (
      <div>
        <h3>Using componentDidMount for initial data render</h3>
        <hr />
        {
        todos &&
          todos.map(todo => {
            return (
              <table>
                <tr>
                  <td>{todo.id}</td>
                  <td>
                    <p key={todo.id}>{todo.title}</p>
                  </td>
                </tr>
              </table>
            );
          })}
      </div>
    );
  }
}

export default Usingdidmount;
```

In the above example, we have implemented:

 - The `componentDidMount()` hook that calls the `getTodos()` method in order to fetch data from the API using AXIOS client

- The `getTodos()` method, where we have implemented an actual AXIOS snippet to get the response

- The `render()` method, where we rendered the data using the `map()` into the actual DOM tree.

---

<p>&nbsp</p>

 ## External References

  - [45% Faster React Functional Components](https://medium.com/missive-app/45-faster-react-functional-components-now-3509a668e69f)

  - [React Today and Tomorrow and 90% Cleaner React With Hooks](https://www.youtube.com/watch?v=dpw9EHDh2bM)

  - [How To Use Axios With React](https://www.freecodecamp.org/news/how-to-use-axios-with-react/#how-to-set-up-axios-with-react)