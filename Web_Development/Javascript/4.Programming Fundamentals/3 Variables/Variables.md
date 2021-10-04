# Variables
- Variables are like the holders of value of a particular Data type.
- Variables are named as normal names like your name, your favourite book, anything, but for good practice use related variables name.
- Temporary Variables uses Stack Memory to store the value whereas Global Variables ues Heap Memory.
- Let learn about Javascript variables.

# A variable

- A variable is a “named storage” for data. We can use variables to store goodies, visitors, and other data.
- To create a variable in JavaScript, use the let keyword.
- let keyword can be updated at any time the user wants to.
- If it is assinged a value to a variable using let keyword, it can be changed and set a new value with no extra memory allocation in Memory.
- In Memory if a variables is defined using let, then after some operation if user wnat to changed that value Memory will not create another variable or create another slot for that variable, Memory use that alloted space and update it.
- Here is how to define it:
<pre>
  let message;
</pre>
- Now, we can put some data into it by using the assignment operator = :
<pre>
  let message;
  message = 'Hello!';
</pre>
- To be concise, we can combine the variable declaration and assignment into a single line:
<pre>
  let message = 'Hello!'; 
</pre>
- We can also declare multiple variables in one line:
<pre>
  let user = 'John', age = 25, message = 'Hello';
</pre>
- All the above examples are precise to understand the let variables in JavaScript.


### 'var' instead of 'let'

- In old scripts of Java, you may also find another keyword: var
- var is used in older version of scripts.
<pre>
  var message = 'Hello';
</pre>
- The var keyword is almost the same as let. It also declares a variable, but in a slightly different, “old-school” way.
- There are subtle differences between let and var, but they do not matter for us yet.


# Variable naming
- There are two limitations on variable names in JavaScript:
  1. The name must contain only letters, digits, or the symbols $ and _.
  2. The first character must not be a digit.
- Examples of valid names:
<pre>
  let userName;
  let test123;
</pre>
- When the name contains multiple words, camelCase is commonly used. 
- That is words go one after another, each word except first starting with a capital letter: myVeryLongName.
- What’s interesting – the dollar sign '$' and the underscore '_' can also be used in names. 
- They are regular symbols, just like letters, without any special meaning.
- These names are valid:
<pre>
  let $ = 1;
  let _ = 2; 
</pre>
- Examples of incorrect variable names:
<pre>
  let 1a;
  let my-name;
</pre>

### Reserved names

- There is a [list of reserved words](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Lexical_grammar#keywords), which cannot be used as variable names because they are used by the language itself.
- For example: class, return, and function are reserved.
- The code below gives a syntax error:
<pre>
  let let = 5;
  let return = 5;
</pre>

# Constants

- To declare a constant (unchanging) variable, use const instead of let:
<pre>
  const myBirthday = 1990;
</pre>
- Variables declared using const are called “constants”. They cannot be reassigned. An attempt to do so would cause an error:
<pre>
  const myBirthday = 1990;

  myBirthday = 2001;
</pre>
- When a programmer is sure that a variable will never change, they can declare it with const to guarantee and clearly communicate that fact to everyone.

Thanks For Reading.
Author: Sumit Singh

