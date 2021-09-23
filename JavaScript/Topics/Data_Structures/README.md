# Iterables, Sets and Maps in JavaScript objects

## Maps:-

Map is a collection of keyed data items, just like an Object. But the main difference is that Map allows keys of any type.

### Methods and properties are:-

- *new Map()* – creates the map.
- *map.set(key, value)* – stores the value by the key.
- *map.get(key)* – returns the value by the key, undefined if key doesn’t exist in map.
- *map.has(key)* – returns true if the key exists, false otherwise.
- *map.delete(key)* – removes the value by the key.
- *map.clear()* – removes everything from the map.
- *map.size* – returns the current element count.

For instance:

*let map = new Map();*

    map.set('1', 'str1');   // a string key
    map.set(1, 'num1');     // a numeric key
    map.set(true, 'bool1'); // a boolean key

    // remember the regular Object? it would convert keys to string
    // Map keeps the type, so these two are different:
    alert( map.get(1)   ); // 'num1'
    alert( map.get('1') ); // 'str1'

    alert( map.size ); // 3

As we can see, unlike objects, keys are not converted to strings. Any type of key is possible.

## Map can also use objects as keys

For instance:

    let john = { name: "John" };

    // for every user, let's store their visits count
    let visitsCountMap = new Map();

    // john is the key for the map
    visitsCountMap.set(john, 123);

    alert( visitsCountMap.get(john) ); // 123

Using objects as keys is one of the most notable and important Map features. The same does not count for Object. String as a key in Object is fine, but we can’t use another Object as a key in Object.

*Let’s try:*

    let john = { name: "John" };
    let ben = { name: "Ben" };

    let visitsCountObj = {}; // try to use an object

    visitsCountObj[ben] = 234; // try to use ben object as the key
    visitsCountObj[john] = 123; // try to use john object as the key, ben object will get replaced

    // That's what got written!
    alert( visitsCountObj["[object Object]"] ); // 123

As visitsCountObj is an object, it converts all Object keys, such as john and ben above, to same string "[object Object]". Definitely not what we want.

### Iterating over Maps:-

Let’s set up a Map to demonstrate how one can iterate over it.

    const map = new Map([
       [false, 'no'],
       [true,  'yes'],
    ]);

Maps record the order in which elements are inserted and honor that order when iterating over keys, values or entries.

### Iterables for keys and values:-

keys() returns an iterable over the keys in the Map:

    for (const key of map.keys()) {
       console.log(key);
    }
    // Output:
    // false
    // true

values() returns an iterable over the values in the Map:

    for (const value of map.values()) {
       console.log(value);
    }
    // Output:
    // no
    // yes

## For looping over a map, there are 3 methods

- *map.keys()* – returns an iterable for keys,
- *map.values()* – returns an iterable for values,
- *map.entries()* – returns an iterable for entries [key, value], it’s used by default in for..of.

For instance:

    let recipeMap = new Map([
    ['cucumber', 500],
    ['tomatoes', 350],
    ['onion',    50]
    ]);

    // iterate over keys (vegetables)
    for (let vegetable of recipeMap.keys()) {
    alert(vegetable); // cucumber, tomatoes, onion
    }

    // iterate over values (amounts)
    for (let amount of recipeMap.values()) {
    alert(amount); // 500, 350, 50
    }

    // iterate over [key, value] entries
    for (let entry of recipeMap) { // the same as of recipeMap.entries()
    alert(entry); // cucumber,500 (and so on)
    }

### WeakMaps

As with WeakSets, WeakMaps differ from regular Map objects. WeakMaps only accept objects as keys, are not iterable and do not have a clear() method.

A WeakMap constructor is used to create a WeakMap.

Let’s look at an example:

    let users = new WeakMap();

    const user1 = {
      name: 'John Doe',
    };
    const user2 = {
      name: 'Jane Doe',
    };

    users.set(user1, {
      email: 'johndoe@example.com',
    });

    users.set(user2, {
      email: 'janedoe@example.com',
    });

*This has the advantage in providing easier memory management.*

# Sets

A collections of values. You can iterate through the elements of a set in insertion order. A value in the Set may only occur once; it is unique in the Sets collection.

## Array vs Set

An array, like a set, is a data structure that allows addition, removal and looping operations on its items. However, an array differs from a set in the sense that it permits the addition of duplicate values and its operations are relatively slower.

Searching through an array has a linear time complexity of O(n), the same as inserting an element in the middle of an array. This means that the running time for searching and inserting items in an array grows as the size of the array increases.

JavaScript’s Push and Pop array methods have a run-time of O(1) which means that: these operations will have a constant time of execution regardless of the size of the array size. However, in practice, the Push operation is O(n) as copy costs are incurred when new contiguous memory locations are allocated to the newly formed array.

In contrast, all insert, delete and search operations for Sets have a running time of just O(1).

### Creating a Set

Let’s create a Set:

    const set = new Set();

    console.log(set); // Set {}

### Initializing a Set

To initialize a set, we can pass an array of values to the Set constructor, this will create a Set with those values:

    const confectioneries = new Set(['oreo', 'marshmallow','oreo', 'kitkat', 'gingerbread']);

    console.log(confectioneries); // result: Set { 'oreo', 'marshmallow', 'kitkat', 'gingerbread' }

