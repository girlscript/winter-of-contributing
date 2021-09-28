# CSS Class and ID Selectors

## What will this document teach?

   * Class and ID selectors - Use and Syntax
   * Difference between them
   
## What is the need for both of these selectors?

The `class` and `id` selectors in CSS help in identifying various HTML elements and especially in presenting them differently with respect to their `class` and `id`

## Class Selector

The `class` selector in CSS helps to select the elements with a specific `class` attribute. Therefore, it matches all the HTML elements depending on the content of their `class`.

It is defined by the symbol `.` followed by the class-name. For example : `.class_name`

### Syntax

```css
.class_name
{
    /* Properties */
}
```

### Example

Here a `div` with a paragraph has a class of name `.container`

* HTML
```html
<div class="container">
  <p>This is a dummy paragraph</p>
</div>
```
* CSS
```css
.container
{
    width: 200px;
    height: 150px;
    color: black;
    background-color: cadetblue;
}
```
![Class-basic](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Class%20and%20ID%20Selectors/Assets/Class-basic.png)

## ID Selector

The ID selector in CSS helps to select elements with a specific `id` attribute. 

An `id` in CSS is created using the symbol `#` followed by the id-name. For example : `#id_name`

**PLEASE NOTE that unlike class, `id` can only be used by one HTML element i.e., it is unique to each element**

### Syntax

```css
#id_name
{
  /* Properties */
}
```

### Example

Here a `div` with a paragraph has an id name of `#details`

* HTML
```html
<div class="details">
  <p>This is a dummy paragraph</p>
</div>
```

* CSS
```css
#details
{
    width: 300px;
    height: 200px;
    color: white;
    background-color: black;
}
```
![ID-basic](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Class%20and%20ID%20Selectors/Assets/ID-basic.png)

## Difference between `class` and `id` selectors

| Class      | ID |
| ----------- | ----------- |
| **Not unique** - once defined, can be used by any element      | **Unique** - once defined, can only be used by that element       |

### Example

Let us assume that there is a `div` containing **_two_** paragraphs. Now let's say the container `background-color` needs to be **green**, the first paragraph needs to be of colour **black** and the other paragraph needs to be **white**. Also first paragraph must appear smaller in size as compared to the second one.

This is where we will apply our knowledge of `class` and `id` selectors

* HTML
```html
<div class="container">
  <p id="first">This is the FIRST paragraph</p>
  <p id="second">This is the SECOND paragraph</p>
</div>
```

* CSS
```
#first
{
    color: black;
    font-size: 19px;
}

#second
{
    color: white;
    font-size: 25px;
}
```
![Mixed](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Class%20and%20ID%20Selectors/Assets/mixed.png)

> Note : The `background-color` of the `div` is **green**, the color of first paragraph is **black** and is smaller in size since it takes the properties of the ID `#first`, the color of second paragraph is **white** and is bigger in size since it takes the properties of the ID `#second#`.

## Summary

So from the clear understanding of `class` and `id` selectors in CSS, we can come to an agreement that `class` selector must be used by an element or elements when some of the properties to be shared amongst them are **common**, whereas `id` selector must be used by an element for a specific property to be applied to that element. 

In same way here, `div` and the paragraphs shared a common property which was a **green** `background-color` of the container thus the class `.container` was used. However, both paragraphs have different properties of their own, which where different colours and font-sizes and thus IDs `#first` and `#second` were used.

## Sources

* https://www.w3schools.com/default.asp
* https://www.educative.io/

## Contributed by Srijan Bandyopadhyay 
