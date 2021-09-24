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
  ![Basic gradient](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Basic%20Linear%20Gradient.png)
  
  * ### Gradient towards a direction
   Now let's try and make the same gradient `to left` direction
   
  ```css
  .gradient-direction
  {
    background: linear-gradient(to left,green,yellow);
  }
  ```
  ![Gradient-to left](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Gradient-to%20left.png)

  * ### Diagonal Gradient
  ```css
  .gradient-diagonal
  {
    background: linear-gradient(to bottom right,green,yellow);
  }
  ```
  ![Gradient-to left]()
  
  * ### Gradient using Angle
  ```css
  .gradient-angle
  {
    background: linear-gradient(60deg,green,yellow);
  }
  ```
  ![Gradient-angle]()
  
  `Note`: When creating gradient with angles, **0deg** creates a vertical gradient which runs from _bottom to top_ and **90deg** creates a horizontal gradient which runs from _left to right_. Therefore **positive** angles run in the _clockwise_ direction, whereas **negative** angles run in he _anti-clockwise_ direction.
  
