# BOX MODEL IN CSS:
By definition, each element in CSS is bound to have a box consisting of three major parameters. The box in turn helps one 
decide the layout and spacing in the website.Moreover those tiny 
perfections that complete up your website are nothing but a reflection of this box model.

### THE FOUR MAJOR ASPECTS:  
1. CONTENT:
It is the main entity which is to be enclosed within these concentric boxes. Example: Any tag element, text ,image etc.This can be adjusted by width/height in CSS.

2. PADDING:
A property by which the element is provided a space around it, within the specified boundaries. It helps in giving a distinguished look to an object.

3. BORDER:
A property by which the user specifies and highlight the boundary of an object in the webpage. It helps an object appear more prominent and defined.

4. MARGIN:
A property by which the user adds up space outside the borders, to distingusih one object from another on a web page.

### THE BLOCK DIAGRAM:   
The block diagram shown as follows , highlights the different sections into which an entity is subdivided.      

![image](https://user-images.githubusercontent.com/77229404/140058998-66e64981-6773-4215-82d6-e446a07fa4cd.png)

Now lets understand the box model via an example:
 ```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>BOX MODEL</title>
    <style>
      .text{
         width:400px;
         height:200px;
         padding: 25px;
         border: 25px black solid;
         margin: 25px;
      }
    </style>
</head>
<body>
    <p class= "text">
        Lorem ipsum dolor sit amet consectetur adipisicing elit. Accusamus impedit numquam corrupti iure, minus consequuntur voluptatibus quos laboriosam, adipisci tempora eos molestiae, consequatur in vel illo. Eaque quaerat odio repudiandae veritatis laudantium repellat deleniti exercitationem tempore consequatur quae beatae, ipsa iste aspernatur sint obcaecati officiis impedit! Aperiam libero deserunt ratione?
    </p>
</body>
</html>
```
### THE OUTPUT: 
The webpage would display following results:      
![image](https://user-images.githubusercontent.com/77229404/140059134-786cc5bf-4a9d-407f-bdf5-b9a3f574ced7.png)    

Here we observe that the content has been enclosed within a black border of 25 pixels.
 
### THE BIFIRCATION:    
For depiction of margin and padding we subdivide the given entity , via box method:     

![image](https://user-images.githubusercontent.com/77229404/140059207-32f84ca7-99c2-4495-bd2c-436f4f6dbc72.png)    

We will see that four rectangular boxes are placed around the content.   
- Blue box is used for placing the content.(400 x 200 px)  
- Green box is used to define padding around the text.(25px)  
- Brown box is used to define border of the text.(25 px)  
- Pink is used to define the margin outside the borders.(25px)  

Further , We can also calculate the total width of the content as follows:   
- TOTAL WIDTH=  GIVEN WIDTH + 2 X given padding  + 2 X given border +2 X given margin.   
- TOTAL HEIGHT= GIVEN HEIGHT + 2 X given padding  + 2 X given border +2 X given margin.    
#### Example:      
- TOTAL WIDTH= 400+50+50+50=550   
- TOTAL HEIGHT= 200+50+50+50=350  

### REFERENCES:
- [GEEKS FOR GEEKS](https://www.geeksforgeeks.org/css-box-model/)       
- [w3school](https://www.w3schools.com/css/css_boxmodel.asp)     


