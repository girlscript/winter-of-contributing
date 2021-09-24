# CSS Gradients, Box Shadow and Text Shadow

### What will this documentation teach?
* Various techniques of creating gradients in CSS
* Different ways of creating box and text shadows

## CSS Gradients
`Definition` : CSS Gradients are nothing but a special type of image(background) which are formed my progressive transition of two or more colours.

There are of three types of gradients : `linear`, `radial`, and `conic`.

Gradients can be used anywhere an  `<image>` can be used. Most common uses of gradients are as backgrounds to produce beautiful colour transition effects.

Let us start learning how to create various gradient effects :
* ## Linear Gradient
  It creates a progressive transition of colours in a linear manner.
  We can create the gradient towards the _right_, _left_, _bottom_, _diagonally_, or specifiy an _angle_.
  
  * ### Basic Linear gradient
  ```css
  .gradient
  {
    background: linear-gradient(green,yellow);
  }
  ```
  ![Basic gradient]()
  
  * ### Gradient towards a direction
   Now let's try and make the same gradient `to left` direction
   
  ```css
  .gradient
  {
    background: linear-gradient(to left,green,yellow);
  }
  ```
  ![Gradient-to left]()
