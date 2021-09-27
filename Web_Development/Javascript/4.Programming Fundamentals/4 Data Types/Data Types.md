# Data Types
- A value in JavaScript is always of a certain type. For example, a string or a number.
- There are eight basic data types in JavaScript. Here, I’ll cover them in general.
- You can put any type in a variable. For example, a variable can at one moment be a string and then store a number:
<pre>
  // no error
  let message = "hello";
  message = 123456;
</pre>
- Programming languages that allow such things, such as JavaScript, are called “dynamically typed”,
 meaning that there exist data types, but variables are not bound to any of them.
 
# Number
<pre>
  let n = 123;
  n = 12.345;
</pre>
- The number type represents both integer and floating point numbers.
- There are many operations for numbers, e.g. multiplication *, division /, addition +, subtraction -, and so on.
- Besides regular numbers, there are so-called “special numeric values” which also belong to this data type: Infinity, -Infinity and NaN.
- <strong> Infinity </strong> represents the mathematical Infinity ∞. It is a special value that’s greater than any number.
- You can get it as a result of division by zero:
<pre>
  alert( 1 / 0 ); // Infinity
  alert( Infinity ); // Infinity
</pre>
- <strong> NaN </strong> represents a computational error. It is a result of an incorrect or an undefined mathematical operation, for instance:
<pre>
  alert( "not a number" / 2 ); // NaN, such division is erroneous
</pre>

# BigInt
- In JavaScript, the “number” type cannot represent integer values larger than (2^53-1) (that’s 9007199254740991), or less than -(2^53-1) for negatives. 
- It’s a technical limitation caused by their internal representation.
- For most purposes that’s quite enough, but sometimes we need really big numbers, e.g. for cryptography or microsecond-precision timestamps.
- BigInt type was recently added to the language to represent integers of arbitrary length.
- A BigInt value is created by appending n to the end of an integer:
<pre>
  // the "n" at the end means it's a BigInt
  const bigInt = 1234567890123456789012345678901234567890n;
</pre>
# String
- A string in JavaScript must be surrounded by quotes.
<pre>
  let str = "Hello";
  let str2 = 'Single quotes are ok too';
  let phrase = `can embed another ${str}`;
</pre>
- In JavaScript, there are 3 types of quotes.

    1. Double quotes: "Hello".
    2. Single quotes: 'Hello'.
    3. Backticks: `Hello`.
- Double and single quotes are “simple” quotes. There’s practically no difference between them in JavaScript.
- Backticks are “extended functionality” quotes. They allow us to embed variables and expressions into a string by wrapping them in ${...}, for example:
<pre>
  let name = "John";

  // embed a variable
  alert( `Hello, ${name}!` ); // Hello, John!

  // embed an expression
  alert( `the result is ${1 + 2}` ); // the result is 3
</pre>

# Boolean (logical type)
- The boolean type has only two values: true and false.
- This type is commonly used to store yes/no values: true means “yes, correct”, and false means “no, incorrect”. For instance:
<pre>
  let nameFieldChecked = true; // yes, name field is checked
  let ageFieldChecked = false; // no, age field is not checked
</pre>
- Boolean values also come as a result of comparisons:
<pre>
  let isGreater = 4 > 1;

  alert( isGreater ); // true (the comparison result is "yes")
</pre>

# The “null” value
- The special null value does not belong to any of the types described above.
- It forms a separate type of its own which contains only the null value:
<pre>
  let age = null;
</pre>
- In JavaScript, null is not a “reference to a non-existing object” or a “null pointer” like in some other languages.
- It’s just a special value which represents “nothing”, “empty” or “value unknown”.
- The code above states that age is unknown.
# The “undefined” value
- The special value undefined also stands apart. It makes a type of its own, just like null.
- The meaning of undefined is “value is not assigned”.
- If a variable is declared, but not assigned, then its value is undefined:
<pre>
  let age;

  alert(age); // shows "undefined"
</pre>
- Technically, it is possible to explicitly assign undefined to a variable:
<pre>
  age = undefined;

  alert(age); // "undefined"
</pre>
# Objects and Symbols
- The object type is special.All other types are called “primitive” because their values can contain only a single thing 
(be it a string or a number or whatever). 
- In contrast, objects are used to store collections of data and more complex entities.
- The symbol type is used to create unique identifiers for objects. 
- We have to mention it here for the sake of completeness, but also postpone the details till we know objects.
# The typeof operator
- The typeof operator returns the type of the argument. 
- It’s useful when we want to process values of different types differently or just want to do a quick check.
- It supports two forms of syntax:
    1. As an operator: typeof x.
    2. As a function: typeof(x).
 - The call to typeof x returns a string with the type name:
<pre>
   typeof undefined // "undefined"

    typeof 0 // "number"

    typeof 10n // "bigint"

    typeof true // "boolean"

    typeof "foo" // "string"

    typeof Symbol("id") // "symbol"

    typeof Math // "object"  (1)

    typeof null // "object"  (2)

    typeof alert // "function"  (3)
</pre>
