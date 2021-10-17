# Introduction to useCallback

### What is (```useCallback```) ?
* useCallback is one of the additional hooks API in React. In general language, callback is a function passed into another function as an argument to be executed later.
* The useCallback hook receives a function as a parameter, and also an array of dependencies. The useCallback hook will return a memoized version of the callback, and it’ll only be changed if one of the dependencies has changed.
* You can also pass an empty array of dependencies. This will execute the function only once. If you don’t pass an array, this will return a new value on every call.

### Why to use (```useCallback```) ?
When a child is rendered again and again without any need in a component useCallback is helpful. It allows you to prevent the re-creation of a function. It is helpful to avoid unnecessary re-renders in our components.
The useCallback hook is very useful when creating an application where some of the functions created are complex and re-rendering the component might make such function run which we don't want, probably because it might slow down the run time.
