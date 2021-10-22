# Introduction to useCallback

### What is (```useCallback```) ?
* useCallback is one of the additional hooks API in React. In general language, callback is a function passed into another function as an argument to be executed later.
* The useCallback hook receives a function as a parameter, and also an array of dependencies. The useCallback hook will return a memoized version of the callback, and it’ll only be changed if one of the dependencies has changed.
* You can also pass an empty array of dependencies. This will execute the function only once. If you don’t pass an array, this will return a new value on every call.

### Why to use (```useCallback```) ?
* When a child is rendered again and again without any need in a component useCallback is helpful. It allows you to prevent the re-creation of a function. It is helpful to avoid unnecessary re-renders in our components.
* The useCallback hook is very useful when creating an application where some of the functions created are complex and re-rendering the component might make such function run which we don't want, probably because it might slow down the run time.

### How to use (```useCallback```) ?
``` javascript 
import { useCallback } from 'react';

const callbackVariable = useCallback(() => { 
    functionCall(a, b) 
   },[a, b]);
  ```
### Demo 
useCallback will return the same cached function instance if the values of the dependencies are equal. It creates a win win situation over the use of useState.

```javascript
  const incrementDelta = useCallback(() => setDelta(delta => delta + 1), []);

  const increment = useCallback(() => setC(c => c + delta), [delta]);
  ```
 Now we can see that a new increment function is created only when delta changes. Therefore, the counter button only re-renders when delta changes, because a new instance of the onClick property is added. In other words, we only create a new callback, if the part of the closure it uses (i.e. the dependencies) has changed since the previous rendering.

 A really useful feature of useCallback is that it returns the same function instance if the depencies don’t change. Hence we can use it in the dependecy lists of other hooks. For example, let’s create a cached/memoized function which increments both numbers:
 
``` javascript
const incrementDelta = useCallback(() => setDelta(delta => delta + 1), []);
const increment = useCallback(() => setC(c => c + delta), [delta]);

const incrementBoth = useCallback(() => {
    incrementDelta();
    increment();
}, [increment, incrementDelta]); 
```
The new incrementBoth function transitively depends on delta. We could write useCallback(... ,[delta]) and that would work. However, this is a very brittle approach! If we changed the dependencies of increment or incrementDelta, we would have to remember to change the dependencies of incrementBoth.

![useCallback](https://github.com/HastiSutaria/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/React/Week%203/assets/useCallback.png)


### Advantages of (```useCallback```) :

* The use of useCallback hook makes the application faster and more efficient.
* Useful for optimization.
* Increased performance.

### References :

* https://www.geeksforgeeks.org/react-js-usecallback-hook/
* https://dev.to/ilizette/understanding-usecallback-in-react-5d34
