# Box_Sizing_CSS
This is my first contribution as Open Source (thanks to GWOC) and here I will be expalining in detail about the various CSS Box Sizing Types.  

Before we proceed any further first of all we need to know what a box model is.

## What is a box model? 

We can imagine a box model as a rectangular box that wraps around each HTML element. It basically comprises of the padding, margin border and content inside the element.
We all know that all elements on a webpage is represnted as rectangular box.
Below image represents a element with its various elements.

![image](https://user-images.githubusercontent.com/55577276/134489895-efbd21f8-1d41-4d92-bdc5-cdd47fc1bb67.png)

*Figure 1*

Let’s try understand what each of these properties signifies:

**Content:** This is the main part of the box where the content put by the user appears. 

**Padding:** This space is around the content inside an element (transparent).

**Border:** This  is self expalnatory. It usually goes around the padding and content.

**Margin:** This the space around the box (also tranparent).

You should remember that total space occupied by a any element (box) on the DOM is the combined space occupied by these four properties put together.

Size of figure 1  box is determined as described below: 

> **Total width of the box-model** = width assigned to the box + padding(right and left) + border(right and left) + margin(right and left)  
> 
> **Total height of the box-model** = height assigned to the box + padding(top and bottom) + border(top and bottom) + margin(top and bottom) 


### Need of using the box-sizing property?

![image](https://user-images.githubusercontent.com/55577276/134490961-fcef439d-4132-4185-be20-0b8949b8b199.png)

*Figure 2*

Now we need to understand Figure 2 better, so let’s consider an example: 
 
Suppose we have a random element int the dom that is assigned a width of 300px, the element will have the exact width on the DOM, only if there is no padding or margin assigned to the element. If there are any padding and/or border assigned to it then the actual values for the rendered element will differ and be calculated as follows:

> Actual rendered width = initial width assigned to the box + padding(right and left) + border(right and left)  
>
> Actual rendered height = initail height assigned to the box + padding(top and bottom) + border(top and bottom)

Thus, so as to urge the specified width and height as laid out in the planning for the element that's rendered on the DOM, we frequently recalculate the width and height by subtracting the padding and border, either manually or by using the calc(width-valuex) function, (where valuex is that the sum of the padding and/or border assigned thereto element) from their respective dimensions.

Here the actual width of the element is 300px, but since we assign border and padding to it, we manually recalculate the width as

`my-div{
  width: 350px;
  border: solid 5px #82B366;
  padding: 20px;
}`

width = 300–40(padding-right and padding-left)–10(border-right and border-left) or we can also use the CSSS calc function.

This is not a good practice as it doesn’t make it very obvious when we see that the both the width differ : assigned width is 250px, while the rendered width is 300px. Here it confuses the programmer and it arouses the need for applying the box-sizing property to an element.

We could also have increased values(width and height) when an element is rendered on the DOM if we do not recalculate the width and height of the element as in the above example. The demonstartion that we see below is that the total width rendered on the DOM is 350px( here the recalculation of the width isn’t need to be done)

`my-div{
  width: 300px;
  border: solid 5px #82B366;
  padding: 20px;
}`

In these kinds of situations where we can make use of the CSS3 beautiful property “BOX-SIZING”.

### What is box-sizing?

Basically the box-sizing property tells the browser what the sizing properties (width and height) should include or not include.

The CSS3 Box-sizing property has the following syntax:   

> Box-sizing: content-box|border-box|padding-box|initial|inherit;

By default it takes the value content-box.  

When we give **box-sizing: border box**, the special combination property called property-value is used in an element, which tells the browser to display the width property as the actual rendered width. Modifying the previous code as follows:

`my-div{
  box-sizing: border-box;
  width: 300px;
  border: solid 5px #82B366;
  padding: 20px;
}`

![image](https://user-images.githubusercontent.com/55577276/134493069-39a3ba69-c2d5-41cf-8a31-3e973e6f3490.png)

*Figure 3: Difference in the rendered width by using box-sizing property*

We can also use the universal specifier specifing  box sizing as border box that will apply this to all the elements present in DOM.
Universal box-sizing:  

`*, *:before, *:after{  
  box-sizing: border-box;  
}`

Vendor-prefixes for box-sizing:  
`*{ 
  -webkit-box-sizing: border-box; 
  -moz-box-sizing: border-box;
  box-sizing: border-box; 
}`

**Reference**  

https://developer.mozilla.org/en-US/docs/Web/CSS/box-sizing

*Thank you !*
