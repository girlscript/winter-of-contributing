# CSS Syntax

A **CSS** syntax consist of selector and a delaration box.
For example-
```
h1 {
    color: red;
    font-size: 16px;
}
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
```
div {
  text-align: center;
  
}
```
## CSS ID selector

This selector uses the id attribute of an **HTML** element to select a particular element.
Example-
```
#mailbox {
  text-align: center;
  color: red;
} 
```

## CSS CLASS selector

This selector uses class attribute to select a particularb **HTML** element.
We use  .classname to select HTML emlement using Class element.
Example
```
.center {
  text-align: center;
  color: red;
}
```

## CSS Universal Selector
 (*) is CSS universal selector and it selects all the **HTML** elements.

example-
```
* {
  text-align: center;
  color: blue;
}
```


Reference-
https://developer.mozilla.org/en-US/docs/Web/CSS/Syntax












