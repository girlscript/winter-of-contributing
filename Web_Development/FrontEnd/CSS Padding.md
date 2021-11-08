# CSS Padding
It can be used for creating space outside the element .There are properties for setting the padding for each side of an element (top, right, bottom, and left).
## When to use this?
When we need to create space outside a container or element to adjust it's position.
## Padding property for Individual sides
Padding property for each side of element:
* For Top Padding:- `padding-top`
* For Left Margin:- `padding-left`
* For Bottom Margin:- `padding-bottom`
* For Right Margin:- `padding-right`
### Syntax
```css
h1{
    padding: 20px;
}
```
### Padding Shorthand Property
`padding: 25px 30px 40px 50px;`
* 25px is for top-padding
* 30px is for right-padding
* 40px is for bottom-padding
* 50px is for left-padding
#### HTML file
```html
<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" href="style.css">
</head>
<body>
<div class="box">
    <div class="frame"></div>
</div>
</body>
</html>
```
#### Example of padding property for Individual sides 
![Screenshot 2021-11-08 at 10.50.34 AM.png](https://www.dropbox.com/s/attv3ov3bgdctg6/Screenshot%202021-11-08%20at%2010.50.34%20AM.png?dl=0&raw=1)
```css
.box{
  height: 500px;
  width: 500px;
  background-color: black;
  padding-left: 200px;
  padding-top: 200px;
  padding-bottom: 20px;
  padding-right: 600px;
  margin: auto;
}
body{
  background-color: aqua;
}
.frame{
  height: 500px;
  width: 500px;
  background-color: brown;
}
```
#### Example of padding shorthand property
![Screenshot 2021-11-08 at 10.50.34 AM.png](https://www.dropbox.com/s/attv3ov3bgdctg6/Screenshot%202021-11-08%20at%2010.50.34%20AM.png?dl=0&raw=1)
```css
.box{
  height: 500px;
  width: 500px;
  background-color: black;
  padding: 200px 600px 20px 200px;
  margin: auto;
}
body{
  background-color: aqua;
}
.frame{
  height: 500px;
  width: 500px;
  background-color: brown;
  padding: auto;
}
```
#### Example for applying equal padding to all sides
![Screenshot 2021-11-09 at 12.29.05 AM.png](https://www.dropbox.com/s/dp86ykjcpbf2e01/Screenshot%202021-11-09%20at%2012.29.05%20AM.png?dl=0&raw=1)
```css
.box{
  height: 500px;
  width: 500px;
  background-color: black;
  padding: 100px;
  margin: auto;
}
body{
  background-color: aqua;
}
.frame{
  height: 500px;
  width: 500px;
  background-color: brown;
  padding: auto;
}
```
### References
* [W3Schools](https://www.w3schools.com/css/css_padding.asp)
* [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/CSS/padding)