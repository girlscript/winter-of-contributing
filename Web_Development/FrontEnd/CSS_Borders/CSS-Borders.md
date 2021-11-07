## CSS Borders
The CSS border shows that how the border of element-box will look like. 
This is a shorthand feature that allows one to highlight or make his text look more prominent than other elements 
in the webpage. If the borders are removed , the colour applied in CSS would represent the colour of the text.

**Properties of CSS- borders:** 
- Border-style         
- Border-color          
- Border-width    
### Border-style
This properties are used to set the style of the border on the web page.
You can express the style of the border in the following ways:      
none, hidden, dotted, dashed, solid, double, groove, ridge, inset, outset.

```html
<html>
  <head> </head>
  <body>
    <p style= "border-style: none">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.  
    </p>

    <p style= "border-style: solid">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: dashed">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: double">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: groove">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: ridge">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: inset">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: outset">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: hidden">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>
  </body>
</html>
```
The above html snippet would look something like this:      
![image](https://user-images.githubusercontent.com/63182105/140656999-940d75df-25f7-42aa-95f4-2d49550be078.png)

### Border-width   
This properties are used to define the width of the border on the web page.    
The border width can be assigned in two ways:
- Either by specifying the parameters like cm, em, rem and px.
- Or using any of the three constants thin, medium or thick. Here, we assign 4 values for 4 sides of the box.
```html
<html>
  <head> </head>
  <body>
    <p style= "border-style: solid ; border-width: 0.5em">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: solid ; border-width: 0.4rem">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: solid ; border-width: 5px">
        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>
    
    <p style= "border-style: solid ; border-width: 2ch">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: solid ; border-width: 1.5ex">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>
  </body>
</html>
```
The above html snippet would look something like this:  
![image](https://user-images.githubusercontent.com/63182105/140657110-36b801d4-1cc2-4c9e-8dc8-f1fab19d0ea3.png)


### Border-color   
This property is used to affect the border-color. Border-color assignes four values to the four sides of the rectangular box, formed outside element or text.
- If one value is defined, it is taken as default for other three sides. 
- In a similar fashion, if two values are defined , the first color is assigned to the top and bottom sides of the box. The second color is assigned to left and right sides of the box.
- If three colors are defined , then one to the top side , second for left and right sides and rest for bottom.
- If all four defined then , the colors are assigned in clockwise fashion.
You can use any of the given format: name, HEX or RGB.

```html
<html>
  <head> </head>
  <body>
    <p style= "border-style: solid ; border-width: 0.5em; border-color:#98bf21">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: solid ; border-width: 10px; border-color:rgb(rgb(238, 40, 40), rgb(203, 241, 203), rgb(132, 132, 236))">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: solid ; border-width: 0.5rem; border-color:blueviolet">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>

    <p style= "border-style: outset ; border-width: 5px; border-color:goldenrod fuchsia rgb(136, 74, 74)">
      Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras ut consectetur neque, eu interdum velit.
    </p>
  </body>
</html>
```
The above html snippet would look something like this:   
![image](https://user-images.githubusercontent.com/63182105/140657575-148560d5-8455-483a-9bb2-86c034b11b8f.png)


***References***  
https://www.tutorialspoint.com/css/css_borders.htm    
https://www.javatpoint.com/css-border     
https://www.w3schools.com/css/css_border.asp

