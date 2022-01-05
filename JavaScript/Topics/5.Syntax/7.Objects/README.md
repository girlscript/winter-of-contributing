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

# Conclusion

Congratulations! You've successfully learnt about JavaScript Object.

Keep exploring JavaScript :wave:

__Contributor :__ [Abhinandan Adhikari](https://github.com/AbhinandanAdhikari) :heart: 
<br> __Contributor :__ [Aniket Pathak](https://github.com/aniketpathak028)
