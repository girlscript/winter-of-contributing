<p align="center">
  <img src="https://daveceddia.com/images/useContext-hook.png" alt="Sublime's custom image"/>
</p>

<h1 align = "center">
UseContext
</h1>

## What is useContext

useContext provides a way to pass data or state through the component tree without having to pass props down manually through each component. It is designed to share data globally.

## Syntax

```jsx
import { useContext } from "react";
const { Data } = useContext(Context_Name);
```

## Why use useContext

The useContext accepts the value provided by createContext and then re-renders the component whenever its value changes.

## Getting Started with Context

To make use of useContext we need to first create a context<br>
It makes things nicer and simple

App.js

```jsx
import React from "react";
import { createContext, useState } from "react";
import { Data } from "./Data";

const PersonalData = createContext(null);
// Now we have made two context in App.js

export default App = () => {
  const [name, setname] = useState("Rahul");
  const [age, setage] = useState(23);
  const [married, setmarried] = useState(false);

  return (
    <>
      <PersonalData.Provider value={{ name, age, married, changeMarried }}>
        <Data />
      </PersonalData.Provider>
    </>
  );
  const changeMarried = () => {
    setStyle((married) => !married);
  };
};

export { PersonalData };
```

Note That we not passsing any data as props

Now lets Go to the file where we have to use Name and Age and Married

Data.js

```jsx
import React from 'react'
import {PersonalData} from './App'
import {useContext} from 'react'

const { name, age , married, changeMarried} = useContext(
    PersonalData
  );

export default Data = () => {
  return(
    <>
      <h1>
        Data of the Person
      </h1>
      <p>
        Name : {name}
      </p>
      <p>
        Age : {age}
      </p>
      <p>
        Married : {married}
      </p>
      <button onClick = {changeMarried}>Change Marrage Data</button>
    </>
  )

```

## Reference

[React Documentation](https://reactjs.org/docs/hooks-reference.html#usecontext)
<br>
[Medium](https://medium.com/technofunnel/usecontext-in-react-hooks-aa9a60b8a461)
<br>
[Geeks For Geeks](https://www.geeksforgeeks.org/reactjs-usecontext-hook/)
