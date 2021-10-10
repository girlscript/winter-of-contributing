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
```css
@media(min-width:1281px){
    //CSS here
}
```
#### For Laptop Screens
```css
@media(min-width:1025px) and (max-width:1280px){
    //CSS here
}
```
#### For Tablets Screens (Portrait)
```css
@media(min-width:768px) and (max-width:1024px){
    //CSS here
}
```
#### For Tablets Screens (Landscape)
```css
@media(min-width:768px) and (max-width:1024px) and (orientation : landscape )  {
    //CSS here
}
```
#### For Mobile Screens 
```css
@media(min-width:481px) and (max-width:767px){
    //CSS here
}
```
### For print media type
```css
@media print{
   //CSS here
}
```
### For speech media type
```css
@media speech{
   //CSS here
}
```
### For all media type
```css
@media all{
   //CSS here
}
```

## EXAMPLE OF SCREEN TYPE MEDIA QUERY
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
<title>Media Query Type Screen</title>
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


## EXAMPLE OF PRINT TYPE MEDIA QUERY
```html
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<style>
h1{
   font-size: 48px;
   margin-left: 40%;
  }
p{
   font-size: 22px;
   padding: 10px;
 }
@media print {
 .container{
           text-transform: uppercase;
           text-align: center;
          }
 h1{
    font-weight: bolder;
    margin-left: 0;
   }
 p{
   padding: 5px;
  }
}
</style>
<title>Media Query Type Print</title>
</head>
<body>
<div class="continer">
<h1>Heading</h1>
<p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Natus nulla, aspernatur nemo sed libero sit excepturi?Magni 
aspernatur sapiente dolor voluptatem reprehenderit dolore amet. Dolor eligendi deserunt facilis maxime sed</p>
</div>    
</body>
</html>
```

**Reference Link:** https://developer.mozilla.org/en-US/docs/Web/CSS/@media
