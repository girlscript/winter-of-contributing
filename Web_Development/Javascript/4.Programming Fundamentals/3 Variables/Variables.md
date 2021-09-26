# Variables
- Most of the time, a JavaScript application needs to work with information. Here are two examples:
  1. An online shop – the information might include goods being sold and a shopping cart.
  2. A chat application – the information might include users, messages, and much more.
- Variables are used to store this information.

# A variable

- A variable is a “named storage” for data. We can use variables to store goodies, visitors, and other data.
- To create a variable in JavaScript, use the let keyword.
<pre>
  let message;
</pre>
- Now, we can put some data into it by using the assignment operator = :
<pre>
  let message;
  message = 'Hello!';

  alert(message); 
</pre>
- To be concise, we can combine the variable declaration and assignment into a single line:
<pre>
  let message = 'Hello!'; 

  alert(message)
</pre>
- We can also declare multiple variables in one line:
<pre>
  let user = 'John', age = 25, message = 'Hello';
</pre>
### var instead of let
- In older scripts, you may also find another keyword: var instead of let:
<pre>
  var message = 'Hello';
</pre>
- The var keyword is almost the same as let. It also declares a variable, but in a slightly different, “old-school” way.
- There are subtle differences between let and var, but they do not matter for us yet. We’ll cover them in detail in the chapter The old "var".
 
### Declaring twice triggers an error
- A variable should be declared only once. A repeated declaration of the same variable is an error:
<pre>
  let message = "This";

  // repeated 'let' leads to an error
  let message = "That"; // SyntaxError: 'message' has already been declared
</pre>

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
- That is: words go one after another, each word except first starting with a capital letter: myVeryLongName.
- What’s interesting – the dollar sign '$' and the underscore '_' can also be used in names. 
- They are regular symbols, just like letters, without any special meaning.
- These names are valid:
<pre>
  let $ = 1; // declared a variable with the name "$"
  let _ = 2; // and now a variable with the name "_"

  alert($ + _); // 3
</pre>
- Examples of incorrect variable names:
<pre>
  let 1a; // cannot start with a digit

  let my-name; // hyphens '-' aren't allowed in the name
</pre>
### Reserved names
- There is a [list of reserved words](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Lexical_grammar#keywords), which cannot be used as variable names because they are used by the language itself.
- For example: let, class, return, and function are reserved.
- The code below gives a syntax error:
<pre>
  let let = 5; // can't name a variable "let", error!
  let return = 5; // also can't name it "return", error!
</pre>
# Constants
- To declare a constant (unchanging) variable, use const instead of let:
<pre>
  const myBirthday = '18.04.1900';
</pre>
- Variables declared using const are called “constants”. They cannot be reassigned. An attempt to do so would cause an error:
<pre>
  const myBirthday = '18.04.1982';

  myBirthday = '01.01.2001'; // error, can't reassign the constant!
</pre>
- When a programmer is sure that a variable will never change, they can declare it with const to guarantee and clearly communicate that fact to everyone.

