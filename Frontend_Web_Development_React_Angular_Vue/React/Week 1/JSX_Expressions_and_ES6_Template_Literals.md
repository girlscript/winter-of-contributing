<p align="center"><img src="https://miro.medium.com/max/1400/1*wQxgEiVsgG0o7ti45WuFTQ.png" width="800px"></p><br><br>

<h1 align="center"> Introduction To React JSX </h1>

### What is JSX?

* JSX stands for JavaScript XML.
* JSX is a JavaScript Extension Syntax used in React to easily write HTML and JavaScript together.

___ 

### **Take a look at the below code:**

```javascript

    const jsx = <h1>This is JSX</h1>

```

* This is simple JSX code in React. But the browser does not understand this JSX because it's not valid JavaScript code. This is because we're assigning an HTML tag to a variable that is not a string but just HTML code.

* So to convert it to browser understandable JavaScript code, we use a tool like Babel which is a JavaScript compiler/transpiler.

* You can set up your own babel configuration using Webpack as I show in this article. Or you can use create-react-app which internally uses Babel for the JSX to JavaScript conversion.<br><br>
___


**Example:**

```javascript

    class JSXDemo extends React.Component {
    render() {
        return <h1>This is JSX</h1>;
    }
}

ReactDOM.render(<JSXDemo />, document.getElementById('root'));

```

    Here, we're returning the JSX from the JSXDemo component and rendering that on the screen using the ReactDOM.render method.

### **Corresponding Output:**

    When the Babel executes the above JSX, it converts it to the following code:

```javascript

class JSXDemo extends React.Component {
    render() {
        return React.createElement("h1", null, "This is JSX");
    }
}

```

    As you can see in the above example, the code still correctly prints the contents to the screen using React.createElement.

    This was the old way of writing code in React – but it's tedious to write the React.createElement every time, even for adding a simple div.

    So React introduced the JSX way of writing code which makes code easy to write and understand.
___ 


## Expressions in JSX:


* With JSX you can write expressions inside curly braces { }.

* The expression can be a React variable, or property, or any other valid JavaScript expression. JSX will execute the expression and return the result:

**Example:**
Execute the expression 5 + 5:

```javascript

const myelement = <h1>React is {5 + 5} times better with JSX</h1>;

```
**Output:**

```javascript
React is 10 times better with JSX
```
___


<h1 align="center"> ES6 Template Literals </h1>

## Introduction to Template literals:

* Template literals are a new feature introduced in ECMAScript 2015/ ES6. 

* It provides an easy way to create multiline strings and perform string interpolation. Template    literals are the string literals and allow embedded expressions.

* Template literals are enclosed by the backtick (``).

* Template literals can contain placeholders. These are indicated by the dollar sign and curly braces (${expression}). The expressions in the placeholders and the text between the backticks (` `) get passed to a function.

### Template Literals use back-ticks (``) rather than the quotes ("") to define a string:

**Example :**

```javascript

var str = `string value`;  

```
___

## Multiline Strings:-

In normal strings, we have to use an escape sequence \n to give a new line for creating a multiline string. However, in template literals, there is no need to use \n because string ends only when it gets backtick(`) character.

**Example :**

```javascript

// Without template literal   
console.log('Hello \n World!');   
    
// With template literal   
console.log(`Hello
World!`);  

```

**Output:**

```javascript

Hello
 World!

Hello
World!

```
___

## String Interpolation:-

ES6 template literals support string interpolation. Template literals can use the placeholders for string substitution. To embed expressions with normal strings, we have to use the ${} syntax.

**Example :**
```javascript

let a = 'Hello';  
let b = 'World';  
console.log(`${a}, ${b}!`);  

```
**Output:**

```javascript

Hello, World!

```
___

## Tagged templates:- 

Tagged template literals allow us to parse template literals with a function.

**Example :**

```javascript

function TaggedLiteral(str) {   
    console.log(str);   
}   
    
TaggedLiteral `Tagged literal`;   

```

**Output:**

```javascript

Tagged literal

```
___

## Raw Strings:- 

**Example :**

```javascript

var string = String.raw`Hello \n World \n Welcome back! `   
console.log(string)  

```

**Output:**

```javascript

Hello \n World \n Welcome back!

```
___

# Advantage of ES6 template literals :

###  1) String concatenation (variable interpolation)

    The big advantage of backtick literals over quotation marks is when it is necessary to insert variables into a string phrase.

```javascript

const firstName = "Saurabh"
const middleName = "Wasudeo"
const lastName = "Chachere"
const name = firstName + " " + verb + " " + frequency
const literalName = `${firstName} ${verb} ${frequency}`

```
___

###  2) Cleaner code, less escaping with \

    The other advantage of backtick literals (` `) is not needing to escape double quote (“ ”) or single quote (‘ ’) characters using a backslash (\).

```javascript

Double quotes: "He said, \"Don't do that!\""
Single quotes: 'He said, "Don\'t do that!"'
Backtick literal: `He said, "Don't do that!"`

```
___

###  3) Multi-line code

    if we create a multi-line string in JavaScript? We get a SyntaxError:

```javascript

const myString = "<div>
<p>Hello world!</p>
</div>"

SyntaxError: "" string literal contains an unescaped line break

```
    The solution would be to add \n newline characters, but that would make the string almost impossible to read.
    Backtick literals solve this problem and are preferable for HTML:

```javascript

const myUglyString = "<div>\n<p>Hello world!</p>\n</div>"

const myBeautifulString = `<div>
<p>Hello world!</p>
</div>`

```