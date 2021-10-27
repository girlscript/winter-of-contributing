# <h1 align="center">Create Your Own Hooks</h1>

<br/>

In React versions 16.8 and later , We are able to define our own custom Hooks.

### _Defination_ - Custom Hooks are nothing but a function with a block of code which we can import to different places in our code.

--- 
## Use Of Custom Hooks
The main use custom hooks is to increase code reuesability and remove redundancies.
This is especially useful when we have a large codebase and we need to perform the same task at multiple points in our code. This not only saves us the time during writing the code but also saves us time during debugging as now we only need to fix the code only once.

---
## How To Extract A Custom Hook
Custom Hooks can be extracted from their files just like components. Think of it as exporting a function from the file in which it is defined and then importing that function in the file we need to use it in.

---
## Rules

Before We Learn How to Create Hooks We Should Know about the rules that we need to follow while doing so :- 
 
 * Always Create a separate file for each hook and the name of the file and the function inside the file should start with "use" for example - "useFetch"
 * Call Hooks from React function components.
 * Don't call Hooks inside loops, conditions, or nested functions.

<br/>

---
# How To Create A Custom Hook
To better understand the procedure ,use case and advantages of hooks we are going to perform a simple task first without custom hooks and then we will create our very own Hook.

## _Task_ - Fetch data from an API.

We will be using this API- https://reqres.in/api/users?page=1
A get request on this api returns a list of users and the code to do so is as follows :-
```javascript
function ListOfNames() {

  const [Data, setData] = useState([]);
  const [loading, setloading] = useState(true);
  const [error, seterror] = useState(undefined);

  useEffect(() => {
    fetch('https://reqres.in/api/users?page=1').then((res) => {
      return res.json();
    }).then((json) => {
      setData(json.data);
    }).catch((err) => {
      seterror(err);
    }).then(() => {
      setloading(false);
    })
  }, []);

  return (
    <div className="App">
      {
        loading ? "" :
          error ? <div>{error}</div> :
            Data.map((el) => {
              return <div key={el.id}>{el.first_name}</div>
            })
      }
    </div>
  );
}
```
The Output of above code will be :-

![The Output of above code](./assets/CustomHooksImg-1.png "The Output of above code")

The above code works but if we want to repeat this task multiple times we will have to copy and paste multiple times. Now to avoid lets see how to Create Custom Hooks.

* Step 1- I will create a File Names "useFetch.js"

* Step2 - I will Create a Function in the file with the Same Name and then export default it.

After doing the above steps, we will now refactor our code by cutting all the fetch logic from the code above and pasting it in our "useFetch.js" file

After Refactoring, the "useFetch.js" file will look like this :-
```javascript   
import { useEffect, useState } from 'react'

let useFetch=()=>{
    const [Data, setData] = useState([]);
    const [loading, setloading] = useState(true);
    const [error, seterror] = useState(undefined);
  
    useEffect(() => {
      fetch('https://reqres.in/api/users?page=1').then((res) => {
        return res.json();
      }).then((json) => {
        setData(json.data);
      }).catch((err) => {
        seterror(err);
      }).then(() => {
        setloading(false);
      })
    }, []);
}
export default useFetch;
```


and our original code will look like this :-
```javascript 
function ListOfNames() {
  
  return (
    <div className="App">
      {
        loading ? "" :
          error ? <div>{error}</div> :
            Data.map((el) => {
              return <div key={el.id}>{el.first_name}</div>
            })
      }
    </div>
  );
}

```

Now , to simplify things, we will proceed with treating the useFetch as a normal function which will return a value after doing some work just like any other function would and return the state values like ``` loading ,Data,Error ``` in a object so that when we call this hook from our original file we will have access to them.

So our Code would be Like :-
```javascript
import { useEffect, useState } from 'react'

let useFetch=()=>{
    const [Data, setData] = useState([]);
    const [loading, setloading] = useState(true);
    const [error, seterror] = useState(undefined);
  
    useEffect(() => {
      fetch('https://reqres.in/api/users?page=1').then((res) => {
        return res.json();
      }).then((json) => {
        setData(json.data);
      }).catch((err) => {
        seterror(err);
      }).then(() => {
        setloading(false);
      })
    }, []);


    //return state variables
    return {loading,Data,error};


}
export default useFetch;
```

And That is it, We Have succesfully created our very own custom hook, all we need to do now is use it.

---
## How To Use A Custom Hook

```javascript
import useFetch from './useFetch';
//import useFetch hook

function ListOfNames() {

//destructuring data from returned value of our hook while calling the it just like a function
  let {loading,Data,error}=useFetch();

  return (
      //this part of the code remains unchanged
    <div className="App">
      {
        loading ? "" :
          error ? <div>{error}</div> :
            Data.map((el) => {
              return <div key={el.id}>{el.first_name}</div>
            })
      }
    </div>
  );
}

export default ListOfNames;
```

Like this, we can call our own hook from wherever we want and get the desired result. Even the debugging will be simple as lets assume we find a mistake in our fetch code, instead of fixing it at every point we only need to fix it once. 

<br/>

## And That is how we create a Custom Hook in React.

---
### Reference - https://reactjs.org/docs/hooks-custom.html
