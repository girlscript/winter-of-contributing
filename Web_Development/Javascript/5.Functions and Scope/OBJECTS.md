#  OBJECTS IN JAVASCRIPT
Objects are used to store keyed collections of various data and more complex entities. it is a **non primitive** data-type. Objects are variables too but they can conatin many values. 
The values are written as **name : value** pairs (name and value separated by a colon).
```js
     const GWoC = {year:"2021", role:"Contributor", status:"Enjoying!!🎉✨"};
```
It is a common practice to declare objects with the **const** keyword.

## Object Definition
You define (and create) a JavaScript object with an object literal and spaces and line breaks are not important. There are no limitations on property names. They can be any strings or symbols.
```js
     const GWoC = {year:"2021", role:"Contributor", status:"Enjoying!!🎉✨"};
     
     //OR
	 
	 const GWoC = {
		 year:"2021", 
		 role:"Contributor", 
		 status:"Enjoying!!🎉✨"
		 };
```
## Accessing Object Properties
You can access object properties in two ways:
1.    `objectName.propertyName`

2.    `objectName["propertyName"]`

eg:
```js
     const GWoC = {year:"2021", role:"Contributor", status:"Enjoying!!🎉✨"};
     //accessing properties
     const year=GWoC.year;
     const role=GWoC["role"];
```

## this keyword

In a function definition,  `this`  refers to the "owner" of the function. In the example below,  `this`  is the  **person object**  that "owns" the  `fullName`  function.
```js
	const GWoC = {  
	year:"2021", 
    role:"Contributor", 
	status:"Enjoying!!🎉✨"
	year_and_role: function() {  
		return  "In GWoC " + this.year + 
		        " I am assigned the role of " + this.role;  
	}  
	};
```

Syntax for method() accessing:	`objectName.methodName()` 
```js
	const info = GWoC.year_and_role();
	//function call without () will return function defination
	const info = GWoC.year_and_role;
```

## The “for…in” loop
To walk over all keys of an object, there exists a special form of the loop: `for..in`. This is a completely different thing from the `for(;;)` construct that we studied before.
```js
	for  (key in object)  {  
		// executes the body for each key among object properties  
	}
```
## Property existence test, “in” operator
A notable feature of objects in JavaScript, compared to many other languages, is that it’s possible to access any property. There will be no error if the property doesn’t exist!
Reading a non-existing property just returns  `undefined`
```js
	let user =  {};  alert( user.noSuchProperty ===  undefined  );  
	// true means "no such property"
```
There’s also a special operator  `"in"`  for that.
Syntax : `"key"  in object`
```js
	let user =  { name:  "John", age:  30  };  
	alert(  "age"  in user );  // true, user.age exists  
	alert(  "blabla"  in user );  // false, user.blabla doesn't exist
```
