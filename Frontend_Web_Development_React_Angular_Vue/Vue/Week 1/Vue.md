# Vue.js Components

## What are components?

One of the features of Vue.js is the Vue Components which allow us to reuse a piece of code multiple times within a Vue Project. Each component is a separate identity having its own Html, CSS and Javascript which can be used within the project. They helps us to avoid adding duplicate code in the project. So, components make the code portable within the Vue environment.

<div style="display: flex; justify-content: center; align-items: center; margin-bottom: 10px;">
    <img src="./assets/ReusableComponents.jpg" style="height: 400px; width: auto; border-radius: 10px;">
</div>

## Why we need them?


We usually use the components we need a certain functionality or a UI (code) multiple times in the application. The components also increase the flexibility of our code as well as to make to code more manageable. We can use the simple components to make more complex layout with ease. 

### For Example: 

When we create a blogging website the interface of the blog remains the same only the content in the blog is changed. So, we can define a template for the blog and just change the text inside it to use it in the project. So, this is where we can use the components.

## Code Structure:

So, now you know what a component is and why it is needed. The step is how to write a component by yourself.

If you are using Vue through **CDN** in your project, then here how you can use a create a component. Create a file with “.js” extension and create the component as shown below. 

  * ### Global Components:

      These are the components that can be used with any of the Vue instance. They can be called and used anywhere in the Vue application. They have a global scope. Below is the way to create “Global Components”.

     ``````
    Vue.component(‘component-name’, {
    template: `
    <div>
    // Here the Html of the component is added
    </div>`,
    data: function() {
     return {
     // Here the local data for the component is stored
      }
     },
     methods: {
     // Here the functionality for the component is added
     },
     props: {
     // Here data passed from the parent component is stored
     },
     }); 

    ``````

     In the above code, Vue.Component() is a function which takes two parameters a string (Component Name) and an object which contains the details about the object like the: template, props, methods and data. These Global Components can be used anywhere in any Vue Instance.

     `````` 
     <div id = “app”>
     <component-name> </component-name>
     </div> 

     ``````


   * ### For Local Components:

     These are components that can be used within a specific scope, where they are registered using the “components” object property as show below:
     ``````
      var Component = {
      template: ` 
      <div>
       // Here the body of the component is added 
      </div>
      `,
      props: {
      // Here the data passed from the parent component is added
      },
     data: function(){
       return {
           // Here the local data of the component is added
      }
     },
     methods: {
       // Here the functions related to component are added
      }
     };
     ``````
     Now, these components must be called in the specific Vue Instance to be able to use them: 

     ``````
      const app = new Vue ({ 
      el: ‘#app’, 
      components: {
      ‘component-name’: Component (Object Name created above)
      },
      data: {
         // Here the main data for the application is added 
       } 

      });

     ``````
     Now call them in the html file as below:

     ``````
     <div id = “app”>
     <component-name> </component-name>
     </div>

     ``````


For the Project created using **Vue Cli**, you can create a component by creating a file with “.vue” extension in the “Components” folder and then import it where you want to use it. Below is the way to create the components for vue cli environment:


``````
<template>
 <div>
     // Here the Html body of the component is added
</div>
</template>

<script>
export default {
  name: “ComponentA”,
  data: function() {
      return {
          // Here the local data of the component is added
      }
 },
methods: {
 // Here the methods for the component is added
},
props: {
// Here the data passed from the parent component is added
}

};
</script>

<style scoped>
// Here the CSS for the component is added
</style>

``````
Now, in order to use these components, import them in the desired file where you want to us them as show below: 

``````
import ComponentA  from “./Component.vue”;
export default {
components: {
      ComponentA
   }
};

``````
## How to Code Efficiently:

Components make the work much simpler. There are some ways you can work more efficiently with them:

- Avoid using the Global Components because they can affect the performance of the application because they are loaded when the application is loaded. So, avoid using them.

- It is a good practice to use the local components because they are loaded only when they are used in the application. So, always try to use local components.

- Always try to make separate files for each components called as the “Single File Components”. Making multiple components in a single can make it confusing when using them in the code.

- Always keep the “data property” as a function in the components. So, that each component can have its own local data as show below:

         data: function() {
          return {
            firstname: ‘Vue.js’
          }
        }

- It is also very important to clearly define the props in the components. Define the type of the prop also assign a default value to it as:
        
        props: 
        {
            firstname:     //Prop Name
            {
              type: String,
              default: ‘Vue.js’
            }
        }        

## Coding Example:
In the coding examples folder there is an example that demonstrates the use and reusability of the components.




