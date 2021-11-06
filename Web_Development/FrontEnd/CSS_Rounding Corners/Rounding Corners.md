## **BORDER  RADIUS**

### WHAT IS BORDER RADIUS

Border Radius is an attribute that rounds up the corner of the border around an element. You can also give border radius with background image or border image as well.


![Border Around An Element](https://codedocu.com/Daten/Images/2/Image_1736_1.jpg) 

### SYNTAX:

**Inside your CSS stylesheet ->**
```div{border-radius: Value(in Length,%,etc); }```

#### Various Types:
* Border-radius with 1 value:
 
  ```div{border-radius: 10%; }```

Here, the radius of top left , top right , bottom left , and bottom right borders are 10% each.


* Border-radius with 2 values:
 
  ```div{border-radius: 10% 15%; }```

In this case, the radius of the top left and bottom right are 10% each. Similarly, the radius of the top right and bottom left are 15% each.


* Border-radius has 3 values:
 
  ```div{border-radius: 10% 15% 10px; }```

  The radius of the top left is 10%, the radius of top right and bottom left are set to 15% each. Similarly, the radius of the bottom right will be 10px.


* Border-radius has 4 values:
  
  ```div{border-radius: 10% 15% 10px initial; }```

  radius of top left is 10%, top right is 15%, bottom right will be 10px, and bottom left is set to initial.

You can give the value of the radius for the border in terms of  either:

* Length
* % (Mostly Used)
* initial
* inherit
* unset

### EXAMPLES:

[Code Pen for border-radius](https://codepen.io/abhi-2024/pen/wvqeOJv)

#### Code Entered in the example:

* ##### HTML:
```html
<div class="borderRadius1">Border radius of 20%</div>
<br>
<div class="borderRadius2">Border radius of 40%</div>
<br>
<div class="borderRadius3">Border radius of 50%</div>
```
* ##### CSS:
```css
div{
  text-align: center;
  width: 20%;
  margin-left: 50%;
}
.borderRadius1{
  border: 1px solid red;
  border-radius: 20%;
}
.borderRadius2{
  border: 2px solid blue;
  border-radius: 40%;
}
.borderRadius3{
  border: 3px solid green;
  border-radius: 50%;
}
```

### NOTE:

* If you give border radius as 50% for all 4 borders, then it becomes a circle.
* ```border-radius:initial``` means that ```border-top-left-radius: 0, border-top-right-radius:0 ,border-bottom-right-radius: 0, and border-bottom-left-radius: 0```.
* If you don’t want to round any particular corner then you can skip it or you can set 0 as value for it.


<hr>


## **ROUNDING IMAGES**

With the attribute ``` border-radius: ; ``` we can also round the corners of the images to make it fit into a desired border like in a circle or oval shape, etc. It is similar to when we rounded the corners of a `div` body.

### SYNTAX:

* Firstly put your image in a div tag.
* Then, in your CSS stylesheet:
   
   ```CSS
   div{
     border-radius: Value (in %,length,etc);
     background-image: url('image link or path');
   }

   ```

### PROPER WAY TO ROUND UP AN IMAGE:
* CODE:
```css
div{
    width: 500px;
    height: 500px;
    border: 2px solid #ccc;
    border-radius: 50%; /*Rounds the image into a circle*/
    background-image: url('https://res.cloudinary.com/twenty20/private_images/t_standard-fit/photosp/8cc06a0a-966d-4a08-87ac-5752020312a1/stock-photo-animal-pets-cat-cute-kitten-pet-beautiful-kitty-8cc06a0a-966d-4a08-87ac-5752020312a1.jpg');
     background-position: center center;  /* Positions the image in center */
}
```
* OUTCOME:
   Original Image:

    ![An image of a cat](https://res.cloudinary.com/twenty20/private_images/t_standard-fit/photosp/8cc06a0a-966d-4a08-87ac-5752020312a1/stock-photo-animal-pets-cat-cute-kitten-pet-beautiful-kitty-8cc06a0a-966d-4a08-87ac-5752020312a1.jpg)
    
    Result:

   ![An image of a cat (Rouned)](2021-11-05-20-43-03.png)


<hr>


## **INDIVIDUALLY ROUNDED CORNERS**

### WHAT IS INDIVIDUALLY ROUNED CORNERS:

With CSS you can easily configure the border individually. It means that you can round up a single corner of an element. The syntax is same as the other ones , the only difference is the position we are selecting here. 

### IMPORTANT NOTE:

To select corners you can use :
- top-left
- top-right
- bottom-left
- bottom-right

![Border Preview](https://mgearon.com/wp-content/uploads/2020/07/css-border-radius.png)

### SYNTAX:
```css
tagName(e.g: div,span,etc){
    border-position(in either top-left or top-right or bottom-left or bottom-right)-radius: value(in Length,%,etc);
}
```
#### SYNTAX EXAMPLE:
```css
div{
    border-top-left-radius: 50%;
}
```
```css
div{
    border-top-right-radius: 40%;
}
```
```css
div{
    border-bottom-left-radius: 10px;
}
```
```css
div{
    border-bottom-right-radius: 40vh;
}
```