# What is the React component lifecycle?


In React, components go through a lifecycle of events:

1.    Mounting (adding nodes to the DOM)
2.    Updating (altering existing nodes in the DOM)
3.    Unmounting (removing nodes from the DOM)
4.    Error handling (verifying that your code works and is bug-free)

You can think of these events as a component’s birth, growth, and death, respectively. Error handling is like an annual physical.

Let’s look at a simple example. If I told you to build a Hello World component, you might write something like this:

# Example
 class HelloWorld extends React.Component {
   render() {
    return <h1> Hello World </h1> 
   }
}



For people not following along I will provide a brief summary:

# useEffect( () => console.log("I Run On Component Mount"), [] );
Use Effect hook with a single callback function and empty dependency array runs on mount only

# useEffect( () => console.log("I Run On Counter Update"), [ counter ] );
Use Effect hook with a single callback function and a state dependency runs on mount and the mentioned state update in this case being counter

# useEffect( () => console.log("I Run On Any Update") );
Use Effect hook with a single callback function and no dependency array runs on mount and any update state or props update

# useEffect( () => () => console.log("I Run On Update Counter Or Unmount"), [ counter ] );
Use Effect hook with callback function that returns another function with a state in dependency array runs on unmount and specified state or props update in this case counter

# useEffect( () => () => console.log("I Run On Unmount"), [] );

A function returning a function with dependency array empty runs only on component Unmount
