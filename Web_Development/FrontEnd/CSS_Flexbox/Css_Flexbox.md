#  :heart: *Css Flexbox Layout* :heart:
This Complete guide will help you  to understand about CSS flexbox layout ,
It is very important to understand these particular property of CSS in very detail. It makes our layout more responsive. These particular properties applies on parent element ***(the flex container)*** as well as on  child element ***(the flex items)*** .

## *So let's start learning with fun* :handshake:
This is a container or we can say parent element on which we are gonna apply the CSS flexbox property.
![Photo  taken from css tricks](https://css-tricks.com/wp-content/uploads/2018/10/01-container.svg)
![enter image description here](https://css-tricks.com/wp-content/uploads/2018/10/02-items.svg)
```bash
	.container  {  
		display: flex;  
	}
```
Now This will make the container a flex box element or   **(the flex container)** and now  we are eligible to apply flex properties on this container. One thing we need to understand is that by default the flow of elements in  HTML is line by line for all block elements , by applying this display:flex property on the container  class we are  making it's inner elements  to display in a single line.

# *flex-direction* 👈
Once we have applied display:flex on the main parent container then we are eligible to apply more flex properties on the same container. So we are gonna use  the flex-direction property on that same container class so that we can change the direction of flow of it's inner elements according to our need , which is by default inline.
#### *values of  flex-direction property :* :eyes:
- row (default value) :
   : this will make the items of container inline , it's default value.[Left to Right]
- row-reverse  :
  : this will make the items of container inline , it's default value.[Right to left]
- column :
	 : same as `row ,` but top to bottom
- column-reverse :
   :  same as `row-reverse` but bottom to top
   
   
#  *flex-wrap* 👈

By default, flex items will all try to fit onto one line. You can change that and allow the items to wrap as needed with this property.
#### *values of  flex-wrap property :* :eyes:
- nowrap (default): 
  : all flex items will be on one line[]
        
- wrap:
  :  flex items will wrap onto multiple lines, from top to bottom
	 same as `row ,` but top to bottom
	 ![Image form css tricks ](https://css-tricks.com/wp-content/uploads/2018/10/flex-wrap.svg)
	 ![enter image description here](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRSVK4DzyOJZowJ3_mg_c8Qm16KZG06hc8vFA&usqp=CAU)
- wrap-reverse :
   :  flex items will wrap onto multiple lines from bottom to top.
   ![enter image description here](https://www.tutorialspoint.com/flexbox/images/wrap_reverse.jpg)

#  *justify-content* 👈
This defines the alignment along the main axis. It helps distribute extra free space leftover when either all the flex items on a line are inflexible, or are flexible but have reached their maximum size. It also exerts some control over the alignment of items when they overflow the line..

#### *values of justify-content property :* :eyes:
![enter image description here](https://css-tricks.com/wp-content/uploads/2018/10/justify-content.svg)
#   *align-items* 👈
This defines the default behavior for how flex items are laid out along the **cross axis** on the current line. Think of it as the `justify-content` version for the cross-axis (perpendicular to the main-axis).
![enter image description here](https://css-tricks.com/wp-content/uploads/2018/10/align-items.svg)

   # *align-content* 👈
This aligns a flex container’s lines within when there is extra space in the cross-axis, similar to how `justify-content` aligns individual items within the main-axis.
![enter image description here](https://css-tricks.com/wp-content/uploads/2018/10/align-content.svg)
   # *order* 👈
   This property **applies on child elements** that is on  **(flex items)**.
   we can set order of each and every in the manner we want to display them.
   by default the order of each element is 1. The value of this property can also be negative.
   ```
	.container  {  
		display: flex;  
	}
```
   ```
	.item  {  
		order: 5;  
	}
	
```
![enter image description here](https://css-tricks.com/wp-content/uploads/2018/10/order.svg)
   # *flex-grow* 👈
 This property **applies on child elements** .This defines the ability for a flex item to grow if necessary. It accepts a unitless value that serves as a proportion. It dictates what amount of the available space inside the flex container the item should take up.

If all items have  `flex-grow`  set to 1, the remaining space in the container will be distributed equally to all children. If one of the children has a value of 2, the remaining space would take up twice as much space as the others (or it will try to, at least).be negative.
   ```
	.container  {  
		display: flex;  
	}
```
   ```
	.item  {  
		flex-grow: 5;  
	}
	
```
![enter image description here](https://css-tricks.com/wp-content/uploads/2018/10/flex-grow.svg)
------------------------------------------------------------
# Refrence : [csstricks](https://css-tricks.com/snippets/css/a-guide-to-flexbox/#order)

            
