## BORDER RADIUS


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