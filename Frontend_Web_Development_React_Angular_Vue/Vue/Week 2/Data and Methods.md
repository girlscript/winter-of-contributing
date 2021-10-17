<!-- <p align="center"><img src="https://miro.medium.com/max/830/1*-XSh-XXT3TWGcRaeFs446w.png" width="600px"></p><br><br> -->

<h1 align="center"> Data and Methods </h1>

## What is data() in Vue.js?

The Node.js provides a Vue.js data() method to the user. Basically in vue.js data() we defined collection of logic and stored in component using vue.js we can access data Node.jsassociated with a vue instance. Components are reusable as many times as per requirement. But each time it uses a separate component and also creates a new instance. When we use a data function at that time each instance maintains a separate copy of the return data object. Most of vue.js uses API to fetch and post data. It is safe because it does not affect the changes outside the scope.

**Syntax:**
```javascript
Vue.component('new component name', {
data: function () {
return {
count: 0
}
},
template: '<button v-on:click="count++">hit clicked {{ count }} times.</button>'
})
```

**Explanation:-** The above syntax component is reusable with instance name and notice that when we use data does not provide objects directly. Instead a component data option is function so each instance is maintaining a separate copy of return data by using the following syntax.
___

## How data() Works in Vue.js :-

* We must install Node.js 10.x and above on your system and you can verify by using node –v commandin your terminal.
* We must install the latest version of Vue on your system.
* We must install the Vue CLI 3.0 version on your system.
* We required basic knowledge about Node.js
* We required basic knowledge about Vue.js and components.


Let’s see how we can implement Vue.js data() with examples as follows.

**Example 1 :-**

**#App.vue**
```javascript
<template>
  <div id="app">
    <h2>{{title}} </h2>
  </div>
</template>

<script>
  export default {
    name: 'App',
    data(){
    return{
    title: 'Hello Vue.js!'
    }
  }
}
</script>
```

In this example, we only made changes in the App.vue file in which we added a data method to access the title. Illustrate the end result of the above declaration by using the use of the following snapshot.

**#Output :-**<br>

<img src="./assets/Output1.png" width="400px">

<hr>

## What is Method in Vue.js?

Vue.js methods are defined as a function to perform certain actions whenever the user is needed and the method is associated with a Vue instance as the method is similar to function like in other programming languages. In Vue.js methods are defined using the “method” name property before declaring or using it as a method in the Vue.js app code, in simple words we can say methods are function associated with an instance which are defined inside the method property, methods are usually defined similarly to as declaring “def” in the python for defining methods or functions and in Vue.js we use “method” property.
___

## Working of Methods in Vue.js :-

Here, we will discuss the method declaration in Vue.js. In this, methods are defined or declared inside the method property which means we have to write “method” before writing the method body. In Vue.js methods are useful for connecting functionality to directives for handling the events. This can also be said to define any piece or small code of logic we need to use methods and this logic can be used for any other function or in the rest of the program. So we can also call a method inside a lifecycle hook also which is also another way of using methods in Vue.js.

Let us demonstrate how to declare methods in Vue.js with the below syntax and example.

**Syntax:**
```javascript
new Vue({
e1: ‘#app’
…….
methods: {
  piece of code or logic
  }
)}
}
```

In the above, we can see the syntax for declaring methods in the Vue.js code snippets. In this, we can see we have declared method property to define or declare methods that will have a piece of code or logic within the method property which we want it to call in another method or rest.

**Example:-**

#Html file:
```javascript
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <title>Vue.js Events</title>
    <script src="https://unpkg.com/vue/dist/vue.js"></script> 
  </head>
  <body>
    <div id="app">
      <h1>Multiply Numbers: 16 * 8</h1></br>
      <button v-on:click = "displaynumbers">Click Here</button>
      <h1>Total: {{total}}</h1>
    </div>   
  </body>
</html> 
```

#Vue js file:
```javascript
import Vue from 'vue'
 import App from './App'
 import router from './router'
 Vue.config.productionTip = false
 var vm = new Vue({
   el: '#app', 
   data: {
     num1: '16',
     num2 : '8',
     total : '' 
  },
  methods : {
     displaynumbers : function(event) {
        console.log(event);
        return this.total =  this.num1 * this.num2;
     }
   }
 }); 
```

**#Output :-**<br>

<img src="./assets/Output2.png" width="400px">

When we click on the “Click Here” button, it shows the output, as shown in the below screenshot.

<img src="./assets/Output3.png" width="400px">

<hr>


