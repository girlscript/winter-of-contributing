![Image](https://pbs.twimg.com/media/FBMINbXVIAItAHp?format=jpg&name=small)

> Credit : [Tanmay Sankalp](https://simplesnippets.tech/operators-in-javascript-programming/)

---

## Operators: Operators are basic mathematical symbols that perform some sort of operation/function on digits.

```
3 + 5 = 8

3,5 is Operand
+,= is Operator
```

---

## Topics

- ### Basic Operators `+, -, *, /, %`
- ### Comparison Operators `>, <, >=, ==,=== `
- ### Ternary Operator `?`
- ### Logical Operators `||, &&, !, ??`

---

## **Basic Operators**

### Addition `+`, Multiplication `*`, Subtraction `-`, Division (quotient) `/`

```
let a = 10;
let b = 5;

console.log(a+b); // Output : 15
console.log(a*b); // Output : 50
console.log(a-b); // Output : 5
console.log(a/b); // Output : 2

```

### Remainder `%`, Exponentiation `**`

```
let a = 4;
let b = 2;

console.log(a%b); // Output : 0
console.log(a**b); // Output : 16


```

### Special use of `+` operator. It is also used for string concatenation. After the introduction of ` Backticks (``) in the ES6 version. `It is not used that frequently.

> ### NOTE: `+` has a special feature to convert operand to string other operators works only with number

```
console.log("Vansh " + " Sharma") // Output Vansh Sharma
console.log('5' + 1) // Output "51"
console.log(2+'2'+'1') //Output "221"

```

---

## **Comparison Operators**

### These are operators are used to compare two values. Comparison operators always returns result in Boolean form `true`( means 'Yes','Correct'), `false`(means 'No','Wrong'). JavaScript converts the value to numbers so always use **strict comparison**.

### Greater than `>`, Less than `<`, Greater than and equal `>=`, Less than and equal `<`

```
console.log(5 > 4); // Output true
console.log(5 < 4); // Output false
console.log(5 >= 4); // Output true
console.log(5 <= 5); // Output true

```

### Double Equals `==` only compares the value, Triple Equals `===` compares the value and datatype both, Not Equal `!=`/`!==` It is always preferred to use the latter.

```
console.log(5 == "5") // Output true because it compared 5 with 5

console.log(5 === "5") // Output false because it compared number(5) with string(5)

console.log(5 !== "5") // Output true because it compared number(5) with string(5)



```

## **String Comparison**

- ### Sting comparison follows the English dictionary order (Unicode).
- ### While comparing the small letter with a capital letter. Small letters are always considered greater because of the greater index.

```
console.log('Z' > 'A') // true
console.log('l' > 'm') // false
console.log('k' > 'Z') // true

```

### ***Point to remember***

- ### `>`, `<`, `>=`, `<=` converts `null`, `undefined` to 0 and NaN respectively.

- ### `null` and `undefined` are only equal (==) to each other.

```
console.log(null == undefined) // true
console.log(null === undefined) // false
console.log(null == 0) // false
console.log(null <= 0) // true becasue null gets converted into 0


```

---

## **Ternary Operator**

### It is used as an alternative to small `if` code.

> ### NOTE: Do not use as a complete alternative to `if` operator, use this only with small `if` code expressions.


```
Syntax:

let result = condition ? value1(if condition is true) : value2(if condition is not true


let a, b;
a = 5;
b = 7;

let finalAnswer =
  a > b ?'a is greater than b' : ' a is less than b';

  console.log(finalAnswer) // a is less than b

```

---

## **Logical Operators**

### `||` (OR)

- ### It always returns the first truthy value. Don't check after that.

- ### Converts the operand to boolean to evaluate the result.

- ### If all operands return the `false`, returns the last operand.

```

console.log(5 || 0); // 5 ( only truthy value)

console.log(0 || null || undefined || 3); // 3 ( only truthy value)

console.log(undefined || 0 || null); // null ( if all are false return the last value)
```

### `&&` (AND)

- ### It always returns the first falsy value. Don't check after that.

- ### Converts the operand to boolean to evaluate the result.

- ### If all operands return the `true`, returns the last operand.

```
console.log(5 && 0); // 0 (only falsy value)

console.log(1 && null && 5); // null (only falsy value)

console.log(5 && true && 3); // 3 (if all are true returns the last value)


```
### `!` (NOT)

- ### Converts the operand to boolean type to evaluate the result.

- ### Returns the inverse value.

```
console.log(!0) // true (because inverse of 0( false) is true)

console.log(!5) // false (because inverse of 5( true) is false)

console.log(!" ") // false (because " " is not empty string so inverse is false)

```

### `??` Nullish coalescing operator 

-  ### It returns the first defined value whereas `||` returns the first truthy value.

- ### 0 for || is falsy on the other hand 0 for the ?? is defined value.

```
console.log(null ?? undefined ?? 1) // 1 returns the defined value

console.log(0 ?? 1) // 0 because ?? consider 0 as defined value

console.log(0 || 1) // 1 because || consider 0 as falsy value


```
***

## ***Points to remember*** 

```
console.log("" || 5) // 5 (because empty string is 0 (falsy))

console.log(" " || 5) // " " here output is blank space even space is consider as non-empty

console.log( null || 2 && 3 || 4 ) // 3 because precedence of && is higher than that of || )


```
***

## **References**

- #### [Basic Operators](https://javascript.info/operators)
- #### [Comparison Operators](https://javascript.info/comparison)
- #### [Ternary Operators](https://javascript.info/ifelse)
- #### [Logical Operators](https://javascript.info/logical-operators)
- #### [Nullish coalescing operator ](https://javascript.info/nullish-coalescing-operator)

***

### **Contributor** [Vansh Sharma](https://github.com/VanshSh)
