# RESPONSIVENESS IN CSS

 As we all know webpages can be viewed on many devices like desktops, tablets, and phones. For web pages to look attractive and eye-catching on each device , responsiveness should be used . Without this our website may look interactive in some dimensions or on some devices like laptops but may look undesirable and unorganized in other devices like phones, tablets etc.

> We  use CSS and HTML to resize, hide, shrink, enlarge, or move the content to make it look good on any screen. 
## USING MEDIA QUERIES

It uses the @media rule to include a block of CSS properties only if a certain condition is true.

**Media queries can be used to change orientation the browser as shown in given example.**

1)@media screen and [media feature rules]

```html

<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<style>
body {
  background-color: lightgreen;
}
@media only screen and (orientation: landscape) {
  body {
    background-color: lightblue;
  }
}
</style>
</head>
<body>

<p>Resize the browser window. In landscape its background color is "lightblue", otherwise it is "lightgreen".</p>

</body>
</html>

```


**Here, whenever screen max width will be 600px and orientation is landscape , body text will appear in green color.**

In landscape its background color is "lightblue"
<img src="ss/ss1.jpg" width="70%">

In portrait its background color is "lightgreen"
<img src="ss/ss2.jpg" width="70%">







**Typical Device Breakpoints**
```css
/* Extra small devices (phones, 600px and down) */
@media only screen and (max-width: 600px) {...}
/* Small devices (portrait tablets and large phones, 600px and up) */
@media only screen and (min-width: 600px) {...}
/* Medium devices (landscape tablets, 768px and up) */
@media only screen and (min-width: 768px) {...}
/* Large devices (laptops/desktops, 992px and up) */
@media only screen and (min-width: 992px) {...}
/* Extra large devices (large laptops and desktops, 1200px and up) */
@media only screen and (min-width: 1200px) {...}
```
**Change Font Size With Media Queries**
```html
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
div.ele {
  background-color: blue;
  padding: 10px;
}
@media screen and (min-width: 350px) {
  div.ele {
    font-size: 20px;
    color:green;
  }
}
@media screen and (max-width: 350px) {
  div.ele {
    font-size: 40px;
  }
}
</style>
</head>
<body>
<h2>Font size change</h2>
<div class="ele">This will change the font</div>
<p>When the browser's width is 350px wide or less, set the font-size to 40px. When it is 351px or wider, set the font-size to 20px and change text color to green. </p>
</body>
</html>
```
**When the browser's width is 350px wide or less, font size is 40px.**
<img src="ss/ss3.jpg" width="70%">
**Now font size is 20px with change in color to green.**
<img src="ss/ss4.jpg" width="70%">
**Hide Elements With Media Queries**
```html
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
div.ele {
  background-color: rgb(162, 0, 255);
  padding: 20px;
}
@media screen and (max-width: 600px) {
  div.ele {
    display: none;
  }
}
</style>
</head>
<body>
<h2>element hiding</h2>
<div class="ele">This is to be hidden</div>
<p>When the browser's width is 600px wide or less, hide the element. Resize the browser window to see the effect.</p>
</body>
</html>
```
**Element block is displayed.**
<img src="ss/ss5.jpg" width="70%">
**Element block is hidden.**
<img src="ss/ss6.jpg" width="70%">
**Refrences**
https://www.w3schools.com/css/css_rwd_intro.asp