# Objects in JavaScript
---

## Concept of Objects
---

In JavaScript an object is a collection of properties, where each property is a key-value pair. There is a value corresponding to every key inside an object. Objects are generally used for storing multiple pieces of data together.

Example
```js
const student = {
    name: 'Rahul', // a property of student object, where name is the key and 'Rahul' is it's value
    rollNo: 10,
    marks: 57,
    age: 18
};
```

## Defining an Object
---

### Using an Object Literal
---
Its the easiest way to create a JavaScript Object. Using an object literal, we both define and create an object in a single statement.

An object literal is a list of key:value pairs (like marks: 34) inside curly braces {}.

Example
```js
const student = {name: "Rahul", rollNo: 10, marks: 57, age: 18}; // using Object Literal
```

### Using the new keyword 
---
We can also create an object using the new keyword present in JavaScript.

Example
```js
const student = new Object(); // using the new keyword
student.name = "Rahul";
student.rollNo = 10; 
student.marks = 57;
student.age = 18; 
```

## Keys and Values in Objects
---

Let's create an object called pizza below, and add key-value pairs to it, to  understand it clearly.

```js
const pizza = {
   topping: "cheese",
   sauce: "marinara",
   size: "small"
};
```

The keys are to the left of the colon : and the values are to the right of it. Each key-value pair is a property. There are three properties in this example:
- The key topping has a value “cheese”.
- The key sauce has a value “marinara”.
- The key size has a value “small”.

*Note: Each key in your JavaScript object must be a string, symbol, or number. A value, on the other hand, can be any data type, including an array, number, boolean or even a function.*

## Getters and Setters
---

In JavaScript, there are two kinds of object properties:
- Data properties
- Accessor properties

### Data Property
---
Here's an example of data property that we have been using since.

```js
const student = {
    // data property
    firstName: 'Rahul';
};
```

### Accessor Property
---
In JavaScript, accessor properties are methods that get or set the value of an object. For that, we use these two keywords:
- get - to define a getter method to get the property value
- set - to define a setter method to set the property value

### JavaScript Getter
---
In JavaScript, getter methods are used to access the properties of an object. For example:

```js
const student = {

    // data property
    firstName: 'Rahul',
    
    // accessor property(getter)
    get getName() {
        return this.firstName;
    }
};

// accessing getter methods
console.log(student.getName); // Rahul
```

*Note: To create a getter method, the get keyword is used.*

### JavaScript Setter
---
In JavaScript, setter methods are used to change the values of an object. For example:

```js
const student = {
    firstName: 'Rahul',
    
    //accessor property(setter)
    set changeName(newName) {
        this.firstName = newName;
    }
};

console.log(student.firstName); // Rahul

// change(set) object property using a setter
student.changeName = 'Raj';

console.log(student.firstName); // Raj
```

*Note: To create a setter method, the set keyword is used.*

**contributor**: Aniket Pathak