<p align="center">
<img src="./Image_Folder/CSS.png">
</p>
<p>&nbsp;</p>

# What is CSS?

CSS stands for Cascading Style Sheets and it is used to apply styles like adding colors to font, setting the height and width of different elements, etc. to web pages.
<p>&nbsp;</p>

## **How CSS can be added to HTML?**

There are 3 ways which we can use to add CSS to web pages:=
- Inline - In inline styling the ```style attribute``` is added inside the ```HTML elements```.
- Internal - In internal CSS the ```style element``` is added in the ```<head> section```.
- External -In external CSS an external ```CSS file is linked``` with HTML file using the ```link element```.

<p>&nbsp;</p>

# Inline Styling 

In inline styling, a particular HTML element is styled uniquely.
 As we discussed earlier in inline styling the style attribute is added inside the HTML element. So let us understand this by using a simple example:=

```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inline Style </title>

</head>
<body>

    <h1>GirlScript Winter Of Contribution</h1>
    
</body>
</html>
```
In the above code we have an HTML file, inside this HTML file we have a heading. We have not applied any styling in this code, so in the browser it will look like this:=
<p>
<img src="./Image_Folder/Inline_Styling.png">
</p>

<p>&nbsp;</p>

Now using the style attribute we will change the font color as well as the background color of the heading.

```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inline Style </title>

</head>
<body>

    <h1 style="color:rgb(232, 247, 248); background-color:rgb(149, 99, 182)">GirlScript Winter Of Contribution</h1>
    
</body>
</html>

```
Here the style attribute is used inside the ```<h1>``` element and we have added a font color and a background color to our heading. Now our web page will look like this:=
<p>
<img src="./Image_Folder/Inline_Styling2.png">
</p>

In a similar way we can use other CSS properties like height, width, position, etc.
<p>&nbsp;</p>

## Advantages of Using Inline CSS
- The inline CSS overrides the external CSS.
- Inline CSS has a faster load time as compared to external style sheets.
<p>&nbsp;</p>

## Disadvantages of using Inline CSS
- It makes the HTML structure messy.
- The styles can not be reused anywhere else because each element will styled uniquely.
  
<p>&nbsp;</p>

# Internal Styling 
Placing the style element in the head section is what we call internal styling.
Example:=

```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inline Style </title>

</head>
<body>

    <p>GirlScript Winter of code is a three-months-long Open-Source 
        program organized by girlscript foundation </p>
  
</body>
</html>
```
In this code we have taken a ```<p>``` element and we have not added any styling yet so it will look like this:=
<p>
<img src="./Image_Folder/Internal_Styling.png">
</p>
<p>&nbsp;</p>

Now we will use internal styling to change the appearance of this paragraph.

```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Internal Styling </title>
    <style>
        body{
            background-color: black;
        }
        p{
            font-size:30px;
            color:orangered;
        }
    </style>
</head>
<body>
   <p>GirlScript Winter of contribution is a three-months-long Open-Source 
        program organized by girlscript foundation </p> 
</body>
</html>
```
<p>&nbsp;</p>

Here we are using the ```style element``` in the head section. We can apply different styles to the elements by using the name of the element with curly braces. The appearence of the web page after applying the styles will be:=

<p>
<img src="./Image_Folder/Internal_Styling2.png">
</p>
The color and size of the font and background color of the body are changed.
<p>&nbsp;</p>

## Advantages of using Internal CSS
- We can use classes and ID's in internal style sheets.
- They can override the external CSS.
  <p>&nbsp;</p>

## Disadvantages of using Internal CSS
- Internal Style Sheets will only affect the page they are on.
- They will increase the page load time.
<p>&nbsp;</p>

# External CSS
In external CSS an external CSS file is linked with the HTML file using the ```<link>``` element. The extension of the external file is .css. Let us understand the working by using this example:=

```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
   
    <title>External CSS</title>
</head>
<body>
    <div class="container">
       <h2 class="content"> GirlScript Winter of Contribution </h2>
       <p class="content">Documentation on Cascading Style Sheets</p>
    </div>
</body>
</html>
```

Here we have created a heading and a paragraph element with same class, but we have not applied any styling on them.
<p>
<img src="./Image_Folder/External_Styling.png">
</p>
<p>&nbsp;</p>

Now we will link our stylesheet using the ```<link>``` element. The value of the href attribute will show the location of CSS file in our system. We will add the styles in the style.css file in the following way:=

HTML file
```
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="./Style.css">
    <title>External CSS</title>
</head>
<body>
    <div class="container">
       <h2 class="content"> GirlScript Winter of Contribution </h2>
       <p class="content">Documentation on Cascading Style Sheets</p>
    </div>
</body>
</html>
```
This HTML file is linked with style.css. All the styles that are applied to the elements are present in the style.css file.  

Style.css
```
.container{
  border:8px;  
   border-color: black;
   border-style:solid;
   background-color: rgb(248, 84, 25);
   margin:50px;
}
.content{
    text-align: center;
    font-style: oblique;
    font-size: 30px;
    color:white;
}
h2{
    margin-bottom: 10px;
}
p{
    margin-top:5px;
}
```
In the browser the web page will look like this:=
<p>
<img src="./Image_Folder/External_Styling2.png">
</p>
<p>&nbsp;</p>

## Advantages of External CSS
- The html code will look cleaner because the CSS code will be present in a separate file.
- Classes and ID's can be used if we are using external CSS. Using classes and ID's we can apply the same style to multiple elements.

## Disadvanatges of External CSS
- For small style definitions, using external CSS is not practical.
- Linking to multiple CSS files will increase the download time. 

### **Reference:**
- <a href="https://www.w3schools.com/default.asp">w3schools</a>
