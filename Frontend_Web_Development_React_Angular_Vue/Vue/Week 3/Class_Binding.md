![](https://i.imgur.com/5NufPcN.png)



# <u>**What is Class Bindings?**</u>



It is used to **manipulate element's class list **

To handle class list we use **v-bind **.

When we use v-bind in class it gives special advantages to us.



# <u>Object Syntax</u>



````html
<div v-bind:class="{ active: isActive }"></div>
````

In above code if this div have class "**active**" then that means "**isActive**" data property is **true**. And if div not have any class then that means "**isActive**" data property is **false**. So, here we can control that is the class is true it will get rendered and if it is false then it will not rendered .



````html
<div v-bind:class="GWOCObject"></div>
````

In this div we have binded the class GWOCObject and if this class is present in the div that means it is true and the data property linked with it will get executed.



````javascript
data: {
  GWOCObject: {
    active: true,
    'text-warning': false
  }
}
````



Here,when **GWOCObject** is true it means that it will render that **active** data property is **true** and **text - warning** is **false** but if class list got updated and that class got removed then all the data property will become false .





###  <u>Passing array  in v-bind : class</u>



````html
<div v-bind:class="[GirlScriptClass, GWOCClass]"></div>
````

Here We a supplying an  array of classes GirlScriptClass and GWOCClass .

````javascript
data: {
  GirlScriptClass: 'active',
  GWOCClass: 'text-success'
}
````



It will render as:

````html
<div class="GirlScriptClass GWOCClass"></div>
````



Here we are binding two classes. **GirlScriptClass and GWOCClass** and they both will render till the are true and if we set them as false they will not get rendered .



### <u>Components</u>



we can add any class attribute in the component it get added to the root element as we are going to do in the below example .



Here, we have added class GWOC in the component

````javascript
Vue.component('my-component', {
  template: '<p class="GWOC">Hi</p>'
})
````

Then  we can add some classes when using it : 

````html
<my-component class="GirlScriptClass"></my-component>
````

HTML file be rendered as

````html
<p class="GWOC GirlScriptClass">Hi! Its the contribution time.</p>
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