# Introduction

**Data Binding** is a process to bind data sources from the server-side and the client-side and synchronize them at the time of retrieval. In such a process whenever data is changed all the elements bound to that data reflect the change.

The term data binding also refers to where an outer representation of data in an element changes, and the underlying data is automatically updated to reflect that change.

## Types of Data Binding

There are generally two types of data binding:

### 1. One Way Data Binding

Data is only bound in one way,i.e, just bound to the DOM.

Example:

We use `Mustache` syntax as provided by the Vue.js to bind the variable from the relative component instance. The `Mustache` syntax is also called the Vue.js's double curly braces instance.

```html
<template>
  <div id="app">
    <img alt="Vue logo" src="./assets/logo.png" width="25%" />
    <h1>{{message}}</h1>
  </div>
</template>

<script>
export default {
  name: "App",
  data: () => ({
      message: "One way data binding demo",
  }),
};
</script>
```

Output for the code syntax mentioned above is:

<div style="display: flex; justify-content: center; align-items: center">
  <img src="./assets/DataBindingDemo_1.png" style="width: 500px;">
</div>
<br>

We can also bind a variable to an HTML attribute like `class` with the help of `v-bind` directive:

```html
<div v-bind:class="red_bkg"></div>
```

Vue.js provides shorthand for binding variables in an HTML attribute. Instead of writing `v-bind:attribute_name` we can use only `:attribute_name`:

```html
<div :class="red-bkg"></div>
```

## 2. Two-way data binding

It means that when properties in the model get updated, so does in the UI, and also when the UI elements get updated the change is propagated back to the model.

This tool is extremely powerful as it speeds up the code a lot and also saves them time in keeping the track of which element changes and whether it gets updated in the UI elements linked to that data element.

Example:

```html
<template>
  <div id="app">
    <img alt="Vue logo" src="./assets/logo.png" width="25%" />
    <div>
      <input type="text" v-model="message">
    </div>
    <h1>{{message}}</h1>
  </div>
</template>

<script>
export default {
  name: "App",
  data: () => ({
      message: "Two way data binding",
  }),
};
</script>
```

The output of the above code syntax is:

<div style="display: flex; justify-content: center; align-items: center">
  <img src="./assets/TwoWayBinding.gif" style="width: 500px;">
</div>
<br>

## How does the data binding work?

The `v-model` directive in Vue.js provides two-way data binding between the DOM and the data elements - between a form data and an input or between two components.

It tells Vue.js that we want to create a link or a two-way data binding between a value in a template and a value in our data properties.

In the previous example, you have already seen the `v-model` directive in action.

Often the directive `v-bind` is discussed with `v-model` directive, the major difference being is the former one provides only one-way data binding.

## Advantages of data binding

1. Without writing a large piece of code to manage the state of data that changes or depends on user input, we can use two-way data binding, and with this our code is reduced to two lines with a `v-model` directive attached to the DOM element which changes with the user input.

2. Data binding helps in syncing the data with your script and template and vice versa.

3. It provides faster communication between your HTML and logic portion (script).

4. Binding class and style properties helps you to manage an element's class list and inline styles which can be changed dynamically depending on the value of the flag.

Example:

```html
<template>
  <div id="app">
    <img alt="Vue logo" src="./assets/logo.png" width="25%" />
    <h1 v-bind:class="{ red: changeCol }">{{ message }}</h1>
    <button @click="changeCol = !changeCol">Click to change color</button>
  </div>
</template>

<script>
export default {
  name: "App",
  data: () => ({
    message: "Class and Style Binding",
    changeCol: false,
  }),
};
</script>

<style>
#app {
  font-family: "Avenir", Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
.red {
  color: red;
}
</style>
```

Output:

<div style="display: flex; justify-content: center; align-items: center">
  <img src="./assets/ClassBinding.gif" style="width: 500px;">
</div>
<br>

### References

1. [Medium](https://medium.com/js-dojo/exploring-vue-js-reactive-two-way-data-binding-da533d0c4554)
2. [learnvue v-model](https://learnvue.co/2021/01/everything-you-need-to-know-about-vue-v-model/)
3. [javaatpoint Data Binding](https://www.javatpoint.com/vue-js-data-binding)
