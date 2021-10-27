![Fiber Architecture](https://github.com/Mann-tech13/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/React/Week%205/assets/FiberArchitecture.png)

# **What is React Fiber?**

React Fiber is an ongoing reimplementation of React's core algorithm. It is the culmination of over two years of research by the React team.

The goal of React Fiber is to increase its suitability for areas like animation, layout, and gestures. Its headline feature is incremental rendering: the ability to split rendering work into chunks and spread it out over multiple frames.

Other key features include the ability to pause, abort, or reuse work as new updates come in; the ability to assign priority to different types of updates; and new concurrency primitives.

# **Fiber Architecture**

A fiber is a simple JavaScript object. It represents the React element or a node of the DOM tree. The fiber structure consists of the following building blocks,

```
{
  stateNode,
  child,
  sibling,
  return,
  type,
  alternate,
  key,
  updateQueue,
  memoizedState,
  pendingProps,
  memoizedProps,
  tag,
  effectTag,
  nextEffect,
}
```
## **stateNode** 

Keeps reference to the component instance fiber belongs to

## **child, sibling & return**

Represents the child, siblings and the parent node with respect to the current fiber node

## **type** 

Determines if its a class or function or DOM element

## **alternate** 

Holds the reference between the nodes in current tree and work-in-progress tree

## **key** 

Identifies all the changed, added, or removed elements

## **updateQueue** 

Queues all the state & DOM updates or any other effect

## **memoizedState** 

Holds the reference to the state of the previous render

## **memoizedProps** 

Holds the reference to the props supplied to the previous render

## **pendingProps** 

Represents the new props passed for the current update

## **tag** 

Denotes the type of Fiber example: Class component, Function component, Host portal.

## **effectTag** 

Holds the information about the side-effect which needs to be applied

## **nextEffect** 

Points to the next node in the effects list which has an update

React starts creating a fiber tree upon initial render known as current fiber tree.

# **Core Concepts of React Fiber**

There are three key concepts of React Fiber that you need to understand before you go deeper into learning

![CoreConcepts](https://github.com/Mann-tech13/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/React/Week%205/assets/Core-Concepts-FiberArchitecture.png)

## **Reconciliation**

Keeps track of all the changes happening with the React component states. It is the algorithm for diffing two DOM trees and compute the parts that need to be updated.

When you render the react application, a tree structure made of nodes is generated which describes the application. Each node represents a react element.

## **Rendering**

A very important aspect of Fiber architecture is that rendering and reconciliation are two different phases here. While the reconciliation phase determines which parts of the application are updated, the rendering phase uses this information to actually update the parts in the rendered app as computed by the reconciler.

## **Scheduling**

The scheduling is the phase that determines when the work is to be performed. Scheduling of work can be done either on a priority basis or time basis. 

# **Benefits of Fiber Architecture**

The primary goal of Fiber is to enable React to take advantage of scheduling work. Besides having a promising algorithm, possesses many practical advantages that make the application rendering a fun experience which was earlier considered a grim and complex task. Some of those benefits are -

* Faster and effective UI rendering
* Optimization of priority task execution
* Extensive browser compatibility
* Adoption of the principle of ‘Virtual Stack’
* Asynchronous rendering
* Better error handling
* Seamless user experience

Another captivating feature of React Fiber is its ability to define work as per its priority. The fiber reconciler assigns priorities to the tasks and allows preferences to high-priority tasks over low-priority tasks through incremental rendering.

This is just but a beginning! Now that we have seen its wonderful features and practical advantages, it is safe to say that the future of React Fiber is very bright and holds a lot in store for us.

# **Implementation with example**

Lets take an sample example how react converts the Components to tree of objects.

```
import React with "react";

function App(){
  const [count, setCount] = React.useState(1);
  const handleClick = () => {
    setCount(count => {
      return count + 1;
    });
  };
  return [
    <button onClick = { handleClick }> Increment </button>,
    <p> Count {count}</p>
  ];
}

export default App;
```

During reconciliation React performs various activities. For example, here are the high-level operations React performs during the first render and after state update in our simple application:

* updates count property in the state of App
* retrieves and compares children of App and their props
* updates props for the p element

The React.createElement creates the objects like this...



```
[
  { 
    $$typeof: Symbol(react.Element),
    type: "div",
    props:{}
  },

  { 
    $$typeof: Symbol(react.Element),
    type: "button",
    props:{
      children: "Increment",
      onClick: () => {
        handleClick();
      }
    }
  },

  { 
    $$typeof: Symbol(react.Element)
    type: "span",
    props:{
      children: 0;
    }
  ,}

];
```

During the reconciliation every React Element returned from the render is merged in to the tree of fiber nodes. Unlike React Elements fiber aren’t re-created on every render, these are mutable Data Structures.

# **Conclusion**

Fiber in nutshell allows React to better utilize the main thread by pausing/ resuming/ prioritising/ cancelling updates to provide a seamless user experience.React was once considered to be the fastest library for rendering user interfaces, and now, with Fiber, other libraries need to work really hard to be able to compete with it.

### **Reference**

[https://developpaper.com/source-code-analysis-of-react-fiber/](https://developpaper.com/source-code-analysis-of-react-fiber/)

[https://www.freecodecamp.org/news/lets-fall-in-love-with-react-fiber-90f2e1f68ded/](https://www.freecodecamp.org/news/lets-fall-in-love-with-react-fiber-90f2e1f68ded/)

[https://dev.to/burhanuday/react-internals-fiber-architecture-280l](https://dev.to/burhanuday/react-internals-fiber-architecture-280l)

