# Vue.Js

Vue.js is an **open-source model–view–viewmodel front end JavaScript framework** for building user interfaces and single-page applications. It was created by **Evan You**, and is maintained by him and the rest of the active core team members.

- Vue.js lets you extend HTML with HTML attributes called directives
- Vue.js directives offers functionality to HTML applications
- Vue.js provides built-in directives and user defined directives

## Why Vue.Js?

Modern web apps require increasingly complicated front-ends that can handle large amounts of user interactions and dynamic data. For example, Instagram has over 95 million new posts added per day. Front-end frameworks are JavaScript libraries that make it easy to write the code to create and display this enormous amount of data.

There are many popular front-end frameworks used by engineers today, including React and Angular. Vue.js is an up-and-coming front-end framework that aims to combine the best aspects of all of these frameworks in one easy-to-use package. In fact, in the 2018 State of JavaScript survey, Vue.js was the most sought after front-end framework by a landslide, with 46.6% of all front-end developers saying that they want to learn it.

In short, Vue.js makes front-end web development easier and more exciting than it’s ever been.

**_Vue.js uses double braces {{ }} as place-holders for data._**

**_Vue.js directives are HTML attributes with the prefix v-_**

## Installation

There are many ways to install VueJS. Some of the ways on how to carry out the installation are discussed ahead.

1. **Using the ```<script>``` tag directly in HTML file**

```html
<html>
   <head>
      <script type = "text/javascript" src = "vue.min.js"></script>
   </head>
   <body></body>
</html>
```

