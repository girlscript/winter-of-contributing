# JavaScript Objects
A JavaScript object is anything(entity) having properties and methods.

JavaScript is an Object-Oriented Programming language, almost everything is an object. For eg:- numbers, strings etc are objects if they are defined with the ```new``` keyword.

Objects are also variables but objects can contain many values.

Objects values are written as __name:value__ pairs seperated by commas.

Let's see an example to define an object in JavaScript.

__Example:__
```javascript
const officer = {
    firstName : "Glenn",
    lastName : "Wilson",
    age : 28
};
```
# Defining an Object
---

### Using an Object Literal
---
Its the easiest way to create a JavaScript Object. Using an object literal, we both define and create an object in a single statement.

An object literal is a list of key:value pairs (like marks: 34) inside curly braces {}.

__Example:__
```js
const student = {name: "Rahul", rollNo: 10, marks: 57, age: 18}; // using Object Literal
```

### Using New Operator or Constructor
---
The second way to create an object is to use the constructor function. If we call a function using a new operator, the function acts as a constructor and returns an object. Consider the following code:

__Example:__
```js
function Car(model, color) {
    this.model = model;
    this.color = color;
}

var c1 = new Car('BMW', 'red');
console.log(c1.model);
```
This method of creating an object is also called the Constructor Invocation Pattern. There are two steps to work with the constructor function:

- Create a function, which will define the object type.
- Create an instance of an object using a new operator.

To create a Student object, first, create a function as shown below. In this example, this represents the object being created, so name and age will be properties of the newly created object.

```js
function Student(name, age) {
    this.name = name;
    this.age = age;
}
```
Next, create instances of the Student object type as shown below:
```js
var s1 = new Student('foo', 7);
console.log(s1.name);
var s2 = new Student('koo', 9);
console.log(s2.name);
```
We can use the instanceof operator to find types of the instance and determine whether s1 is an instance of the Student object, as shown below:
```js
var s1 = new Student('foo', 9);
console.log(s1 instanceof Student);
```
We can also use Object.defineProperty to create properties in the constructor function, as shown below:
```js
function Car(model) {
    Object.defineProperty(this, "model", {
        writable: true,
        enumerable: true,
        configurable: false,
        value: model
    });
}

var myCar = new Car("Audi A3");
console.log(myCar.model);    // Audi  A3
```

*Note: The main advantage of using Object.defineProperty is that you can set values for object property descriptors.*

### Object.create() Method
---
We can also create new objects using the Object.create() method, which allows you to specify the prototype object and the properties.

__Example:__
```js
var Car = {
    model: 'BMW',
    color: 'red'
}
```

We can use the Car object as a prototype to create another object, as shown below:
```js
var ElectricCar = Object.create(Car);
console.log(ElectricCar.model); // BMW
```

In this example, you have created an object called ElectricCar using the Car  object as a prototype, so the ElectricCar object will have all the properties of the Car object. We can also add properties as shown below:
```js
var ElectricCar = Object.create(Car, {
    type: {
        value: 'Electric',
        writable: true,
        configurable: false,
        enumerable: true
    }
});
console.log(ElectricCar.type); // Electric
```
Properties should be passed as objects and can be set using the property descriptor. We can also use the Object.create method to create inheritance between objects.

### Using Class
---
ECMAScript 6 introduced the class keyword to create classes in JavaScript. Now we can use the class attribute to create a class in JavaScript instead of a function constructor, and use the new operator to create an instance. Consider the following code:
```js
class Car {

    constructor(maker, price) {
        this.maker = maker;
        this.price = price;
    }

    getInfo() {
        console.log(this.maker + " costs : " + this.price);
    }
}
```
We can use the Car class to create objects as shown below:
```js
var car1 = new Car("BMW", 100);
car1.getInfo();
var car2 = new Car("Audi", 150);
car2.getInfo();
```

# Keys and Values

Here in JavaScript Object, a ```key``` is a string i.e the __property name__ and a ```value``` can be anything.

__Example:__
```javascript
const officer = {
    firstName : "Glenn",
    lastName : "Wilson",
    age : 28
};
```
In the above example,
1. ```officer``` is an object.
2. ```firstName```, ```lastName```, ```age``` are the keys.
3. ```"Glen"```, ```"Wilson"```, ```28``` are the values.
# Object Properties
Properties are nothing but the values associated with the JavaScript object.

## Syntax for Accessing JavaScript Properties
```js
objectName.property // officer.age
```
or
```js
objectName["property"] // officer["age"]
```
You can also add new properties.

