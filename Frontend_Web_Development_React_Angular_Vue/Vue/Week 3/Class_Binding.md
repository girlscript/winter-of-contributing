![](https://i.imgur.com/5NufPcN.png)



# <u>**What is Class Bindings?**</u>



It is used to **manipulate element's class list and inline styles**.

To handle both the attributes we used to use **v-bind**.

When we use v-bind in class and styles it gives special advantages to us.



# <u>Object Syntax</u>



````html
<div v-bind:class="{ active: isActive }"></div>
````

In above code if this div have class "**active**" then that means "**isActive**" data property is **true**. And if div not have any class then that means "**isActive**" data property is **false**.



````html
<div v-bind:class="GWOCObject"></div>
````

In this div we have binded the class GWOCObject and if it is present in the div that means it is true and the data property linked with it will get executed.



````javascript
data: {
  GWOCObject: {
    active: true,
    'text-warning': false
  }
}
````



Here,when GWOCObject is in that div it means that it will render that **active** data property is true and text - warning is false but if class list got updated and that class got removed then all the data property will become false .





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



It will render :

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

Then  we can add some classes when using it : 

````html
<my-component class="baz boo"></my-component>
````

HTML file be rendered as

````html
<p class="GWOC active">Hi! Its the contribution time.</p>
````

It is also true for class bindings:

````html
<my-component v-bind:class="{ active: isActive }"></my-component>
````

when isActive true the the html file to be rendered is :

````html
<p class="GWOC active">Hi! Its the contribution time.</p>
````



### <u>**Advantages**</u>



The major advantage of it is that Vue provides **special enhancements** when we use **v-bind** in both c**lass and style**. and also for **strings** the expression can also **evaluate to object or arrays** .

# References



[Vue.js Documentation](https://vuejs.org/v2/guide/class-and-style.html#Object-Syntax-1) , [Stackoverflow](https://stackoverflow.com/questions/43210508/vue-js-conditional-class-style-binding) .