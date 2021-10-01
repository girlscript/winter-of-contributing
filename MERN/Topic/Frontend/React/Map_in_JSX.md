# **Using .map() in JSX**
---
## **What is map?**
<br>

A Map is a data collection type that holds **key-value pairs** and remembers the original insertion order of the keys. Any value (both objects and primitive values) may be used as either a key or a value. We cannot store a duplicate pair in the map(). It is because of the uniqueness of each stored key. 

**Use:** It is mainly used for fast searching and looking up data.

**In React**, a Map function is a Javascript function for handling arrays. Many times we come upon a situation where we are repetitively passing reusable components that come from an array. One way to iterate over it is to use a for loop or a forEach() function. However, the only drawback is that it mutates the array. The better approach in such type of situation is to use mapping component which can easily map all the individual custom pieces of data to each of the custom components without mutating the array and are easier to debug.


---
## **ES6 Map function**
<br>

It is used to create a new array by performing a specific task to all the elements in the array.

**Example:**
```
var numbers=[3,56,8,53,2];
function double(x){
return x*2;
}
const newNumber=numbers.map(double);
console.log(newNumber);
``` 
**Output:**
```
[6, 16, 22, 14, 10]
```

In the given example, the map() function takes an array of numbers and double their values. We assign the new array returned by map() to the variable newNumber and prints it.



---
## **.map() usage in React**
<br>

In React, map method is used to traverse and display a list of similar objects of a component. The map() function expects a **callback as the argument** and executes it once for each element in the array. We must also make sure that every component inside an array of object has a **unique key** property. To display in DOM we use map function and return JSX from the callback function.

**Example:**
```
const Users = () => {
  const data = [
    { id: 1, emoji: "Happy" },
    { id: 2, emoji: "Sad" },
    { id: 3, emoji: "Confused" },
  ];

  return (
    <div className="users">
      {data.map((user) => (
        <div className="user">{user}</div>
      ))}
    </div>
  );
};
``` 
**Output:**
```
Happy
Sad
Confused
```



