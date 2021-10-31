# CSS Hover Effect
## What are hover effects?
The `:hover` CSS pseudo-class matches when the user interacts with an element with a pointing device, but does not necessarily activate it. It is generally triggered when the user hovers over an element with the cursor (mouse pointer).
## Why hover effects?
This enables us to select elements when you mouse over them on all the elements not only on links.
## Browser Compatibility
* Chrome
* Firefox
* Internet Explorer
* Opera
* Safari
## When to use?
We need to use it when we need to add some changes when user hovers over an element with the cursor.
## How to use this?
To use this we need to follow following syntax->
### Syntax
```css
:hover{
    css declarations;
}
```
### Example
[![Screenshot 2021-10-28 at 7.10.26 PM.png)](https://www.dropbox.com/s/fotknrlip96i154/Screenshot%202021-10-28%20at%207.10.26%20PM.png?dl=0&raw=1)](https://drive.google.com/file/d/17aNOHHR_IzQa_BhkW4hmM7dTQBOtVxn6/view?usp=sharing)
#### HTML File
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Document</title>
</head>
<body>
    <div class="box">
         <h1>Hello World</h1>
    </div>
</body>
</html>
```
#### CSS File
```css
.box{
    height: 500px;
    width: 500px;
    background-color: black;
    margin: auto;
}
h1{
    color: aqua;
    text-align: center;
    margin: auto;
}
h1:hover{
    color: brown;
}
```
### Example for visited , active , hover link
`:active`: Changes when we click on the link <br/>
`:hover`: Changes when we hover on the link <br/>
`:visited`: Changes when once we visit the link <br/>
[![Screenshot 2021-10-30 at 10.25.22AM.png](https://www.dropbox.com/s/75w47meel5dc33v/Screenshot%202021-10-30%20at%2010.25.22%20AM.png?dl=0&raw=1)](https://drive.google.com/file/d/1FKrQ3EpBH93XkCmWJyklOooWwCyLJLRA/view?usp=sharing)
#### HTML File
```html
<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" href="style.css">
</head>
<body>
<p style="color: white;">GWOC : <a href="https://gwoc.girlscript.tech/">girlscript.com</a></p>
<p class="visited">Visited: Green</p>
<p class="hover">Hover: Red</p>
<p class="active">Active: Yellow</p>
</body>
</html>
```
#### CSS File
```css
  a:visited {
    color: green;
  }
  a:hover {
    color: red;
  }
  a:active {
    color: yellow;
  } 
  .hover{
    color: red;
  }
  .active{
    color: yellow;
  }
  .visited{
    color: green;
  }
  body{
    background-color: black;
  }
```
## References
* https://www.w3schools.com/cssref/sel_hover.asp
* https://developer.mozilla.org/en-US/docs/Web/CSS/:hover
