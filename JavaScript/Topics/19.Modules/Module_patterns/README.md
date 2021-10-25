## Javascript Modules - A Begineers Guide

### What are modules ?
You must have seen some books that is divided into different sections and chapters by good author, so as to make content of the book more clear. 
Likewise, programmers divide their programs into modules. Chapters in the books are similar to modules in a large program.

### Why we use modules?
There are a lot of benefits of using modules.

**1. Maintainability** :- Going back to the example of book, if we want to change some content inside a chapter, ideally it should not affect other chapter otherwise it will be a nightmare to solve this problem. Similarly, modules allows us to change the content inside it, without affecting other modules.

**2. Namespacing** :- In Javascript, we define some variable outside the function which becomes a global variable and can be accessed by any Javascript file present. So to solve this problem, module allows us to create a private space for our variables.

**3. Reusability** :- Imagine we have copied some code from somewhere and use it many times in our different Javascript file, but if we want to change something to the original code, we would have to update that changes everywhere. To solve this problem, we have modules

### How to include / incorporate modules in our program ?
There are different way to incorporate modules in our Javascript program

#### 1. Anonymous closure - writing a function code inside ()

**Example :-**

```js
var global = "Hello! I am global."

(function () {
  // We keep these variables private inside this closure scope
  
  var myGrades = [93, 95, 88, 0, 55, 91]
  
  var average = function() {
    var total = myGrades.reduce(function(sum, grade) {
      return sum + grade}, 0)
    
      return 'Your average grade is ' + total / myGrades.length + '.'
  }

  var failing = function(){
    var failingGrades = myGrades.filter(function(grade) {
      return grade < 70})
      
    return 'You failed ' + failingGrades.length + ' times.'
  }

  console.log(failing())
  console.log(global)

}());
```
**Output :-**

You failed 2 times.
Hello! I am global.


**Conclusion :-**
- myGrades array is private to the closure, and is hidden from global scope
- We can still use global variable inside function


#### 2. Global import - pass global variable as parameter and return some object associated with that variable

- It can be used while using some libraries like jQuery i.e, as global import

**Example :-**

```js
(function (globalVariable) {

  // Keep this variables private inside this closure scope
  var privateFunction = function() {
    console.log('Shhhh, this is private!');
  }

  // Expose the below methods via the globalVariable interface while
  // hiding the implementation of the method within the 
  // function() block

  globalVariable.each = function(collection, iterator) {
    if (Array.isArray(collection)) {
      for (var i = 0; i < collection.length; i++) {
        iterator(collection[i], i, collection);
      }
    } else {
      for (var key in collection) {
        iterator(collection[key], key, collection);
      }
    }
  };

  globalVariable.filter = function(collection, test) {
    var filtered = [];
    globalVariable.each(collection, function(item) {
      if (test(item)) {
        filtered.push(item);
      }
    });
    return filtered;
  };

  globalVariable.map = function(collection, iterator) {
    var mapped = [];
    globalUtils.each(collection, function(value, key, collection) {
      mapped.push(iterator(value));
    });
    return mapped;
  };

  globalVariable.reduce = function(collection, iterator, accumulator) {
    var startingValueMissing = accumulator === undefined;

    globalVariable.each(collection, function(item) {
      if(startingValueMissing) {
        accumulator = item;
        startingValueMissing = false;
      } else {
        accumulator = iterator(accumulator, item);
      }
    });

    return accumulator;

  };

 }(globalVariable));
  
```

**Conclusion :-**
- privateFunction() is a function private to closure
- filtered(), mapped(), accumulator() are the functions that can be called globally through globalVariable.filtered(), globalVariable.mapped(), globalVariable.accumulator() 


#### 3. Object Interface - using self contained object interface

- Same as method 1, but we give some name to the anonymous closure
Example :-

```js
var myGradesCalculate = (function () {
    
  // Keep this variable private inside this closure scope
  var myGrades = [93, 95, 88, 0, 55, 91];

  // Expose these functions via an interface while hiding
  // the implementation of the module within the function() block

  return {
    average: function() {
      var total = myGrades.reduce(function(accumulator, item) {
        return accumulator + item;
        }, 0);
        
      return'Your average grade is ' + total / myGrades.length + '.';
    },

    failing: function() {
      var failingGrades = myGrades.filter(function(item) {
          return item < 70;
        });

      return 'You failed ' + failingGrades.length + ' times.';
    }
  }
})();

myGradesCalculate.failing(); 
myGradesCalculate.average();
```

**Output :-**

You failed 2 times.
Your average grade is 70.33333333333333.

**Conclusion :-**
Everything we want globally exposure, we return it otherwise all the variables and functions are kept private inside closure


#### 4. Revealing the module pattern - ensures all variables and methods kept private, until explicitely exposed

- Same as above, example 3

```js
var myGradesCalculate = (function () {
    
  // Keep this variable private inside this closure scope
  var myGrades = [93, 95, 88, 0, 55, 91];
  
  var average = function() {
    var total = myGrades.reduce(function(accumulator, item) {
      return accumulator + item;
      }, 0);
      
    return'Your average grade is ' + total / myGrades.length + '.';
  };

  var failing = function() {
    var failingGrades = myGrades.filter(function(item) {
        return item < 70;
      });

    return 'You failed ' + failingGrades.length + ' times.';
  };

  // Explicitly reveal public pointers to the private functions 
  // that we want to reveal publicly

  return {
    average: average,
    failing: failing
  }
})();

myGradesCalculate.failing();  
myGradesCalculate.average();
```

**Output :-**
You failed 2 times.
Your average grade is 70.33333333333333.

**Conclusion :-**
We explicitely returned average() and failing() in this case



Yay! We learnt all the basics of modules in Javascript. <br>
Click [here](../Types/README.md) to know types and more about modules in javascript

__Contributor :__ [Harsh Anand](https://github.com/its-me-Harsh-Anand)