# Role of React Dev Tools

![React Dev Tools](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20210119225559/React-Developer-Tools.png)

As a developer we all have to counter bugs daily and while developing react apps it is easy for bugs to infiltrate our code. So to save you from wasting your precious time on debugging the code React Dev Tools help you track down these bugs by giving you more insight into the current [state](https://reactjs.org/docs/state-and-lifecycle.html) for each [component](https://reactjs.org/docs/react-component.html). 

React Developer Tools provides you the interface for exploring the React Component tree along with current [props](https://www.digitalocean.com/community/tutorials/how-to-customize-react-components-with-props) , state and [context](https://www.digitalocean.com/community/tutorials/how-to-share-state-across-react-components-with-context) for individual components.

React Developer Tools also lets you determine which components are re-rendering and can generate graphs to show how long individual components take to render. You can use this information to track down inefficient code or to optimize data-heavy components.

### Filtering components with React Dev Tools

Navigating through large component trees has been a little bit tedious. But now, **DevTools** provides a way to filter components so that you can hide ones you’re not interested in.

To access this feature, let’s filter through the three components in our sample application. Open your DevTools and you will see our three components listed.

![Components](https://blog.logrocket.com/wp-content/uploads/2019/09/threecomponentslisted.png)

## Inline props in React DevTools are now a thing of the past

To make larger component trees easier to browse and to make DevTools faster, components in the tree no longer show inline props.

To see this feature in action, all you need to do is select a component and all the components’ props, state, and Hooks will be displayed on the right-hand side of the console.

In our sample application, we only pass props to our contacts component. Clicking on it will reveal the value of the props passed to it and clicking on the other components will reveal that no props were passed to them.


![Inline Props](https://blog.logrocket.com/wp-content/uploads/2019/09/contactcomponent.gif)


### Debugging unexpected prop values and component elements

Consider the following React Class:

```jsx
import ABC from 'abc';
import XYZ from 'xyz';

class Main extends Component {
  constructor(props) {
    super(props);

    this.state = { name : "John" }
 }
 render() {
    const { name } = this.state;
      return (
        <ABC>
          <XYZ name={name} />
        </ABC>
      )
  }
};
```

ABC is the parent of XYZ but Main is the owner of the component and only owners can send down props.

In the newer version of React Dev tools, you can quickly debug an unexpected prop value by skipping over the parents. DevTools v4 adds a rendered by list in the right-hand pane that allows you to quickly step through the list of owners to speed up your debugging process.

By clicking on any of the components in our application, we can see the components that rendered them. This is very useful when trying to trace back the origin of a particular prop.


### Support for React DevTools

Only the **following** versions of React are supported:

**React-dom**
**0-14.x:** Not supported \
**15.x:** Supported (except for the new component filters feature) \
**16.x:** Supported

**React-native**
**0-0.61:** Not supported \
**0.62:** Supported \
**0.63:** Supported

## So how to use React Dev Tools?

The React Developer Tools is a plugin for the Chrome and Firefox browser. When you add the extension, you are adding additional tools to the developer console. Visit the [Chrome plugin page](https://chrome.google.com/webstore/detail/react-developer-tools/fmkadmapgofadopljbjfkapdkoienihi) for React Developer Tools to install the extension.

Click on the Add to Chrome button. Then click on the Add extension button to confirm:

Now that you have installed the extension, whenever you are on a page that doesn't have any React components, the icon will appear gray. However, if you are on a page with React components, the icon will appear blue and green. If you click on the icon, it will indicate that the application is running a production version of React. 

![React Dev Tools Extension logo](https://assets.digitalocean.com/articles/67372/DO_React_production_build.png)

Now that you are on a website that uses React, open the console to access the React Developer Tools. Open the console by either right-clicking and inspecting an element or by opening the toolbar by clicking **View** > **Developer** > **JavaScript** console.

When you open the console, you’ll find two new tabs: **Components** and **Profiler**:

The **Components** tab will show the current React component tree, along with any props, state, or context. The **Profiler** tab lets you record interactions and measure component rendering.

Click on the **Components** tab to see the current component tree.

![Components in React Dev Tools](https://assets.digitalocean.com/articles/67372/components_for_DO.png)

<h1>Reference</h1>

Refer to the above video for reference: [React Dev Tools Video](https://www.youtube.com/watch?v=EG0LhIfmUSo)

You can refer to this blog for better knowledge of react dev tools : [React Dev Tools Blog](https://www.digitalocean.com/community/tutorials/how-to-debug-react-components-using-react-developer-tools)










