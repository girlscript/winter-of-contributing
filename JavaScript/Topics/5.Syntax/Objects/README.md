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
