# Polyfill in JavaScript
The web had a beginning but it won't have an end. As the new features come out, they won't be supported by browsers immediately. For example, many new features of modern ECMAScript (JavaScript) are only supported by chrome, and not by all the browsers. This can be a challange where we want to implement all new features but older browsers don't support it. <br>
Every problem has a solution and for this developers had produced a new term, **"Polyfills"**

## Understanding Polyfill
In the layman's term, a polyfill is like a paste that is used to fill holes and cracks in walls to smoothen out any defects in the wall.<br>
For the web, polyfill does the same thing. There might be some functionality missing in the browser that needs to be added.<br>
These functionality are add by **Polyfill** which is defined as :- <br>
***"A polyfill (or polyfiller) is a piece of code (or plugin) that provides the technology that we, the developers, expect the browser to provide natively."***

## Common browsers were polyfills are used
JavaScript is the language used to create a polyfill, but a polyfill can be used to implement various browser features other than ECMAScript (ES5, ES6, etc.) standards and those features include :
   * SVG
   * Canvas
   * Web Storage (local storage / session storage)
   * Video
   * Cross-Origin Resource Sharing (CORS)
   * HTML5 elements
   * CSS responsive design modules
   * Accessibility / ARIA
   * Web Sockets
   * Geo Location
   * Browser State Management and many others!

## Example
#### 1. Defining imaginary Math.double() function
Let's understand with a imaginary function.<br>
Consider a <code>Math.double()</code> function is present in JavaScript standard function that doubles any number we pass into it, but our browser doesn't support this.<br><br>

**Problem:-** How to use Math.double() function, if our browser doesn't support this? <br>
**Solution:-** Create your own Math.double() function and use it in the place of original function.

#### Code to implement
```js
    if(!Math.double){   //checking if there is already Math.double function or not
        Math.double = function(number){
            return number * 2
        }
    }
```
#### Conclusion
If Math.double() function is unsupported by the browser, then our code will use the function we have written

#### 2. Work on original Math.max() function
<code>Math.max()</code> function is already present in JavaScript which is supported by every browser. It returns the maximum of numbers passed as argument. <br>

**Problem :-** If we create the polyfill of <code>Math.max()</code>, it will override the standard function.<br>

For example :-
```js
    //custom Math.max function, which returns the first number of list always
    Math.max = function(...numbers){
        return numbers[0]
    }

    const number1 = 10
    const number2 = 20

    console.log(Math.max(number1, number2)) //it will always return first number i.e, here number1
```

**Solution :-** Bind this function within an *if* check to see, if there is already existing function or not

For example:- 
```js
    if(!Math.max){
        Math.max = function(...numbers){
        return numbers[0]
        }

        const number1 = 10
        const number2 = 20

        console.log(Math.max(number1, number2)) 
        //if Math.max is already supported by browser, then our defined Math.max will not run, else it will run.
    }
```

## Summary
One can put a polyfills folder in their application project structure and can put their JavaScript files in there to be linked and used while running the app. Especially, this is valid if someone is developing their own set of polyfills for their application.<br>

Now you have the power to hack the browser to support the missing features.

## Resources
You can practise Polyfills [here](https://www.w3.org/2001/tag/doc/polyfills/)

*Hope you have a clear understanding of **polyfills** now*

__Contributor__ : [Harsh Anand](https://github.com/its-me-Harsh-Anand)