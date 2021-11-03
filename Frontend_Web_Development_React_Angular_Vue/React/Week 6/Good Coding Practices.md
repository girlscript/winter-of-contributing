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
- **Documentation** : Good Coding Practices advocate adding a relevant documentation. It is helpful for clarifying complex parts of the code and makes it easily understandable.Example:Adding a README file is a minimum requirement.
- **Version Control** :

## Some Good Coding Practices in React

- Reusability: Code Reusability can be schieved in React with the help of reusable components.

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

## How it is helpful to a developer ?

- **Clean Production-Quality Code** : Good Coding Practices ensure that clean production-quality code is produced.It is crucial for collaboration and maintainability in Software Development.
- **Refactoring** : Refactoring is an integral part of good coding practices.It gives the developer a chance to clean and modularize the program after he/she has got it in working condition.
- **Documentation** : It makes the code easier to navigate,and quickly convey how and why different components of the application are used to a developer.Example: README file explains what the app does,lists it dependencies and provides sufficiently detailed

## References

-
