# CSS Syntax

A **CSS** syntax consist of selector and a delaration box.
For example-
```HTML
<!DOCTYPE html>
<html>
<head>
<style>

h1 {
    color: red;
    font-size: 16px;
}
</style>
</head>

<body>

<h1>This is a heading</h1>

</body>
</html>
```
Here, h1 represent the selector.
(selector is **HTML** Element you want to style.)

While block in {} represent the declaration.
The block can have multiple declaration seperated by a semi-colon.

In our example, we have two declaration

 -color (it changes the color of selector)
 -font-size (it gives the font-size to selector)

Our declaration statement exist in **property:value;** pair.
color: red;
font-size: 16px;

# Selectors in CSS

There are different ways in which you can select the HTML elements using CSS Selectors.

## CSS element selector

In this we simply select HTML element based on its name.
Example-
```HTML
<!DOCTYPE html>
<html>
<head>
<style>

div {
  text-align: center;
  
}
</style>
</head>

<body>

<div>This is using a div</div>

</body>
</html>
```
## CSS ID selector

This selector uses the id attribute of an **HTML** element to select a particular element.
Example-
```HTML
<!DOCTYPE html>
<html>
<head>
<style>

#mailbox {
  text-align: center;
  color: red;
} 
</style>
</head>

<body>

<h1 id="mailbox">This can be access using ID</h1>

</body>
</html>
```

## CSS CLASS selector

This selector uses class attribute to select a particular **HTML** element.
We use  .classname to select HTML emlement using Class element.
Example
```HTML
<!DOCTYPE html>
<html>
<head>
<style>

.center {
  text-align: center;
  color: red;
}
</style>
</head>

<body>

<p class="center">This paragraph can be accessed using the class centre.</p>


</body>
</html>
```

## CSS Universal Selector
 (*) is CSS universal selector and it selects all the **HTML** elements.

example-
```HTML
<!DOCTYPE html>
<html>
<head>
<style>
// * will affect all HTML elements
* {
  text-align: center;
  color: blue;
}
</style>
</head>

<body>
<h1> This is a heading. </h1>
<p> A paragraph .</p>


</body>
</html>
```


Contributed by- **RAJAT SINGH** @rajatsinghchauhan
Reference-
https://developer.mozilla.org/en-US/docs/Web/CSS/Syntax












