# What is transforms in CSS?
CSS Transform help us to move, rotate , skew and much more with the given object.

**Important Point:-** Only elements positioned by the box model can be transformed. As a rule of thumb, an element is positioned by the box model if it has display: block.

### CSS Transform can be in 2D and 3D :-

#### Lets have a look to 2D transform 

In this we can have functions like translate, rotate, scale, skew etc.

Initial position or shape of the box:-
![image](https://user-images.githubusercontent.com/76097113/135742346-ecb1b4b7-3d82-4a29-8217-3bb618f3cc8d.png)


(1) **rotate**- As name suggested it is used to rotate a object.
Syntax -  transform: rotate(degree) {Degree is the angel at which you want to rotate the object}

For example - Let us take a box with a class box1 
```CSS
 .box1{
  transform: rotate(34deg);
  }
 ```
 ![Screenshot 2021-10-03 113249](https://user-images.githubusercontent.com/76097113/135742112-c65b1f6e-a679-462e-bcba-e00ca529df96.jpg)

 Result - Box will rotate at an angle of 34 degree
 
 (2) **scale**- It is use to scale a element or object means to increase aur decrease size of that. 
Syntax -  transform: scale(x,y);
As x direction is horizontal so it is used for change in width and y is verticall so it is used for change in heigth.
For example - Let us take a box with a class box1 
```CSS
 .box1{
  transform: scale(1,2);
  }
 ```
 ![image](https://user-images.githubusercontent.com/76097113/135742144-39459875-dea5-46af-b2be-217ada7e800b.png)

 Result - Box size will be increased 
 
 If we want change only in width(x) or heigth(y) that's also possible by -
 ```CSS
 .box1{
  transform: scaleX(2);
  }
 ```
 ![image](https://user-images.githubusercontent.com/76097113/135742170-2bd0ac84-ae7d-4884-a2d2-28f6d64e8d85.png)

 Result - Box width will be changed 
 ```CSS
 .box1{
  transform: scaleY(2);
  }
 ```
 ![image](https://user-images.githubusercontent.com/76097113/135742205-2e6e2ace-bebe-4985-90f2-c97b653193c6.png)

 Result - Box height will be changed 
 
 (3) **skew**- It align the object or skew the object at the given angle. Its not same as rotate in this we give the info that from x axis and from y axis what should be the alignment of the object.
Syntax -  transform: skew(degree , degree) {Degree is the angel at which you want to rotate the object}

For example - Let us take a box with a class box1 
```CSS
 .box1{
  transform: skew(23deg , 31deg);
  }
 ```
 ![image](https://user-images.githubusercontent.com/76097113/135742227-2474af00-4807-4126-89f7-d74ad553fdd4.png)

 Result - Box will rotate at an angle of 23 degree wrt x-axis and 31 degree wrt y-axis.
 
 **Note** - We can also give skew in x or y same syntax as we use in scale i.e skewX() and skewY().
 
 (4) **translate**- Translate means to move a object form its present position.
Syntax -  transform:  translate(x, y);
For example - Let us take a box with a class box1 
```CSS
 .box1{
  transform: translate(10px, 10px);
  }
 ```
 ![image](https://user-images.githubusercontent.com/76097113/135742241-423fa679-6c1c-4d19-b884-2cb0c973c516.png)

 Result - Box will be shifted 10px form both the axis.
 
 #### Now lets have a look to 3D transform
 --> 3D means 3 dimensional means we have 3 axis named as x , y and z.
 
 3D tranform is same as 2D transform the only difference is at the place of 2 variables value we will provide 3 .
 
 Ex = translate(x,y,z) , scaleX(), scaleY(), scaleZ()
 
 
# What is transition in CSS?
CSS transiton helps us to change the CSS property of a element smoothly with a desired time duration.

1. transition-property <br>
2. transition-duration <br>
3. transition-timing-function <br>
4. transition-delay <br>
5. transition (A shorthand property for setting the four transition properties into a single property)

**transition-property** - As name suggested use to define the property in which we want transition

**transition-duration** - Use to set the duration of that effect

**transition-delay** - Use to set the time delay means after what time transition should be started.

**transition-timing-function** - Specifies the speed curve of the transition effect

Ex - Let us take a box in a div tag
```CSS
div {
  transition-property: height;
  transition-duration: 2s;
  transition-timing-function: linear;
  transition-delay: 1s;
}
```
                                                                  or
               
```CSS
div {
  transition: heigth 2s linear 1s;
}
```
Above code has defined the property and time for the transition now what should happen this is yet to be defined so,

When we hover on the object heigth should change 

let us assume the height is 50px

```CSS
div:hover {
height: 250px;
}
```

https://user-images.githubusercontent.com/76097113/135742692-a39e7afd-209f-4b56-b988-62d11fff6531.mp4



Result - When we hover on the object after 1 sec box heigth will start to increase and in 2 second it will reach upto 250px
