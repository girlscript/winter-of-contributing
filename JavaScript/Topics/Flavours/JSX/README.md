# JSX:-

JSX **(JavaScript Syntax Extension and occasionally referred as JavaScript XML)** is an extension to the JavaScript language syntax[1] which provides a way to structure component rendering using syntax familiar to many developers. It is similar in appearance to HTML.

React components are typically written using JSX, although they do not have to be as components may also be written in pure JavaScript. 

## Why JSX:-

React embraces the fact that rendering logic is inherently coupled with other UI logic: how events are handled, how the state changes over time, and how the data is prepared for display.

Instead of artificially separating technologies by putting markup and logic in separate files, React separates concerns with loosely coupled units called “components” that contain both. We will come back to components in a further section, but if you’re not yet comfortable putting markup in JS, this talk might convince you otherwise.

React doesn’t require using JSX, but most people find it helpful as a visual aid when working with UI inside the JavaScript code. It also allows React to show more useful error and warning messages.

**Coding JSX:-**

JSX allows us to write HTML elements in JavaScript and place them in the DOM without any _createElement()_  and/or _appendChild()_ methods.

JSX converts HTML tags into react elements.

You are not required to use JSX, but JSX makes it easier to write React applications.

Here are two examples. The first uses JSX and the second does not:

Example 1 (With JSX)
```jsx

  const myelement = <h1>I Love JSX!</h1>;

  ReactDOM.render(myelement, document.getElementById('root'));
```

Example 2 (Without JSX)
```
  const myelement = React.createElement('h1', {}, 'I do not use JSX!');

  ReactDOM.render(myelement, document.getElementById('root'));
```

## Nested elements

Multiple elements on the same level need to be wrapped in a single React element such as the <div> element shown above, a fragment delineated by <Fragment> or in its shorthand form <>, or returned as an array.

## Attributes

JSX provides a range of element attributes designed to mirror those provided by HTML. Custom attributes can also be passed to the component.[4] All attributes will be received by the component as props.

## JavaScript expressions

JavaScript expressions (but not statements) can be used inside JSX with curly brackets {}:

```jsx
<h1>{10+1}</h1>
```

The example above will render:

```html
<h1>11</h1>
```

## Conditional statements

If–else statements cannot be used inside JSX but conditional expressions can be used instead. The example below will render { i === 1 ? 'true' : 'false' } as the string 'true' because i is equal to 1.

```jsx
const App = () => {

  const i = 1;

  return (
      <div>
        <h1>{ i === 1 ? 'true' : 'false' }</h1>
      </div>
  );
}
```

The above will render:

```html
<div>
  <h1>true</h1>
</div>
```

Functions and JSX can be used in conditionals:

```jsx
const App = () => {

   const sections = [1, 2, 3];

   return (
      <div>
        {sections.map((n,i) => (
          /* 'key' is used by react to keep track of list items and their changes */
          /* Each 'key' must be unique */
          <div key={"section-" + n}>
             Section {n} {i === 0 && <span>(first)</span>}
          </div>
        ))}
       </div>
   );
}
```
The above will render:

```html
<div>
    <div>Section 1<span>(first)</span></div>
    <div>Section 2</div>
    <div>Section 3</div>
</div>
```

*Code written in JSX requires conversion with a tool such as Babel before it can be understood by web browsers.*

**The merits of JSX:**

- Less technical people can still understand and modify the required parts. CSS developers and designers will find JSX more familiar than JavaScript alone. I.e., HTML markup looks like HTML markup.
- You can leverage the full power of JavaScript in HTML and avoid learning or using a templating language. JSX is not a templating solution. It is a declarative syntax used to express a tree structure of UI components.
- By adding a JSX transformation step you'll find errors in your HTML you might otherwise miss.
- JSX promotes the idea of inline styles. Which can be a good thing.

 __Contributor :__ [Sakshi Mishra](https://github.com/SakshiMishra1) :heart: 
 
