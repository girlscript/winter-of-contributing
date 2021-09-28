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
    ![Radial-Basic](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Radial-basic.png)
 
  * ### Radial Color stops and their positioning
    As compared to linear gradients, the `color stop` has the same functionality in radial gradients and they could be specified by an absolute         length or a percentage
    
    ```css
    .radial-pos
    {
      background: radial-gradient(blue 10px, yellow 30%, #1e90ff 50%);
    }
    ```
    ![Radial-pos](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Radial-pos.png)
    
    > `Note :` here `10px`,`30%` and `50%` are `color stop`
    
  * ### Center of the gradient and its positioning  
    The center of the gradient can be positioned via keyterms, absolulte lengths or percentages
    
    ```css
    .radial-center
    {
      background: radial-gradient(at 10% 60%, blue 10px, yellow 30%, #1e90ff 50%);
    }
    ```
    ![Radial-center](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Radial-center.png)
    
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
    ![Conic-Basic](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Conic-Basic.png)
    
  * ### Positioning of the center 
    Positioning the center of the conic gradient follows the exact procedure as positioning the center of radial gradient

    ```css
    .conic-center
    {
      background: conic-gradient(at 0% 30%, blue 10%, yellow 30%, #1e90ff 50%);
    }
    ```
    ![Conic-center](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Conic-center.png)
    
  * ### Conic gradient using Angle
    ```css
    .conic-angle
    {
      background: conic-gradient(from 45deg, blue, red 50%, yellow 85%, green);
    }
    ```
    ![Conic-Angle](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/Conic-Angle.png)
    
    > `Note :` The keyword `from` mentions the starting angle of the conic gradient

## CSS Box Shadow
Box Shadow in CSS is used to put a shadow effect to one or more elements by specifying its `x-offset` and `y-offset`

 * ### Syntax of a basic box-shadow
   ```css
   .box-shadow-basic
   {
     box-shadow: 10px 11px black;
   }
   ```
   ![Box-Basic](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/BoxShadow-basic.png)
  
   > `Note :` Here `10px` is the `x-offset`, `11px` is the `y-offset` and `black` is the colour of the shadow. Also know that a negative value of        each of the offsets would result in the shadow in being produced in the opposite direction in respect to their positive offset values 

 * ### Syntax of box-shadow with `blur-radius`
   ```css
   .box-shadow-blur
   {
     box-shadow: 10px 11px 5px black;
   }
   ```
   ![Box-Blur](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/BoxShadow-blur.png)
  
   > `Note :` Here `5px` refers to the `blur-radius` value, i.e the extent till which the shadow would be blurred. The higher the value, bigger is       the blur
 
 * ### Syntax of box-shadow with `blur-radius` and `spread-radius`
   ```css
   .box-shadow-all
   {
     box-shadow: 10px 11px 5px 3px black;
   }
   ```
   ![Box-All](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/BoxShadow-all.png)
  
   > `Note :` Here `3px` refers to the `spread-radius` value, i.e the extent till which the shadow would spread. The higher the value, bigger is is       spread

  **FINAL SYNTAX** -  box-shadow: `x-offset` `y-offset` `blur-radius` `spread-radius` `color` ;

 * ### Some other properties of box-shadow
   * `inset` : changes a shadow from an outer to inner shadow
   * `initial` : default values are set
   * `inherit` : helps inherit the properties of its parent element

## CSS Text Shadow
Text Shadow in CSS is used to apply shadow to texts

 * ### Syntax of a basic text-shadow
   ```css
   .text-shadow-basic
   {
    text-shadow: 2px 1px rgb(15, 3, 70);
   }
   ```
   ![Text-basic](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/TextShadow-basic.png)
   
   > `Note :` Here similar to box-shadow, `2px` and `1px` are `x-offset` and `y-offset` respectively followed by colour
 
 * ### Syntax of text-shadow with `blur-radius`
   ```css
   .text-shadow-blur
   {
    text-shadow: 2px 3px 4px rgb(15, 3, 70);
   }
   ```
   ![Text-blur](https://raw.githubusercontent.com/srijanishere/winter-of-contributing/Frontend_Web_Development_HTML_CSS_JS/Web_Development/FrontEnd/CSS%20Gradients%2C%20Box%20Shadow%2C%20Text%20Shadow/Assets/TextShadow-blur.png)
   
   > `Note :` Here `4px` is the `blur-radius` value i.e the extent till which the shadow would be blurred. The higher is its value, bigger the blur       of the text-shadow
 
 **FINAL SYNTAX** : text-shadow : `x-offset` `y-offset` `blur-radius` `color` ;
 
 **Text shadow also has the properties `inset`, `initial` and `inherit` and have the same funaction as they do for box-shadow**
 
 ### Sources
  * https://developer.mozilla.org/en-US/docs/Learn
  * https://www.w3schools.com/cssref/default.asp