"In the snippet above, the duplicate value “oreo” is quietly removed from the Set and only unique values are returned."

### Adding Items

We can add more items to a Set using the add() method. This method adds a new value to the Set object and returns the Set. An attempt to add a duplicate item to the Set object wouldn’t return an error, instead, the item will not be added.

Let’s go over an example:

    const confectioneries = new Set(['oreo', 'marshmallow', 'kitkat', 'oreo','gingerbread']);

    confectioneries.add('donut');

    console.log(confectioneries); //_ log result: Set { 'oreo', 'marshmallow', 'kitkat', 'gingerbread', 'donut' } _

    confectioneries.add('kitkat');

    console.log(confectioneries); //_ log result: Set { 'oreo', 'marshmallow', 'kitkat', 'gingerbread', 'donut' } _

### Deleting Items

With sets, we can delete items using either of these commands:

    delete()
    clear()

*To use the delete() method, the value to be deleted is passed to the method. The method will return a Boolean value true if the deletion was successful and false if otherwise. We can delete all the elements of the Set object using the clear() method.*

Let’s try out both methods in this example:

    confectioneries.delete('kitkat');

    console.log(confectioneries); //_ log result: Set { 'oreo', 'marshmallow', 'gingerbread', 'donut' }_

    confectioneries.clear();

    console.log(confectioneries); // log result: Set {}

### Size of a Set

We can get the size of a Set using the size property on the Set prototype. This is similar to the length property for Arrays:

    const confectioneries = new Set(['oreo', 'marshmallow', 'kitkat', 'oreo','gingerbread']);

    console.log(confectioneries.size); // log result: 5

### Searching for Items

We may need to know if a Set has a particular item. This can be accomplished using the has() method. The has() method returns true if the item is in the Set object, and false if it isn't:

    console.log(confectioneries.has('marshmallow')); // log result: true

### Returning the Items in a Set

We can return the items in a Set object in the same insertion order using the values()method. This method returns a new setIterator object . A similar method for returning the items of a set is the keys() method:

    console.log(confectioneries.values()); // _log result: _[_Set Iterator] { 'oreo', 'marshmallow', 'kitkat', 'gingerbread', 'donut' }_

    console.log(confectioneries.keys()); //_ log result: _[_Set Iterator] { 'oreo', 'marshmallow', 'kitkat', 'gingerbread', 'donut' }_

*The setIterator object is an Iterator object because it implements the Iteratable and Iterator protocols.  The Iterable protocol specifies a way to iterate through a set of values using loop constructs. It also makes it possible for the values to be iterated using the next() method. When we call next() on a setIterator object, we get the next value in the iteration and a false until all values of the Set have been iterated over:*

    let iterator = confectioneries.values();

    console.log( iterator.next()); // _{ value: 'oreo', done: false }_

    console.log( iterator.next()); // _{ value: 'marshmallow', done: false }_

    console.log( iterator.next()); //_ { value: 'kitkat', done: false }_

    console.log( iterator.next()); //_ { value: 'gingerbread', done: false }_

    console.log( iterator.next()); //_ { value: 'donut', done: false }_

    console.log( iterator.next()); // _{ value: undefined, done: true }_

Since Sets implement the Iterable protocol, loop constructs such as for ...ofcan be used as shown below:

    for (let confectionery of confectioneries) {
      console.log(confectionery);
    }

    /_ _console.log() result 
       oreo
    marshmallow
    kitkat
    gingerbread
    donut 
    __/

### WeakSets

WeakSets provide extra flexibility when working with the Set data structure. They are different from regular Sets in that they only accept objects and are not iterable; they can’t be looped over, and do not have a clear() method. How then do they provide extra flexibility? We’ll see in a bit.

We can create a WeakSetusing the WeakSet constructor:

    let user1 = {name: 'user 1', email: 'user1@example.com'};
    let user2 = {name: 'user 2', email: 'user2@example.com'};
    let user3 = {name: 'user 3', email: 'user3@example.com'};

    const users = new WeakSet([user1, user2, user3]);

*The code above creates a new WeakSet object, adding items other than objects returns a TypeError:*

    users.add('user 4');

    console.log(users); // TypeError: Invalid value used in weak set

Since WeakSets do not have a clear() method, objects can only be deleted by setting them to null. This works because the JavaScript Engine’s garbage collection algorithms will automatically free up memory allocated to the null object, hence deleting it from the WeakSet.

This is wonderful because the WeakSets objects set to null are garbage-collected while the program is still running, hence, reducing memory consumption and preventing memory leakage, especially when dealing with huge amounts of data that are generated asynchronously.

Within this feature lies a chance for you to write light-weight solutions to programming problems without having to bother with the details of memory management.

# Conclusion

we’ve taken a look at Sets and Maps and how they handle unique items and key-value pairs respectively. These useful data structures provide easier and more efficient ways to structure and access data under certain use cases.

*Special modifications such as WeakSets and WeakMaps provide more options for the developer and are handy for memory management.*