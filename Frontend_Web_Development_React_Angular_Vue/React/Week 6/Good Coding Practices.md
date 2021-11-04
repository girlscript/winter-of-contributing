<h1 align="center">  Good Coding Practices </h1>

## Why Good Coding practices is necessary?

Knowing how to write code that runs efficiently is a very essential skill in Software Development.Optimizing code to be more efficient can mean making it:

- Execute faster
- Take up less space in memory/storage.

Good Coding Practices improve code quality making it consistent,maintainable and help in error reduction and modification.

## Benefits of good coding practices

- **Production-Quality Code** : Following good coding practices makes sure that code meets expectations for production in reliability,efficiency and other aspects.
- **Clean Code** : Good Coding Practices make the code readable,simple and concise.
- **Modular Code** : Modular production code makes the code more organized,efficient and reusable.
- **Structure** : Refactoring ensures that there is improvement of internal structure without changing the external functionality of the code.
- **Documentation** : Good Coding Practices advocate adding a relevant documentation. It is helpful for clarifying complex parts of the code and makes it easily understandable. Example: Adding a README file is a minimum requirement.
- **Version Control** : It is always advisable to make meaningful commits after making changes and use version control tools like git. Merging commits to stay updated and resolving merge commits properly are integral part of following good coding practices.

## Some Good Coding Practices in React

- **Reusability** : Code Reusability can be achieved in React with the help of reusable components.

Button.jsx

```javascript
import React from "react";
import "./Button.css";

export default function Button(props) {
  return (
    <div>
      <button
        type="submit"
        className="button"
        style={{
          marginLeft: `${props.marginLeft}px`,
          marginTop: `${props.marginTop}px`,
        }}
      >
        {props.text}
      </button>
    </div>
  );
}
```

Button.module.css

```css
.button {
  padding: 0.5rem 1rem;

  width: 100%;

  height: auto;

  margin: 0.5rem;

  background: linear-gradient(270deg, #f5b808 0%, #764300 100%);
  box-shadow: 4px 4px 4px rgba(0, 0, 0, 0.69);
  border-radius: 40px;
  border: none;
  text-align: center;
  color: #fef1da;
  font-family: EB Garamond;
  font-style: normal;
  font-weight: bold;
  font-size: 1rem;
  line-height: 1.5rem;
  text-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);
  align-items: center;
}
```

App.js

```javascript
import Button from "../../Reusable/Button/Button";

const App = () => {
  return (
    <div>
      <Button text="Sign In" />
    </div>
  );
};
export default App;
```

This code would render the following output:

![](./assets/gcp_example1.JPG)

##### Explanation:

- Here we have made a customized reusable Button component for the app.
- So,whenever we need a Button we can just use this component.
- Such modular component will help to cover many such places with the same piece of code.

- **DRY** : DRY stands for Don't Repeat Yourself.Using the .map() method we can avoid duplication of code.

```javascript
const App = () => {
  const data = [
    { id: 1, name: "John Doe" },
    { id: 2, name: "Victor Wayne" },
    { id: 3, name: "Jane Doe" },
  ];
  return (
    <div>
      {data.map((user) => (
        <div>
          <h1>{user.id}</h1>
          <h3>{user.name}</h3>
        </div>
      ))}
    </div>
  );
};
export default App;
```

This code would render the following output:

![](./assets/gcp_example2.JPG)

##### Explanation

- We loop through the data array of objects using the JavaScript map() function.
- In this way, we don't have to render each object individually and there is no code duplication.

- **CSS in Javascript**: Using libraries like Emotion provides powerful and predictable style composition with CSS in Javascript. The css prop function gives easy access to common and customizable values and helps to reduce boilerplate code.

```
npm install @emotion/react

```

- **Naming Conventions**:
  - Naming the Component after the name of the Function.
  - Naming the function depending on what it does in camelCase.
  - Using Capital for Component Names in PascalCase.
  - Utility files of components having similar names.

```javascript
import React, { useState } from "react";

function USExample1() {
  // Declare a new state variable, which we'll call "count"
  const [count, setCount] = useState(0);

  return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>Click me</button>
    </div>
  );
}

export default USExample1;
```

##### Explanation

- The above codebloack describes the USExample1 component.
- The mentioned naming conventions have been followed.
- setCount function name is in camelCase and depicts that it sets the count.
- USExample1 is in PascalCase and the function name is same as component name.

- **Comments**: Adding necessary comments before specific codeblocks help to understand their functionality and aid in faster debugging.

```javascript
const App = () => {
  //This is a single line comment for variable declaration.
  return (
    <div>
      <h1>Girlscript Winter of Contributing</h1>
      {/*
        This is a multi-line comment.
        Also helpful in commenting out codeblocks like this that might be needed later.
        <h2>This the Frontend with Framework: React domain.</h2>
      */}
    </div>
  );
};
export default App;
```

- **Linting** : Using Linting keeps the code errorfree and makes sure that the syntax is correct. Example: ESLint-plugin-React provides React specific linting rules for ESLint.

```
npm install eslint --save-dev

```

- **Testing** : Testing the development code before pushing to production is a major check to prevent any problems or breaks on the user end. One such testing tool is the JavaScript test runner, Jest. It uses jsdom to emulate the HTML DOM for testing React.

```
npm install --save-dev jest

```

- **Folder Structure** : There are a few common approaches popular for maintaining a proper folder structure of a React Application.
  - Method 1: Create folders grouped by a specific feature or route. Put all css,js,utils and tests together in these folders.
  - Method 2: Group all same types of files together in a single folder i.e. all .js files grouped together in a folder called javascript , all .css files in css and so on.

An example of such a folder structure is as follows:

![](./assets/folder_structure.JPG)

## How it is helpful to a developer ?

- **Clean Production-Quality Code** : Good Coding Practices ensure that clean production-quality code is produced.It is crucial for collaboration and maintainability in Software Development.
- **Refactoring** : Refactoring is an integral part of good coding practices.It gives the developer a chance to clean and modularize the program after he/she has got it in working condition.
- **Documentation** : It makes the code easier to navigate,and quickly convey how and why different components of the application are used to a developer.Example: README file explains what the app does,lists it dependencies and provides sufficiently detailed

## References

- https://www.codeinwp.com/blog/react-best-practices/
