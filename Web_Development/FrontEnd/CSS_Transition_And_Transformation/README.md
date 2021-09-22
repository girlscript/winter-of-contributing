# Transformation And Transitions:<r>
  
## CSS Transforms:<br>
By modifying the coordinate space, CSS transforms change the shape and position of the affected content without disrupting the normal document flow.
CSS supports 2D and 3D transformations.

## 2D Transformations: <br>
Using the `Transform` CSS property you can `rotate`, `scale`, `skew`, or `translate` an element. 
  
   ![Transforms](https://user-images.githubusercontent.com/70155541/134402288-3747cba1-de77-41b2-962d-9b7eb24a9d42.png)<br>
 Image Source: https://tipsmake.com/3d-transform-in-css <br>
  

With the CSS transform property you can use the following 2D transformation methods:

* translate()
* rotate()
* scaleX()
* scaleY()
* scale()
* skewX()
* skewY()
* skew()
* matrix()

### translate():<br>
  Moves an element from its current Position.
  
  ```css
  .div {
  transform: translate(20px, 10px);
}
```
  
  Moves 20px right and 10px down.
  * One value will move the element to the right (negative values to the left). If a second value is provided, that second value will move it down (negative values up).

  ![image](https://user-images.githubusercontent.com/70155541/134403974-972ffd09-d771-49a1-b4b5-aa48b1214850.png)

  You can combine CSS translate with animation to see the actual effect.
  
 ```css
  div {
    border: 1px solid black;
    background-color: red;
    width:50px;
    height:50px;
     }
    div:hover{
         transform: translate(50px);
       }
```

  
HTML code:
  ```html
  <div> Hello</div>
  
  ```
  
  ![translate1](https://user-images.githubusercontent.com/70155541/134408004-9fef5794-8dfa-43d5-b020-7f25d941dcda.gif)

  ## rotate()
  
  The `rotate()` method rotates an element clockwise or counter-clockwise according to a given degree.
  
  ```css
  .div {
  transform: rotate(25deg);
}
  ```
Rotates div element by 25 degrees clockwise. Neg will rotate it counter clock wise.
  
  ![rotate](https://user-images.githubusercontent.com/70155541/134408716-ff72d1d0-889f-4804-91fd-357ee2c5f125.png)

  
  ## Scale()
  
  The scale() method increases or decreases the size of an element. This also applies to the font-size, padding, height, and width of an element, too. It’s also a a shorthand function for the scaleX and scaleY functions.
  
  ```css
  .div {
  transform: scale(3, 0.5);
}
  ```
 increases the <div> element to be three times of its original width, and half its original height.
  
  We can similarly use it with hover to see the actual effect:
  
  ![scale1](https://user-images.githubusercontent.com/70155541/134409913-f3178199-f16c-4a1e-858e-d56eaec58a38.gif)

  You can be more specific without using the shorthand function by using scaleX() and scaleY()
  
  ## scaleX()
  The scaleX() method increases or decreases the width of an element.
  
  ```css
  div {
  transform: scaleX(2);
}
  ```
The above code increases width of div element by 2 times.

  ## scaleY()
  The scaleY() method increases or decreases the height of an element.

```css
  div {
  transform: scaleY(0.5);
}
  ```
  This decreases height of div element by half.
  
  ## skew()
  The skew() method skews an element along the X and Y-axis by the given angles. It is a shorthand that combines skewX() and skewY by accepting both values.
  
  ```css
  div {
  transform: skew(50deg, 20deg);
}
  ```
Thise skews the <div> element 50 degrees along the X-axis, and 20 degrees along the Y-axis:

If the second parameter is not specified, it has a zero value.
  
  ```css
  div {
  transform: skew(180deg);
}
```
  This skews element 180 degree along th X-axis
 
  ## skewX()
  The skewX() method skews an element along the X-axis by the given angle.

```css
  div {
  transform: skewX(45deg);
}
  ```

## skewY()
  The skewY() method skews an element along the Y-axis by the given angle.

```css
  div {
  transform: skewY(20deg);
}
  ```
