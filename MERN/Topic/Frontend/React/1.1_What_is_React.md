#  What is React?
   React is a JavaScript library created for building fast and interactive user interfaces for web and mobile applications. It is an open-source, component-based, front-end library responsible only for the application’s view layer. 

React was created by Jordan Walke, a software engineer at Facebook.

React is a  **User Interface**  (UI) library and a tool for building  **UI components**.

React exists in a gray area between library and framework. React by itself has the qualities of a library – it’s easier to learn than frameworks like **Angular** and **Vue**, and it doesn’t have a lot of opinions.

# Why React?

-   **Easy creation of dynamic applications:**  requires less coding and offers more functionality.
-   **Improved performance:**  React uses Virtual DOM, thereby creating web applications faster. 
-   **Reusable components:**  Components are the building blocks of any React application and they can be reused throughout the application.
-   **Unidirectional data flow:**  means that when designing a React app, developers often nest child components within parent components hence it is easier to debugg errors.
-   **Small learning curve:**  React is easy to learn, as it mostly combines basic HTML and JavaScript and CSS.
-   **It can be used for the development of both web and mobile apps:**  React is used for web app development and React Native is used for cross platform app development.
-   **Dedicated tools for easy debugging:**  Facebook has released a Chrome extension that can be used to debug React applications. This makes the process of debugging React web applications faster and easier.
# Features of React
- **JSX(JavaScript Syntax Extension):** is an XML/HTML like extension to JavaScript. It is used to write HTML structures in the same file that contains JavaScript code. Anything between { } is treated as js.
eg: 
	```javascript
	const year = '2021';
	const heading = <h1>GWoC {name}</h1>;
    ```
- **Virtual DOM (Document Object Model):** DOM is a structured representation of the HTML elements that are present in a webpage or web-app. React keeps a lightweight representation of the “real” DOM in the memory, and that is known as the **virtual DOM (VDOM)** as it is faster than manipulating real DOM. ReactDom.render() is used to render (display) HTML elements:
	```javascript
	<div id="2021">GWoC 2021</div>  
	<script type="text/babel">  
	ReactDOM.render(  
	<h1>Hello GWoc 2021 family!</h1>,  
	document.getElementById('2021'));  
	</script>
	```
- **Performance:** React uses VDOM, which makes the web applications run much faster than those developed with alternate front-end frameworks and the entire app can be broken down into indivisual components to simplify and speed up the development.
- **Extensions:** React goes beyond simple UI design and has many extensions that offer features like Server Side Rendering, Redux and React-Native(derived from React) is used to develope cross platform apps.
- **Debugging:** It has a large developer community hence lot of support available on errors.
- **React Hooks:** Used to change state without writing class components.

# **Prerequisites**

1. **HTML**
2. **CSS**
3. **JAVASCRIPT**
4. **TYPESCRIPT** (Not necessory)

# Create React Application
It is a a development server by **Facebook** that uses Webpack to compile React, JSX, and ES6, auto-prefix CSS files.
You’ll need to have [Node.js >= 14.0.0 and npm >= 5.6](https://nodejs.org/en/) on your machine.

To create a project, go to terminal and type-

***Step 1***:

1. Using npx:
    > npx create-react-app name-of-app

   _[`npx`](https://medium.com/@maybekatz/introducing-npx-an-npm-package-runner-55f7d4bd282b)  npx is a tool intended to help round out the experience of using packages from the npm registry and it installs all the necessory dependencies._ 
  
  2. Using npm:
        >npm init react-app name-of-app
        
        _[`npm init <initializer>`]()  is available in npm 6+_
    
  3. Using yarn:
       >yarn create react-app name-of-app
      
       _[`yarn create <starter-kit-package>`](https://yarnpkg.com/lang/en/docs/cli/create/)  is available in Yarn 0.25+_



***Step 2***:  All the above commands will create a directory called `name-of-app` inside the current folder which will have all the dependencies and frameworks required to start the app. Once the installation is done, you can open your project folder by
		          
	  >cd name-of-app 
	

***Step 3***: Inside the newly created project, you can run some built-in commands depending on your Step 1

	  >npm start

or

	  >yarn start

# React Integrated Frameworks

1.   If you’re  **learning React**  or  **creating a new  [single-page]()  app,**  use  [Create React App]().

2.   If you’re building a  **server-rendered dynamic website with Node.js,**  try  [Next.js](https://reactjs.org/docs/create-a-new-react-app.html#nextjs).

3.  If you’re building a  **static content-oriented website,**  try  [Gatsby](https://reactjs.org/docs/create-a-new-react-app.html#gatsby).
