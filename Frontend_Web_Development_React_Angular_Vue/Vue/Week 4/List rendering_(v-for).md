# Rendering Lists in Vue

Web applications handle lists of data for various reasons: showing a list of registered users, checkout page with items to be purchased or a log of previous transactions.

A list is such a common construct that it’s a good fit for an abstraction. Vue makes it convenient to render lists of data with a nice syntax. In this article, we’ll look at lists and how to handle them in Vue.

# List rendering (v-for)

List rendering is one of the most commonly used practices in front-end web development. Dynamic list rendering is often
used to present a series of similarly grouped information in a concise and friendly format to the user. In almost every
web application we use, we can see lists of content in numerous areas of the app.

In this article we’ll gather an understanding of Vue’s v-for directive in generating dynamic lists, as well as go
through some examples of why the key attribute should be used when doing so.

## Mapping an Array to Elements with v-for

We can use the v-for directive to render a list of items based on an array. The v-for directive requires a special syntax in the form of item in items, where items is the source data array and item is an alias for the array element being iterated on:

**HTML**

    <ul id="example-1">
      <li v-for="item in items" :key="item.message">
        {{ item.message }}
      </li>
    </ul>

**JS**

    import Vue from "vue";
    var example1 = new Vue({
      el: '#example-1',
      data: {
        items: [
          { message: 'Foo' },
          { message: 'Bar' }
        ]
      }
    })
    
**Result:**

![image](https://user-images.githubusercontent.com/57637086/140803871-e17a67d7-4367-4ad0-afa7-159ea5c7519c.png)



### Inside v-for blocks we have full access to parent scope properties. v-for also supports an optional second argument for the index of the current item.

**HTML**

    <ul id="example-2">
      <li v-for="(item, index) in items">
        {{ parentMessage }} - {{ index }} - {{ item.message }}
      </li>
    </ul>

**JS**

    import Vue from "vue";
    var example2 = new Vue({
      el: '#example-2',
      data: {
        parentMessage: 'Parent',
        items: [
          { message: 'Foo' },
          { message: 'Bar' }
        ]
      }
    })
    
**Result:** 

![image](https://user-images.githubusercontent.com/57637086/140803990-6fbb0428-86d2-47b2-96f2-d23879ab90ee.png)


You can also use of as the delimiter instead of in, so that it is closer to JavaScript’s syntax for iterators:

    <div v-for="item of items"></div>
    
## v-for with an Object

You can also use v-for to iterate through the properties of an object.

**HTML**

    <ul id="v-for-object" class="demo">
      <li v-for="value in object">
        {{ value }}
      </li>
    </ul>

**JS**

    import Vue from "vue";
    new Vue({
      el: '#v-for-object',
      data: {
        object: {
          title: 'How to do lists in Vue',
          author: 'Jane Doe',
          publishedAt: '2016-04-10'
        }
      }
    })
    
**Result:**

![image](https://user-images.githubusercontent.com/57637086/140804226-e7fb8fbd-033b-4219-ab6d-2dddf94c371c.png)


## You can also provide a second argument for the property’s name (a.k.a. key):


    <div v-for="(value, name) in object">
      {{ name }}: {{ value }}
    </div>
    
   ![image](https://user-images.githubusercontent.com/57637086/140804448-1910b9b0-c8ce-49c5-aa60-4ff9db1da900.png)

**And another for the index:**

    <div v-for="(value, name, index) in object">
      {{ index }}. {{ name }}: {{ value }}
    </div>

![image](https://user-images.githubusercontent.com/57637086/140804353-e20310ac-e394-4bd6-89e8-7c0e72b1c0e4.png)




    
## Vue.js - Display a list of items with v-for    

**HTML**

    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <title>Vue.js - Display a list of items with v-for</title>
        <link href="//netdna.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet" />
    </head>
    <body>
        <div id="app"></div>

    </body>
    </html>

**JS**

    import Vue from "vue";

    import App from "./App";

    new Vue({
        el: "#app",
        render: h => h(App)
    });

**App.vue**

    <template>
        <div class="container">
            <h3 class="p-3 text-center">Vue.js - Display a list of items with v-for</h3>
            <table class="table table-striped table-bordered">
                <thead>
                    <tr>
                        <th>Name</th>
                        <th>Email</th>
                        <th>Role</th>
                    </tr>
                </thead>
                <tbody>
                    <tr v-for="user in users" :key="user.id">
                        <td>{{user.firstName}} {{user.lastName}}</td>
                        <td>{{user.email}}</td>
                        <td>{{user.role}}</td>
                    </tr>
                </tbody>
            </table>
        </div>    
    </template>

    <script>
    export default {
        data() {
            return {
                users: [
                    { id: 1, firstName: 'Frank', lastName: 'Murphy', email: 'frank.murphy@test.com', role: 'User' },
                    { id: 2, firstName: 'Vic', lastName: 'Reynolds', email: 'vic.reynolds@test.com', role: 'Admin' },
                    { id: 3, firstName: 'Gina', lastName: 'Jabowski', email: 'gina.jabowski@test.com', role: 'Admin' },
                    { id: 4, firstName: 'Jessi', lastName: 'Glaser', email: 'jessi.glaser@test.com', role: 'User' },
                    { id: 5, firstName: 'Jay', lastName: 'Bilzerian', email: 'jay.bilzerian@test.com', role: 'User' }
                ]
            };
        }
    };
    </script>


![image](https://user-images.githubusercontent.com/57637086/140802360-c6b5ea72-7e19-40b7-b6f4-9e1971d18f4c.png)

## Example Vue component that renders the users array

The app component template contains some standard html for a heading and table, and inside the table the tr tag uses the
v-for Vue directive to loop over the users array and render a table row for each user that includes the user name, email
and role.

The app component contains the hardcoded users array that is rendered with the v-for directive in template. The users
array is declared as a data property of the Vue component so the template can see it.

    <template>
        <div class="container">
            <h3 class="p-3 text-center">Vue.js - Display a list of items with v-for</h3>
            <table class="table table-striped table-bordered">
                <thead>
                    <tr>
                        <th>Name</th>
                        <th>Email</th>
                        <th>Role</th>
                    </tr>
                </thead>
                <tbody>
                    <tr v-for="user in users" :key="user.id">
                        <td>{{user.firstName}} {{user.lastName}}</td>
                        <td>{{user.email}}</td>
                        <td>{{user.role}}</td>
                    </tr>
                </tbody>
            </table>
        </div>    
    </template>

    <script>
    export default {
        data() {
            return {
                users: [
                    { id: 1, firstName: 'Frank', lastName: 'Murphy', email: 'frank.murphy@test.com', role: 'User' },
                    { id: 2, firstName: 'Vic', lastName: 'Reynolds', email: 'vic.reynolds@test.com', role: 'Admin' },
                    { id: 3, firstName: 'Gina', lastName: 'Jabowski', email: 'gina.jabowski@test.com', role: 'Admin' },
                    { id: 4, firstName: 'Jessi', lastName: 'Glaser', email: 'jessi.glaser@test.com', role: 'User' },
                    { id: 5, firstName: 'Jay', lastName: 'Bilzerian', email: 'jay.bilzerian@test.com', role: 'User' }
                ]
            };
        }
    };
    </script>

## Render an array of objects with index instead of id

If you have an array of objects that don't have a unique property (e.g. id) that you can use for the :key attribute,
it's possible to use the item index which is provided by the v-for directive.

This is how the above v-for would look using the item index instead of the id as the key prop:

    <tr v-for="(user, index) in users" :key="index">
        ...
    </tr>
    
  ### REFERENCES
  
  https://vuejs.org/v2/guide/list.html
