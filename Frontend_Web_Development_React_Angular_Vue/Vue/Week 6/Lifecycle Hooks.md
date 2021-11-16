# Lifecycle Hooks
Lifecycle hooks are the defined methods which get executed in a certain stage of the vue object lifespan.

A vue component can go through four phases :
1. Creation
2. Mounting
3. Updating
4. Unmounting

There are 13 life cycle hooks that we can use in a component.  

![image](https://user-images.githubusercontent.com/87546207/141983910-35b3085f-fa2b-43c1-9a0a-acbbccedf162.png)


## Creation
### beforeCreate()
This is the very first lifecycle hook that gets called in Vue JS, it gets called immediately after the Vue instance has been initialized.

### created()
This is the second lifecycle hook that is called right after the beforeCreated hook. At this stage, the Vue instance has been initialized and has activated the start of things like computed properties, watchers, events, data properties and manipulations that come with it.

## Mounting
### beforeMount()
This is the next lifecycle hook that gets called after the created hook is called. This is the moment immediately before the instance is mounted on the DOM, the template and the scoped styles are all compiled here but you still cannot manipulate the DOM yet, the element property is not still available. Here is where initializations that you do not want lying around in your component should go into.
### mounted()
This is the next lifecycle hook to be called after the beforeMounted is called. It is called right after the instance has been mounted. Here the app component, or any other component in the project becomes functional and can now be used. The data is fit into the template, the DOM element is replaced with data filled element and can now be manipulated here, the element property is now available for use.


## Updating
### beforeUpdate()
This is the lifecycle hook called after the mounted hook, anytime a change is made to the data that requires the DOM to be updated.
### updated()
This lifecycle hook is called just after a DOM update has occurred, so this means immediately after the beforeUpdate hook is called. DOM related operations can be performed here.

## Unmounting
### beforeUnmount()/beforeDestroy()
Called right before a component instance is unmounted. At this stage the instance is still fully functional.
### unmounted()/destroyed()
Called after a component instance has been unmounted. When this hook is called, all directives of the component instance have been unbound, all event listeners have been removed
and all child component instances have also been unmounted.
I made two component files one is Parent.vue and the other Child.vue.I have added eight life cycle hooks corresponding to the four phases we have just discussed above. 

#### Parent.vue
```
<template>
  <div>
    Parent component
    <button @click="showChild = !showChild">Toggle Child</button>
    <Child v-if="showChild" />
  </div>
</template>

<script>
import Child from './Child.vue'
export default {
  components: { Child },
  name: 'Parent',
  data() {
    return {
      showChild: true,
    }
  },
  beforeCreate() {
    console.log('Parent beforeCreate()')
  },
  created() {
    console.log('Parent created()')
  },
  beforeMount() {
    console.log('Parent beforeMount()')
  },
  mounted() {
    console.log('Parent mounted()')
  },
  beforeUpdate() {
    console.log('Parent beforeUpdate()')
  },
  updated() {
    console.log('Parent updated()')
  },
  beforeUnmount() {
    console.log('Parent beforeUnmount()')
  },
  unmounted() {
    console.log('Parent unmounted()')
  },
}
</script>

<style scoped>
</style>
```
#### Child.vue
```
<template>
  <div>Child component</div>
</template>

<script>
export default {
  name: 'Child',
  beforeCreate() {
    console.log('Child beforeCreate()')
  },
  created() {
    console.log('Child created()')
  },
  beforeMount() {
    console.log('Child beforeMount()')
  },
  mounted() {
    console.log('Child mounted()')
  },
  beforeUpdate() {
    console.log('Child beforeUpdate()')
  },
  updated() {
    console.log('Child updated()')
  },
  beforeUnmount() {
    console.log('Child beforeUnmount()')
  },
  unmounted() {
    console.log('Child unmounted()')
  },
}
</script>

<style scoped>
</style>
```
#### Output
![1](https://user-images.githubusercontent.com/87546207/141700764-5e4d625e-2342-453e-aa51-11f2e1c93db0.PNG)

First we have the creation methods ,parent before create and parent created next we have the mounting phase so the parent before mount method is called but after that we have the lifecycle methods of the child component and this makes sense because a parent cannot mount itself onto the dom without knowing what the child component is so once before mount on the parent component is invoked execution passes on to the child component the child components creation and mounting phases are executed so we have child beforecreate, child created,
child before mount and child mounted once the child has finished mounting the parent mounted method is called.  
  
    
 ![2](https://user-images.githubusercontent.com/87546207/141701170-dcaaec01-5c2b-45e2-a0f1-3732791160b4.PNG)
On clicking toggle child we can see that the parent beforeupdate method is called and then the execution enters the child component , child before unmount is called , child unmounted is called and finally
parent updated is called. 


### Miscellaneous
### activated
Called when a kept-alive component is activated.
### deactivated
Called when a kept-alive component is deactivated.
### errorCaptured
Called when an error from any descendent component is captured. The hook receives three arguments: the error , the component instance that triggered the error, and a string containing information on where the error was captured. The hook can return false to stop the error from propagating further.
### renderTracked
Called when virtual DOM re-render is tracked. The hook receives a debugger event as an argument. This event tells you what operation tracked the component and the target object and key of that operation.
### renderTriggered
Called when virtual DOM re-render is triggered. Similarly to renderTracked, receives a debugger event as an argument. This event tells you what operation triggered the re-rendering and the target object and key of that operation.

## References
[Image](https://cdn-images-1.medium.com/max/1600/1*byyX8EW6mIhRsCBWwByNYg.png)  
[Lifecycle Hooks|Vue.js](https://v3.vuejs.org/api/options-lifecycle-hooks.html#rendertracked)  
[Codevolution](https://youtu.be/hk6OktYj8Fs)
