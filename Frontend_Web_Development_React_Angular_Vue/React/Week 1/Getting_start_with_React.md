<h1 align="center"> ** Getting Started With React** </h1>

## What is React JS?

React JS is one of the most popular and widely used Javascript interfaces to create user interfaces. It is efficient, reusable and flexible and makes the process of coding significantly easier by allowing us to create various components.

## Installation and Setup

To install and setup React JS on your preferred text editor like VSCode,you need to have a recent version of NODE.js installed.Now follow the steps to create a new react app

Step 1: Type the following in the terminal of your text editor to make sure you have Node js successfully installed.

````cd <your-folder-name>
node```

This command will display a message on your terminal showing the version number of Node installed on your system.

Welcome to Node.js v<your-version-number>.
Type ".help" for more information.

## Create React App

Step 2: You can now create a new React Application.

In the same terminal,press CTRL+C twice ,type the following command and press enter to create your own blank new react app.

```npx create-react-app my-react-app```

This will create a new React Application.To make changes in the UI,you have to make changes in the ./src folder of your project.

Step 3: To see your application running,type the following command in your terminal and press enter

```cd my-react-app
npm start```

Step 4: You can now see the demo application running on **http://localhost:3000/** of your default browser.

Now,let's make changes to transform this into a Hello World App.

## Hello World Component with Stateless Functions

Step 1:Create a folder called 'Components' in the ./src folder.

These components can be easily imported in the ./App.js file and thereby rendered on localhost:3000/

Step 2:Inside the ./Components create a new file called 'HelloWorld.jsx'

Step 3:Put the following code in 'HelloWorld.jsx'

````

import React from 'react';

const HelloWorld = () => {
return (

<div>
<h1>Hello World</h1>
</div>
)
}

export default HelloWorld;

```

The most basic component in React is this kind of a stateless functional component.

They do not require any kind of internal state management.

You can treat them as simple Javascript Functions.
This creates a stateless Hello World comnonent that renders a Hello World message on localhost:3000/.

Step 4 :You can now easily import it to ./App.js.

To do so,replace the code in ./App.js with the following:

```

import "./App.css";
import HelloWorld from "./Components/HelloWorld";

function App() {
return (

<div className="App">
<HelloWorld/>
</div>
);
}

export default App;

```

You can make changes in the ./App.css to change the css.And whatever new or modified new class names you add to this file, can be used in ./App.js or any other file by importing it using

`import "./App.css";`
And connecting a particular class to an element using the following syntax.

`<elementTag className="class"> 'Some Text' </elementTag>`

## Absolute Basics of Creating Reusable Components

React is known for the functionality of creating reuable components.And Props play a major role in it.Props are like attributes passed through these stateless functions to render different messages depending on these props.

They still look the same without having to repeat the same code again and again.Let's convert our HelloWorld Component into a Reusable One.To do so,let's make some minor changes and add a prop to our HelloWorld Component.

```

import React from 'react';

const HelloWorld = props => {
return (

<div>
<h1>Hello {props.name}</h1>
<h2>{props.content}</h2>
</div>
)
}

export default HelloWorld;

```

These props hold the information to be passed so that it is reusable .You can pass the value to these props from the parent component i.e. ./App.js in this way.

```

import "./App.css";
import HelloWorld from "./Components/HelloWorld";

function App() {
return (

<div className="App">
<HelloWorld name="Your Name" content="My first Reusable Component in React"/>
<HelloWorld name="World" content="Basics of Reusable Components in React"/>
</div>
);
}

export default App;

```

This way we can use the Reusable Components and render different messages without any code repitition.
```
