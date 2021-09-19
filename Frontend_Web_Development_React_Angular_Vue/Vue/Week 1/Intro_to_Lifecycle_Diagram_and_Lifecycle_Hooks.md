![](https://i.imgur.com/Zyy4Xtr.jpg)

# Intro to Lifecycle Diagram and Lifecycle Hooks

In this module we will we looking at the Lifecycle Diagram and Lifecycle Hooks. But before that we should know know about Vue Instance.

## What is Vue Instance?

A Vue application consists of a root Vue instance created with `new Vue`, optionally organized into a tree of nested, reusable components. Whenever you create a new Vue project, the Vue instance gets activated by default in the main.js file by this code:

```javascript

new Vue({
 render: h => h(App),
 }).$mount(‘#app’)

```
Signifying a Vue instance that contains the app component, this syntax is a bit different with variants like single-file applications.

__*Now you know what is Vue Instance? So, now we will be moving forward and discuss about what are Lifecycle Hooks?*__

## What are Lifecycle Hooks?

Lifecycle hooks are a window into how the library you’re using works behind-the-scenes. Lifecycle hooks are the defined methods which get executed in a certain stage of the vue object lifespan.

When a Vue Instance is created it goes through a series of initialization steps. When it is created from setting up data observation to compiling the template, to mounting the instance to the DOM, and finally to updating the DOM during data changes. This process is known as the lifecycle of a Vue instance and they have some functions run inside them by default as they go through this process of creating and updating the DOM. It is inside them that Vue components are created and exist, these functions are called lifecycle hooks. 

Look at the diagram for the better understanding, how and when a particular hook came in effect:

![](https://vuejs.org/images/lifecycle.png)

## There are eight Lifecycle methods :

1. _Before create_
2. _Created_
3. _Before mount_
4. _Mounted_
5. _Before update_
6. _Updated_
7. _Before destroy_
8. _Destroyed_

__*Now let's discuss these hooks in detail :-*__ 

## 1. Creation Hooks (Initialization)

Creation hooks are the very first hooks that run in your component. They allow you to perform actions before your component has even been added to the DOM.

**When to use creation hooks?**

Use creation hooks if you need to set things up in your component, both during client rendering and server rendering.

**Creation hooks are :-**

* _beforeCreate_
* _created_

`beforeCreate`

This is the very first lifecycle hook that gets called Vue JS, it gets called immediately after the Vue instance has been initialized. At this stage data has not been made reactive, and events have not been set up yet:

```javascript
<script>
    export default {
        beforeCreate() {
            console.log('At this point, events and lifecycle have been initialized.')
        }
    }
</script>
```
In this example, when the `beforeCreate` hook is run, this snippet will log the message: `At this point, events and lifecycle have been initialized..`

Using the `beforeCreate` hook is useful when you need some sort of logic/API call that does not need to be assigned to data. Because if we were to assign something to data now, it would be lost once the state was initialized.