# Code Structure
- The first thing we’ll study is the building blocks of code.
# Statements
- Statements are syntax constructs and commands that perform actions. We’ve already seen a statement, <strong> alert('Hello, world!') </strong>, 
which shows the message <strong> “Hello, world!” </strong>.
- We can have as many statements in our code as we want. Statements can be separated with a semicolon. 
- For example, here we split <strong> “Hello World” </strong> into two alerts:
<pre>
  alert('Hello');
  alert('World');
</pre>
# Semicolons
- A semicolon may be omitted in most cases when a line break exists.
- This would also work:
<pre>
  alert('Hello')
  alert('World')
</pre>
- JavaScript interprets the line break as an “implicit” semicolon. This is called an <strong> automatic semicolon insertion </strong>.
- In most cases, a newline implies a semicolon. But “in most cases” does not mean “always”!
- There are cases when a newline does not mean a semicolon. For example:
<pre>
  alert(2 +
  4
  + 1);
</pre>
- The code outputs 7 because JavaScript does not insert semicolons here. 
- It is intuitively obvious that if the line ends with a plus "+", then it is an “incomplete expression”, so a semicolon there would be incorrect.
- And in this case, that works as intended.
- But there are situations where JavaScript “fails” to assume a semicolon where it is really needed.
- Errors which occur in such cases are quite hard to find and fix.
<pre>
An example of an error
If you’re curious to see a concrete example of such an error, check this code out:
  alert("Hello");
  [1, 2].forEach(alert);
</pre>
- No need to think about the meaning of the brackets [] and forEach yet. 
- We’ll study them later. For now, just remember the result of running the code: it shows Hello, then 1, then 2.
- Now let’s remove the semicolon after the alert:
<pre>
  alert("Hello")
  [1, 2].forEach(alert);
</pre>
- The difference compared to the code above is only one character: the semicolon at the end of the first line is gone.
- If we run this code, only the first Hello shows (and there’s an error, you may need to open the console to see it). There are no numbers any more.
- That’s because JavaScript does not assume a semicolon before square brackets [...]. So, the code in the last example is treated as a single statement.
- Here’s how the engine sees it:
<pre>
  alert("Hello")[1, 2].forEach(alert);
</pre>

# Comments
- As time goes on, programs become more and more complex. It becomes necessary to add comments which describe what the code does and why.
- Comments can be put into any place of a script. They don’t affect its execution because the engine simply ignores them.
- One-line comments start with two forward slash characters //.
- The rest of the line is a comment. It may occupy a full line of its own or follow a statement. Like here:
<pre>
  // This comment occupies a line of its own
  alert('Hello');

  alert('World'); // This comment follows the statement
</pre>
- Multiline comments start with a forward slash and an asterisk /* and end with an asterisk and a forward slash */. Like this:
<pre>
  /* An example with two messages.
  This is a multiline comment.
  */
  alert('Hello');
  alert('World');
</pre>
### Nested comments are not supported!
- There may not be /*...*/ inside another /*...*/.
- Such code will die with an error:
<pre>
  /*
    /* nested comment ?!? */
  */
  alert( 'World' );
</pre>
