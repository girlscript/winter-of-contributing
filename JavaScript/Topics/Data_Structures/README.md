# Data Structures in JavaScript

## **JavaScript Iterables**

**Iterable** objects are a generalization of **arrays**. That’s a concept that allows us to make any object useable in a ``for..of loop``.

Of course, **Arrays are iterable.** But there are many other built-in objects, that are iterable as well. For instance, strings are also iterable.

If an object isn’t technically an array, but represents a collection (list, set) of something, then ``for..of`` is a great syntax to loop over it, so let’s see how to make it work.

### **Iterating Over a String**
You can use a ``for..of`` loop to iterate over the elements of a string:

**For Example**
```js
for (const x of "GWOC") {
  // code block to be executed
  console.log(x);
}
```
**Output:**
```
G
W
O
C
```

### **Iterating Over an Array**
You can use a **for..of** loop to iterate over the elements of an Array:

**For Example**
```js
for (const x of [1,2,3,4,5]) {
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

    |Iterable|  Not directly iterable       |Directly iterable

    |Size|      No size property            |Have a size property

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

<br> __Contributor :__ [Damini Mehra](https://github.com/daminimehra) :heart: 