__Example:__
```javascript
officer.country = "American"; // adds country to officer object
```
You can also delete the properties by using ```delete``` keyword.

__Example:__
```javascript
delete officer.country; // deletes country from officer object
```
# Object Methods
Object method are the functions that can be performed on any object.
## Syntax for accessing Object methods

```js
objectName.methodName()
```
__Example:__
```javascript 
name = officer.fullName();
```
We can also use ```this``` keyword.

```this``` refers to owner of the function. Like in the below example ```this.firstName``` means ```firstName``` property of the ```officer``` object.

__Example:__
```javascript
const officer = {
    firstName : "Glenn",
    lastName : "Wilson",
    age : 28,
    sent : function() {
        return this.firstName + " " + "is" + officer.age + "years old."; // Glenn is 28 years old.
    }
};
```

# Getters and Setters
Getters and Setters are the JavaScript Accessors that allows you to define the Object Accessors.
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

## Getter
This makes use of ```get``` keyword. It works when a ```function``` without arguments is read.

__Example:__
```javascript
const officer = {
    firstName : "Glenn",
    lastName : "Wilson",
    age : 28,

    get personAge(){
        return `${this.age}`;
    }
};
alert(officer.personAge); //28
```

The above example uses the ```personAge``` to get the value of ```age``` property.

## Setter
This makes use of ```set``` keyword. It works when a ```function``` with one argument is called when the property is set.

__Example:__
```javascript
const officer = {
    firstName : "Glenn",
    lastName : "Wilson",
    age : 28,
    nationality : "",

    set nation(nation){
        this.nationality = nation;
    }
};
officer.nation = "American"; // set an object property
alert(officer.nationality); // American
```
The above examples uses ```nation``` to set the value of ```nationality``` property.

# Difference between Getters and Setters
The basic difference between them is that __Getters__ are the object accessor that is used to get the property from an object, whereas __Setters__ are the object accessor that is used to set the property of an object.
# **JavaScript Iterables**

**Iterable** objects are a generalization of **arrays**. That’s a concept that allows us to make any object useable in a ``for..of loop``.

Of course, **Arrays are iterable.** But there are many other built-in objects, that are iterable as well. For instance, strings are also iterable.

If an object isn’t technically an array, but represents a collection (list, set) of something, then ``for..of`` is a great syntax to loop over it, so let’s see how to make it work.

## **Iterating Over a String**
You can use a ``for..of`` loop to iterate over the elements of a string:

**For Example**
```js
for (const x of "GWOC") {
  // code block to be executed
}
```

## **Iterating Over an Array**
You can use a **for..of** loop to iterate over the elements of an Array:

**For Example**
```js
for (const x of [1,2,3,4,5] {
  // code block to be executed
}
```

## **JavaScript Iterators**
The iterator protocol defines how to produce a sequence of values from an object.

An object becomes an iterator when it implements a ``next()`` method.

The ``next()`` method must return an object with two properties:

* value (the next value)
* done (true or false)

## **JavaScript Sets**

A **JavaScript Set** is a collection of unique values.

Each value can only occur once in a Set.

A Set can hold any value of any data type.

### **Set Methods**

* ``new Set(iterable)`` – creates the set, and if an iterable object is provided (usually an array), copies values from it into the set.
* ``set.add(value)`` – adds a value, returns the set itself.
* ``set.delete(value)`` – removes the value, returns true if value existed at the moment of the call, otherwise false.
* ``set.has(value)`` – returns true if the value exists in the set, otherwise false.
* ``set.clear()`` – removes everything from the set.
* ``set.size`` – is the elements count.
* ``set.keys()`` – returns an iterable object for values,
* ``set.values()`` – same as set.keys(), for compatibility with Map,
* ``set.entries()`` – returns an iterable object for entries [value, value], exists for compatibility with Map.

### **How to Create a Set**
You can create a JavaScript Set by:

Passing an Array to ``new Set()``
Create a new Set and ``use add()`` to add values
Create a new Set and use ``add()`` to add variables
The new ``Set()`` Method
Pass an Array to the new ```Set()`` constructor:

**For Example**
```js
// Create a Set
const letters = new Set(["a","b","c"]);
```
Create a Set and add literal values:

**For Example**
```js
// Create a Set
const letters = new Set();

// Add Values to the Set
letters.add("a");
letters.add("b");
letters.add("c");
```
Create a Set and add variables:

**For Example**

```js
// Create Variables
const a = "a";
const b = "b";
const c = "c";

// Create a Set
const letters = new Set();

