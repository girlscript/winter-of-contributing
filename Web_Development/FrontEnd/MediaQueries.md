# Media Queries

## What is Media Query?

We can create a website for users using different devices (desktops, laptops, tablets and smartphones) by writing code once with the help of **media queries**. Different devices has different heights and widths which are known as **breakpoints**. When media query at certain breakpoint becomes true, the target element receives the associated CSS. `@media` queries always come at the end of CSS code.  

### Types of Media 

1. **all:** for all kinds of media.
2. **print:** for hardcopy (printout on paper).
3. **screen:** for all types of screen.
4. **speech:** for readout document loudly.

## How to use Media Query?

A media query is made up of two parts: media type and size. Media query could have more than one sizes. It is not required to use type for screens.

### Syntax
#### For Desktop and Bigger Screens 
```html
@media(min-width:1281px){
    //CSS here
}
```
#### For Laptop Screens
```html
@media(min-width:1025px) and (max-width:1280px){
    //CSS here
}
```
#### For Tablets Screens (Portrait)
```html
@media(min-width:768px) and (max-width:1024px){
    //CSS here
}
```
#### For Tablets Screens (Landscape)
```html
@media(min-width:768px) and (max-width:1024px) and (orientation : landscape )  {
    //CSS here
}
```
#### For  Mobile Screens 
```html
@media(min-width:481px) and (max-width:767px){
    //CSS here
}
```

## EXAMPLE OF MEDIA QUERIES
```html
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
 <meta http-equiv="X-UA-Compatible" content="IE=edge">
 <meta name="viewport" content="width=device-width, initial-scale=1.0">
<style>
h1{
    color: green;
    font-size: 40px;
}
p{
    font-size: 25px;
}
@media(min-width:320px) and (max-width:768px){
   h1{
       background-color:lightgray;
       color: blue;
       font-size: 48px;
   }
   p{
       color:lightblue;
       font-size: 20px;
   }
}
</style>
<title>Media Queries</title>
</head>
<body>
<h1>Hello World!</h1>
<p>How are you?</p>
</body>
</html>
```

### Output
#### On Desktop and Laptop Devices

![onDesktop&Laptops](https://mediaquery.samimunir2002.repl.co/bigScreen.png)

#### On Mobile Devices 

![onMobiles](https://mediaquery.samimunir2002.repl.co/smallScreens.png)
