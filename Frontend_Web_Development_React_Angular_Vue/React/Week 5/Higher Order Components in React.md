
# Higher Order Components (HOC)

## What is HOC
A function that takes a component and returns a new component is known as a higher-order component. In React.js, a higher-order component (HOC) is an advanced mechanism for reusing component logic. Higher-Order Components are not part of the React API. A higher-order component translates a component into another component, while the component converts props into UI.

Consider this example -
```javascript
import React from 'react';

const higherOrderComponent = WrappedComponent => {
  class HOC extends React.Component {
    render() {
      return <WrappedComponent />
    }
  }
  return HOC
}

```
In the above example, higherOrderComponent is a function that takes a component named WrappedComponent as an input. HOC is a new component that returns the <WrappedComponent/> from its render function. While this adds no functionality, it does illustrate the general pattern that all HOC functions will follow.

We can invoke the HOC as follows:

```javascript
const EnhancedComponent = higherOrderComponent(Mycomponent);
```

A higher-order component transforms a component into another component. Note that a HOC doesn’t modify the input component. Rather, a HOC wraps the original component in a container component to compose it.

A HOC is a one-of-a-kind function with no side effects.

If you're not sure how to use Higher Order Components, don't worry; in the next section, we'll go over a real-world example that will help you understand what HOC is and how we can use it in real-world applications. Until then, stick with me and learn more about Higher Order Components.


## Why to use HOC
The first question that comes to mind is why utilise HOC. If you've been using React for a while, you might notice that you need to duplicate the same functionality across numerous components. Here are a few examples of applications:
* Using the same colour and shadow to enhance different card views.
* Infinite Scroll in several views, each with its own set of info.
* Components that need logged in user data.
* Show a loader while a component waits for data.
* And many other examples.

You might be wondering if there's a method to reuse logic across numerous components in React without having to rebuild it. Yes, you are correct! Higher Order Components is an advanced technique for dealing with such cross-cutting issues.

## Use of HOC for Cross-Cutting Concerns

We must first comprehend the Concern before we can comprehend the Crosscutting Concern. A concern is a term that refers to a section of the system that is separated into functional groups. The crosscutting concern is one that impacts the entire application and is applicable throughout the application. For example: logging, security are the concerns which are needed in almost every module of an applicaiton.

That should be sufficient to explain what a higher order component is. Now I'm sure you're as eager as I am to learn about higher order functions using real-life examples. Before we get started with the example, keep in mind that Higher Order Components don't have to be class components; they can be functional. Their (HOC) goal is to accept a component as an input and return it as an output based on some logic.

## Examples of Higher Order Component

### Example 1
When creating a web application, we almost always need to employ a loader of some kind that is displayed while a component waits for data to be supplied to its props. We could render the loader with an in-component solution, which would work, but it wouldn't be the most elegant option. Better still, design a common HOC that can track those props and indicate a loading state even if they haven't been injected or are in an empty state.

Let's make a data-fetching application, and while fetching the data, we'll show the loader, and after the data is successfully fetched, we'll show the components.

Let's generate an app

```javascript
npx create-react-app hoc-loader
```

Create a folder called components, then a file called WithLoading.jsx in that folder, and add the following code to it:
```javascript
import React from 'react';

function WithLoading(Component) {
  return function WihLoadingComponent({ isLoading, ...props })
  {
    if (!isLoading) 
      return <Component {...props} />;
    return 
      <p>Hold on folks!! Your application is fetching some data.</p>;
  };
}
export default WithLoading;
```

In the components folder, create a RenderData.jsx file. This file will render the data after it has been retrieved from the API.
```javascript
import React from 'react';

const RenderData = props => {
  const {data} = props;

  if (!data) 
    return null;
  if (!data.length) 
    return <p>No data, sorry</p>;

  return (
    <ul>
      {data.map((d) => {
        return <li key={d.id}>{d.name}</li>;
      })}
    </ul>
  );
}
export default RenderData;
```

After this in **app.js** file add the following code:
```javascript
import React, { useState } from 'react';
import RenderData from './components/RenderData.jsx';
import WithLoading from './components/WithLoading.jsx';

const App = () => {
  //invoke of hoc
  const DatawithLoading = WithLoading(RenderData);
  const [state,setState] = useState({loading:false,data:null});

  useEffect(()=>{
      const fetchData = async = () => {
        let res = await fetch(`https://reqres.in/api/products/3`);
        res = await res.json();
        return res;
      }
      fetchData.then((res)=> {
        setState({loading:false, data:d.data});
      });
  },[]);

  return (
    <DatawithLoading
      isLoading={state.loading}
      data={state.data}
    />
  );
}

export default App;

```

Let's have a look at what we accomplished in this assignment. First, we build a react application, then we make a components folder, and then we create a higher order component named WithLoading.jsx in that folder, which ensures that if the data is fetching, it will reveal the data, else it will render the data. We develop a RenderData.jsx component to render the date. Finally, we wrote our entire functionality in app.js, where we invoke a hoc and receive our upgraded component in DatawithLoading, before returning/rendering it in app.js.

### Example 2
Now we'll make a higher-order component called ProtectedRoute that takes a Component as a prop value and returns another Component based on whether or not the user is authenticated. If the user is not authenticated, you should redirect them to the login page using Redirect to="/login'/>; otherwise, you should return the component passed as a parameter and send extra props to it (Component.props) >.

**ProtectedRoute.jsx**

```javascript
import React, { useContext , useEffect} from 'react';
import { Route, Redirect } from 'react-router-dom'
import AuthContext from '../context/auth/authContext'

const ProtectedRoute = ({ component: Component, ...rest }) => {
  // Using authContext to check if a user is authenticated or not
  const authContext = useContext(AuthContext);
  const { loadUser, isAuthenticated } = authContext;

  useEffect(() => {
      // loadUser function will set isAuthenticated field with 
      // user if the user is authenticated otherwise it has 
      // initialvalue as null that the case where user is not 
      //authenticated.

    loadUser();
  }, [])

  if(isAuthenticated === null)
  {
    return <></>
  }

  return (
    <Route {...otherdetails} render={props =>
      !isAuthenticated ? (
        <Redirect to='/login'/>
      ) : (
        <Component {...props} />
      )
    }
    />
  );
};
export default ProtectedRoute;

```
**App.js**

```javascript
import React from 'react';
import { Route, Switch } from 'react-router-dom';
import ProtectedRoute from '../src/hoc/ProtectedRoute'

function Routes() {
    return (
        <Switch>
            <Route exact path="/login">
                <Login />
            </Route>
            <Route exact path="/register">
                <Register />
            </Route>
            <Route exact path="/search">
                <Search />
            </Route>
           <ProtectedRoute exact path='/' component={Dashboard} />
        </Switch>
    );
}

function App() {
    return (
            <Routes />
    );
}

```

I hope you now understand what higher order components are, why they are used, how to utilise hoc for cross-cutting concerns, and how to use hoc in real-world applications as a result of this example. I choose the simplest example to help you grasp hoc quickly.

<h2>Reference</h2>
  - https://reactjs.org/docs/higher-order-components.html 
