# CSS Class and ID Selectors

### What will this document teach?
   * Class and ID selectors
   * Difference between them
   
### What is the need for both of these selectors?
The `class` and `id` selectors in CSS helps in identifying various HTML elements and helps especially in presenting differently with respect to its `class` and `id`

## Class Selector
The `class` selector in CSS helps to select the elements with a specific `class` attribute. Therefore, it matches all the HTML elements depending on the contect of their `class`.
It is defined by the symbol `.` followed by the class name. For example : `.class_name`

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
<div class=".container">
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
![Class-basic]()
