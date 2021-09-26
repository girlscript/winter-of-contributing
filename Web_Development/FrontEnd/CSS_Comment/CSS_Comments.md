
<h1 align="center"><b>CSS Comments</b></h1>
<br>
<br>

- Comments are used to explain the code, and may help when you edit the source code at a later date.

- A CSS comment is used to add explanatory notes to the code or to prevent the browser from interpreting specific parts of the style sheet. By design, comments have no effect on the layout of a document.

- The /* */ comment syntax is used for both single and multiline comments. There is no other way to specify comments in external style sheets.

- A CSS comment is placed inside the <style> element, and starts with /* and ends with */  

<br>

Example-1:

```jsx
/* This is a single-line comment */

p {
  color: red;
}

```

<br>

Example-2:


```jsx

/*
A comment
which stretches
over several
lines or multiline comment
*/

p {
  color: pink;
}

```

<br>


## HTML and CSS Comments ##

- In the following example, we use a combination of HTML and CSS comments:

```jsx

<!DOCTYPE html>
<html>
<head>
<style>
p {
  color: blue;  /* css comment */
}
</style>
</head>
<body>

<h2>My Heading</h2>

<!-- HTML Comment -->
<p>Hello World!</p>
<p>This paragraph is styled with CSS.</p>
<p>CSS comments are not shown in the output.</p>

</body>
</html>

```

<br>



## *Reference:*
   - Documentation:
     - <a href="https://www.w3schools.com/css/default.asp">W3Schools</a> 
     - <a href="https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/CSS_basics">MDN Web Docs</a>
<br>

## Happy Coding :)