# **"Hooks in React.js"**

# **what is hooks:**
* Hooks are a new addition in React 
* They let you use state and other React features without  writing a class.
* Hooks alloys funtion compnents to have access to state and other react features.Because of this class component are generally no longer needed.
* Hooks allow us to into react feature such as states and life cycle methods

# **How to Import Hooks in React.js?**

## syntax:
> import React, { useState } from 'react';


# **Rules of Hooks:**
*Hooks are JavaScript functions, but you need to follow two rules when using them.* 

> 1. hooks can only be called inside react funtion components. 

* Don’t call Hooks from regular JavaScript functions. Instead, you can:
1. ✅ Call Hooks from React function components.
2. ✅ Call Hooks from custom Hooks 

> 2. hooks can only be called at the top level of a component.

* Don’t call Hooks inside loops, conditions, or nested functions. 
* Instead,always use Hooks at the top level of your React function, before any early returns. By following this rule, you ensure that Hooks are called in the same order each time a component renders. That’s what allows React to correctly preserve the state of Hooks between multiple useState and useEffect calls. 

> 3. hooks can't be conditional

* We can't call Hooks inside of conditionals, loops, or nested functions in order to ensure that Hooks are called in the same order each time a component renders.So if we conditionally render a Hook, for instance, the order of the Hooks could change between renders of a component, completely messing up the Hooks system.


*here the examples show how to import hooks in react.js*

> Example:

    {
    function Example() {
    // Declare a new state variable, which we'll call "count"
    const [count, setCount] = useState(0);

    return (
    <div>
      <p>You clicked {count} times</p>
      <button onClick={() => setCount(count + 1)}>
        Click me
      </button>
    </div>
    );
    }


# **Two built in hooks:**

 * useState
 * useEffect

# **useState:**

A key difference between class and functional components is the fact that class components have a state while functional components are stateless. The useState hook allows us to add local state to a functional component. This hook holds onto a state between re-renders.

> Example:

    import React, {useState} from "react";
    const FunctionComp = ()=> 
    {

    const [num,setNumValue]= useState(0);
    function setNum(){
    setNumValue (num+1);
    }
     return {
       <div>
       <p> you have been master at React Hooks for {num} days!</p>
       <button onClick={setNum}>Add New Day!></button> 
      </div>
     )
     };
 
    export default FunctionComp;

*Now let’s break down what’s going on in this stateless component.*

* Importing useState

>First things first. Make sure to import { useState } from “react”
* Declaring the state variable for the component

>To declare the state variable, a pair of values needs to be set equal to the useState method. The pair of values are the current state and a function that updates the current state. useState will always return this pair of values. In our example, num and setNumValue are set to useState. We have now declared a new state variable called num and the function that updates it is setNum.
* Initializing the state by passing in the initial value in the useState method

>The state of the variable is initialized by passing an initial value in the useState method. For our example, we chose to pass 0 in useState. Our state variable num is now initially set to 0.
* No use of “this” or “this.state”

>Stateless components do not use the “this” keyword. By using the useState hook, we can call the state directly with the variable we have set for it.

*Note: When using useState, every instance of state should have its own hook.*



## **useEffect:**

The useEffect hook lets us implement lifecycle methods to tell the component to perform an “effect” after it is rendered. The different types of effects are limitless such as changing the background image or document title, adding animations or music, data fetching, and subscriptions.
As previously mentioned , the useEffect hook allows us to use React’s lifecycle methods within a stateless component. It is important to note that the useEffect hook is not a perfect copy of a replacement for all of the lifecycle methods. As a beginner, we’ll look into mirroring the effect componentDidMount and componentDidUpdate.

> Example:

    import React, {useState, useEffect} from "react";
    const FunctionComp = () => 
    {
    const [color, setColor] = useState(" ")
    useEffect(() => 
    {
    console.log("This component was also mounted", [])
    })
    useEffect(()=>
    {
    console.log("The color changed! just like componentDidUpdate",     color)
    });
    const pressRedButton = () => 
    {
    setColor("Red");
    };
    const pressBlueButton = ()=> 
    {
    setColor("Blue");
    };

    return(
    <div>
    <button onClick={pressRedButton}>Red</button>
    <button onClick={pressBlueButton}>Blue</button>
    </div>
    )};

    export default FuntionComp;




*Let’s discuss what is happening here.*

* Importing useEffect

>Again, always make sure you are importing at the top!

* useEffect can be called more than once.

>In the class component, both componentDidMount and componentDidUpdate were declared. In our example, useEffect was called two separate times, with different arguments passed inside.

>useEffect first accepts a function as a parameter. The second parameter in useEffect is an array that contains a list of state variables that rendering/re-rendering should watch out for. If one of the items in the array changes, then the function that was written alongside it will be invoked.

* Copying “componentDidMount”

>Within class components, componentDidMount will execute only after the first render. Remember how we were just talking about the second argument? Let’s utilize that to make sure that useEffect will only be invoked after the initial render.
    useEffect(() => {
    // perform a task
    }, []);

>By passing an empty array in the second argument, useEffect will only be executed after the first render. It would not run again because the value of the array will not change.

>In our example, the console will read “This component was also mounted!” after the initial render. Because there is an empty array in the second argument, this string will no longer be logged to the console during if the component is rendered again.

* Copying “componentDidUpdate”

>When we first used the useEffect hook to mimic componentDidMount, we passed an empty array as the second argument. To mimic componentDidUpdate, we will add the dependency in an array as the second argument.
    useEffect(() => {
    console.log(value); 
    }, [value]);

>Visually, one big difference between this example and the componentDidMount clone, is that the second argument is no longer an empty array. Do you see that “value” that’s inside the array? Anytime that value is true, the function in the first argument will be invoked. The example above is a console.log, but you can implement any function you want.

>In our large code block example, any time “color” is true, the second useEffect hook will run. “color” will always be true in our example, due to the fact that it will either be red or blue. Anytime the color is switched, we will see “The color changed! Just like componentDidUpdate” printed in our terminal.

*Reminder: React first updates the DOM, and then it calls any function that is passed into useEffect()*
