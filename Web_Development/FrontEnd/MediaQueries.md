# Media Queries

## What is Media Query?

 Media query is a CSS technique introduced in CSS3. It was a `@media` rule to include a block of CSS property only if a certain condition is true. Queries involving unknown media types are always false. It Alaways come at the end of every code of css. Screen here could be replaced by: all/print/speech.

**all:** suitable for all devices.

**print:** documents viewed on a screen in print preview mode. 

**speech:** intended for speech synthesizers.

## How to use Media Query?

### Syntax
```html
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<meta http-equiv="X-UA-Compatible" content="IE=edge">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<style>
/* 
    DEVICE: Desktop
    SCREEN: 1281px to higher resolution desktops  

@media(min-width:1281px){
    //CSS here
}
*/

/* 
    DEVICE: Laptops,Desktops
    SCREEN: Between 1025px to 1280px

@media(min-width:1025px) and (max-width:1280px){
    //CSS here
}
*/

/* 
    DEVICE: Tablets and Ipads (Portrait)
    SCREEN: Between 768px to 1024px

@media(min-width:768px) and (max-width:1024px){
    //CSS here
}
*/

/* 
    DEVICE: Tablets and Ipads 
    SCREEN: Between 768px to 1024px

@media(min-width:768px) and (max-width:1024px) and (orientation : landscape )  {
    //CSS here
}
*/

/* 
    DEVICE: Low Resolution Tablets, Mobiles 
    SCREEN: Between 481px to 767px

@media(min-width:481px) and (max-width:767px){
    //CSS here
}
*/
</style>
<title>Media Queries</title>
</head>
<body>
</body>
</html>
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
@media(min-width:481px) and (max-width:767px){
   h1{
       color: darkcyan;
       font-size: 50px;
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
<h1>This is a Heading</h1>
<p>This is a paragraph.</p>
</body>
</html>
```

### Output
**On Desktop and Laptop Devices** ![onDesktop&Laptops](https://mediaquery--samimunir2002.repl.co/onDesktops&Laptops.png)

**On Mobile Devices** ![onMobiles](https://mediaquery--samimunir2002.repl.co/onMobiles.png)
