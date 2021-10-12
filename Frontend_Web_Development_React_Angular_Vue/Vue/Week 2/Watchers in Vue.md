# Watchers in Vue.js
Vue JS was built to be a view-layer-focused JavaScript framework. This is why it is template-based. However, in the
course of writing code, developers can get carried away by the ease of use so much, that they begin to overpopulate
their Vue templates with too much logic. Vue discourages this and advises breaking your application into components to
enhance modular development.

This is where watchers come into play, imagine that you can spy on a property you have in your Vue component and then be
able to react to it when Vue notices a change in the said property. Of course you can setup an event handler and do it
all in vanilla JavaScript, but Vue provides an even easier out-of-the-box way of doing this without even setting setting
up any event listeners.


A Watcher in Vue.js is a special feature that allows one to watch a component and perform specified actions when the
value of the component changes. It is a more generic way to observe and react to data changes in the Vue instance.
Watchers are the most useful when used to perform asynchronous operations.

#### Watcher syntax
```
<script>
    export default {   
        watch: {}
    }
</script>
```
## Computed properties vs Watchers
While computed properties are more appropriate in most cases, there are times when a custom watcher is necessary. That’s
why Vue provides a more generic way to react to data changes through the watch option. This is most useful when you want
to perform asynchronous or expensive operations in response to changing data.

**Differences and Similarities**

Let's see how they are different:

    1.Computed props are more declarative than watched properties

    2.Computed props should be pure: return a value, synchronous, and have no side-effects

    3.Computed props create new reactive properties, watched props only call functions

    4.Computed props can react to changes in multiple props, whereas watched props can only watch one at a time

    5.Computed props are cached, so they only recalculate when things change. Watched props are executed every time

    6.Computed props are evaluated lazily, meaning they are only executed when they are needed to be used. Watched props are
    executed whenever a prop changes

But they also have some similarities.

They aren't exactly twins, but they both react to changes in properties can be used to compute new data

But how do you know which one to use in a given situation?

## When to use Computed or Watchers?

**Use watchers when:**

    You want to listen when a data property changes
    
    You want to watch a data property until it reaches some specific value and then do something
    Ps. you can’t watch multiple properties at the same time
    
**Use computed properties when:**

    You want to compose new data from existing data sources
    
    You need to sort or manipulate a large group of data
    
    You need to use values directly in the template

**Most of the time you'll want a computed prop, so try to use that first. If it doesn't work, or results in weird code that makes you feel like taking a shower, then you should switch to using a watched prop.**
# Code examples

Watchers also allow us to write much more declarative code. You’re no longer tracking everything yourself. Vue is
already doing it under the hood, so you can also have access to changes made to any properties it’s tracking, in data,
computed, or props, for example.

Let’s run through the most simple example possible so you get a taste of what’s happening here.

**Eg: 1**

**CODE**
```
<html>
  <head>
    <title>Vue.js Watchers</title>
    <script src="https://unpkg.com/vue"></script>
  </head>
  <body>
    <div id="app">
        <input type="number" v.model.number="counter"></input>
    </div>
    
// JS CODE
    
    <script>
    new Vue({
        el: '#app',
        data() {
            return {
                counter: 0
            }
        },
        watch: { // Creating a Watcher
            counter() {
                console.log('The counter has changed!')
            }
        }
    })
</script>


  </body>
</html>
```
https://user-images.githubusercontent.com/57637086/136342093-28f3ccb4-0b99-45dc-a5d3-bf1214064bf4.mp4

**As you can see in the code above, we’re storing counter in data, and by using the name of the property as the function name, we’re able to watch it. When we reference that counter in watch, we can observe any change to that property.**
_________________________________________________________________________________________________________________________________________________________________________________
**Eg: 2**

**HTML and CSS CODE**

```
<html>
  <head>
    <title>Vue.js Watchers</title>

    <script src="https://unpkg.com/vue"></script>
  </head>

  <body style="background: black;">
    <h1 style="text-align: center; color: yellow;">
      Square of Number
    </h1>

    <h3 style="text-align: center;">
      Vue.js | Watchers
    </h3>

    <!-- Creating element for Vue -->
    <div style="text-align: center; color: yellowgreen;" id="ex">
      <h3>
        Enter any Value :
        <input type="text" v-model="value1" />
      </h3>
      <h3>
        Square of Entered number :
        <span style="font-size: 30px;">
          {{result}}
        </span>
      </h3>
    </div>
  </body>
</html>
```
**JS CODE**

```
import Vue from "vue";  

Vue.config.productionTip = false;
new Vue({
  el: "#ex",
  data: {
    // Setting values for fields
    value1: "",
    result: 0
  },
  watch: {
    // Creating a Watcher

    value1: function (val) {
      // Creating function for input component
      this.value1 = val;
      this.result = val * val;
    },
    result: function (val) {
      // Creating function for result component
      this.result = val;
    }
  }
});
```

https://user-images.githubusercontent.com/57637086/136335264-10856bb3-a855-422d-b940-bae20f328f75.mp4

**The Watcher looks for changes in the input value. Whenever the input value changes, the function inside is automatically executed (that return square of input value), and the value of result changes automatically. We do not have to specially assign any events and wait for the value to change.**

**The result value changes automatically when the input value changes.**
_________________________________________________________________________________________________________________________________________________________________________________
**References**

https://vuejs.org/v2/guide/

https://medium.com/notonlycss/the-difference-between-computed-and-watchers-in-vue-js-3579bf91063a

https://developer.mozilla.org/en-US/docs/Learn/Tools_and_testing/Client-side_JavaScript_frameworks/Vue_getting_started
