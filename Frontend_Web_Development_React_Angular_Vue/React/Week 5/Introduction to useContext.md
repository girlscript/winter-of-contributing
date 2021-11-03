# Introduction to useContext

## What is useContext?
usecontent() provides an easy way to pass data throughout our app without manually passing props down the tree. It is used to share data that can be managed as global data, e.g. global state, theme, services, user settings and more.

## Why use useContext?

* useContext allow your components to access some global data and re-render when that global data is changed.
* It solves the props drilling problem, i.e., when you have to pass down props from parents to children.
* We hold the following inside the context: 
  - global state
  - theme
  - application configuration
  - authenticated user name
  - user settings
  - preferred language
  - a collection of services

## How to use the useContext?

Major three steps required to use useContext are as follows:-
* creating the context
* providing the context
* consuming the context

### Creating the context

1. The built-in factory function createContext(default) creates a context instance:
```javascript
import { createContext } from 'react';
const Context = createContext('Default Value');
```
2. The factory function accepts one optional argument: the default value.

### Providing thec context
1. Context.Provider component is used to provide the context to its child components, no matter how deep they are.
2. To set the value of context use the value prop available on the <Context.Provider value={value} />:
```javascipt
function Main() {
  const value = 'My Context Value';
  return (
    <Context.Provider value={value}>
      <MyComponent />
    </Context.Provider>
  );
}
```
3. the components which are like later to consume the context have to be wrapped inside the provider component.
4. To change the context value, we simply update the value prop.

### Consuming the context
It can be done in two ways.
1. The first way is to use the useContext(Context) React hook. The hook also makes sure to re-render the component when the context value changes.
```javascript
import { useContext } from 'react';
function MyComponent() {
  const value = useContext(Context);
  return <span>{value}</span>;
}
```
2. The second way is by using a render function supplied as a child to Context.Consumer special component available on the context instance. Again, in case if the context value changes, <Context.Consumer> will re-render its render function.
```javascript
function MyComponent() {
  return (
    <Context.Consumer>
      {value => <span>{value}</span>}
    </Context.Consumer>
  );
}
```

>Example :
```javascrpt
import { useContext, createContext } from 'react';
const UserContext = createContext('Unknown');
function Application() {
  const userName = "John Smith";
  return (
    <UserContext.Provider value={userName}>
      <Layout>
        Main content
      </Layout>
    </UserContext.Provider>
  );
}
function Layout({ children }) {
  return (
    <div>
      <Header />
      <main>
        {children}
      </main>
    </div>
  );
}
function Header() {
  return (
    <header>
      <UserInfo />
    </header>
  );
}
function UserInfo() {
  const userName = useContext(UserContext);
  return <span>{userName}</span>;
}
```
**Output**

![](./assets/usecontext.png)

>Explaination of above code
1. const UserContext = createContext('Unknown') creates the context that is going to hold the user name information.
2. Inside the <Application /> component, the application’s child components are wrapped inside the user context provider: <UserContext.Provider value={userName}>.
3. <UserInfo /> becomes the consumer of the context by using the built-in useContext(UserContext) hook. The hook is called with the context as an argument and returns the user name value.
4. <Layout /> and <Header /> intermediate components don’t have to pass down the userName prop. That is the great benefit of the context: it removes the burden of passing down data through the intermediate components.

## What are the advantages of useContent?

* It allows developers to manage global application state without the need for a full state-management system. 
* Storing this data with useContext saves developers from prop-drilling, an anti-pattern that passes large amounts of data down from parent components to deeply-nested components, and all the components in between.
* It re-renders all components whenever there is any update in the provider’s value prop.

## References
- https://dmitripavlutin.com/react-context-and-usecontext/
- https://reactjs.org/docs/context.html
