<h1 align="center">  Multi Page React App </h1>

## What is Multi Page React App ?

React Apps are structured to have a single index.html page.But sometimes we need to have more than one page/multi pages in case of a complex website.Since, React is not designed to have multiple html pages,we use multiple routes to handle multiple pages(views) and build a multi page application.Such an app is known as a Multi Page React App.

## How to create Multi Page React App ?

- When building complex user interfaces,we typically build Single Page Applications or S.P.As.In this method, there is only one initial HTML request and response.
- In Multi-Page React Applications, page(url) changes are handled by client-side(React) code.This method changes the visible content without fetching a new HTML file.
- To do so, we need to install React Router using the following npm command.

```javascript
    npm install react-router-dom
```

Example 1:Working with Routes and Links in BrowserRouter

index.js

```javascript
import React from "react";
import ReactDOM from "react-dom";
import "./index.css";
import App from "./App";
import { BrowserRouter } from "react-router-dom";

ReactDOM.render(
  <BrowserRouter>
    <App />
  </BrowserRouter>,
  document.getElementById("root")
);
```

App.js

```javascript
import { Route, Link } from "react-router-dom";
import Welcome from "./components/Welcome";

const App = () => {
  return (
    <div>
      <Route path="/welcome">
        <Welcome />
      </Route>
      <Link to="/welcome"></Link>
    </div>
  );
};
export default App;
```

Welcome.js

```javascript
import React from "react";

const Welcome = () => {
  return (
    <div>
      <h1>Welcome to Girlscript Winter of Contributing...</h1>
      <h3>This is the Welcome page for understanding React Router</h3>
    </div>
  );
};

export default Welcome;
```

This code would render the following output:

![](./assets/mpa1.JPG)

##### Explanation

- The email input value has reference to the emailInputRef.

Example 2: Using NavLinks

```javascript
import { Route, NavLink } from "react-router-dom";
import Welcome from "./components/Welcome";

const App = () => {
  return (
    <div>
      <Route path="/welcome">
        <Welcome />
      </Route>
      <h1>
        <NavLink to="/welcome">Welcome</NavLink>
      </h1>
    </div>
  );
};
export default App;
```

This code would render the following output:

![](./assets/mpa2.JPG)

##### Explanation

Example 3: Adding Dynamic Routes with Params

Example 4: Configuring Routes

Example 5: Redirecting the User

Example 6: Implementing Programmatic Navigation

## Benefits of the multi page react app ?

- In Multi Page React App,we can render different views where each page is different for every route.
-

also give some theory explanation with code
any addons from your side (in-depth of the topic) .
