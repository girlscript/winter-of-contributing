# Reduce Map Filter

Map, reduce, and filter are all array methods. Each one will iterate over an array and perform a function and return a new array based on the result of the function.

## Map

`map` is a method built to do exactly that. It's defined on `Array.prototype`, so you can call it on any array, and it accepts a callback as its first argument.

### Syntax

```jsx
var new_array = arr.map(function callback(element, index, array) {
    // Return value for new_array
}[, thisArg])
```

### Example

```jsx
const numbers = [1, 2, 3, 4];
const doubled = numbers.map(item => item * 2);
console.log(doubled); // [2, 4, 6, 8]
```

To iterate through the array given below and create an array of task names we would traditionally use a for loop or a for each loop

```jsx
// Durations are in minutes 
const tasks = [
  {
    'name'     : 'Write for Envato Tuts+',
    'duration' : 120
  },
  {
    'name'     : 'Work out',
    'duration' : 60
  },
  {
    'name'     : 'Procrastinate on Duolingo',
    'duration' : 240
  }
];
```

Using For Loop

```jsx
const task_names = [];
 
for (let i = 0, max = tasks.length; i < max; i += 1) {
    task_names.push(tasks[i].name);
}

console.log(task_names)
```

But if we use the map function, it is fairly simpler 

```jsx
const task_names = tasks.map(function (task, index, array) {
    return task.name; 
});

console.log(task_names)
```

## Filter

The `filter()` method takes each element in an array and applies a conditional statement against it. If this conditional returns true, the element gets pushed to the output array. If the condition returns false, the element does not get pushed to the output array.

### Syntax

```jsx
const numbers = [1, 2, 3, 4];
const evens = numbers.filter(item => item % 2 === 0);
console.log(evens);
```

The syntax for `filter` is similar to map, except the callback function should return true to keep the element, or false otherwise. In the callback, only the element is required.

### Example

```jsx
const students = [
  { name: 'Quincy', grade: 96 },
  { name: 'Jason', grade: 84 },
  { name: 'Alexis', grade: 100 },
  { name: 'Sam', grade: 65 },
  { name: 'Katie', grade: 90 }
];

const studentGrades = students.filter(student => student.grade >= 90);
return studentGrades; // [ { name: 'Quincy', grade: 96 }, { name: 'Alexis', grade: 100 }, { name: 'Katie', grade: 90 } ]
```

## Reduce

Just like **map() and filter(), reduce()** also executes the callback for each element of the array. To better understand reduce, we first need to understand two terms: “**accumulator” and “reducer”.**

The **accumulator** is the value that we end up with, and the **reducer** is what action we will perform in order to get to **one value**. You must remember that a **reducer** will always return only one value, hence the name “**reduce”**. **It’s time to deep dive into an example!

### Syntax

```jsx
let variable  = Array.reduce( (accumulator,curr_value) => expression ), intialValue)
```

### Example

```jsx
let totalMarks = studentRecords.reduce( ((acc,emp) => acc+emp.marks), 0)console.log(totalMarks);// logs: 241
```

Here is a tweet by Steve Luscher to sum it up very well.
![Tweet by Steve Luscher](https://user-images.githubusercontent.com/58532371/135125209-3a9b9f95-503f-46e4-b9f7-f03af8c568a5.png)

### **Contributor:** [Harsh Mathur](https://github.com/harshmathurx)
