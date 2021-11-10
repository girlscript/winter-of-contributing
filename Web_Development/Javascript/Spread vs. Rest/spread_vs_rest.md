
![Spread vs. Rest](https://pbs.twimg.com/media/FDv-D-FVgAIJ-5X?format=jpg&name=small)

***
 The ***Rest parameter*** and ***Spread Syntax*** were added in JavaScript ES6 (ECMAScript 6) despite the fact that their symbols are the same they work differently.

> NOTE: 
>- Parameters are value passed inside the function definition :
>
>    function add(paramter){ }
>- Arguments are value passed while calling the functions
>
>      add(arguments)
>

 Let's discuss about them using the explanation and examples.

***
## **Rest Parameter**

 Sometimes while creating the  function we face the situation where the value of number of arguments to be passed are unknown to us. There comes the ***Rest Parameter*** to our rescue.

```
<--- Without Rest parameter --->

function add(a, b) {
  console.log(a + b);
}

add(5, 6) // 11
add(5, 6, 2, 3) // 11, It will just ignore the rest of the arguments except(2,3) because we have given only 2 parameters

```

```
<--- With Rest Parameter --->

function add(...args) {
  let sum = 0;
  for (let arg of args) {
    sum += arg;
  }
  return sum;
}

let array = [1, 2, 3, 4, 5, 6, 7, 8, 9]

console.log(add(2, 3)) // 5
console.log(add(2, 3, 6)) // 11
console.log(add(2, 3, 7, 4, 2, 5)) // 23

```
### **Point to Remember**

 1. The rest parameter is always used at the end of the function parameters 
```
function add(a, b, ...rest){}
```
***

## **Spread Syntax**

 Sometimes we need to add the an array of values as the arguments to the functions because adding each value to the arguments will not be good practice. There comes the **Spread Synatx** for our rescue.

```
<--- Without Spread Sytax --->

console.log(Math.max(1,3,4,6,7,9,98,74,56,32,12,36)) // 98
```
```
<---With Spread Syntax --->

let arr = [1,3,4,6,7,9,98,74,56,32,12,36];

console.log(Math.max(...arr)) // 98 



let arr1 = [1, -2, 3, 4];
let arr2 = [8, 3, -8, 1];

console.log(Math.max(1, ...arr1, 2, ...arr2, 25)); // 25
```

### **Point to Remember**

 Unlike **rest parameter**, **spread syntax** can be used anywhere in the function arguments.

```
console.log(Math.max(1, ...arr1, 2, ...arr2, 25));
```
***
## **Difference**

 |                               Rest Parameter                              	|                            Spread Syntax                            	|
|:-------------------------------------------------------------------------:	|:-------------------------------------------------------------------:	|
| When {...} appears in the function definition it is called Rest Parameter 	| When {...} appears in the function call it is called Spread Syntax. 	|
| function add(...restParameter){  // code     }                            	| let arr= [1,2,3,4,5,6,7,8,9]   add(...spreadSynatx)                 	|
***
## [Reference](https://javascript.info/rest-parameters-spread)