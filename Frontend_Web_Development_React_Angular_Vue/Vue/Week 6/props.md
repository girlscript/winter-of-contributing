# Props (Properties)
  They are a way that we pass data from a parent component down to it's child components.
  
  ## Implementation
  I made a componenet file named StudentDetails.vue.  
  Our intention here is to pass a name and id no. from the App component to the StudentDetails component and render them in the browser.
  
  ### StudentDetails.vue (child component)
  ```
  <template>
    <div>
<h2>{{name}} and thier ID no. is {{id_no}} </h2>
    </div>
</template>

<script>
    export default {
        name : "StudentDetails",
         props: ['name', 'id_no'],
    }
</script>

<style scoped>

</style>
```
### App.vue (Parent component)
```
<template>
<StudentDetails name="Charlie" id_no="1" />
<StudentDetails name="Bruce" id_no="2" />
<StudentDetails name="Clark" id_no="3" />
<StudentDetails name="Diana" id_no="4" />
  
  
</template>
<script>
import StudentDetails from './components/StudentDetails.vue'
export default{
  name:'App',
  components : {
    StudentDetails,
  },
  
}
</script>


```
![props1](https://user-images.githubusercontent.com/87546207/141292448-0a1125eb-1a7c-4426-8ff5-da2007c676ac.PNG)

## Dynamic Props
You can also bind props using the same v-bind directive or it's shortcut : for passing information from parent to child components.
```
<template>
  <!-- Dynamic Component -->
  <StudentDetails :name="name" :id_no="id_no" />
  
</template>
<script>
import StudentDetails from './components/StudentDetails.vue'
export default{
  name:'App',
  components : {
    StudentDetails,
  },

  data() {
      return{
          name :'Katy',
          id_no:'5'

      }
  }
    
}
</script>
```
  ![props2](https://user-images.githubusercontent.com/87546207/141292488-0a32ada2-7f9e-41ac-9d7e-529a3751773f.PNG)

## Prop Types
Props listed as an array of strings:
```
props: ['title', 'likes', 'isPublished', 'commentIds', 'author']
```
In case you want every prop to be a specific type of value. In such cases, you can list props as an object, where the properties’ names and values contain the prop names and types, respectively:

```
props: {
  title: String,
  likes: Number,
  isPublished: Boolean,
  commentIds: Array,
  author: Object,
  callback: Function,
  contactsPromise: Promise // or any other constructor
}
```
## Prop Validation
Components can specify requirements for their props, such as the types you’ve already seen. If a requirement isn’t met, Vue will warn you in the browser’s JavaScript console.
When prop validation fails, Vue will produce a console warning (if using the development build).
 
## References 
[Props|Vue.js](https://vuejs.org/v2/guide/components-props.html)  
[Codevolution](https://youtu.be/te-lFidcrcM)
 
