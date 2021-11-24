# Prototype Chain in Javascript

JavaScript's prototype objects have always been a struggle. Even experienced JavaScript experts and even its authors often give limited explanations for this concept. I believe the problem comes from our earliest understanding of archetypes. Stereotypes are always closely related to new, constructor, and the confusing prototype attributes. In fact, the prototype is a fairly simple concept. To understand it better, we need to forget about the archetypes we 'learned' and then go back to the source.

# What is a prototype?

A stereotype is an object that inherits properties from another object.

# Can any object be a prototype?

yes

# Which objects have prototypes?

Each object has a default stereotype. The prototype itself is an object, and for every prototype itself there is a prototype. (With one exception, the default object prototype is at the top of each prototype chain, and the other prototypes are behind the prototype chain.)

# what is an object?

In JavaScript one object is a key/value pair to save any unordered collection, if it is not original class (undefined, null, boolean nuber or string), it is an object.

`Implementation`
var a = {};
 
//Opera  or  IE<=8 The failure 
Object.getPrototypeOf(a); //[object Object]
 
//IE The failure 
a.__proto__; //[object Object]
 
// All browsers 
//(but only if constructor.prototype has not been replaced and fails with Object.create)
a.constructor.prototype; //[object Object]
