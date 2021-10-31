# **Context In React**
<br>

<img src="https://miro.medium.com/max/1400/1*Yo1nkzOAMihE8Ia5O411PQ.jpeg">

<br>

## **What is Context in React ?**

* React Context is a method to pass props from parent to child component(s), by storing the props in a store and using these props from the store by child component(s) without actually passing them manually at each level of the component tree.

* In a typical React application, data is passed top-down (parent to child) via props, but such usage can be cumbersome for certain types of props (e.g. locale preference, UI theme) that are required by many components within an application. Context provides a way to share values like these between components without having to explicitly pass a prop through every level of the tree.
<br>

## **Where we use Context in React ?**
 
* Whenever one wants a store to keep states or variables in and use them elsewhere in program, Context is used. Generally, when we have two or more levels(height) in our component tree, it is viable to use a store instead of passing props and then lifting the state as this will create confusion and unnecessary lengthy code. 
* Context is designed to share data that can be considered “global” for a tree of React components, such as the current authenticated user, theme, or preferred language.

## **What are the Benefits of the context in React ?**

* One of the most important things about React is that the data flows in only one direction, which enables the developers to predict.
* It enables easy debugging.
* It provides Reusability.

Context lets us pass a value deep into the component tree without explicitly threading it through every component.
Create a context for the current theme (with "light" as the default).


![image](https://user-images.githubusercontent.com/62420933/139574280-fc740a86-d894-4852-8c9e-90cdcc0ff120.png)
![image](https://user-images.githubusercontent.com/62420933/139574308-c9182da7-41b2-4e79-b2ab-9f7c9deb0afa.png)

#### With the context API, we can avoid passing props through intermediate elements, and directly pass the props to the last child or the child we are targeting:

![image](https://user-images.githubusercontent.com/62420933/139574345-550b609c-2d3b-4891-bf43-261a2d959bc5.png)
![image](https://user-images.githubusercontent.com/62420933/139574359-65cb1ccb-4e7e-477e-b277-e35df557ce66.png)

#### Every Context object comes with a Provider React component that allows consuming components to subscribe to context changes. All that we have to do is make a variable (here it is initialState) and give it and the provider an initial value. This initial value depends upon the project which you are making.
#### For more, I highly recommend going to the official documentation and reading their tutorials from https://reactjs.org/docs/context.html

### **Conclusion**

Hence , React Context API is a way to essentially create global variables that can be passed around in a React app. This is the alternative to “prop drilling”, or passing props from grandparent to parent to child, and so on.

Thank you! I hope that you found this valuable!

