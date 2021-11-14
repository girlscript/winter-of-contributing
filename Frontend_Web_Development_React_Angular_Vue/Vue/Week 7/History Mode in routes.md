<!-- What are History Mode in routes in Vue.js?
How does this work?
Why there is a need for this?
What are the advantages to use it and when to use it?
How to implement this with code (also give theory explanation of code)?
You can take 2-3 examples with codes of different types to explain this. -->

# History Mode in routes in Vue.js

The **history** option when creating the router instance allows us to choose among different history modes. We can set Vue Router to history mode to get rid of the hash. It uses ``` history.pushState ``` API to let us navigate URLs without a page reload.

# Why there is a need for history mode ?
 Vue Router is a URL router that maps URLs to components. Hence for setting the route in Vue.js we need various modes such as hash, history etc. The default mode for Vue Router is hash mode. It uses a URL hash to simulate a full URL so that the page won’t be reloaded when the URL changes. So, we need History Mode to achieve URL navigation without a page reload. **Hence, we use history mode when we remove hash mode.**
 
 # When do we use history mode ?
 When using history mode, the URL will look "normal," e.g. http://mysite.com/user/id. Here comes a problem, though: Since our app is a single page client side app, without a proper server configuration, the users will get a 404 error if they access http://mysite.com/user/id directly in their browser. So that,s a problematic cause.
To fix the issue, all we need to do is add a simple catch-all fallback route to your server. If the URL doesn't match any static assets, it should serve the same index.html page that your app lives in. And again it's good to go.
 
 # Working
 
 When we create a new Vue router, we can set the mode as ```history``` and then attach the routes of the various linked pages.
 
 ```javascript 
 const router = new VueRouter({
  mode: 'history',
  routes: [...]
})
```


# Advantages 
* We can easily overcome the hash thing found in many sites which sometimes creates error. For example: "site#page1" generally brings you to a location on the current page and "site/page1" brings you to page1. 
* In single page client side application we can solve the issue of 404 error by adding catch-all fallback to the server.

# Server configuration

## Apache
The following example stats that you are serving your app from the root folder. If you deploy to a subfolder, you should use the publicPath option of Vue CLI (opens new window)and the related base property of the router (opens new window). You also need to adjust the examples below to use the subfolder instead of the root folder (e.g. replacing RewriteBase / with RewriteBase /name-of-your-subfolder/). 


```javascript
<IfModule mod_rewrite.c>
  RewriteEngine On
  RewriteBase /
  RewriteRule ^index\.html$ - [L]
  RewriteCond %{REQUEST_FILENAME} !-f
  RewriteCond %{REQUEST_FILENAME} !-d
  RewriteRule . /index.html [L]
</IfModule>
```

## Native Node.js

```javascript 
const http = require('http')
const fs = require('fs')
const httpPort = 80

http.createServer((req, res) => {
  fs.readFile('index.html', 'utf-8', (err, content) => {
    if (err) {
      console.log('We cannot open "index.html" file.')
    }

    res.writeHead(200, {
      'Content-Type': 'text/html; charset=utf-8'
    })

    res.end(content)
  })
}).listen(httpPort, () => {
  console.log('Server listening on: http://localhost:%s', httpPort)
})
```
![image](https://github.com/HastiSutaria/winter-of-contributing/blob/Frontend_Web_Development_React_Angular_Vue/Frontend_Web_Development_React_Angular_Vue/Vue/Week%207/assets/Vue-History-Mode-Routing-Tutorial.png)


# Example

* To install vuejs use this following command. (you can skip this installation if you install vuejs CLI)

```javascript
npm install -g @vue/cli
# OR
yarn global add @vue/cli
```
* After that, Now create a Vue.js project using the following command.

```javascript
vue create history
```

* After successfully creating a new project install VueJs routing using this following this command :

```javascript
yarn add vue-router

# or

npm install vue-router --save
```
* Now, open src/main.js file and edit. In this code, we use two parameter mode and route array. We use a mode History. 

```javascript
// main.js

import Vue from 'vue'
import App from './App.vue'
import VueRouter from 'vue-router'

Vue.config.productionTip = false
const routes = [];

const router = new VueRouter({ mode: 'history', routes: routes });

new Vue({
  render: h => h(App),
  router
}).$mount('#app')
```
* For better style here we use bootstrap so install bootstrap using this following this command.

```javascript
yarn add bootstrap

# or

npm install bootstrap --save
```
* After successfully install bootstrap import bootstrap file in App.vue file.
```javascript
App.vue

...
import 'bootstrap/dist/css/bootstrap.min.css';
...
```
* Now we will create two components inside the **component** folder.

## MyComponent1
```javascript
// myComponent1.vue

<template>
    <p>This is My Component 1</p>
</template>
<script>
export default {
    
}
</script>
```
## MyComponent2
```javascript
// myComponent2.vue

<template>
    <p>This is My Component 2</p>
</template>
<script>
export default {
    
}
</script>
```

* Now, import all this component in the main.js file because we use to these components to assign the different routes and create an array.

```javascript
// main.js

import Vue from 'vue'
import App from './App.vue'
import VueRouter from 'vue-router'

Vue.use(VueRouter)

import myComponent1 from './components/myComponent1.vue'
import myComponent2 from './components/myComponent2.vue'


import 'bootstrap/dist/css/bootstrap.min.css';

Vue.config.productionTip = false

const routes = [
  { path: 'myComponent1', name: 'My Component 1', component: MyComponent1 },
  { path: 'myComponent2', name: 'My Componet 2', component: MyComponent2 },
 
];

const router = new VueRouter({ mode: 'history', routes: routes });

new Vue({
  render: h => h(App),
  router
}).$mount('#app')
```

* Since we have registered the all components with routes successfully. Now, add the following code inside App.vue file. this is work as a navigation.

```javascript
<template>
  <div id="app">
  <nav >
   <ul >
    <li >
     <router-link :to="{ name: 'My Component 1' }" >myComponent1</router-link>
    </li>
    <li >
     <router-link :to="{ name: 'My Component 2' }" >myComponent2</router-link>
    </li>
   </ul>
  </nav>
  <router-view></router-view>
 </div>
 </template>

 <script>

 export default {
 name: 'app'
 }
 </script>
```

* Now, we start the development server using the following command.
```javascript
npm run serve
```

* Finally, we directly access the route without include hash(#). Hence, the history mode of routing is working perfectly fine.


## References : https://next.router.vuejs.org/guide/essentials/history-mode.html

# Thank You!
