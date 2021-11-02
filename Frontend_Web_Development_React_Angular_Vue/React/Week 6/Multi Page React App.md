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

Example 3: Adding Nested Dynamic Routes with Params

App.js

```javascript
import { Route } from "react-router-dom";
import Product from "./components/Product";

const App = () => {
  return (
    <div>
      <Route path="/product/:productId">
        <Product />
      </Route>
    </div>
  );
};
export default App;
```

Product.js

```javascript
import React from "react";
import { useParams } from "react-router";

const Product = () => {
  const params = useParams();
  return (
    <div>
      <h1>Displaying Dynamic Routes</h1>
      <h3>The Product ID is: {params.productId}</h3>
    </div>
  );
};

export default Product;
```

This code would render the following output:

![](./assets/mpa3.JPG)

##### Explanation

Example 4: Configuring Routes

App.js

```javascript
import { Route, Switch } from "react-router-dom";
import Product from "./components/Product";
import Welcome from "./components/Welcome";

const App = () => {
  return (
    <div className="App">
      <Switch>
        <Route path="/product/:productId">
          <Product />
        </Route>
        <Route path="/welcome">
          <Welcome />
        </Route>
      </Switch>
    </div>
  );
};
export default App;
```

This code would render the following output:

![](./assets/mpa3.JPG) ![](./assets/mp1.JPG)

Example 5: Redirecting the User

App.js

```javascript
import { Route, Redirect } from "react-router-dom";
import Welcome from "./components/Welcome";

const App = () => {
  return (
    <div>
      <Route path="/" exact>
        <Redirect to="/welcome" />
      </Route>
      <Route path="/welcome">
        <Welcome />
      </Route>
    </div>
  );
};
export default App;
```

This code would render the following output:

![](./assets/mpa1.JPG)

Example 6: Implementing Programmatic Navigation

```javascript
import { Route, useHistory } from "react-router-dom";
import Welcome from "./components/Welcome";

const App = () => {
  const history = useHistory();

  function handleClick() {
    history.push("/welcome");
  }
  return (
    <div>
      <button type="button" onClick={handleClick}>
        Go to Welcome Page
      </button>
      <Route path="/welcome">
        <Welcome />
      </Route>
    </div>
  );
};
export default App;
```

This code would render the following output:

![](./assets/mpa6.JPG) ![](./assets/mpa1.JPG)

##### Explanation

React Router is mostly a wrapper around the history library. history handles interaction with the browser's window.history for you with its browser and hash histories. It also provides a memory history which is useful for environments that don't have a global history. This is particularly useful in mobile app development (react-native) and unit testing with Node.

A history instance has two methods for navigating: push and replace. If you think of the history as an array of visited locations, push will add a new location to the array and replace will replace the current location in the array with the new one. Typically you will want to use the push method when you are navigating.

Example 7: Adding a Not Found Page

App.js

```javascript
import { Route, Switch } from "react-router-dom";
import Welcome from "./components/Welcome";
import NotFound from "./components/NotFound";

const App = () => {
  return (
    <div>
      <Switch>
        <Route path="/welcome">
          <Welcome />
        </Route>
        <Route path="*">
          <NotFound />
        </Route>
      </Switch>
    </div>
  );
};
export default App;
```

NotFound.js

```javascript
import React from "react";

const NotFound = () => {
  return (
    <div>
      <h1>Error 404 : Page Not Found</h1>
    </div>
  );
};

export default NotFound;
```

This code would render the following output:

![](./assets/mpa7.JPG)

##### Explanation

## Benefits of the multi page react app ?

- In Multi Page React App,we can render different views where each page is different for every route.
-
