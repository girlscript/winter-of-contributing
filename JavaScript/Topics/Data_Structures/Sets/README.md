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

__Contributor :__ [Sakshi Mishra](https://github.com/SakshiMishra1) :heart: 