Go to the home site [LINK](https://vuejs.org/v2/guide/installation.html) of VueJS and download the vue.js as per need. There are two versions for use - production version and development version. The development version is not minimized, whereas the production version is minimized as shown in the following screenshot. Development version will help with the warnings and debug mode during the development of the project.

<img src= "installation 1.png">

2. **Using CDN**

We can also start using VueJS file from the CDN library. The link [LINK](https://unpkg.com/vue) will give the latest version of VueJS. VueJS is also available on jsDelivr [LINK](https://cdn.jsdelivr.net/npm/vue/dist/vue.js) and cdnjs [LINK](https://cdnjs.cloudflare.com/ajax/libs/vue/2.4.0/vue.js).

We can host the files at our end, if required and get started with VueJS development.

3. **Using NPM**

For large scale applications with VueJS, it is recommended to install using the npm package. It comes with Browserify and Webpack along with other necessary tools, which help with the development. Following is the command to install using npm.

```npm  install vue```

## Components

Vue components extend basic HTML elements to encapsulate reusable code. At a high level, components are custom elements to which the Vue's compiler attaches behavior. In Vue, a component is essentially a Vue instance with pre-defined options. The code snippet below contains an example of a Vue component. The component presents a button and prints the number of times the button is clicked:

```html
<template>
  <div id="tuto">
    <button-clicked v-bind:initial-count="0"></button-clicked>
  </div>
</template>

<script>
Vue.component('button-clicked', {
  props: ['initialCount'],
  data: () => ({
    count: 0,
  }),
  template: '<button v-on:click="onClick">Clicked {{ count }} times</button>',
  computed: {
    countTimesTwo() {
      return this.count * 2;
    }
  },
  watch: {
    count(newValue, oldValue) {
      console.log(`The value of count is changed from ${oldValue} to ${newValue}.`);
    }
  },
  methods: {
    onClick() {
      this.count += 1;
    }
  },
  mounted() {
    this.count = this.initialCount;
  }
});

new Vue({
  el: '#tuto',
});
</script>
```

## Vue Example

In the example below, a new Vue object is created with new Vue().

The property el: binds the new Vue object to the HTML element with id="app".

```html
<div id="app">
<h1>{{ message }}</h1>
</div>

<script>
var myObject = new Vue({
    el: '#app',
    data: {message: 'Hello Vue!'}
})
</script>
```

## Vue.js Binding

When a Vue object is bound to an HTML element, the HTML element will change when the Vue object changes:

```html
<div id="app">
{{ message }}
</div>

<script>
var myObject = new Vue({
    el: '#app',
    data: {message: 'Hello Vue!'}
})

function myFunction() {
    myObject.message = "John Doe";
}
</script>
```

## Vue.js Two-Way Binding

The v-model directive binds the value of HTML elements to application data.
This is called two-way binding:

```html
<div id="app">
  <p>{{ message }}</p>
  <p><input v-model="message"></p>
</div>

<script>
var myObject = new Vue({
    el: '#app',
    data: {message: 'Hello Vue!'}
})
</script>
```

## Vue.js Loop Binding

Using the v-for directive to bind an array of Vue objects to an "array" of HTML element:

```html
<div id="app">
 <ul>
   <li v-for="x in todos">
   {{ x.text }}
   </li>
  </ul>
</div>

<script>
myObject = new Vue({
    el: '#app',
    data: {
    todos: [
        { text: 'Learn JavaScript' },
        { text: 'Learn Vue.js' },
        { text: 'Build Something Awesome' }
        ]
    }
})
</script>
```

## Vue.Js Pros and Cons :-

### Advantages of Vue.js

There are certain advantages of using Vue.js. For instance, Vue.js is similar to Angular and React in many aspects, and it continues to enjoy growing popularity compared to other frameworks. The framework is just 20 kilobytes in size, which makes it easier for developers to download files instantly. In fact, when it comes to load times and usage, Vue.js easily beats other frameworks.

1. **Simplicity**
The basic idea behind the development of Vue.js is to achieve good results with as little effort as possible so that the user can code using only a few lines. Vue.js is also great for working with components as it needs relatively little overhead because single-file components can store all the codes such as HTML, CSS, and JavaScript in a single file.

2. **Integration**
Developers can integrate Vue.js into other frameworks such as React enabling them to customize the project according to their respective requirements. Due to the ease of integration, Vue.js is becoming a popular choice for web development as it can be used with a variety of existing web applications. As the backend is built on JavaScript, developers can also use the technology to experiment with many other JavaScript applications. Similarly, the variety of components allows developers to create different types of web applications and to alter existing frameworks. In addition to JavaScript, it can also handle HTML blocks because of MVVM architecture allowing two-way communication.

3. **User-Friendly**
According to various experts, Vue.js does not require a steep learning curve, which is beneficial for new programmers. Regarding the learning process, it is interesting to note that Vue.js only requires programmers to know the basics of JavaScript, HTML, and CSS, which is unlike Angular or React, where additional programming languages are necessary for advanced coding. In addition, Vue.js can be used with common editors. There is even a browser plugin under Firefox and Chrome, which makes it easier to get started quickly.
4. **Customization**
Vue.js is a great tool for developers because all of its functions are readily accessible. For ease of use, developers can easily name the function as they like. Every segment can have separate functions, which makes it easier to customize the application according to the individual requirements.
5. **Few Restrictions**
The design of Vue.js offers fewer restrictions and greater flexibility to complete the project. The core library focuses on the ‘View’ part; which combined with the modular approach, and the use of various libraries allow programmers to solve problems in different ways. Despite the fact that Vue.js community is still evolving, there is always someone eager to help with new ideas.
6. **Good Documentation**
One of the most important things is good documentation. It shows all the options offered by the framework and corresponding best practice examples. The documentation at Vue.js is constantly being improved and updated. It also contains a simple introductory guide and a very good overview of the API. Perhaps, it is one of the most detailed documentations available for the type of language.
7. **Support**
The support for the platform is impressive. For instance, in 2015, every query on the official platform was answered. Similarly, more than 1,400 issues were resolved on GitHub with an average time of less than 13 hours. In 2018, the support continued to impress as every query was diligently answered. In fact, more than 6,200 problems were resolved with an average resolution time of only six hours. To support the community, there are consistent release cycles of updated information. In addition, the community continues to grow and evolve with the backend support of developers.

### Drawbacks of Vue.js

Despite the advantages of Vue.js, there are definitely a few drawbacks that need to be addressed. For instance, stability remains an issue since the release of the first version, back in 2015. It means that the platform is great for personal projects, but it should be used with caution for larger projects, where stability can cause financial losses.

1. **Lack of Support for Large Projects**
Vue.js is a relatively new language, which is not supported by a large community of active programmers. Similarly, the development team of Vue.js is also small, which means that the platform will need some time to get corporate backing. As of 2018, the development of the framework is not tied to corporate interest; therefore, any changes to the existing framework are mostly depended on the feedback of community members.
In the JavaScript world, adopting a certain technology can always be considered a bet against the stability of a platform. The greater flexibility and lots of options can also become a problem when large projects are deployed as the involvement of different developers can be difficult to handle.
2. **Future Contenders**
A small development team also means that the absence of active research may provide an opportunity for another fresh framework to catch the interest of the community. In such a case, the development of the framework can slow or even stagnate. Such threats are valid as major corporations such as Google and Facebook are actively involved in the development of similar concepts.
3. **Language Barriers**
Some experts have also cited language barriers as a potential problem. It is interesting to note that most of the coding is written in Chinese language, which often complicates things for non-native speakers. As such, there seems to be a lot of support for the Chinese development community as compared to others.
4. **Lack of Plugins**
As Vue.js is still in the development phase, support for important plugins is missing. It means that developers need to switch to other languages for assistance. For example, it is not uncommon for developers to resort to vanilla JavaScript when using Google Maps. On a similar note, the fast evolution of Vue.js means that some of the important information on the Internet may be outdated forcing developers to revert to documentation.

_Overall, Vue.js is a powerful framework for developing user-interface. Its small size and customization features make it a solid choice for developers looking for user-friendly framework for web applications. Most of the drawbacks of Vue.js can be rectified easily keeping developers optimistic that this framework will continue to improve in the future._

__Contributor :__ [Sakshi Mishra](https://github.com/SakshiMishra1) :heart:
