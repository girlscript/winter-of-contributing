# What is JSX?

[JSX](https://www.geeksforgeeks.org/reactjs-introduction-jsx/) stands for JavaScript XML. It is simply a syntax extension of JavaScript. It allows us to directly write HTML in React (within JavaScript code). It is an **XML/HTML**- like syntax used by React that extends *ECMAScript* so that **XML/HTML**- like text can co-exist with JavaScript/React code.

With **JSX**:
```jsx
   const jsx_eg = <h1>GWoc 2021!!</h1>
   //Output: GWoC 2021
   //const is a javascript keyword but the h1 tag is HTML
```

Without **JSX**:

```jsx
   const jsx_eg = React.createElement("h1", null, "GWoc 2021!!");
```


# Why use JSX?
-   faster than *JavaScript* because of optimization during translation of the code to *JavaScript*.
-   *Type-safe* because most of the errors are found at compile time.
-   Easy template creation.
- JSX allows us to write HTML elements in JavaScript and place them in the DOM without any `createElement()` and/or `appendChild()` methods.

# **Characteristics of JSX:**
-   Not mandatory to use 
-   Allows to write any *JavaScript* expression inside **{ }** and compiler will treat it js code hence after compilation, *JSX* expressions become regular *JavaScript* function calls
-   To insert a large block of *HTML* we have to write it in a **( )**
-   Produces react elements.
-   Follows *XML* rule
-   *JSX* uses camelcase notation for naming *HTML* attributes

# Things that can end up in JSX code:

-   Strings
-   **HTML** elements
-   Custom components
-   **Javascript** code

# Example Syntax of JSX

````js
	class GWoC_JSX extends React.Component {
	    render() {
	        const year="2021";
	        return <div>
		        <h1>Hello GWoC { 2020 +1 } family😀</h1>;
			    <h2>This is the JSX demo in { year }</h2>
			  </div>
	    }
	}
	ReactDOM.render(<GWoC_JSX />, document.getElementById('root'));
````
GWoC_JSX class component is returning the JSX that contains an HTML code and rendering that on the screen using the `ReactDOM.render` method. Compiler reads everything inside the **{ }** as *JavaScript*.

# JavaScript inside JSX
The expressions of JavaScript can be used inside of JSX. We have to wrap it with curly brackets **{ }.**

```javascript
import React,  {  Component  }  from  'react';
class  GWoC_JSX extends  Component{
render(){  
	return(
		<div>
		<h1>{ 2020+1 }</h1>
		<h1>Hello GWoC 2021 family!!</h1>
		<h2>JSX Demo</h2>
		<p  className="demo">JavaScript inide JSX</p>
		</div>
		);
	}
}
export default GWoC_JSX;
```

# **JSX Comments**
For writing comments, we have to put curly braces **{}.** The comments in JSX are begin with /* and ends with */ as in the case of JSX expressions.

```javascript
import React,  {  Component  }  from  'react';
class  GWoC_JSX extends  Component{
	render()
		return(
		<div>
			<h1>Hello GWoC { 2020+1 } familt!!</h1>
			<h2>JSX Demo</h2>
			<p  className="demoData">JavaScript inide JSX</p>
			{/* this is a comment of JSX*/
		</div>
		);
	}
}
export default GWoC_JSX;
```

# Conditional Statements in JSX

```javascript
import React, { Component } from 'react';
class GWoC_JSX extends Component{
	render(){
		var year = 2021;
		return (
		<div>
			<h1>{year == 2021 ? 'Welcome GWoC 2021🙌' : 
			'Farewell GWoC 2020🎉'}</h1>
		</div>
		);
	}
}
export default GWoC_JSX;
```

# Fragments
We may render a single element or multiple elements, though rendering multiple elements will require a **‘div’** tag around the content as the render method will only render a single root node inside it at a time which is not acceptable to many developers.
Hence **fragemnts** are used instead of **div**.
```javascript
import React,  {  Component  }  from  'react';
class  GWoC_JSX extends  Component{
	render()
		return(
		<React.Fragment>
			<h1>Hello GWoC { 2020+1 } familt!!</h1>
			<h2>JSX Demo</h2>
			<p  className="demoData">JavaScript inide JSX</p>
		</React.Fragment>
		);
	}
}
export default GWoC_JSX;
```


We can also use **<> </>** instead of **<React.Fragment> </React.Fragment>**:

```javascript
import React,  {  Component  }  from  'react';
class  GWoC_JSX extends  Component{
	render()
		return(
		<>
			<h1>Hello GWoC { 2020+1 } familt!!</h1>
			<h2>JSX Demo</h2>
			<p  className="demoData">JavaScript inide JSX</p>
		</>
		);
	}
}
export default GWoC_JSX;
