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
  
  > `Note:` Here  `to right`, `to top`, `to bottom` can also be used.

  * ### Diagonal Gradient
  ```css
  .gradient-diagonal
  {
    background: linear-gradient(to bottom right,green,yellow);
  }
  ```
  ![Gradient-diagonal](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Gradient-diagonal.png)
  
  * ### Gradient using Angle
  ```css
  .gradient-angle
  {
    background: linear-gradient(60deg,green,yellow);
  }
  ```
 
  ![Gradient-angle](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Gradient-angle.png)
  
  > `Note`: When creating gradient with angles, **0deg** creates a vertical gradient which runs from _bottom to top_ and **90deg** creates a            horizontal gradient which runs from _left to right_. Therefore **positive** angles run in the _clockwise_ direction, whereas **negative**          angles run in he _anti-clockwise_ direction.
  
  * ### Gradient using more than two colours, and at an angle
    ```css
    .gradient-mix
    {
      background: linear-gradient(50deg, yellow, rgb(68, 209, 68), green);
    }
    ```
    ![Gradient-mixed](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Gradient-mixed.png)

    > Can we make solid colour-bands with this? YES!
    ```css
    .gradient-band
    {
      background: linear-gradient(to left,
       purple 25%, black 25% 50%, red 50% 75%, yellow 75% 100% );
    }
    ```
    ![Gradient color-band](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Gradient-band.png)

    > `Please notice` here each colour is followed by two % values like `red 50% 75%`. Here, 50% denotes the `color start` value and 75% denotes        the `color stop` value. Then, why does `purple 25%` have just one percentage value? Because here `color start` value is 0 and therefore, does      not need to written seperately.

* ## Radial Gradient
  This type of gradient is formed by radiating out from a central point, which(central point) can be modified by the user
  
  * ### Basic Radial Gradient
    ```css
    .radial-basic
    {
      background: radial-gradient(yellow, blue);
    }
    ```
    ![Radial-Basic]()
 
  * ### Radial Color stops and their positioning
    As compared to linear gradients, the `color stop` has the same functionality in radial gradients and they could be specified by an absolute         length or a percentage
    
    ```css
    .radial-pos
    {
      background: radial-gradient(blue 10px, yellow 30%, #1e90ff 50%);
    }
    ```
    ![Radial-pos]()
    
    > `Note :` here `10px`,`30%` and `50%` are `color stop`
    
  * ### Center of the gradient and its positioning  
    The center of the gradient can be positioned via keyterms, absolulte lengths or percentages
    
    ```css
    .radial-center
    {
      background: radial-gradient(at 10% 60%, blue 10px, yellow 30%, #1e90ff 50%);
    }
    ```
    ![Radial-center]()
    
    > `Note :` If only one value is specified for the positioning, then it is repeated, otherwise as here in the above code we can see two value.          Now, `10%` is **_position from left_** and `60%` is **_position from top_** and as you guessed, `10px`, `30%` and `50%` are the `color stop`        values

* ## Conic Gradient
  This helps create an effect of transition of colours rotating about a fixed point
  
  * ### Basic Conic Gradient
  
    ```css
    .conic-basic
    {
      background: conic-gradient(blue,yellow);
    }
    ```
    ![Conic-Basic]()
    
    >