// Add Variables to the Set
letters.add(a);
letters.add(b);
letters.add(c);
```

### **The add() Method**

**For Example**
```js
letters.add("d");
letters.add("e");
```

### **The forEach() Method**

The ``forEach()`` method invokes a function for each Set element:

**For Example**
```js
// Create a Set
const letters = new Set(["a","b","c"]);

// List all entries
let text = "";
letters.forEach (function(value) {
  text += value;
})
```
### **The keys() Method**

A Set has no keys.

``keys()`` returns the same as ``values()``.

This makes Sets compatible with Maps.

**For Example**
```js
letters.keys()   // Returns [object Set Iterator]
```

### **The entries() Method**
A Set has no keys.

``entries()`` returns [value,value] pairs instead of [key,value] pairs.

This makes Sets compatible with Maps:

**For Example**
```js
// Create an Iterator
const myIterator = letters.entries();

// List all Entries
let text = "";
for (const entry of myIterator) {
  text += entry;
}
```

### **Sets are Objects**
For a Set, ``typeof`` returns object:

```js
typeof letters;      // Returns object
```
For a Set, ``instanceof`` Set returns true:

```js
letters instanceof Set;  // Returns true
```

## **Map**
Map is a collection of keyed data items, just like an Object. But the main difference is that Map allows keys of any type.

**Methods and properties are:**

* ``new Map()`` – creates the map.
* ``map.set(key, value)`` – stores the value by the key.
* ``map.get(key)`` – returns the value by the key, undefined if key doesn’t exist in map.
* ``map.has(key)`` – returns true if the key exists, false otherwise.
* ``map.delete(key)`` – removes the value by the key.
* ``map.clear()`` – removes everything from the map.
* ``map.size`` – returns the current element count.
* ``map.keys()`` – returns an iterable for keys,
* ``map.values()`` – returns an iterable for values,
* ``map.entries()`` – returns an iterable for entries [key, value], it’s used by default in for..of

### **How to Create a Map**
You can create a JavaScript Map by:

Passing an Array to ``new Map()``

Create a Map and use ``Map.set()``
``new Map()``

You can create a Map by passing an Array to the ``new Map()`` constructor:

**For Example**
```js
// Create a Map
const fruits = new Map([
  ["apples", 500],
  ["bananas", 300],
  ["oranges", 200]
]);
```

### **Map.set()**
You can add elements to a Map with the ``set()`` method:

**For Example**
```js
// Create a Map
const fruits = new Map();

// Set Map Values
fruits.set("apples", 500);
fruits.set("bananas", 300);
fruits.set("oranges", 200);
```

The ``set()`` method can also be used to change existing Map values:

**For Example**

```js
fruits.set("apples", 500);
```

### **Map.get()**
The ``get()`` method gets the value of a key in a Map:

**For Example**
```js
fruits.get("apples");    // Returns 500
```

### **Map.size**
The size property returns the number of elements in a Map:

**For Example**
```js
fruits.size;
```

### **Map.delete()**
The ``delete()`` method removes a Map element:

**For Example**
```js
fruits.delete("apples");
```

### **Map.clear()**
The ``clear()`` method removes all the elements from a Map:

**For Example**
```js
fruits.clear();
```

### **Map.has()**
The ``has()`` method returns true if a key exists in a Map:

**For Example**
```js
fruits.has("apples");
Try This:
fruits.delete("apples");
fruits.has("apples");
```

## **Maps are Objects**

``typeof`` returns object:

**For Example**
```js
// Returns object:
typeof fruits;
```

``instanceof`` Map returns true:
**For Example**
```js
// Returns true:
fruits instanceof Map;
```
JavaScript Objects vs Maps
Differences between JavaScript Objects and Maps:

                |Object                     |Map  

    |Iterable|	Not directly iterable       |Directly iterable

    |Size|   	Do not have a size property |Have a size property

    |Key Types| Keys must be Strings        |Keys can be any datatype

    |Key Order| Keys are not well ordered   |Keys are ordered by insertion

    |Defaults|  Have default keys           |Do not have default keys

### **Summary**
**Map** – is a collection of keyed values.

**Set** – is a collection of unique values.

Iteration over Map and Set is always in the insertion order, so we can’t say that these collections are unordered, but we can’t reorder elements or directly get an element by its number.

# Conclusion

Congratulations! You've successfully learnt about JavaScript Object.

Keep exploring JavaScript :wave:

__Contributor :__ [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart: 
<br> __Contributor :__ [Aniket Pathak](https://github.com/aniketpathak028)
<br> __Contributor :__ [Damini Mehra](https://github.com/daminimehra) :heart: 
