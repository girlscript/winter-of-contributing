# Event Listening and Handling (using v-on)
## Event Handling  
 ### Event Listening
An event listener is a procedure or function in a computer program that waits for an event to occur. Examples of an event are the user clicking or moving the mouse, pressing a key on the keyboard, disk I/O, network activity, or an internal timer or interrupt.
  
We can use the v-on directive to listen to DOM events and run some JavaScript when they’re triggered.
```
<template>
<h2> {{name}}</h2>
  <div>
<button v-on:click = "name='meera'">Change name</button>
  </div>
</template>

<script>
  export default {
    name: 'App',
  data() {
    return {
      name: 'heera'
    }
  }
  }
</script>
```
![Animation2](https://user-images.githubusercontent.com/87546207/141993138-d10ad136-fec5-4c18-ab06-0028cdb34ae5.gif)

The above is an example of inline event handler. But more often than not the logic for many event handlers will be complex so keeping your javascript code in the value of the v:on directive is not feasible in such cases you can specify the name of a method
you would like to call when the event is triggered.

#### Method Event Handlers

```
<template>
<h2> {{count}}</h2>
  <div>
<button v-on:click = "increment">Increment</button>
<button v-on:click = "decrement">Decrement</button>
  </div>
</template>

<script>
  export default {
    name: 'App',
  data() {
    return {
      count:0
    }
  },
  methods: {
    increment(){
      this.count +=1
    },
    decrement(){
      this.count -=1
    }
  }
  }
  ```
  ![Animation4](https://user-images.githubusercontent.com/87546207/141996467-cf73f246-9ee4-4712-83ba-1d1640c3b9b9.gif)
  
 ### Event Modifiers
 There are frequently used calls that are made when handling events. Vue has made it easier for us to implement these by using modifiers.
 The following modifiers are available in Vue.

.stop - Prevents event bubbling up the DOM tree
.prevent - Prevents default behavior
.capture - Capture mode is used for event handling
.self - Only trigger if the target of the event is itself
.once - Run the function at most once

### Key Modifiers
Similar to event modifiers, we can add key modifiers that allow us to listen to a particular key when handling key-related events.  

.enter,
.tab,
.delete (captures both “Delete” and “Backspace” keys),
.esc,
.space,
.up,
.down,
.left,
.right

## References
[Event Handling|Vue.js](https://vuejs.org/v2/guide/events.html)  
[Codevolution](https://youtu.be/5KowlsPQksc)

