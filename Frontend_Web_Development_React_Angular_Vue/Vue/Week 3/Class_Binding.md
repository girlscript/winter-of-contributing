![](https://i.imgur.com/5NufPcN.png)



# <u>**What is Class Bindings?**</u>



It is used to **manipulate element's class list and inline styles**.

To handle both the attributes we used to use **v-bind**.

When we use v-bind in class and styles it gives special advantages to us.



# <u>Syntax</u>



````html
<div v-bind:class="{ active: isActive }"></div>
````

In above code active means that yes the data property is active.



````html
<div v-bind:class="GWOCObject"></div>
````

````javascript
data: {
  GWOCObject: {
    active: true,
    'text-warning': false
  }
}
````



Here, it will render that **active is true** and text - warning is false but if class list got updated then text - warning can become true.





###  <u>Passing array  in v-bind : class</u>



````html
<div v-bind:class="[activeClass, GWOCClass]"></div>
````

````javascript
data: {
  activeClass: 'active',
  GWOCClass: 'text-success'
}
````



It will render



````html
<div class="active text-success"></div>
````



Here we are binding two elements i.e. **activeclass and GWOCClass** and they will be active till the are true and will render active and text - success.



### <u>Components</u>



when we add class attribute in the component it get added to the root element as we are going to do in the below example .



````javascript
Vue.component('my-component', {
  template: '<p class="GWOC">Hi</p>'
})
````



````html
<my-component class="baz boo"></my-component>
<my-component v-bind:class="{ active: isActive }"></my-component>
<p class="GWOC active">Hi! Its the contribution time.</p>
````



# Binding inline styles



### Object Syntax

Using v-bind : style almost looks like CSS except as it is a javascript object .

```` html
<div v-bind:style="{ color: activeColor, fontSize: fontSize + 'px' }"></div>
````

````javascript
data: {
  activeColor: 'blue',
  fontSize: 24
}
````



In this **activecolor** represents **blue** and **fontsize** represents **24** .





### Array Syntax



In v - bind : style we can also apply mutiple styles object.

```` html
<div v-bind:style="[baseStyles, overridingStyles]"></div>
````



# References



[Vue.js Documentation](https://vuejs.org/v2/guide/class-and-style.html#Object-Syntax-1) , [Stackoverflow](https://stackoverflow.com/questions/43210508/vue-js-conditional-class-style-binding) .