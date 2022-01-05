# Object Oriented Javascript

Before starting with Object Oriented programming let's understand `Objects` by looking into an example :  

Everyone has seen a Cat 😸 right?  
So What are some of the characteristics of a cat?  
- age
- name
- color

But apart from these they can also perform some actions right?  
Let's see  
- meaow
- quarrel
- scratch
- Code (may be)
  
![Cat coding](./images/cat.gif)  
**Image source [Giphy](https://giphy.com/)**
  
So a cat have all these characteristics and can also perform the above actions. So this is an example of a real life object.

So in Javascript we can also define Objects which can represent real life Objects. That is, objects can have properties to represent attributes or `characteristics`, as well as methods to represent `actions` that can be performed.

## So what is Object Oriented Programming?

**According to Wikipedia**

>Object-oriented programming (OOP) is a programming paradigm based on the concept of “objects”, which can contain data, in the form of fields (often known as attributes), and code, in the form of procedures (often known as methods).

So let's try to model a cat using the object literal syntax

```js
const cat = {
    age : 3,
    name : "Snowey",
    color : "White",
    meaow : function(){
        console.log("meaow meaow")
    },
    quarrel : function(){
        console.log("I quarrel sometimes")
    },
    scratch : function(){
        console.log("Scratch head, Scratch sofa")
    },
    code : function(){
        console.log("I code in meaow")
    }
}
```
But this is just one cat, what if we want to have many such similar cats with different characteristic, how can we create ? To answer this I will continue the discussion in the next topic of `constructor functions`

[Constructor Functions](Constructor_Functions/README.md)

__Contributor:__ [Arpan Mondal](https://www.github.com/arp99)