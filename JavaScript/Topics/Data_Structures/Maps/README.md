# Maps:-

Map is a collection of keyed data items, just like an Object. But the main difference is that Map allows keys of any type.

## Methods and properties are:-

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

__Contributor :__ [Sakshi Mishra](https://github.com/SakshiMishra1) :heart: 
