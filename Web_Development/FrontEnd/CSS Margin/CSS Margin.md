# CSS Margin
CSS Margin property is used for creating space outside the element .
There are properties for setting the margin for each side of an element (top, right, bottom, and left).
## When to use this?
When we have to provide spacing between two elements or setting position of element to the center (horizontally)
## Margin property for Individual sides
Margin property for each side of element:
* For Top Margin:- `margin-top`
* For Left Margin:- `margin-left`
* For Bottom Margin:- `margin-bottom`
* For Right Margin:- `margin-right`
### Syntax
```css
h1{
    margin: 20px;
}
```
### The auto value of Margin
This will automatically set the element to the middle of container horizontally by dividing total space into left and right margin equally.
### The inherit value of Margin
This will automatically inherit the margin values of their parent container.
### Margin Shorthand Propert
`margin: 25px,30px,40px,50px;`
* 25px is for top-margin
* 30px is for right-margin
* 40px is for bottom-margin
* 50px is for left-margin
#### HTML file
```html
<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" href="style.css">
</head>
<body>
<div class="box">
</div>
</body>
</html>
```
#### Example for property of Individual sides 
![Screenshot 2021-11-02 at 12.32.55 AM.png](https://www.dropbox.com/s/ehwpl3jzcsq4db0/Screenshot%202021-11-02%20at%2012.32.55%20AM.png?dl=0&raw=1)
```css
.box{
  height: 500px;
  width: 500px;
  background-color: black;
  margin-left: 200px;
  margin-top: 200px;
  margin-bottom: 20px;
  margin-right: 600px;
}
body{
  background-color: aqua;
}
```
#### Example for auto value of margin
![Screenshot 2021-11-02 at 12.35.03 AM.png](https://www.dropbox.com/s/vslixbksdabbwjt/Screenshot%202021-11-02%20at%2012.35.03%20AM.png?dl=0&raw=1)
```css
.box{
  height: 500px;
  width: 500px;
  background-color: black;
  margin: auto;
}
body{
  background-color: aqua;
}
```
#### Example for inherit value of margin
![Screenshot 2021-11-02 at 12.37.11 AM.png](https://www.dropbox.com/s/l6uzybs110c33gy/Screenshot%202021-11-02%20at%2012.37.11%20AM.png?dl=0&raw=1)
```css
.box{
  height: 500px;
  width: 500px;
  background-color: black;
  margin: inherit;
}
body{
  background-color: aqua;
}
```
### References
* [W3Schools](https://www.w3schools.com/css/css_margin.asp)
* [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/CSS/margin)
