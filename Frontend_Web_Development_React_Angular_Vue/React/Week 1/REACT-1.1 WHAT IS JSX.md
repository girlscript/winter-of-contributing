
<p align="center">
<img  src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Logo_of_JSX.svg/1280px-Logo_of_JSX.svg.png" 
 alt="JSX-logo" width="40%" />
</p>

# What is JSX? 

## Introduction
JSX (*Javasript XML*) is an extension to the javascript language syntax to write XML-like code for elements and components. It is meant to be transformed into valid Javascript through internal transformations by **Babel**.

---
---

## JSX & React
The popularity of JSX rose due to its use in React, although its not necessary to use JSX in React components but JSX **simplifies concern** and makes our **code elegant**.
JSX allows us to write HTML elements in React and place them in the DOM without any createElement()  and/or appendChild() methods

<p>&nbsp;</p>

### React **without** JSX:
 ```jsx
 React.createElement(
     Heading,
     {color:'red' , className: 'GWOC'},
     GirlScript Winter of Contributing 2021 has officially begun.
    );
```

### React **with** JSX:
```html
<Heading color='red' className='GWOC'>
GirlScript Winter of Contributing 2021 has officially begun.
</Heading>
```
&nbsp;

>### **Note**
> As JSX is an extension of javascript rather than HTML, it uses *camelCase* for attribrute/property naming:
>
> class becomes **className** & tabindex becomes **tabIndex** in JSX.

---
---
 <p>&nbsp;</p>

## Benefits of using JSX in React

* If familiar with HTML, it is **quite easy** to use JSX to build React apps.

* JSX also allows React to show more **useful error and warning messages**.
* It helps in keeping our coder **simpler and neat**.

 &nbsp; 


---  
---

## Code Instructions

### **Storing in variables**
```jsx
const element = <h1>Welcome to GWOC</h1>           // element is used to insert this JSX code anywhere.
```
---

### **Injecting JavaScript Expressions**
```jsx
const name="Sahil Srivastava";

return(
    <div>
    <h1>Welcome to GWOC</h1>
    <p>{name}</p>                   
    </div>
    // It will convert to <p>Sahil Srivastava</p>
)
```
---

### **Attributes with JSX**
```jsx
const image = <img src={iconUrl} />   //iconUrl = "https://url/icon.png"
```
---

### **Conditional Statements in JSX**
You cannot use conditional statements like if-else in JSX code, but u can use ternary operator.

```jsx
const count = 5;
const myElement = <h1>{(count) < 10 ? "Hello" : "Goodbye"}</h1>;    
// count< 10 -> <h1>Hello</h1>
// count>= 10 -> <h1>Goodbye</h1>
```
---

### **JSX is a JavasScript Expression**

This means that you can use JSX inside of *if statements* and *for loops*, assign it to *variables*, accept it as *arguments*, and return it from *functions*.

```jsx
function authenticator(isMember){
    if(isMember===true){
        return <h1>Welcome, Team member.</h1>
    }else{
        return <h1>Welcome,Please register</h1>
    }
}
```
<p>&nbsp;</p>

> ### **Note**
>JSX code must be wrapped inside one top level element or JSX will throw an error.
>
>If you write *two* headers, you must put them inside a parent element, like a **div** element


---
---

## Passing Props in JSX
 
 Props or properties that our custom React components recieve as arguments are passed through JSX from the parent component, So learning how to pass props is a necessity for making dynamic react applications.

 ### Pass any **JavaScript expression** as a prop, by surrounding it with **{ }** :

 ```jsx
 <MyComponent no={5-2} />   // In MyComponent, the value of props.no will be 10 because 5-2 gets evaluated.
 ```

### You can also pass any **Literal** as a prop :
```jsx
<MyComponent message="Welcome to GWOC" />  // props.message = "Welcome to GWOC"
```

---
--- 