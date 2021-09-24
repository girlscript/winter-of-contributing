# Vue Js 
*( a pragmatic documentation )*

**In this documentation we are going to learn a bit about *vue javascript* which is a progressive framework through which you can build much interactive user interfaces with a lot of ease as juxtaposed with complex monolithic frameworks like AngularJs.**

So, the very first and foremost question arrives!!<br/>
<hr/>
## What is Vue.js?
- As mention earlier, Vue Js is a modular javascript framework for making and building user interfaces. It is made user freindly and adoptable and has come up as one of the most used JavaScript Frameworks. 
- Vue is made cpable to collaborate and work in single pafe sophisticated web applications when used in combination with **SFC** (single file componenets).
<br/><br/>
<hr/>


## Installation
Using Vue Js in your projects...
<br/>
**`CDN`** to include directle in the HTML file
```
<script src="https://cdn.jsdelivr.net/npm/vue@2.6.14/dist/vue.js"></script>
```
**`NPM`**
```
npm install vue
```
<hr/>

Now you need to install **Vue CLI** which enables you to quickly scaffold a new project though  **`vue create`** or manage your projects using **Vue UI** .
Installing it though <br/>
**`NPM`**
```
npm install -g @vue/cli
```
<br/>

<br/>


Now coming to **Vue Componenets**...
## What is VueJs-Components and their need?
>Components are one of the most useful  ability of Vue Js.
  -  These are the **reusable code** snippets written with the help of custom HTML elements.
  -  components can be used in another components also, giving them a tag of **child component**.
>Need of Vue Components
  - componenets in VueJs allows us to make or build our applications with the help of a pool or copy of reusable components.
  - Through components we can write the application's  code more wisely and efficiently.
<br/><br/>

## Basic syntaxing of Vue Components... 
```html
<div id="app">
    <p>{{ title }}</>
    <hr>
    <app-user></app-user>
<div>
```
```js
Vue.components( 'app-user' , {
    data: function() {
        return { 
            user : [ 
                { username: 'Max' },
                { username: 'Chris' },
                {username: 'Anna' }
            ]};
       },

       template:  '<div><div v-for="user in users"><p>Username: {{ user.username }}</p</div></div>'
)};  

new Vue({
    el: '#app',
    data: {
        title:  'Hello Wolrd!',
    }
});   
```
- Here we have used a component and defined it globally i.e, it can be used as many time as you want by just copying  `<app-user></app-user> ` in your code. 
<br/>
It can also be defined locally in the JS file as....
```js
new Vue({
    el: '#app',
    data: {
        title:  'Hello Wolrd!',
    },
    components: {
        'app-user' : {
           data: function() {
                return { 
                         user : [ 
                            { username: 'Max' },
                             { username: 'Chris' },
                             { username: 'Anna' }
                         ]};
                    }
              }
         }  
}); 
```

#-Ways of defining templates...
1. Plain Strings
```js
Vue.component('my-checkbox', {
  template: '<div class="checkbox-wrapper" @click="check"><div :class="{ checkbox: true, checked: checked }"></div><div class="title">{{ title }}</div></div>',
  data() {
    return { checked: false, title: 'Check me' }
  },
  methods: {
    check() { this.checked = !this.checked; }
  }
});
```
<br/>

2. Template Literals
```js
Vue.component('my-checkbox', {
  template: `
    <div class="checkbox-wrapper" @click="check">
      <div :class="{ checkbox: true, checked: checked }"></div>
      <div class="title">{{ title }}</div>
    </div>
  `,
  data() {
    return { checked: false, title: 'Check me' }
  },
  methods: {
    check() { this.checked = !this.checked; }
  }
});
```
<br/>

3.  X-Templates
```html
<div id="app">...</div>
<script type="text/x-template" id="checkbox-template">
  <div class="checkbox-wrapper" @click="check">
    <div :class="{ checkbox: true, checked: checked }"></div>
    <div class="title">{{ title }}</div>
  </div>
</script>
```
```js
Vue.component('my-checkbox', {
  template: '#checkbox-template',
  data() {
    return { checked: false, title: 'Check me' }
  },
  methods: {
    check() { this.checked = !this.checked; }
  }
});
```
<br/>

4. Inline Template
```html
<div id="app">
  ...
  <my-checkbox inline-template>
    <div class="checkbox-wrapper" @click="check">
      <div :class="{ checkbox: true, checked: checked }"></div>
      <div class="title">{{ title }}</div>
    </div>
  </my-checkbox>
</div>
```
```js
Vue.component('my-checkbox', {
  data() {
    return { checked: false, title: 'Check me' }
  },
  methods: {
    check() { this.checked = !this.checked; }
  }
});
```
<br/>

5. JSX
```jsx
Vue.component('my-checkbox', {
  data() {
    return { checked: false, title: 'Check me' }
  },
  methods: {
    check() { this.checked = !this.checked; }
  },
  render() {
    return <div class="checkbox-wrapper" onClick={ this.check }>
            <div class={{ checkbox: true, checked: this.checked }}></div>
            <div class="title">{ this.title }</div>
          </div>
  }
});
```
<br/>

6. Single-File Components
```vue
<template>
  <div class="checkbox-wrapper" @click="check">
    <div :class="{ checkbox: true, checked: checked }"></div>
    <div class="title">{{ title }}</div>
  </div>
</template>
<script>
export default {
  data() {
    return { checked: false, title: 'Check me' }
  },
  methods: {
    check() { this.checked = !this.checked; }
  }
};
</script>
```
<br/>

#Best method.............
**Out of all those above defined methods, Single-File-Components are most versatile and powerfull option in almost each and every scenerio.**
