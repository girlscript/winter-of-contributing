# Box_Sizing_CSS
Before we get into the details of this amazing CSS3 property, let’s understand what a box model is.

## What is a box model? 

A box model is a rectangular box that wraps around every HTML element. It comprises of the margin, padding, border and content inside the element.
It’s worth mentioning again: Every element on a page is a rectangular box.

![image](https://user-images.githubusercontent.com/55577276/134489895-efbd21f8-1d41-4d92-bdc5-cdd47fc1bb67.png)
*Figure 1*

Let’s understand what each of these properties are:

**Content:** This is the part of the box where the actual content of the box appears. This often has a background or an image.

**Padding:** It is transparent and is used to clear space around the content inside an element.

**Border:** This goes around the padding and content. By default it’s value is zero.

**Margin:** It is transparent and is the space around the box.

The total space occupied by a box on the DOM is the overall space occupied by these four properties put together.

The size of the box in figure 1 is determined as described below: 

> Total width of the box-model = width assigned to the box + padding(right and left) + border(right and left) + margin(right and left)  
> 
> Total height of the box-model= height assigned to the box + padding(top and bottom) + border(top and bottom) + margin(top and bottom) 


### Why do we need to use the box-sizing property?

![image](https://user-images.githubusercontent.com/55577276/134490961-fcef439d-4132-4185-be20-0b8949b8b199.png)

*Figure 2*

To understand Figure 2. better, let’s consider an example:  
An element is assigned a width of 100px or a relative width of 40%, the element will have the exact width on the DOM, only if there is no padding or margin assigned to the element. If it does have a padding and/or border assigned to it then the actual values for the rendered element will be as follows:

> Actual rendered width = width assigned to the box + padding(right and left) + border(right and left)  
>
> Actual rendered height = height assigned to the box + padding(top and bottom) + border(top and bottom)

Thus, in order to get the desired width and height as specified in the design for the element that is rendered on the DOM, we often recalculate the width and height by subtracting the padding and border, either manually or by using the calc(width-valuex) function, (where valuex is the sum of the padding and/or border assigned to that element) from their respective dimensions.

In the snippet below, the actual width of the element is 300px, but since we assign border and padding to it, we manually recalculate the width as

width = 300–40(padding-right and padding-left)–10(border-right and border-left) or use the calc function.
This makes the code less readable because, it doesn’t make it very obvious when we see that the assigned width is 250px, while the rendered width is 300px. Here comes the use case of applying the box-sizing property to an element.
It could be possible that we may have increased values(width and height) when an element is rendered on the DOM if we do not recalculate the width and height of the element as in the above example. In the example below, we see that the total width rendered on the DOM is 350px(recalculation of the width isn’t done)

To overcome situations like these, we can make use of the CSS3 property “BOX-SIZING”.

### What is box-sizing?

The box-sizing property tells the browser what the sizing properties (width and height) should include.

Box-sizing property has the following syntax:   

> Box-sizing: content-box|border-box|padding-box|initial|inherit;

By default it takes the value content-box.  

When box-sizing: border box, property-value combination is used in an element, this tells the browser to render the width property as the actual rendered width. Modifying the previous code as follows:

![image](https://user-images.githubusercontent.com/55577276/134493069-39a3ba69-c2d5-41cf-8a31-3e973e6f3490.png)

*Figure 3: Difference in the rendered width by using box-sizing property*

Here, the padding or border will not be applied to the rendered width. Instead, this property-value pair will automatically subtract the space available within the content-area(refer figure 2) of the element.
Below is a codepen demonstrating an example of an element with and without the box-sizing property.

To have a more natural and intuitive approach for a layout, most web designers and developers commend the usage of box-sizing property.
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


Use these vendor prefixes to support box-sizing on different browsers and this property is IE8+ enabled.
