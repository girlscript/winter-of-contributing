# Data Types
- A value or data in programming world always have a type, that is known as Data Types. 
- There are eight basic data types in JavaScript. Here, I’ll cover them in general.
- You can put any type in a variable. For example, a variable can at one moment be a string and then store a number:
<pre>
  let message = "hello";
  message = 123456;
</pre>
- Programming languages that allow such things, such as JavaScript, are called “dynamically typed”,
 meaning that there exist data types, but variables are not bound to any of them.
- As in above example, message is defined as let variable and then string value is stored in it, then message become string type variable and in second moment it become int type.
 
# Number

<pre>
  let n = 123;
  n = 12.345;
</pre>
- The number type represents both integer and floating point numbers.
- There are many operations for numbers, e.g. multiplication *, division /, addition +, subtraction -, and so on.
- Besides regular numbers, there are so-called “special numeric values” which also belong to this data type: Infinity, -Infinity and NaN.
- <strong> Infinity </strong> represents the mathematical Infinity ∞. It is a special value that’s greater than any number.
- <strong> NaN </strong> represents a computational error. It is a result of an incorrect or an undefined mathematical operation, for instance:
<pre>
  alert( "not a number" / 2 );
</pre>

# BigInt

- In JavaScript, the “number” type cannot represent integer values larger than (2^53-1), or less than -(2^53-1) for negatives. 
- It’s a technical limitation caused by their internal representation.
- For most purposes that’s quite enough, but sometimes we need really big numbers, e.g. for cryptography or microsecond-precision timestamps.
- BigInt type was recently added to the language to represent integers of arbitrary length.
- A BigInt value is created by appending "n" to the end of an integer:
<pre>
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
  let name = `John is ${19} years old now`;
</pre>

# Boolean (logical type)

- The boolean type has only two values: true and false.
- This type is commonly used to store yes/no values.
<pre>
  let nameFieldChecked = true;
  let ageFieldChecked = false;
</pre>
- Boolean values also come as a result of comparisons:
<pre>
  let isGreater = 4 > 1; // true (the comparison result is "yes")
</pre>

# The “null” value

- The special null value does not belong to any of the types described above.
- It forms a separate type of its own which contains only the null value:
<pre>
  let age = null;
</pre>
- In JavaScript, null is not a “reference to a non-existing object” or a “null pointer” like in some other languages.
- It’s just a special value which represents “nothing”, “empty” or “value unknown”.

# The “undefined” value

- The special value undefined also stands apart. It makes a type of its own, just like null.
- The meaning of undefined is “value is not assigned”.
- If a variable is declared, but not assigned, then its value is undefined:
<pre>
  let age;
</pre>
- Technically, it is possible to explicitly assign undefined to a variable:
<pre>
  age = undefined;
</pre>

Thanks for Reading
Author: Sumit Singh
