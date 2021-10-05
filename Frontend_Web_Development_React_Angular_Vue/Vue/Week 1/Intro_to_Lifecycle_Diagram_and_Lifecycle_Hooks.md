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

### `beforeCreate`

This is the very first lifecycle hook that gets called Vue JS, it gets called immediately after the Vue instance has been initialized. At this stage data has not been made reactive, and events have not been set up yet:

```HTML
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

### `created`

This is the second lifecycle hook that is called after the beforeCreate hook. At this stage, the Vue instance has been initialized and has activated the start of things like computed properties, watchers, events, data properties and manipulations that come with it.

```javascript
export default {
   data() { 
     return { 
       val: 'hello'    
     }
   },
   created() {     
     console.log('Value of val is: ' + this.val)   
   }
}
```
The output of this would be `Value of val is: hello` because we have initialized our data.

Using the created method is useful when dealing with reading/writing the reactive data. For example, if you want to make an API call and then store that value, this is the place to do it.

## 2. Mounting Hooks (DOM insertion)

Mounting hooks are often the most used hooks. They allow you to access your component immediately before and after the first render. They do not, however, run during server-side rendering.

**When to use mounting hooks?**

Mounting hooks are often the most used hooks. They allow you to access your component immediately before and after the first render. They do not, however, run during server-side rendering.

Mounting hooks are often the most used hooks. They allow you to access your component immediately before and after the first render. They do not, however, run during server-side rendering.

**Mounting hooks are :-**

* _beforeMount_
* _mounted_

### `beforeMount`

The `beforeMount` hook runs right before the initial render happens and after the template or render functions have been compiled but you still cannot manipulate the DOM yet, the element property is not still available. Here is where initializations that you do not want lying around in your component should go into:

```javascript
export default {
   beforeMount() {
     console.log(this.$el)
   }
 }
```
### `mounted`

This is the next lifecycle hook to be called after the beforeMounted is called. It is called right after the instance has been mounted. Here the app component, or any other component in the project becomes functional and can now be used.

```javascript
<template>
  <div ref="example-element">Example component.</div>
</template>

<script>
export default {
  mounted() {
    console.log(`At this point, vm.$el has been created and el has been replaced.`);
    console.log(this.$el.textContent) // Example component.
  }
}
</script>
```
In this example, when the `mounted` hook is run, this snippet will log the message `At this point, vm.$el has been created and el has been replaced.`. In addition, a message of `Example content.` (`this.$el.textContent`) will be logged.

## 3. Updating Hooks (Reactivity in the Vue js lifecycle)

The updated lifecycle event is triggered whenever reactive data is modified, triggering a render update. They allow you to hook into the watch-compute-render cycle for your component.

**When to use update hooks?**

Use updating hooks if you need to know when your component re-renders, perhaps for debugging or profiling. Do not use updating hooks if you need to know when a reactive property on your component changes

**Update hooks are :-**

* _beforeUpdate_
* _updated_

### `beforeUpdate`

The `beforeUpdate` hook runs after data changes on your component and the update cycle begins, right before the DOM is patched and re-rendered.  This is a good place to update the DOM manually before any changes happen. For example, you can remove event listeners.

`beforeUpdate` could be useful for tracking the number of edits made to a component or even tracking the actions to create an “undo” feature.

```javascript
<template>
    <div> {{hello}}
    </div>
</template>

<script>
 export default {
  name: 'Test',
  data() {
   return {
    books: 0,
    hello: 'welcome to Vue JS'
   }
 },
beforeUpdate(){
 alert('beforeUpdate hook has been called');
},
mounted(){
 this.$data.hello= 'lalalalallalalalalaalal';
 }
}
</script>
```
This originally has a welcome note on the DOM but in the mounted stage (which is where the DOM can be manipulated), the data gets changed and so the alert for beforeUpdate appears just before it changes.

### `updated`

The `updated` hook runs after data changes on your component and the DOM re-renders. DOM related operations can be performed here, although it is not advisable to change state inside this hook as Vue already provides platforms specifically for that.

```javascript
<template>
 <div> {{hello}}
 </div>
</template>
<script>
 export default {
  name: 'Test',
  data() {
   return {
    books: 0,
    hello: 'welcome to Vue JS'
   }
  },
beforeUpdate(){
 alert('beforeUpdate hook has been called');
},
updated(){
 alert('Updated hook has been called');
},
mounted(){
 this.$data.hello= 'lalalalallalalalalaalal';
 }
}
</script>
```

## 4. Destrution Hooks (Teardown)

Destruction hooks allow you to perform actions when your component is destroyed, such as cleanup or analytics sending. They fire when your component is being torn down and removed from the DOM.

**Destruction hooks are :-**

* _beforeDestroy_
* _destroyed_

### `beforeDestroy`

This Vue lifecycle hook is called just before a Vue instance is destroyed, the instance and all the functionalities are still intact and working here. This is the stage where you can do resource management, delete variables and clean up the component.

```javascript
<script>
export default {
  data() {
    return {
      exampleLeakyProperty: 'This represents a property that will leak memory if not cleaned up.'
    }
  },

  beforeDestroy() {
    console.log(`At this point, watchers, child components, and event listeners have not been teared down yet.`)
    // Perform the teardown procedure for exampleLeakyProperty.
    // (In this case, effectively nothing)
    this.exampleLeakyProperty = null
    delete this.exampleLeakyProperty
  }
}
</script>
```

This snippet will first store `exampleLeakyProperty`. When the beforeDestroy hook is run, this snippet will log the message `At this point, watchers, child components, and event listeners have not been torn down yet`. and then `exampleLeakyProperty` is deleted.

### `destroyed`

This is the final stage of the Vue lifecycle where all the child Vue instances have been destroyed, things like event listeners and all directives have been unbound at this stage. It gets invoked after running destroy on the object.

```javascript
<script>
export default {
  destroyed() {
    this.$destroy() 
    console.log(this)
  }
}
</script>
```

When you run the app and take a look at the console, you will see nothing.

## Conclusion

In this article, you have been introduced to the eight lifecycle hooks and what and when they are to be used. Now you can use the lifecycle hooks to add our custom logic at different stages of the lifecycle of your Vue instance controlling the flow from creation to destruction. To learn more about Vue refer to its [documentaion](https://vuejs.org/v2/guide/).