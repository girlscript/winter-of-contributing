# Type Conversion

- Type conversion in JavaScript is basically of two types:
  1. Implicit Conversion
  2. Explicit Conversion
- In programming, type conversion is the process of converting data of one type to another. 
- For example: converting String to Number.
- Some function like alert which convert any value given to it in the string form.

# Implicit Conversion

- Implicit conversion means conveersion of types is done by JavaScript automatically, basically there are some set of rules defined for some cases like for alert
 function, it take any value & convert it into string. 
- There are predefined set of rules written by JavaScript Developers to make coding easy.
- Learning is much better from examples rather than theory, so learn from examples:\

## Implicit Conversion to String

- Numeric string with + sign result out to be string type
<pre>
  let result;

  result = '5' + 2; 
  console.log(result) // '52'

  result = '6' + true; 
  console.log(result); // '6true'

  result = '7' + null; 
  console.log(result); // '7null'
</pre>

-  When a number is added to a string, JavaScript converts the number to a string before concatenation(+).
-  + is used as concatenation not as plus.

## Implcit Conversion to Number

-Numberic string with minus, divide, multiplication sign it result out to be numberic type
<pre>
  let result;

  result = '5' - '2'; 
  console.log(result); // 3

  result = '7' * 2;
  console.log(result); // 14

  result = '8' / 2;
  console.log(result); // 4
</pre>

## Implicit Boolean Conversion to Number

- Boolean means 0 or 1 i.e., true or false
- In programming language 0 consider as false & all non-zero consider as true, true means 1
- And null is also consider as 0
<pre>
  let result;

  result = 5 - true;
  console.log(result); // 4

  result = 6 + true;
  console.log(result); // 7

  result = 7 + false;
  console.log(result); // 7
  
  result = 7 + null;
  console.log(result); // 7
</pre>

# Explicit Conversion

- Explicit conversion as it's name suggests explicit means user can also play with data types for according to their needs.
- These conversion are usually achieve by built-in-methods in JavaScript & other languages as well.
- Below are some examples:

## Convert to Number Explicitly

- To convert numeric strings and boolean values to numbers, you can use Number() in-built function
- And empty strings and null values means 0
<pre>
  let result;

  result = Number('5');
  console.log(result); // 5

  result = Number(true);
  console.log(result); // 1

  result = Number(false);
  console.log(result); // 0
  
  result = Number(' ');
  console.log(result); // 0
  
  result = Number(null);
  console.log(result); // 0
</pre>

- Numbers can be generate from strings using parseInt(), parseFloat(), unary operator + and Math.floor() there are many such functions

## Convert to String Explicitly

- To convert other data types to strings, you can use either String() or toString()

<pre>
  let result;
  
  result = String(5);
  console.log(result);  // '5'

  result = String(6 + 7);
  console.log(result); // '13'

  result = String(null);
  console.log(result); // 'null'

  result = String(true);
  console.log(result); // 'true'

  // using toString()
  result = (5).toString();
  console.log(result); // '5'

  result = true.toString();
  console.log(result); // 'true'
</pre>

- Similar for Boolean Conversion use Boolean() as well.

Thanks for reading
Author: Sumit Singh
