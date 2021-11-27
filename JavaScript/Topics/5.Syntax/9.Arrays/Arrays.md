# __Arrays__
In JavaScript, array is a single variable that is used to store different elements. It is often used when we want to store list of elements and access them by a single variable. Unlike most languages where array is a reference to the multiple variable, in JavaScript array is a single variable that stores multiple elements.

## __Declaring Array__

There are basically two ways to declare an array.

__Example:__
``` js 
var House = [ ]; // method 1 

var House = new Array(); // method 2 
```
But generally method 1 is preferred over the method 2.

## __Initialization of an Array__

__Example (for Method 1):__
``` js
// Initializing while declaring
var house = ["1BHK", "2BHK", "3BHK", "4BHK"];
```
__Example (for Method 2):__

``` js

// Initializing while declaring
// Creates an array having elements 10, 20, 30, 40, 50
var house = new Array(10, 20, 30, 40, 50);
  
//Creates an array of 5 undefined elements
var house1 = new Array(5);
  
//Creates an array with element 1BHK
var home = new Array("!BHK");

```

As shown in above example the house contains 5 elements i.e. (10 , 20, 30, 40, 50) while house1 contains 5 undefined elements instead of having a single element 5. Hence, while working with numbers this method is generally not preferred but it works fine with Strings and Boolean as shown in the example above home contains a single element 1BHK.
We can also update after initialization. 

```js
// Creates an array of 4 undefined elements
var house1 = new Array(4);
  
// Now assign values
house1[0] = "1BHK"
house1[1] = "2BHK"
house1[2] = "3BHK"
house1[3] = "4BHK"
```
__An array in JavaScript can hold different elements.__

We can store Numbers, Strings and Boolean in a single array. 

__Example:__ 
```js
// Storing number, boolean, strings in an Array 
var house = ["1BHK", 25000, "2BHK", 50000, "Rent", true]; 
```

## __Accessing Array Elements__ 
Array in JavaScript are indexed from 0 so we can access array elements as follows:
 
```js
var house = ["1BHK", 25000, "2BHK", 50000, "Rent", true];
alert(house[0]+" cost= "+house[1]);
var cost_1BHK = house[1];
var is_for_rent = house[5];
alert("Cost of 1BHK = "+ cost_1BHK);
alert("Is house for rent = ")+ is_for_rent);
```
## __Length property of an Array__
Length property of an Array returns the length of an Array. Length of an Array is always one more than the highest index of an Array.

__Example below illustrates the length property of an Array:__

```js
var house = ["1BHK", 25000, "2BHK", 50000, "Rent", true];

//len contains the length of the array
var len = house.length;
for (var i = 0; i < len; i++)
	alert(house[i]);

```

__Note :__ All the above examples can be tested by typing them within the script tag of HTML.


## __Sorting Array Element__

The index of the array elements determines the order in which values appear in an 
array when a for loop is used to display the array.
Sometimes you want values to 
appear in sorted order, which means that strings will be presented alphabetically 
and numbers will be displayed in ascending order.
You can place an array in sorted order by calling the sort() method of the array object. __The sort()__ method reorders values assigned to elements of the array, regardless of the index of the element to which the value is assigned.
Here’s what you need to do to sort an array:
 1. Declare the array.
 2. Assign values to elements of the array.
 3. Call the sort() method.


## __More Array Methods__:
1.The __slice()__ method takes a sequence of elements and uses them to create a new array.

2.The __concat()__ method and __join()__ method transform elements into a string.

3.The __shift()__ method removes and returns the first element of the array and then moves 
the other elements up on the list.

4.The __push()__ method creates a new element at the end of the array and assigns the value that you place between the parentheses of the new element.

5.The __pop()__ method returns and removes the last element of the array.

6.The __reverse()__ method is used to reverse the array from last to first element.

<br>

Contributor: [Utkarsha Kakade](https://github.com/utkarshakakade)